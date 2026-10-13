package com.android.billingclient.api;

import com.android.billingclient.api.ProductDetails;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class a {
    public final ArrayList a;

    public a(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        if (jSONArray != null) {
            for (int i5 = 0; i5 < jSONArray.length(); i5++) {
                JSONObject optJSONObject = jSONArray.optJSONObject(i5);
                if (optJSONObject != null) {
                    arrayList.add(new ProductDetails.PricingPhase(optJSONObject));
                }
            }
        }
        this.a = arrayList;
    }
}
