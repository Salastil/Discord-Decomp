package org.webrtc;

import android.media.ImageReader;
import android.media.MediaCodec;
import android.media.MediaFormat;
import android.os.SystemClock;
import android.view.Surface;
import com.discord.DiscordDecoderStreamManager;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.concurrent.BlockingDeque;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.TimeUnit;
import java.util.function.Consumer;
import org.webrtc.EglBase;
import org.webrtc.EncodedImage;
import org.webrtc.ThreadUtils;
import org.webrtc.VideoDecoder;
import org.webrtc.VideoFrame;

/* loaded from: classes4.dex */
public class AndroidVideoDecoder implements VideoDecoder, VideoSink {
    private static final int DEQUEUE_INPUT_TIMEOUT_US = 500000;
    private static final int DEQUEUE_OUTPUT_BUFFER_TIMEOUT_US = 100000;
    private static final int MEDIA_CODEC_RELEASE_TIMEOUT_MS = 5000;
    private static final int PLACEHOLDER_MAX_IMAGES = 2;
    private static final int PLACEHOLDER_SURFACE_SIZE_PX = 16;
    private static final String TAG = "AndroidVideoDecoder";
    private VideoDecoder.Callback callback;
    private volatile MediaCodecWrapper codec;
    private final String codecName;
    private final VideoCodecMimeType codecType;
    private int colorFormat;
    private ThreadUtils.ThreadChecker decoderThreadChecker;
    private Consumer<Surface> externalSurfaceConsumerListener;
    private final BlockingDeque<FrameInfo> frameInfos;
    private boolean hasDecodedFirstFrame;
    private boolean hasExternalConsumer;
    private boolean hasRealConsumerSurface;
    private int height;
    private boolean keyFrameRequired;
    private final MediaCodecWrapperFactory mediaCodecWrapperFactory;
    private volatile Thread outputThread;
    private ThreadUtils.ThreadChecker outputThreadChecker;
    private Surface pendingOutputSurface;
    private ImageReader placeholderImageReader;
    private Surface placeholderSurface;
    private DecodedTextureMetadata renderedTextureMetadata;
    private volatile boolean running;
    private final EglBase.Context sharedContext;
    private volatile Exception shutdownException;
    private int sliceHeight;
    private String streamId;
    private int stride;
    private volatile Surface surface;
    private SurfaceTextureHelper surfaceTextureHelper;
    private int width;
    private final Object dimensionLock = new Object();
    private final Object renderedTextureMetadataLock = new Object();

    public static class DecodedTextureMetadata {
        final Integer decodeTimeMs;
        final long presentationTimestampUs;

        public DecodedTextureMetadata(long j, Integer num) {
            this.presentationTimestampUs = j;
            this.decodeTimeMs = num;
        }
    }

    public static class FrameInfo {
        final long decodeStartTimeMs;
        final int rotation;

        public FrameInfo(long j, int i5) {
            this.decodeStartTimeMs = j;
            this.rotation = i5;
        }
    }

    public AndroidVideoDecoder(MediaCodecWrapperFactory mediaCodecWrapperFactory, String str, VideoCodecMimeType videoCodecMimeType, int i5, EglBase.Context context) {
        if (!isSupportedColorFormat(i5)) {
            throw new IllegalArgumentException(k0.d.i(i5, "Unsupported color format: "));
        }
        this.mediaCodecWrapperFactory = mediaCodecWrapperFactory;
        this.codecName = str;
        this.codecType = videoCodecMimeType;
        this.colorFormat = i5;
        this.sharedContext = context;
        this.frameInfos = new LinkedBlockingDeque();
    }

    private VideoFrame.Buffer copyI420Buffer(ByteBuffer byteBuffer, int i5, int i6, int i10, int i11) {
        if (i5 % 2 != 0) {
            throw new AssertionError(k0.d.i(i5, "Stride is not divisible by two: "));
        }
        int i12 = (i10 + 1) / 2;
        int i13 = i6 % 2;
        int i14 = i13 == 0 ? (i11 + 1) / 2 : i11 / 2;
        int i15 = i5 / 2;
        int i16 = i5 * i6;
        int i17 = i15 * i14;
        int i18 = ((i15 * i6) / 2) + i16;
        int i19 = i18 + i17;
        VideoFrame.I420Buffer allocateI420Buffer = allocateI420Buffer(i10, i11);
        copyPlane(byteBuffer.slice(), i5, allocateI420Buffer.getDataY(), allocateI420Buffer.getStrideY(), i10, i11);
        copyPlane(byteBuffer.slice(), i15, allocateI420Buffer.getDataU(), allocateI420Buffer.getStrideU(), i12, i14);
        if (i13 == 1) {
            ByteBuffer dataU = allocateI420Buffer.getDataU();
            dataU.put(byteBuffer);
        }
        copyPlane(byteBuffer.slice(), i15, allocateI420Buffer.getDataV(), allocateI420Buffer.getStrideV(), i12, i14);
        if (i13 == 1) {
            ByteBuffer dataV = allocateI420Buffer.getDataV();
            dataV.put(byteBuffer);
        }
        return allocateI420Buffer;
    }

    private VideoFrame.Buffer copyNV12ToI420Buffer(ByteBuffer byteBuffer, int i5, int i6, int i10, int i11) {
        return new NV12Buffer(i10, i11, i5, i6, byteBuffer, null).toI420();
    }

    private Thread createOutputThread() {
        final MediaCodecWrapper mediaCodecWrapper = this.codec;
        return new Thread(this, "AndroidVideoDecoder.outputThread") { // from class: org.webrtc.AndroidVideoDecoder.1
            final /* synthetic */ AndroidVideoDecoder this$0;

            {
                this.this$0 = this;
            }

            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                this.this$0.outputThreadChecker = new ThreadUtils.ThreadChecker();
                while (this.this$0.running) {
                    try {
                        try {
                            this.this$0.deliverDecodedFrame();
                        } catch (Exception e9) {
                            Logging.e(AndroidVideoDecoder.TAG, "Output thread stopped unexpectedly", e9);
                            this.this$0.reportShutdownException(e9);
                        }
                    } finally {
                        this.this$0.releaseCodecOnOutputThread(mediaCodecWrapper);
                    }
                }
            }
        };
    }

    private Surface createPlaceholderSurfaceOrNull() {
        releasePlaceholderImageReader();
        try {
            ImageReader newInstance = ImageReader.newInstance(16, 16, 34, 2);
            Surface surface = newInstance.getSurface();
            synchronized (this.renderedTextureMetadataLock) {
                this.placeholderImageReader = newInstance;
                this.placeholderSurface = surface;
            }
            return surface;
        } catch (Throwable th2) {
            Logging.e(TAG, "createPlaceholderSurfaceOrNull failed streamId=" + this.streamId, th2);
            return null;
        }
    }

    private void deliverByteFrame(int i5, MediaCodec.BufferInfo bufferInfo, int i6, Integer num) {
        int i10;
        int i11;
        int i12;
        int i13;
        AndroidVideoDecoder androidVideoDecoder;
        VideoFrame.Buffer copyNV12ToI420Buffer;
        synchronized (this.dimensionLock) {
            try {
                i10 = this.width;
                i11 = this.height;
                i12 = this.stride;
                i13 = this.sliceHeight;
            } catch (Throwable th2) {
                th = th2;
                while (true) {
                    try {
                        throw th;
                    } catch (Throwable th3) {
                        th = th3;
                    }
                }
            }
        }
        int i14 = bufferInfo.size;
        if (i14 < ((i10 * i11) * 3) / 2) {
            Logging.e(TAG, "Insufficient output buffer size: " + i14);
            return;
        }
        if (i14 < ((i12 * i11) * 3) / 2 && i13 == i11 && i12 > i10) {
            i12 = (i14 * 2) / (i11 * 3);
        }
        int i15 = i12;
        ByteBuffer outputBuffer = this.codec.getOutputBuffer(i5);
        ByteBuffer slice = outputBuffer.slice();
        if (this.colorFormat == 19) {
            androidVideoDecoder = this;
            copyNV12ToI420Buffer = androidVideoDecoder.copyI420Buffer(slice, i15, i13, i10, i11);
        } else {
            androidVideoDecoder = this;
            copyNV12ToI420Buffer = androidVideoDecoder.copyNV12ToI420Buffer(slice, i15, i13, i10, i11);
        }
        androidVideoDecoder.codec.releaseOutputBuffer(i5, false);
        VideoFrame videoFrame = new VideoFrame(copyNV12ToI420Buffer, i6, bufferInfo.presentationTimeUs * 1000);
        androidVideoDecoder.callback.onDecodedFrame(videoFrame, num, null);
        videoFrame.release();
    }

    private void deliverTextureFrame(int i5, MediaCodec.BufferInfo bufferInfo, int i6, Integer num) {
        int i10;
        int i11;
        synchronized (this.dimensionLock) {
            i10 = this.width;
            i11 = this.height;
        }
        synchronized (this.renderedTextureMetadataLock) {
            try {
                boolean z5 = true;
                if (!this.hasExternalConsumer) {
                    if (this.renderedTextureMetadata != null) {
                        this.codec.releaseOutputBuffer(i5, false);
                        return;
                    }
                    if (i10 > 0 && i11 > 0) {
                        this.surfaceTextureHelper.setTextureSize(i10, i11);
                        this.surfaceTextureHelper.setFrameRotation(i6);
                        this.renderedTextureMetadata = new DecodedTextureMetadata(bufferInfo.presentationTimeUs, num);
                        this.codec.releaseOutputBuffer(i5, true);
                        return;
                    }
                    this.codec.releaseOutputBuffer(i5, false);
                    return;
                }
                Surface surface = this.surface;
                if (!this.hasRealConsumerSurface || surface == null || !surface.isValid()) {
                    z5 = false;
                }
                this.codec.releaseOutputBuffer(i5, z5);
                VideoFrame videoFrame = new VideoFrame(new MockBuffer(i10, i11), i6, bufferInfo.presentationTimeUs * 1000);
                VideoDecoder.Callback callback = this.callback;
                if (callback != null) {
                    callback.onDecodedFrame(videoFrame, num, null);
                }
                videoFrame.release();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00a8 A[Catch: all -> 0x0098, TryCatch #3 {all -> 0x0098, blocks: (B:42:0x0092, B:27:0x009d, B:30:0x00a2, B:32:0x00a8, B:33:0x00aa), top: B:41:0x0092 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private VideoCodecStatus initDecodeInternal(int i5, int i6) {
        Surface surface;
        boolean z5;
        this.decoderThreadChecker.checkIsOnValidThread();
        String str = this.codecName;
        String valueOf = String.valueOf(this.codecType);
        int i10 = this.colorFormat;
        StringBuilder t5 = a3.e.t("initDecodeInternal name: ", str, " type: ", valueOf, " width: ");
        a3.e.y(t5, i5, " height: ", i6, " color format: ");
        t5.append(i10);
        Logging.d(TAG, t5.toString());
        if (this.outputThread != null) {
            Logging.e(TAG, "initDecodeInternal called while the codec is already running");
            return VideoCodecStatus.FALLBACK_SOFTWARE;
        }
        this.width = i5;
        this.height = i6;
        this.stride = i5;
        this.sliceHeight = i6;
        boolean z6 = false;
        this.hasDecodedFirstFrame = false;
        this.keyFrameRequired = true;
        this.shutdownException = null;
        boolean isSurfaceDirectPathEnabled = DiscordDecoderStreamManager.isSurfaceDirectPathEnabled();
        try {
            this.codec = this.mediaCodecWrapperFactory.createByCodecName(this.codecName);
            if (isSurfaceDirectPathEnabled) {
                synchronized (this.renderedTextureMetadataLock) {
                    surface = this.surface;
                }
            } else {
                surface = this.surface;
            }
            try {
                MediaFormat createVideoFormat = MediaFormat.createVideoFormat(this.codecType.mimeType(), i5, i6);
                if (this.sharedContext == null) {
                    createVideoFormat.setInteger("color-format", this.colorFormat);
                }
                this.codec.configure(createVideoFormat, surface, null, 0);
                this.codec.start();
                if (isSurfaceDirectPathEnabled) {
                    synchronized (this.renderedTextureMetadataLock) {
                        if (surface != null) {
                            try {
                                if (surface != this.placeholderSurface) {
                                    z5 = true;
                                    if (z5 && this.surface == surface) {
                                        z6 = true;
                                    }
                                    this.hasRealConsumerSurface = z6;
                                    if (this.pendingOutputSurface == surface) {
                                        this.pendingOutputSurface = null;
                                    }
                                }
                            } finally {
                            }
                        }
                        z5 = false;
                        if (z5) {
                            z6 = true;
                        }
                        this.hasRealConsumerSurface = z6;
                        if (this.pendingOutputSurface == surface) {
                        }
                    }
                    if (z5) {
                        releasePlaceholderImageReader();
                    }
                }
                this.running = true;
                this.outputThread = createOutputThread();
                this.outputThread.start();
                Logging.d(TAG, "initDecodeInternal done");
                return VideoCodecStatus.OK;
            } catch (IllegalArgumentException e9) {
                e = e9;
                Logging.e(TAG, "initDecode failed", e);
                release();
                return VideoCodecStatus.FALLBACK_SOFTWARE;
            } catch (IllegalStateException e10) {
                e = e10;
                Logging.e(TAG, "initDecode failed", e);
                release();
                return VideoCodecStatus.FALLBACK_SOFTWARE;
            }
        } catch (IOException | IllegalArgumentException | IllegalStateException unused) {
            Logging.e(TAG, "Cannot create media decoder " + this.codecName);
            if (isSurfaceDirectPathEnabled) {
                release();
            }
            return VideoCodecStatus.FALLBACK_SOFTWARE;
        }
    }

    private boolean isSupportedColorFormat(int i5) {
        for (int i6 : MediaCodecUtils.DECODER_COLOR_FORMATS) {
            if (i6 == i5) {
                return true;
            }
        }
        return false;
    }

    private void maybeApplyPendingOutputSurface() {
        Surface surface;
        if (DiscordDecoderStreamManager.isSurfaceDirectPathEnabled()) {
            synchronized (this.renderedTextureMetadataLock) {
                surface = this.pendingOutputSurface;
                this.pendingOutputSurface = null;
            }
            if (surface == null || this.codec == null) {
                return;
            }
            if (!surface.isValid()) {
                Logging.w(TAG, "maybeApplyPendingOutputSurface: pending Surface invalid, dropping. streamId=" + this.streamId);
                return;
            }
            try {
                this.codec.setOutputSurface(surface);
                synchronized (this.renderedTextureMetadataLock) {
                    this.hasRealConsumerSurface = this.surface == surface;
                }
                releasePlaceholderImageReader();
            } catch (IllegalArgumentException | IllegalStateException e9) {
                Logging.e(TAG, "maybeApplyPendingOutputSurface setOutputSurface failed streamId=" + this.streamId, e9);
                synchronized (this.renderedTextureMetadataLock) {
                    try {
                        this.hasRealConsumerSurface = false;
                        if (this.pendingOutputSurface == null) {
                            this.pendingOutputSurface = surface;
                        }
                    } finally {
                    }
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00fc A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void reformat(MediaFormat mediaFormat) {
        int integer;
        int integer2;
        this.outputThreadChecker.checkIsOnValidThread();
        Logging.d(TAG, "Decoder format changed: ".concat(String.valueOf(mediaFormat)));
        if (mediaFormat.containsKey("crop-left") && mediaFormat.containsKey("crop-right") && mediaFormat.containsKey("crop-bottom") && mediaFormat.containsKey("crop-top")) {
            integer = (mediaFormat.getInteger("crop-right") + 1) - mediaFormat.getInteger("crop-left");
            integer2 = (mediaFormat.getInteger("crop-bottom") + 1) - mediaFormat.getInteger("crop-top");
        } else {
            integer = mediaFormat.getInteger("width");
            integer2 = mediaFormat.getInteger("height");
        }
        synchronized (this.dimensionLock) {
            try {
                int i5 = this.width;
                if (integer == i5) {
                    if (integer2 != this.height) {
                    }
                    if (this.surface == null && mediaFormat.containsKey("color-format")) {
                        int integer3 = mediaFormat.getInteger("color-format");
                        this.colorFormat = integer3;
                        Logging.d(TAG, "Color: 0x" + Integer.toHexString(integer3));
                        if (!isSupportedColorFormat(this.colorFormat)) {
                            stopOnOutputThread(new IllegalStateException(k0.d.i(this.colorFormat, "Unsupported color format: ")));
                            return;
                        }
                    }
                    synchronized (this.dimensionLock) {
                        try {
                            if (mediaFormat.containsKey("stride")) {
                                this.stride = mediaFormat.getInteger("stride");
                            }
                            if (mediaFormat.containsKey("slice-height")) {
                                this.sliceHeight = mediaFormat.getInteger("slice-height");
                            }
                            Logging.d(TAG, "Frame stride and slice height: " + this.stride + " x " + this.sliceHeight);
                            this.stride = Math.max(this.width, this.stride);
                            this.sliceHeight = Math.max(this.height, this.sliceHeight);
                        } finally {
                        }
                    }
                    return;
                }
                if (this.hasDecodedFirstFrame) {
                    stopOnOutputThread(new RuntimeException("Unexpected size change. Configured " + this.width + "*" + this.height + ". New " + integer + "*" + integer2));
                    return;
                }
                if (integer > 0 && integer2 > 0) {
                    this.width = integer;
                    this.height = integer2;
                    if (this.surface == null) {
                        int integer32 = mediaFormat.getInteger("color-format");
                        this.colorFormat = integer32;
                        Logging.d(TAG, "Color: 0x" + Integer.toHexString(integer32));
                        if (!isSupportedColorFormat(this.colorFormat)) {
                        }
                    }
                    synchronized (this.dimensionLock) {
                    }
                }
                Logging.w(TAG, "Unexpected format dimensions. Configured " + i5 + "*" + this.height + ". New " + integer + "*" + integer2 + ". Skip it");
            } finally {
            }
        }
    }

    private VideoCodecStatus reinitDecode(int i5, int i6) {
        this.decoderThreadChecker.checkIsOnValidThread();
        VideoCodecStatus releaseInternal = releaseInternal();
        return releaseInternal != VideoCodecStatus.OK ? releaseInternal : initDecodeInternal(i5, i6);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void releaseCodecOnOutputThread(MediaCodecWrapper mediaCodecWrapper) {
        Logging.d(TAG, "Releasing MediaCodec on output thread");
        try {
            mediaCodecWrapper.stop();
        } catch (Exception e9) {
            Logging.e(TAG, "Media decoder stop failed", e9);
        }
        try {
            mediaCodecWrapper.release();
        } catch (Exception e10) {
            Logging.e(TAG, "Media decoder release failed", e10);
            reportShutdownException(e10);
        }
        Logging.d(TAG, "Release on output thread done");
    }

    /* JADX WARN: Multi-variable type inference failed */
    private VideoCodecStatus releaseInternal() {
        if (this.outputThread == null) {
            Logging.d(TAG, "release: Decoder is not running.");
            MediaCodecWrapper mediaCodecWrapper = this.codec;
            this.codec = null;
            if (mediaCodecWrapper != null) {
                try {
                    mediaCodecWrapper.release();
                } catch (Exception e9) {
                    Logging.e(TAG, "Media decoder release failed", e9);
                }
            }
            return VideoCodecStatus.OK;
        }
        try {
            this.running = false;
            if (!ThreadUtils.joinUninterruptibly(this.outputThread, 5000L)) {
                Logging.e(TAG, "Media decoder release timeout", new RuntimeException());
                return VideoCodecStatus.TIMEOUT;
            }
            if (this.shutdownException != null) {
                Logging.e(TAG, "Media decoder release error", new RuntimeException(this.shutdownException));
                this.shutdownException = null;
                return VideoCodecStatus.ERROR;
            }
            this.codec = null;
            this.outputThread = null;
            this.frameInfos.clear();
            return VideoCodecStatus.OK;
        } finally {
            this.codec = null;
            this.outputThread = null;
            this.frameInfos.clear();
        }
    }

    private void releasePlaceholderImageReader() {
        ImageReader imageReader;
        synchronized (this.renderedTextureMetadataLock) {
            imageReader = this.placeholderImageReader;
            this.placeholderImageReader = null;
            this.placeholderSurface = null;
        }
        if (imageReader != null) {
            imageReader.close();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void reportShutdownException(Exception exc) {
        if (Thread.currentThread() == this.outputThread) {
            this.shutdownException = exc;
        }
    }

    private void stopOnOutputThread(Exception exc) {
        this.outputThreadChecker.checkIsOnValidThread();
        this.running = false;
        this.shutdownException = exc;
    }

    public VideoFrame.I420Buffer allocateI420Buffer(int i5, int i6) {
        return JavaI420Buffer.allocate(i5, i6);
    }

    public void copyPlane(ByteBuffer byteBuffer, int i5, ByteBuffer byteBuffer2, int i6, int i10, int i11) {
        YuvHelper.copyPlane(byteBuffer, i5, byteBuffer2, i6, i10, i11);
    }

    public SurfaceTextureHelper createSurfaceTextureHelper() {
        return SurfaceTextureHelper.create("decoder-texture-thread", this.sharedContext);
    }

    @Override // org.webrtc.VideoDecoder
    public VideoCodecStatus decode(EncodedImage encodedImage, VideoDecoder.DecodeInfo decodeInfo) {
        int i5;
        int i6;
        VideoCodecStatus reinitDecode;
        this.decoderThreadChecker.checkIsOnValidThread();
        if (this.codec == null || this.callback == null) {
            boolean z5 = this.codec != null;
            Logging.d(TAG, "decode uninitalized, codec: " + z5 + ", callback: " + String.valueOf(this.callback));
            return VideoCodecStatus.UNINITIALIZED;
        }
        ByteBuffer byteBuffer = encodedImage.buffer;
        if (byteBuffer == null) {
            Logging.e(TAG, "decode() - no input data");
            return VideoCodecStatus.ERR_PARAMETER;
        }
        int remaining = byteBuffer.remaining();
        if (remaining == 0) {
            Logging.e(TAG, "decode() - input buffer empty");
            return VideoCodecStatus.ERR_PARAMETER;
        }
        synchronized (this.dimensionLock) {
            i5 = this.width;
            i6 = this.height;
        }
        int i10 = encodedImage.encodedWidth;
        int i11 = encodedImage.encodedHeight;
        if (i10 * i11 > 0 && ((i10 != i5 || i11 != i6) && (reinitDecode = reinitDecode(i10, i11)) != VideoCodecStatus.OK)) {
            return reinitDecode;
        }
        if (this.keyFrameRequired && encodedImage.frameType != EncodedImage.FrameType.VideoFrameKey) {
            Logging.e(TAG, "decode() - key frame required first");
            return VideoCodecStatus.NO_OUTPUT;
        }
        try {
            int dequeueInputBuffer = this.codec.dequeueInputBuffer(500000L);
            if (dequeueInputBuffer < 0) {
                Logging.e(TAG, "decode() - no HW buffers available; decoder falling behind");
                return VideoCodecStatus.ERROR;
            }
            try {
                ByteBuffer inputBuffer = this.codec.getInputBuffer(dequeueInputBuffer);
                if (inputBuffer.capacity() < remaining) {
                    Logging.e(TAG, "decode() - HW buffer too small");
                    return VideoCodecStatus.ERROR;
                }
                inputBuffer.put(encodedImage.buffer);
                this.frameInfos.offer(new FrameInfo(SystemClock.elapsedRealtime(), encodedImage.rotation));
                try {
                    this.codec.queueInputBuffer(dequeueInputBuffer, 0, remaining, TimeUnit.NANOSECONDS.toMicros(encodedImage.captureTimeNs), 0);
                    if (this.keyFrameRequired) {
                        this.keyFrameRequired = false;
                    }
                    return VideoCodecStatus.OK;
                } catch (IllegalStateException e9) {
                    Logging.e(TAG, "queueInputBuffer failed", e9);
                    this.frameInfos.pollLast();
                    return VideoCodecStatus.ERROR;
                }
            } catch (IllegalStateException e10) {
                Logging.e(TAG, "getInputBuffer with index=" + dequeueInputBuffer + " failed", e10);
                return VideoCodecStatus.ERROR;
            }
        } catch (IllegalStateException e11) {
            Logging.e(TAG, "dequeueInputBuffer failed", e11);
            return VideoCodecStatus.ERROR;
        }
    }

    public void deliverDecodedFrame() {
        Integer num;
        int i5;
        this.outputThreadChecker.checkIsOnValidThread();
        maybeApplyPendingOutputSurface();
        try {
            MediaCodec.BufferInfo bufferInfo = new MediaCodec.BufferInfo();
            int dequeueOutputBuffer = this.codec.dequeueOutputBuffer(bufferInfo, 100000L);
            if (dequeueOutputBuffer == -2) {
                reformat(this.codec.getOutputFormat());
                return;
            }
            if (dequeueOutputBuffer < 0) {
                Logging.v(TAG, "dequeueOutputBuffer returned " + dequeueOutputBuffer);
                return;
            }
            FrameInfo poll = this.frameInfos.poll();
            if (poll != null) {
                num = Integer.valueOf((int) (SystemClock.elapsedRealtime() - poll.decodeStartTimeMs));
                i5 = poll.rotation;
            } else {
                num = null;
                i5 = 0;
            }
            this.hasDecodedFirstFrame = true;
            if (this.surface != null) {
                deliverTextureFrame(dequeueOutputBuffer, bufferInfo, i5, num);
            } else {
                deliverByteFrame(dequeueOutputBuffer, bufferInfo, i5, num);
            }
        } catch (IllegalStateException e9) {
            Logging.e(TAG, "deliverDecodedFrame failed", e9);
        }
    }

    @Override // org.webrtc.VideoDecoder
    public String getImplementationName() {
        return this.codecName;
    }

    @Override // org.webrtc.VideoDecoder
    public VideoCodecStatus initDecode(VideoDecoder.Settings settings, VideoDecoder.Callback callback) {
        String str;
        this.decoderThreadChecker = new ThreadUtils.ThreadChecker();
        this.callback = callback;
        this.hasExternalConsumer = false;
        this.hasRealConsumerSurface = false;
        if (DiscordDecoderStreamManager.isSurfaceDirectPathEnabled() && (str = this.streamId) != null && !str.isEmpty()) {
            Surface streamConsumer = DiscordDecoderStreamManager.getStreamConsumer(this.streamId);
            if (streamConsumer != null && streamConsumer.isValid()) {
                this.surface = streamConsumer;
                this.hasExternalConsumer = true;
                this.hasRealConsumerSurface = true;
                return initDecodeInternal(settings.width, settings.height);
            }
            Surface createPlaceholderSurfaceOrNull = createPlaceholderSurfaceOrNull();
            if (createPlaceholderSurfaceOrNull != null) {
                this.surface = createPlaceholderSurfaceOrNull;
                this.hasExternalConsumer = true;
                this.hasRealConsumerSurface = false;
                Consumer<Surface> consumer = new Consumer() { // from class: org.webrtc.a
                    @Override // java.util.function.Consumer
                    public final void accept(Object obj) {
                        AndroidVideoDecoder.this.lambda$initDecode$0((Surface) obj);
                    }
                };
                this.externalSurfaceConsumerListener = consumer;
                DiscordDecoderStreamManager.addOnConsumerReadyListener(this.streamId, consumer);
                return initDecodeInternal(settings.width, settings.height);
            }
        }
        if (this.sharedContext != null) {
            try {
                this.surfaceTextureHelper = createSurfaceTextureHelper();
                this.surface = new Surface(this.surfaceTextureHelper.getSurfaceTexture());
                this.surfaceTextureHelper.startListening(this);
            } catch (Throwable th2) {
                Logging.e(TAG, "Error creating SurfaceTextureHelper", th2);
                if (this.surface != null) {
                    this.surface.release();
                    this.surface = null;
                }
                SurfaceTextureHelper surfaceTextureHelper = this.surfaceTextureHelper;
                if (surfaceTextureHelper != null) {
                    surfaceTextureHelper.dispose();
                    this.surfaceTextureHelper = null;
                }
                return VideoCodecStatus.FALLBACK_SOFTWARE;
            }
        }
        return initDecodeInternal(settings.width, settings.height);
    }

    @Override // org.webrtc.VideoSink
    public void onFrame(VideoFrame videoFrame) {
        long j;
        Integer num;
        synchronized (this.renderedTextureMetadataLock) {
            DecodedTextureMetadata decodedTextureMetadata = this.renderedTextureMetadata;
            if (decodedTextureMetadata == null) {
                throw new IllegalStateException("Rendered texture metadata was null in onTextureFrameAvailable.");
            }
            j = decodedTextureMetadata.presentationTimestampUs * 1000;
            num = decodedTextureMetadata.decodeTimeMs;
            this.renderedTextureMetadata = null;
        }
        this.callback.onDecodedFrame(new VideoFrame(videoFrame.getBuffer(), videoFrame.getRotation(), j), num, null);
    }

    @Override // org.webrtc.VideoDecoder
    public VideoCodecStatus release() {
        boolean z5;
        String str;
        Consumer<Surface> consumer;
        Logging.d(TAG, "release");
        VideoCodecStatus releaseInternal = releaseInternal();
        releasePlaceholderImageReader();
        if (DiscordDecoderStreamManager.isSurfaceDirectPathEnabled() && (str = this.streamId) != null && !str.isEmpty() && (consumer = this.externalSurfaceConsumerListener) != null) {
            DiscordDecoderStreamManager.removeOnConsumerReadyListener(this.streamId, consumer);
            this.externalSurfaceConsumerListener = null;
        }
        if (this.surface != null) {
            synchronized (this.renderedTextureMetadataLock) {
                z5 = this.hasExternalConsumer;
                this.hasExternalConsumer = false;
            }
            if (z5) {
                this.surface = null;
                SurfaceTextureHelper surfaceTextureHelper = this.surfaceTextureHelper;
                if (surfaceTextureHelper != null) {
                    surfaceTextureHelper.stopListening();
                    this.surfaceTextureHelper.dispose();
                    this.surfaceTextureHelper = null;
                }
            } else {
                releaseSurface();
                this.surface = null;
                this.surfaceTextureHelper.stopListening();
                this.surfaceTextureHelper.dispose();
                this.surfaceTextureHelper = null;
            }
        }
        synchronized (this.renderedTextureMetadataLock) {
            this.surface = null;
            this.pendingOutputSurface = null;
            this.hasRealConsumerSurface = false;
            this.renderedTextureMetadata = null;
        }
        this.callback = null;
        return releaseInternal;
    }

    public void releaseSurface() {
        this.surface.release();
    }

    @Override // org.webrtc.VideoDecoder
    @CalledByNative
    public void setStreamId(String str) {
        this.streamId = str;
        if (!DiscordDecoderStreamManager.isSurfaceDirectPathEnabled() || str == null || str.isEmpty()) {
            return;
        }
        DiscordDecoderStreamManager.registerStreamProducer(str, this);
    }

    /* renamed from: tryUpdateSurface, reason: merged with bridge method [inline-methods] */
    public void lambda$initDecode$0(Surface surface) {
        synchronized (this.renderedTextureMetadataLock) {
            this.hasExternalConsumer = true;
            this.surface = surface;
            this.pendingOutputSurface = surface;
            this.hasRealConsumerSurface = false;
        }
    }
}
