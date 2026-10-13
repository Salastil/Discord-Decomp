package com.appsflyer.internal;

/* loaded from: classes.dex */
public final /* synthetic */ class k implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3678d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AFd1ySDK f3679e;

    public /* synthetic */ k(AFd1ySDK aFd1ySDK, int i5) {
        this.f3678d = i5;
        this.f3679e = aFd1ySDK;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3678d) {
            case 0:
                AFd1ySDK.getRevenue(this.f3679e);
                break;
            case 1:
                AFd1ySDK.getMediationNetwork(this.f3679e);
                break;
            default:
                AFd1ySDK.getCurrencyIso4217Code(this.f3679e);
                break;
        }
    }
}
