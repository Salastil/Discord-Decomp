package com.appsflyer.internal;

/* loaded from: classes.dex */
public final /* synthetic */ class n implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3685d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AFj1oSDK f3686e;

    public /* synthetic */ n(AFj1oSDK aFj1oSDK, int i5) {
        this.f3685d = i5;
        this.f3686e = aFj1oSDK;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3685d) {
            case 0:
                this.f3686e.areAllFieldsValid();
                break;
            case 1:
                this.f3686e.component1();
                break;
            default:
                this.f3686e.component3();
                break;
        }
    }
}
