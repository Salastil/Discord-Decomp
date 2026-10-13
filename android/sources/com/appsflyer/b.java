package com.appsflyer;

import com.appsflyer.internal.AFh1ySDK;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3639d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AFh1ySDK[] f3640e;

    public /* synthetic */ b(AFh1ySDK[] aFh1ySDKArr, int i5) {
        this.f3639d = i5;
        this.f3640e = aFh1ySDKArr;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3639d) {
            case 0:
                AFLogger.AFAdRevenueData(this.f3640e);
                break;
            default:
                AFLogger.getMonetizationNetwork(this.f3640e);
                break;
        }
    }
}
