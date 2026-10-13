package a5;

import com.android.billingclient.api.ProductDetails;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class i {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long f177b;

    /* renamed from: c, reason: collision with root package name */
    public final String f178c;

    /* renamed from: d, reason: collision with root package name */
    public final String f179d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f180e;

    /* renamed from: f, reason: collision with root package name */
    public final String f181f;

    /* renamed from: g, reason: collision with root package name */
    public final j8.c f182g;

    public i(JSONObject jSONObject) {
        this.a = jSONObject.optString("formattedPrice");
        this.f177b = jSONObject.optLong("priceAmountMicros");
        this.f178c = jSONObject.optString("priceCurrencyCode");
        String optString = jSONObject.optString("offerIdToken");
        j8.c cVar = null;
        this.f179d = true == optString.isEmpty() ? null : optString;
        jSONObject.optString("offerId").getClass();
        jSONObject.optString("purchaseOptionId").getClass();
        jSONObject.optInt("offerType");
        JSONArray optJSONArray = jSONObject.optJSONArray("offerTags");
        this.f180e = new ArrayList();
        if (optJSONArray != null) {
            for (int i5 = 0; i5 < optJSONArray.length(); i5++) {
                this.f180e.add(optJSONArray.getString(i5));
            }
        }
        if (jSONObject.has("fullPriceMicros")) {
            jSONObject.optLong("fullPriceMicros");
        }
        JSONObject optJSONObject = jSONObject.optJSONObject("discountDisplayInfo");
        if (optJSONObject != null) {
            if (optJSONObject.has("percentageDiscount")) {
                optJSONObject.optInt("percentageDiscount");
            }
            JSONObject optJSONObject2 = optJSONObject.optJSONObject("discountAmount");
            if (optJSONObject2 != null) {
                optJSONObject2.optString("formattedDiscountAmount");
                optJSONObject2.optLong("discountAmountMicros");
                optJSONObject2.optString("discountAmountCurrencyCode");
            }
        }
        JSONObject optJSONObject3 = jSONObject.optJSONObject("validTimeWindow");
        if (optJSONObject3 != null) {
            if (optJSONObject3.has("startTimeMillis")) {
                optJSONObject3.optLong("startTimeMillis");
            }
            if (optJSONObject3.has("endTimeMillis")) {
                optJSONObject3.optLong("endTimeMillis");
            }
        }
        JSONObject optJSONObject4 = jSONObject.optJSONObject("limitedQuantityInfo");
        if (optJSONObject4 != null) {
            optJSONObject4.getInt("maximumQuantity");
            optJSONObject4.getInt("remainingQuantity");
        }
        this.f181f = jSONObject.optString("serializedDocid");
        JSONObject optJSONObject5 = jSONObject.optJSONObject("preorderDetails");
        if (optJSONObject5 != null) {
            optJSONObject5.getLong("preorderReleaseTimeMillis");
            optJSONObject5.getLong("preorderPresaleEndTimeMillis");
        }
        JSONObject optJSONObject6 = jSONObject.optJSONObject("rentalDetails");
        if (optJSONObject6 != null) {
            optJSONObject6.getString("rentalPeriod");
            optJSONObject6.optString("rentalExpirationPeriod").getClass();
        }
        JSONObject optJSONObject7 = jSONObject.optJSONObject("autoPayDetails");
        if (optJSONObject7 != null) {
            cVar = new j8.c();
            optJSONObject7.getString("type");
        }
        this.f182g = cVar;
        JSONArray optJSONArray2 = jSONObject.optJSONArray("pricingPhases");
        if (optJSONArray2 == null) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (int i6 = 0; i6 < optJSONArray2.length(); i6++) {
            JSONObject optJSONObject8 = optJSONArray2.optJSONObject(i6);
            if (optJSONObject8 != null) {
                arrayList.add(new ProductDetails.PricingPhase(optJSONObject8));
            }
        }
    }
}
