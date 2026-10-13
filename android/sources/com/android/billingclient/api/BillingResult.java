package com.android.billingclient.api;

import a3.e;
import a5.g;
import com.google.android.gms.internal.play_billing.c0;
import com.google.android.gms.internal.play_billing.i;
import com.google.android.gms.internal.play_billing.s;

/* loaded from: classes.dex */
public final class BillingResult {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f3600b;

    /* renamed from: c, reason: collision with root package name */
    public String f3601c;

    public static g a() {
        g gVar = new g();
        gVar.f156e = 0;
        gVar.f157i = "";
        return gVar;
    }

    public final String toString() {
        int i5 = this.a;
        int i6 = s.a;
        c0 c0Var = i.f5749i;
        Integer valueOf = Integer.valueOf(i5);
        return e.l("Response Code: ", (!c0Var.containsKey(valueOf) ? i.RESPONSE_CODE_UNSPECIFIED : (i) c0Var.get(valueOf)).toString(), ", Debug Message: ", this.f3601c);
    }
}
