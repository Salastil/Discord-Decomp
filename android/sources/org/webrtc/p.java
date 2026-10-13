package org.webrtc;

/* loaded from: classes4.dex */
public final /* synthetic */ class p implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16233d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ SurfaceTextureHelper f16234e;

    public /* synthetic */ p(SurfaceTextureHelper surfaceTextureHelper, int i5) {
        this.f16233d = i5;
        this.f16234e = surfaceTextureHelper;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16233d) {
            case 0:
                this.f16234e.lambda$stopListening$1();
                break;
            case 1:
                this.f16234e.lambda$dispose$6();
                break;
            case 2:
                this.f16234e.lambda$returnTextureFrame$5();
                break;
            default:
                this.f16234e.lambda$forceFrame$3();
                break;
        }
    }
}
