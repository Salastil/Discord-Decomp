package com.facebook.react.devsupport;

/* loaded from: classes3.dex */
public final /* synthetic */ class k implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4923d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ DevSupportManagerBase f4924e;

    public /* synthetic */ k(DevSupportManagerBase devSupportManagerBase, int i5) {
        this.f4923d = i5;
        this.f4924e = devSupportManagerBase;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4923d) {
            case 0:
                DevSupportManagerBase.showDevOptionsDialog$lambda$12$lambda$11(this.f4924e);
                break;
            case 1:
                DevSupportManagerBase.toggleElementInspector$lambda$36(this.f4924e);
                break;
            case 2:
                this.f4924e.reload();
                break;
            case 3:
                DevSupportManagerBase.access$hideSplitBundleDevLoadingView(this.f4924e);
                break;
            case 4:
                DevSupportManagerBase.access$hideSplitBundleDevLoadingView(this.f4924e);
                break;
            case 5:
                this.f4924e.handleReloadJS();
                break;
            default:
                this.f4924e.showDevOptionsDialog();
                break;
        }
    }
}
