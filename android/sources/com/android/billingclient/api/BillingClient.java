package com.android.billingclient.api;

import a5.c;
import a5.h;
import a5.k;
import a5.n;
import android.app.Activity;
import com.discord.billing.BillingManager$getUserCountry$1;
import com.discord.billing.b;

/* loaded from: classes.dex */
public abstract class BillingClient {
    public abstract void a(h hVar, com.discord.billing.a aVar);

    public abstract void b();

    public abstract void c(BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111);

    public abstract boolean d();

    public abstract BillingResult e(Activity activity, BillingFlowParams billingFlowParams);

    public abstract void f(QueryProductDetailsParams queryProductDetailsParams, k kVar);

    public abstract void g(n nVar, b bVar);

    public abstract void h(c cVar);
}
