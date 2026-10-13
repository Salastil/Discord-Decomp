package com.android.billingclient.api;

import android.text.TextUtils;
import com.google.android.gms.internal.play_billing.d0;
import com.google.android.gms.internal.play_billing.v;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class Purchase {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3627b;

    /* renamed from: c, reason: collision with root package name */
    public final JSONObject f3628c;

    public Purchase(String str, String str2) {
        this.a = str;
        this.f3627b = str2;
        this.f3628c = new JSONObject(str);
        int i5 = v.f5852i;
        Object[] objArr = d0.F;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Purchase)) {
            return false;
        }
        Purchase purchase = (Purchase) obj;
        return TextUtils.equals(this.a, purchase.a) && TextUtils.equals(this.f3627b, purchase.f3627b);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return "Purchase. Json: ".concat(String.valueOf(this.a));
    }
}
