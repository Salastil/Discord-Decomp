package com.facebook.imagepipeline.nativecode;

@o8.c
/* loaded from: classes3.dex */
public class NativeJpegTranscoderFactory implements ua.b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f4673b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f4674c;

    @o8.c
    public NativeJpegTranscoderFactory(int i5, boolean z5, boolean z6) {
        this.a = i5;
        this.f4673b = z5;
        this.f4674c = z6;
    }

    @Override // ua.b
    @o8.c
    public ua.a createImageTranscoder(aa.c cVar, boolean z5) {
        if (cVar != aa.b.a) {
            return null;
        }
        NativeJpegTranscoder nativeJpegTranscoder = new NativeJpegTranscoder();
        nativeJpegTranscoder.a = z5;
        nativeJpegTranscoder.f4671b = this.a;
        nativeJpegTranscoder.f4672c = this.f4673b;
        if (this.f4674c) {
            b.m();
        }
        return nativeJpegTranscoder;
    }
}
