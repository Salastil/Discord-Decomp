package io.sentry.android.replay.video;

import android.annotation.TargetApi;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.media.MediaCodec;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Build;
import android.util.Range;
import android.view.Surface;
import com.facebook.react.uimanager.ViewProps;
import fo.l;
import fo.m;
import io.sentry.SentryLevel;
import io.sentry.android.replay.util.SystemProperties;
import io.sentry.v5;
import java.nio.ByteBuffer;
import k0.d;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000`\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0004\b\u0001\u0018\u00002\u00020\u0001B)\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\u0010\b\u0002\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u0006¢\u0006\u0004\b\t\u0010\nJ\u0017\u0010\r\u001a\u00020\u00072\u0006\u0010\f\u001a\u00020\u000bH\u0002¢\u0006\u0004\b\r\u0010\u000eJ\r\u0010\u000f\u001a\u00020\u0007¢\u0006\u0004\b\u000f\u0010\u0010J\u0015\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0012\u001a\u00020\u0011¢\u0006\u0004\b\u0013\u0010\u0014J\r\u0010\u0015\u001a\u00020\u0007¢\u0006\u0004\b\u0015\u0010\u0010R\u0017\u0010\u0003\u001a\u00020\u00028\u0006¢\u0006\f\n\u0004\b\u0003\u0010\u0016\u001a\u0004\b\u0017\u0010\u0018R\u0017\u0010\u0005\u001a\u00020\u00048\u0006¢\u0006\f\n\u0004\b\u0005\u0010\u0019\u001a\u0004\b\u001a\u0010\u001bR\u001f\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u00068\u0006¢\u0006\f\n\u0004\b\b\u0010\u001c\u001a\u0004\b\u001d\u0010\u001eR\u001b\u0010#\u001a\u00020\u000b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u001f\u0010 \u001a\u0004\b!\u0010\"R\u001a\u0010%\u001a\u00020$8\u0000X\u0080\u0004¢\u0006\f\n\u0004\b%\u0010&\u001a\u0004\b'\u0010(R\u001b\u0010-\u001a\u00020)8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b*\u0010 \u001a\u0004\b+\u0010,R\u0014\u0010/\u001a\u00020.8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b/\u00100R\u0014\u00102\u001a\u0002018\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b2\u00103R\u0018\u00105\u001a\u0004\u0018\u0001048\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b5\u00106R\u0011\u0010:\u001a\u0002078F¢\u0006\u0006\u001a\u0004\b8\u00109¨\u0006;"}, d2 = {"Lio/sentry/android/replay/video/SimpleVideoEncoder;", "", "Lio/sentry/v5;", "options", "Lio/sentry/android/replay/video/MuxerConfig;", "muxerConfig", "Lkotlin/Function0;", "", "onClose", "<init>", "(Lio/sentry/v5;Lio/sentry/android/replay/video/MuxerConfig;Lkotlin/jvm/functions/Function0;)V", "", "endOfStream", "drainCodec", "(Z)V", ViewProps.START, "()V", "Landroid/graphics/Bitmap;", "image", "encode", "(Landroid/graphics/Bitmap;)V", "release", "Lio/sentry/v5;", "getOptions", "()Lio/sentry/v5;", "Lio/sentry/android/replay/video/MuxerConfig;", "getMuxerConfig", "()Lio/sentry/android/replay/video/MuxerConfig;", "Lkotlin/jvm/functions/Function0;", "getOnClose", "()Lkotlin/jvm/functions/Function0;", "hasExynosCodec$delegate", "Lkotlin/Lazy;", "getHasExynosCodec", "()Z", "hasExynosCodec", "Landroid/media/MediaCodec;", "mediaCodec", "Landroid/media/MediaCodec;", "getMediaCodec$sentry_android_replay_release", "()Landroid/media/MediaCodec;", "Landroid/media/MediaFormat;", "mediaFormat$delegate", "getMediaFormat", "()Landroid/media/MediaFormat;", "mediaFormat", "Landroid/media/MediaCodec$BufferInfo;", "bufferInfo", "Landroid/media/MediaCodec$BufferInfo;", "Lio/sentry/android/replay/video/SimpleMp4FrameMuxer;", "frameMuxer", "Lio/sentry/android/replay/video/SimpleMp4FrameMuxer;", "Landroid/view/Surface;", "surface", "Landroid/view/Surface;", "", "getDuration", "()J", "duration", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@TargetApi(26)
/* loaded from: classes3.dex */
public final class SimpleVideoEncoder {
    public static final int $stable = 8;

    @NotNull
    private final MediaCodec.BufferInfo bufferInfo;

    @NotNull
    private final SimpleMp4FrameMuxer frameMuxer;

    /* renamed from: hasExynosCodec$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy hasExynosCodec;

    @NotNull
    private final MediaCodec mediaCodec;

    /* renamed from: mediaFormat$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy mediaFormat;

    @NotNull
    private final MuxerConfig muxerConfig;
    private final Function0<Unit> onClose;

    @NotNull
    private final v5 options;
    private Surface surface;

    public SimpleVideoEncoder(@NotNull v5 options, @NotNull MuxerConfig muxerConfig, Function0<Unit> function0) {
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(muxerConfig, "muxerConfig");
        this.options = options;
        this.muxerConfig = muxerConfig;
        this.onClose = function0;
        m mVar = m.f8828i;
        this.hasExynosCodec = l.b(mVar, new Function0<Boolean>() { // from class: io.sentry.android.replay.video.SimpleVideoEncoder$hasExynosCodec$2
            @Override // kotlin.jvm.functions.Function0
            public final Boolean invoke() {
                boolean z5 = false;
                MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
                Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
                int length = codecInfos.length;
                int i5 = 0;
                while (true) {
                    if (i5 >= length) {
                        break;
                    }
                    String name = codecInfos[i5].getName();
                    Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                    if (StringsKt.D(name, "c2.exynos", false)) {
                        z5 = true;
                        break;
                    }
                    i5++;
                }
                return Boolean.valueOf(z5);
            }
        });
        MediaCodec createByCodecName = getHasExynosCodec() ? MediaCodec.createByCodecName("c2.android.avc.encoder") : MediaCodec.createEncoderByType(muxerConfig.getMimeType());
        Intrinsics.checkNotNull(createByCodecName);
        this.mediaCodec = createByCodecName;
        this.mediaFormat = l.b(mVar, new Function0<MediaFormat>() { // from class: io.sentry.android.replay.video.SimpleVideoEncoder$mediaFormat$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final MediaFormat invoke() {
                int bitRate = SimpleVideoEncoder.this.getMuxerConfig().getBitRate();
                try {
                    MediaCodecInfo.VideoCapabilities videoCapabilities = SimpleVideoEncoder.this.getMediaCodec().getCodecInfo().getCapabilitiesForType(SimpleVideoEncoder.this.getMuxerConfig().getMimeType()).getVideoCapabilities();
                    if (!videoCapabilities.getBitrateRange().contains((Range<Integer>) Integer.valueOf(bitRate))) {
                        SimpleVideoEncoder.this.getOptions().getLogger().u(SentryLevel.DEBUG, "Encoder doesn't support the provided bitRate: " + bitRate + ", the value will be clamped to the closest one", new Object[0]);
                        Integer clamp = videoCapabilities.getBitrateRange().clamp(Integer.valueOf(bitRate));
                        Intrinsics.checkNotNullExpressionValue(clamp, "clamp(...)");
                        bitRate = clamp.intValue();
                    }
                } catch (Throwable th2) {
                    SimpleVideoEncoder.this.getOptions().getLogger().k(SentryLevel.DEBUG, "Could not retrieve MediaCodec info", th2);
                }
                MediaFormat createVideoFormat = MediaFormat.createVideoFormat(SimpleVideoEncoder.this.getMuxerConfig().getMimeType(), SimpleVideoEncoder.this.getMuxerConfig().getRecordingWidth(), SimpleVideoEncoder.this.getMuxerConfig().getRecordingHeight());
                Intrinsics.checkNotNullExpressionValue(createVideoFormat, "createVideoFormat(...)");
                createVideoFormat.setInteger("color-format", 2130708361);
                createVideoFormat.setInteger("bitrate", bitRate);
                createVideoFormat.setFloat("frame-rate", SimpleVideoEncoder.this.getMuxerConfig().getFrameRate());
                createVideoFormat.setInteger("i-frame-interval", 6);
                return createVideoFormat;
            }
        });
        this.bufferInfo = new MediaCodec.BufferInfo();
        String absolutePath = muxerConfig.getFile().getAbsolutePath();
        Intrinsics.checkNotNullExpressionValue(absolutePath, "getAbsolutePath(...)");
        this.frameMuxer = new SimpleMp4FrameMuxer(absolutePath, muxerConfig.getFrameRate());
    }

    private final void drainCodec(boolean endOfStream) {
        int dequeueOutputBuffer;
        ByteBuffer byteBuffer;
        if (this.options.getSessionReplay().f12113n) {
            this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: drainCodec(" + endOfStream + ')', new Object[0]);
        }
        if (endOfStream) {
            if (this.options.getSessionReplay().f12113n) {
                this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: sending EOS to encoder", new Object[0]);
            }
            this.mediaCodec.signalEndOfInputStream();
        }
        ByteBuffer[] outputBuffers = this.mediaCodec.getOutputBuffers();
        while (true) {
            dequeueOutputBuffer = this.mediaCodec.dequeueOutputBuffer(this.bufferInfo, 100000L);
            if (dequeueOutputBuffer == -1) {
                if (!endOfStream) {
                    return;
                }
                if (this.options.getSessionReplay().f12113n) {
                    this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: no output available, spinning to await EOS", new Object[0]);
                }
            } else if (dequeueOutputBuffer == -3) {
                outputBuffers = this.mediaCodec.getOutputBuffers();
            } else if (dequeueOutputBuffer == -2) {
                if (this.frameMuxer.getStarted()) {
                    throw new RuntimeException("format changed twice");
                }
                MediaFormat outputFormat = this.mediaCodec.getOutputFormat();
                Intrinsics.checkNotNullExpressionValue(outputFormat, "getOutputFormat(...)");
                if (this.options.getSessionReplay().f12113n) {
                    this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: encoder output format changed: " + outputFormat, new Object[0]);
                }
                this.frameMuxer.start(outputFormat);
            } else if (dequeueOutputBuffer < 0) {
                if (this.options.getSessionReplay().f12113n) {
                    this.options.getLogger().u(SentryLevel.DEBUG, d.i(dequeueOutputBuffer, "[Encoder]: unexpected result from encoder.dequeueOutputBuffer: "), new Object[0]);
                }
            } else {
                if (outputBuffers == null || (byteBuffer = outputBuffers[dequeueOutputBuffer]) == null) {
                    break;
                }
                if ((this.bufferInfo.flags & 2) != 0) {
                    if (this.options.getSessionReplay().f12113n) {
                        this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: ignoring BUFFER_FLAG_CODEC_CONFIG", new Object[0]);
                    }
                    this.bufferInfo.size = 0;
                }
                if (this.bufferInfo.size != 0) {
                    if (!this.frameMuxer.getStarted()) {
                        throw new RuntimeException("muxer hasn't started");
                    }
                    this.frameMuxer.muxVideoFrame(byteBuffer, this.bufferInfo);
                    if (this.options.getSessionReplay().f12113n) {
                        this.options.getLogger().u(SentryLevel.DEBUG, d.m(new StringBuilder("[Encoder]: sent "), this.bufferInfo.size, " bytes to muxer"), new Object[0]);
                    }
                }
                this.mediaCodec.releaseOutputBuffer(dequeueOutputBuffer, false);
                if ((this.bufferInfo.flags & 4) != 0) {
                    if (this.options.getSessionReplay().f12113n) {
                        if (endOfStream) {
                            this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: end of stream reached", new Object[0]);
                            return;
                        } else {
                            this.options.getLogger().u(SentryLevel.DEBUG, "[Encoder]: reached end of stream unexpectedly", new Object[0]);
                            return;
                        }
                    }
                    return;
                }
            }
        }
        throw new RuntimeException(h.e(dequeueOutputBuffer, "encoderOutputBuffer ", " was null"));
    }

    private final boolean getHasExynosCodec() {
        return ((Boolean) this.hasExynosCodec.getValue()).booleanValue();
    }

    private final MediaFormat getMediaFormat() {
        return (MediaFormat) this.mediaFormat.getValue();
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0054  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void encode(@NotNull Bitmap image) {
        Canvas lockCanvas;
        Surface surface;
        Intrinsics.checkNotNullParameter(image, "image");
        String MANUFACTURER = Build.MANUFACTURER;
        Intrinsics.checkNotNullExpressionValue(MANUFACTURER, "MANUFACTURER");
        if (!StringsKt.D(MANUFACTURER, "xiaomi", true)) {
            Intrinsics.checkNotNullExpressionValue(MANUFACTURER, "MANUFACTURER");
            if (!StringsKt.D(MANUFACTURER, "motorola", true)) {
                SystemProperties systemProperties = SystemProperties.INSTANCE;
                SystemProperties.Property property = SystemProperties.Property.SOC_MANUFACTURER;
                if (!x.i(SystemProperties.get$default(systemProperties, property, null, 2, null), "spreadtrum", true) && !x.i(SystemProperties.get$default(systemProperties, property, null, 2, null), "unisoc", true)) {
                    Surface surface2 = this.surface;
                    if (surface2 != null) {
                        lockCanvas = surface2.lockHardwareCanvas();
                        if (lockCanvas != null) {
                            lockCanvas.drawBitmap(image, 0.0f, 0.0f, (Paint) null);
                        }
                        surface = this.surface;
                        if (surface != null) {
                            surface.unlockCanvasAndPost(lockCanvas);
                        }
                        drainCodec(false);
                    }
                    lockCanvas = null;
                    if (lockCanvas != null) {
                    }
                    surface = this.surface;
                    if (surface != null) {
                    }
                    drainCodec(false);
                }
            }
        }
        Surface surface3 = this.surface;
        if (surface3 != null) {
            lockCanvas = surface3.lockCanvas(null);
            if (lockCanvas != null) {
            }
            surface = this.surface;
            if (surface != null) {
            }
            drainCodec(false);
        }
        lockCanvas = null;
        if (lockCanvas != null) {
        }
        surface = this.surface;
        if (surface != null) {
        }
        drainCodec(false);
    }

    public final long getDuration() {
        return this.frameMuxer.getVideoTime();
    }

    @NotNull
    /* renamed from: getMediaCodec$sentry_android_replay_release, reason: from getter */
    public final MediaCodec getMediaCodec() {
        return this.mediaCodec;
    }

    @NotNull
    public final MuxerConfig getMuxerConfig() {
        return this.muxerConfig;
    }

    public final Function0<Unit> getOnClose() {
        return this.onClose;
    }

    @NotNull
    public final v5 getOptions() {
        return this.options;
    }

    public final void release() {
        try {
            Function0<Unit> function0 = this.onClose;
            if (function0 != null) {
                function0.invoke();
            }
            drainCodec(true);
            this.mediaCodec.stop();
            this.mediaCodec.release();
            Surface surface = this.surface;
            if (surface != null) {
                surface.release();
            }
            this.frameMuxer.release();
        } catch (Throwable th2) {
            this.options.getLogger().k(SentryLevel.DEBUG, "Failed to properly release video encoder", th2);
        }
    }

    public final void start() {
        this.mediaCodec.configure(getMediaFormat(), (Surface) null, (MediaCrypto) null, 1);
        this.surface = this.mediaCodec.createInputSurface();
        this.mediaCodec.start();
        drainCodec(false);
    }

    public /* synthetic */ SimpleVideoEncoder(v5 v5Var, MuxerConfig muxerConfig, Function0 function0, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(v5Var, muxerConfig, (i5 & 4) != 0 ? null : function0);
    }
}
