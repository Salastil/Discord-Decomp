package com.discord.billing;

import a5.k;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.discord.billing.BillingManager$getProducts$1;
import java.util.List;
import nr.o;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements k {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3772b;

    public /* synthetic */ b(int i5, Object obj) {
        this.a = i5;
        this.f3772b = obj;
    }

    @Override // a5.k
    public void a(BillingResult billingResult, QueryProductDetailsResult queryProductDetailsResult) {
        BillingManager$getProducts$1.AnonymousClass1.invokeSuspend$lambda$0((o) this.f3772b, billingResult, queryProductDetailsResult);
    }

    public void b(BillingResult billingResult, List list) {
        switch (this.a) {
            case 0:
                BillingManager$loadPurchases$3.invokeSuspend$lambda$0((BillingManager) this.f3772b, billingResult, list);
                break;
            default:
                BillingManager$loadPurchases$3.invokeSuspend$lambda$1((BillingManager) this.f3772b, billingResult, list);
                break;
        }
    }
}
