package a5;

import com.android.billingclient.api.ProductDetails;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.dialog.AlertFragment;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class j {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f185b;

    /* renamed from: c, reason: collision with root package name */
    public final String f186c;

    /* renamed from: d, reason: collision with root package name */
    public final com.android.billingclient.api.a f187d;

    public j(JSONObject jSONObject) {
        this.a = jSONObject.optString("basePlanId");
        String optString = jSONObject.optString("offerId");
        this.f185b = true == optString.isEmpty() ? null : optString;
        this.f186c = jSONObject.getString("offerIdToken");
        this.f187d = new com.android.billingclient.api.a(jSONObject.getJSONArray("pricingPhases"));
        JSONObject optJSONObject = jSONObject.optJSONObject("installmentPlanDetails");
        if (optJSONObject != null) {
            optJSONObject.getInt("commitmentPaymentsCount");
            optJSONObject.optInt("subsequentCommitmentPaymentsCount");
        }
        JSONObject optJSONObject2 = jSONObject.optJSONObject("transitionPlanDetails");
        if (optJSONObject2 != null) {
            optJSONObject2.getString("productId");
            optJSONObject2.optString(AlertFragment.ARG_TITLE);
            optJSONObject2.optString(StackTraceHelper.NAME_KEY);
            optJSONObject2.optString("description");
            optJSONObject2.optString("basePlanId");
            JSONObject optJSONObject3 = optJSONObject2.optJSONObject("pricingPhase");
            if (optJSONObject3 != null) {
                new ProductDetails.PricingPhase(optJSONObject3);
            }
        }
        ArrayList arrayList = new ArrayList();
        JSONArray optJSONArray = jSONObject.optJSONArray("offerTags");
        if (optJSONArray != null) {
            for (int i5 = 0; i5 < optJSONArray.length(); i5++) {
                arrayList.add(optJSONArray.getString(i5));
            }
        }
    }
}
