package com.appsflyer.internal;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3673d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3674e;

    public /* synthetic */ g(int i5, Object obj) {
        this.f3673d = i5;
        this.f3674e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3673d) {
            case 0:
                AFb1lSDK.getRevenue((AFb1lSDK) this.f3674e);
                break;
            case 1:
                AFa1uSDK.getMediationNetwork((AFc1bSDK) this.f3674e);
                break;
            default:
                ((AFd1oSDK) this.f3674e).getRevenue();
                break;
        }
    }
}
