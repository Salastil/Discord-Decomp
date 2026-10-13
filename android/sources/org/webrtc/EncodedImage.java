package org.webrtc;

import java.nio.ByteBuffer;
import java.util.concurrent.TimeUnit;

/* loaded from: classes4.dex */
public class EncodedImage implements RefCounted {
    public final ByteBuffer buffer;
    public final long captureTimeMs;
    public final long captureTimeNs;
    public final int encodedHeight;
    public final int encodedWidth;
    public final FrameType frameType;

    /* renamed from: qp, reason: collision with root package name */
    public final Integer f16190qp;
    private final RefCountDelegate refCountDelegate;
    public final int rotation;

    public static class Builder {
        private ByteBuffer buffer;
        private long captureTimeNs;
        private int encodedHeight;
        private int encodedWidth;
        private FrameType frameType;

        /* renamed from: qp, reason: collision with root package name */
        private Integer f16191qp;
        private Runnable releaseCallback;
        private int rotation;

        public /* synthetic */ Builder(int i5) {
            this();
        }

        public EncodedImage createEncodedImage() {
            return new EncodedImage(this.buffer, this.releaseCallback, this.encodedWidth, this.encodedHeight, this.captureTimeNs, this.frameType, this.rotation, this.f16191qp, 0);
        }

        public Builder setBuffer(ByteBuffer byteBuffer, Runnable runnable) {
            this.buffer = byteBuffer;
            this.releaseCallback = runnable;
            return this;
        }

        @Deprecated
        public Builder setCaptureTimeMs(long j) {
            this.captureTimeNs = TimeUnit.MILLISECONDS.toNanos(j);
            return this;
        }

        public Builder setCaptureTimeNs(long j) {
            this.captureTimeNs = j;
            return this;
        }

        public Builder setEncodedHeight(int i5) {
            this.encodedHeight = i5;
            return this;
        }

        public Builder setEncodedWidth(int i5) {
            this.encodedWidth = i5;
            return this;
        }

        public Builder setFrameType(FrameType frameType) {
            this.frameType = frameType;
            return this;
        }

        public Builder setQp(Integer num) {
            this.f16191qp = num;
            return this;
        }

        public Builder setRotation(int i5) {
            this.rotation = i5;
            return this;
        }

        private Builder() {
        }
    }

    public enum FrameType {
        EmptyFrame(0),
        VideoFrameKey(3),
        VideoFrameDelta(4);

        private final int nativeIndex;

        FrameType(int i5) {
            this.nativeIndex = i5;
        }

        @CalledByNative("FrameType")
        public static FrameType fromNativeIndex(int i5) {
            for (FrameType frameType : values()) {
                if (frameType.getNative() == i5) {
                    return frameType;
                }
            }
            throw new IllegalArgumentException(k0.d.i(i5, "Unknown native frame type: "));
        }

        public int getNative() {
            return this.nativeIndex;
        }
    }

    public /* synthetic */ EncodedImage(ByteBuffer byteBuffer, Runnable runnable, int i5, int i6, long j, FrameType frameType, int i10, Integer num, int i11) {
        this(byteBuffer, runnable, i5, i6, j, frameType, i10, num);
    }

    public static Builder builder() {
        return new Builder(0);
    }

    @CalledByNative
    private ByteBuffer getBuffer() {
        return this.buffer;
    }

    @CalledByNative
    private long getCaptureTimeNs() {
        return this.captureTimeNs;
    }

    @CalledByNative
    private int getEncodedHeight() {
        return this.encodedHeight;
    }

    @CalledByNative
    private int getEncodedWidth() {
        return this.encodedWidth;
    }

    @CalledByNative
    private int getFrameType() {
        return this.frameType.getNative();
    }

    @CalledByNative
    private Integer getQp() {
        return this.f16190qp;
    }

    @CalledByNative
    private int getRotation() {
        return this.rotation;
    }

    @Override // org.webrtc.RefCounted
    public void release() {
        this.refCountDelegate.release();
    }

    @Override // org.webrtc.RefCounted
    public void retain() {
        this.refCountDelegate.retain();
    }

    @CalledByNative
    private EncodedImage(ByteBuffer byteBuffer, Runnable runnable, int i5, int i6, long j, FrameType frameType, int i10, Integer num) {
        this.buffer = byteBuffer;
        this.encodedWidth = i5;
        this.encodedHeight = i6;
        this.captureTimeMs = TimeUnit.NANOSECONDS.toMillis(j);
        this.captureTimeNs = j;
        this.frameType = frameType;
        this.rotation = i10;
        this.f16190qp = num;
        this.refCountDelegate = new RefCountDelegate(runnable);
    }
}
