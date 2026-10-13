package com.android.billingclient.api;

import org.json.JSONObject;

/* loaded from: classes.dex */
public final class BillingConfig {
    public final String a;

    public BillingConfig(String str, int i5) {
        this.a = str;
    }

    public BillingConfig(String str) {
        this.a = new JSONObject(str).optString("countryCode");
    }
}
