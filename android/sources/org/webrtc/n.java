package org.webrtc;

/* loaded from: classes4.dex */
public final /* synthetic */ class n implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16230d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ RenderSynchronizer f16231e;

    public /* synthetic */ n(RenderSynchronizer renderSynchronizer, int i5) {
        this.f16230d = i5;
        this.f16231e = renderSynchronizer;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16230d) {
            case 0:
                this.f16231e.lambda$registerListener$1();
                break;
            default:
                this.f16231e.lambda$new$0();
                break;
        }
    }
}
