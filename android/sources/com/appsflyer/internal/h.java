package com.appsflyer.internal;

import android.app.Activity;
import android.content.Context;
import android.hardware.SensorEvent;

/* loaded from: classes.dex */
public final /* synthetic */ class h implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3675d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3676e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3677i;

    public /* synthetic */ h(int i5, Object obj, Object obj2) {
        this.f3675d = i5;
        this.f3676e = obj;
        this.f3677i = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3675d) {
            case 0:
                AFb1lSDK.getMediationNetwork((AFb1lSDK) this.f3676e, (Activity) this.f3677i);
                break;
            case 1:
                ((AFa1uSDK) this.f3676e).getMediationNetwork((AFh1jSDK) this.f3677i);
                break;
            case 2:
                ((AFj1nSDK) this.f3676e).G_((SensorEvent) this.f3677i);
                break;
            case 3:
                AFj1uSDK.getMonetizationNetwork((AFj1uSDK) this.f3676e, (Context) this.f3677i);
                break;
            case 4:
                AFj1wSDK.getCurrencyIso4217Code((AFj1wSDK) this.f3676e, (Context) this.f3677i);
                break;
            default:
                ((AFj1zSDK) this.f3676e).AFAdRevenueData((Context) this.f3677i);
                break;
        }
    }
}
