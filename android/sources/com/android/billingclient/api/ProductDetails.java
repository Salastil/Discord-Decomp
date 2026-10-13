package com.android.billingclient.api;

import a3.e;
import a5.i;
import a5.j;
import android.text.TextUtils;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.dialog.AlertFragment;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class ProductDetails {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final JSONObject f3602b;

    /* renamed from: c, reason: collision with root package name */
    public final String f3603c;

    /* renamed from: d, reason: collision with root package name */
    public final String f3604d;

    /* renamed from: e, reason: collision with root package name */
    public final String f3605e;

    /* renamed from: f, reason: collision with root package name */
    public final String f3606f;

    /* renamed from: g, reason: collision with root package name */
    public final String f3607g;

    /* renamed from: h, reason: collision with root package name */
    public final String f3608h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f3609i;
    public final ArrayList j;

    public static final class PricingPhase {
        public final String a;

        /* renamed from: b, reason: collision with root package name */
        public final long f3610b;

        /* renamed from: c, reason: collision with root package name */
        public final String f3611c;

        /* renamed from: d, reason: collision with root package name */
        public final String f3612d;

        /* renamed from: e, reason: collision with root package name */
        public final int f3613e;

        public PricingPhase(JSONObject jSONObject) {
            this.f3612d = jSONObject.optString("billingPeriod");
            this.f3611c = jSONObject.optString("priceCurrencyCode");
            this.a = jSONObject.optString("formattedPrice");
            this.f3610b = jSONObject.optLong("priceAmountMicros");
            jSONObject.optInt("recurrenceMode");
            this.f3613e = jSONObject.optInt("billingCycleCount");
        }
    }

    public ProductDetails(String str) {
        this.a = str;
        JSONObject jSONObject = new JSONObject(str);
        this.f3602b = jSONObject;
        String optString = jSONObject.optString("productId");
        this.f3603c = optString;
        String optString2 = jSONObject.optString("type");
        this.f3604d = optString2;
        if (TextUtils.isEmpty(optString)) {
            throw new IllegalArgumentException("Product id cannot be empty.");
        }
        if (TextUtils.isEmpty(optString2)) {
            throw new IllegalArgumentException("Product type cannot be empty.");
        }
        this.f3605e = jSONObject.optString(AlertFragment.ARG_TITLE);
        jSONObject.optString(StackTraceHelper.NAME_KEY);
        this.f3606f = jSONObject.optString("description");
        jSONObject.optString("packageDisplayName");
        jSONObject.optString("iconUrl");
        this.f3607g = jSONObject.optString("skuDetailsToken");
        this.f3608h = jSONObject.optString("serializedDocid");
        JSONArray optJSONArray = jSONObject.optJSONArray("subscriptionOfferDetails");
        if (optJSONArray != null) {
            ArrayList arrayList = new ArrayList();
            for (int i5 = 0; i5 < optJSONArray.length(); i5++) {
                arrayList.add(new j(optJSONArray.getJSONObject(i5)));
            }
            this.f3609i = arrayList;
        } else {
            this.f3609i = (optString2.equals("subs") || optString2.equals("play_pass_subs")) ? new ArrayList() : null;
        }
        JSONObject optJSONObject = this.f3602b.optJSONObject("oneTimePurchaseOfferDetails");
        JSONArray optJSONArray2 = this.f3602b.optJSONArray("oneTimePurchaseOfferDetailsList");
        ArrayList arrayList2 = new ArrayList();
        if (optJSONArray2 != null) {
            for (int i6 = 0; i6 < optJSONArray2.length(); i6++) {
                arrayList2.add(new i(optJSONArray2.getJSONObject(i6)));
            }
            this.j = arrayList2;
            return;
        }
        if (optJSONObject == null) {
            this.j = null;
        } else {
            arrayList2.add(new i(optJSONObject));
            this.j = arrayList2;
        }
    }

    public final i a() {
        ArrayList arrayList = this.j;
        if (arrayList == null || arrayList.isEmpty()) {
            return null;
        }
        return (i) arrayList.get(0);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof ProductDetails) {
            return TextUtils.equals(this.a, ((ProductDetails) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        String obj = this.f3602b.toString();
        String valueOf = String.valueOf(this.f3609i);
        StringBuilder sb2 = new StringBuilder("ProductDetails{jsonString='");
        e.A(sb2, this.a, "', parsedJson=", obj, ", productId='");
        sb2.append(this.f3603c);
        sb2.append("', productType='");
        sb2.append(this.f3604d);
        sb2.append("', title='");
        sb2.append(this.f3605e);
        sb2.append("', productDetailsToken='");
        return com.discord.chat.bridge.botuikit.a.k(sb2, this.f3607g, "', subscriptionOfferDetails=", valueOf, "}");
    }
}
