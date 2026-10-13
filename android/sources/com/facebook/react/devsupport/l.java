package com.facebook.react.devsupport;

/* loaded from: classes3.dex */
public final /* synthetic */ class l implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4925d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ DevSupportManagerBase f4926e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f4927i;

    public /* synthetic */ l(DevSupportManagerBase devSupportManagerBase, boolean z5, int i5) {
        this.f4925d = i5;
        this.f4926e = devSupportManagerBase;
        this.f4927i = z5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4925d) {
            case 0:
                DevSupportManagerBase.setFpsDebugEnabled$lambda$35(this.f4926e, this.f4927i);
                break;
            default:
                DevSupportManagerBase.setHotModuleReplacementEnabled$lambda$34(this.f4926e, this.f4927i);
                break;
        }
    }
}
