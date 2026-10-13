package com.appsflyer.internal;

/* loaded from: classes.dex */
public final /* synthetic */ class o implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3687d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AFj1rSDK f3688e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Runnable f3689i;

    public /* synthetic */ o(AFj1rSDK aFj1rSDK, Runnable runnable, int i5) {
        this.f3687d = i5;
        this.f3688e = aFj1rSDK;
        this.f3689i = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3687d) {
            case 0:
                this.f3688e.component4(this.f3689i);
                break;
            case 1:
                this.f3688e.getRevenue(this.f3689i);
                break;
            case 2:
                this.f3688e.AFAdRevenueData(this.f3689i);
                break;
            default:
                this.f3688e.getCurrencyIso4217Code(this.f3689i);
                break;
        }
    }
}
