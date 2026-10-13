package com.linkedin.android.litr.render;

import android.media.MediaCodec;
import java.nio.ByteBuffer;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import wk.a;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\b\u0000\u0018\u00002\u00020\u0001J0\u0010\b\u001a\u00020\u00072\u0006\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0004\u001a\u00020\u00022\u0006\u0010\u0005\u001a\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u0002H\u0082 ¢\u0006\u0004\b\b\u0010\tJ0\u0010\u000f\u001a\u00020\u00022\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u0002H\u0082 ¢\u0006\u0004\b\u000f\u0010\u0010J\u0010\u0010\u0011\u001a\u00020\u0007H\u0082 ¢\u0006\u0004\b\u0011\u0010\u0012¨\u0006\u0013"}, d2 = {"Lcom/linkedin/android/litr/render/OboeAudioProcessor;", "Lwk/a;", "", "sourceChannelCount", "sourceSampleRate", "targetChannelCount", "targetSampleRate", "", "initProcessor", "(IIII)V", "Ljava/nio/ByteBuffer;", "sourceBuffer", "sampleCount", "targetBuffer", "targetBufferSize", "processAudioFrame", "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;I)I", "releaseProcessor", "()V", "litr_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
/* loaded from: classes3.dex */
public final class OboeAudioProcessor implements a {

    /* renamed from: d, reason: collision with root package name */
    public final int f6517d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6518e;

    /* renamed from: i, reason: collision with root package name */
    public final double f6519i;

    /* renamed from: v, reason: collision with root package name */
    public long f6520v;

    static {
        System.loadLibrary("litr-jni");
    }

    public OboeAudioProcessor(int i5, int i6, int i10, int i11) {
        this.f6517d = i5;
        this.f6518e = i10;
        initProcessor(i5, i6, i10, i11);
        this.f6519i = 1000000.0d / i11;
        this.f6520v = 0L;
    }

    private final native void initProcessor(int sourceChannelCount, int sourceSampleRate, int targetChannelCount, int targetSampleRate);

    private final native int processAudioFrame(ByteBuffer sourceBuffer, int sampleCount, ByteBuffer targetBuffer, int targetBufferSize);

    private final native void releaseProcessor();

    @Override // wk.a
    public final void g(rk.a sourceFrame, rk.a targetFrame) {
        ByteBuffer byteBuffer;
        Intrinsics.checkNotNullParameter(sourceFrame, "sourceFrame");
        Intrinsics.checkNotNullParameter(targetFrame, "targetFrame");
        ByteBuffer byteBuffer2 = sourceFrame.f17401b;
        MediaCodec.BufferInfo bufferInfo = sourceFrame.f17402c;
        if (byteBuffer2 == null || (byteBuffer = targetFrame.f17401b) == null) {
            throw new IllegalArgumentException("Source or target frame doesn't have a buffer, cannot process it!");
        }
        int i5 = bufferInfo.size / (this.f6517d * 2);
        Intrinsics.checkNotNullExpressionValue(byteBuffer2, "sourceFrame.buffer");
        Intrinsics.checkNotNullExpressionValue(byteBuffer, "targetFrame.buffer");
        int processAudioFrame = processAudioFrame(byteBuffer2, i5, byteBuffer, byteBuffer.capacity());
        int i6 = processAudioFrame * 2 * this.f6518e;
        byteBuffer.rewind();
        byteBuffer.limit(Math.min(i6, byteBuffer.capacity()));
        targetFrame.f17402c.set(0, i6, this.f6520v, bufferInfo.flags);
        this.f6520v += (long) (processAudioFrame * this.f6519i);
    }

    @Override // wk.a
    public final void release() {
        releaseProcessor();
    }
}
