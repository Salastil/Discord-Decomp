package org.webrtc;

/* loaded from: classes4.dex */
public final /* synthetic */ class j implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16224d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f16225e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f16226i;

    public /* synthetic */ j(int i5, int i6, Object obj) {
        this.f16224d = i6;
        this.f16226i = obj;
        this.f16225e = i5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16224d) {
            case 0:
                ((HardwareVideoEncoder) this.f16226i).lambda$deliverEncodedImage$0(this.f16225e);
                break;
            default:
                ((SurfaceTextureHelper) this.f16226i).lambda$setFrameRotation$4(this.f16225e);
                break;
        }
    }
}
