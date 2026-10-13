package com.discord.billing;

import com.android.billingclient.api.BillingResult;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a {
    public final /* synthetic */ BillingManager a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function1 f3770b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Function0 f3771c;

    public /* synthetic */ a(BillingManager billingManager, Function1 function1, Function0 function0) {
        this.a = billingManager;
        this.f3770b = function1;
        this.f3771c = function0;
    }

    public final void a(BillingResult billingResult, String str) {
        BillingManager$consumePurchase$1.invokeSuspend$lambda$0(this.a, this.f3770b, this.f3771c, billingResult, str);
    }
}
