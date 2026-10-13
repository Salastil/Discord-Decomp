package org.webrtc;

/* loaded from: classes4.dex */
public final /* synthetic */ class i implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16222d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ EglThread f16223e;

    public /* synthetic */ i(EglThread eglThread, int i5) {
        this.f16222d = i5;
        this.f16223e = eglThread;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16222d) {
            case 0:
                this.f16223e.lambda$onRenderWindowOpen$2();
                break;
            default:
                this.f16223e.lambda$onRenderWindowClose$3();
                break;
        }
    }
}
