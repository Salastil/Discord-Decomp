package com.discord.billing;

import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3781d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Promise f3782e;

    public /* synthetic */ d(Promise promise, int i5) {
        this.f3781d = i5;
        this.f3782e = promise;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit subscribe$lambda$5;
        Unit loadPurchases$lambda$9;
        Unit consumePurchase$lambda$7;
        Unit purchase$lambda$3;
        switch (this.f3781d) {
            case 0:
                subscribe$lambda$5 = BillingManagerModule.subscribe$lambda$5(this.f3782e);
                return subscribe$lambda$5;
            case 1:
                loadPurchases$lambda$9 = BillingManagerModule.loadPurchases$lambda$9(this.f3782e);
                return loadPurchases$lambda$9;
            case 2:
                consumePurchase$lambda$7 = BillingManagerModule.consumePurchase$lambda$7(this.f3782e);
                return consumePurchase$lambda$7;
            default:
                purchase$lambda$3 = BillingManagerModule.purchase$lambda$3(this.f3782e);
                return purchase$lambda$3;
        }
    }
}
