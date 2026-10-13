package com.discord.billing;

import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3783d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3784e;

    public /* synthetic */ e(int i5, Object obj) {
        this.f3783d = i5;
        this.f3784e = obj;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit purchase$lambda$4;
        Unit loadPurchases$lambda$10;
        Unit products$lambda$13;
        Unit subscribe$lambda$6;
        Unit consumePurchase$lambda$8;
        Unit userCountry$lambda$11;
        Unit userCountry$lambda$12;
        Unit billingManager$lambda$0;
        switch (this.f3783d) {
            case 0:
                purchase$lambda$4 = BillingManagerModule.purchase$lambda$4((Promise) this.f3784e, (BillingManagerException) obj);
                return purchase$lambda$4;
            case 1:
                loadPurchases$lambda$10 = BillingManagerModule.loadPurchases$lambda$10((Promise) this.f3784e, (Exception) obj);
                return loadPurchases$lambda$10;
            case 2:
                products$lambda$13 = BillingManagerModule.getProducts$lambda$13((Promise) this.f3784e, (BillingManagerException) obj);
                return products$lambda$13;
            case 3:
                subscribe$lambda$6 = BillingManagerModule.subscribe$lambda$6((Promise) this.f3784e, (BillingManagerException) obj);
                return subscribe$lambda$6;
            case 4:
                consumePurchase$lambda$8 = BillingManagerModule.consumePurchase$lambda$8((Promise) this.f3784e, (BillingManagerException) obj);
                return consumePurchase$lambda$8;
            case 5:
                userCountry$lambda$11 = BillingManagerModule.getUserCountry$lambda$11((Promise) this.f3784e, (String) obj);
                return userCountry$lambda$11;
            case 6:
                userCountry$lambda$12 = BillingManagerModule.getUserCountry$lambda$12((Promise) this.f3784e, (BillingManagerException) obj);
                return userCountry$lambda$12;
            default:
                billingManager$lambda$0 = BillingManagerModule.billingManager$lambda$0((BillingManagerModule) this.f3784e, ((Integer) obj).intValue());
                return billingManager$lambda$0;
        }
    }
}
