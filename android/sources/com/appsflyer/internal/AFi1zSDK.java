package com.appsflyer.internal;

import fo.q;
import fo.r;
import java.util.ArrayList;
import java.util.List;
import kotlin.Result;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFi1zSDK {
    public final AFi1xSDK AFAdRevenueData;
    public final AFh1aSDK getCurrencyIso4217Code;
    public AFi1ySDK getMediationNetwork;

    public AFi1zSDK(@NotNull JSONObject jSONObject) {
        Intrinsics.checkNotNullParameter(jSONObject, "");
        this.getMediationNetwork = getCurrencyIso4217Code(jSONObject);
        this.getCurrencyIso4217Code = getRevenue(jSONObject);
        this.AFAdRevenueData = getMediationNetwork(jSONObject);
    }

    private static JSONObject AFAdRevenueData(JSONObject jSONObject, String str) {
        JSONObject optJSONObject;
        if (!jSONObject.has(str) || (optJSONObject = jSONObject.getJSONArray(str).optJSONObject(0).optJSONObject("data")) == null) {
            return null;
        }
        return optJSONObject.optJSONObject("v1");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v10 */
    /* JADX WARN: Type inference failed for: r2v11, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r2v9, types: [kotlin.collections.m0] */
    private static AFi1ySDK getCurrencyIso4217Code(JSONObject jSONObject) {
        Object i5;
        ?? r22;
        try {
            q qVar = Result.f13476e;
            JSONObject AFAdRevenueData = AFAdRevenueData(jSONObject, "r_debugger");
            if (AFAdRevenueData != null) {
                long j = AFAdRevenueData.getLong("ttl");
                int i6 = AFAdRevenueData.getInt("counter");
                String optString = AFAdRevenueData.optString("app_ver", "");
                String optString2 = AFAdRevenueData.optString("sdk_ver", "");
                float optDouble = (float) AFAdRevenueData.optDouble("ratio", 1.0d);
                JSONArray optJSONArray = AFAdRevenueData.optJSONArray("tags");
                if (optJSONArray != null) {
                    Intrinsics.checkNotNullExpressionValue(optJSONArray, "");
                    r22 = new ArrayList();
                    int length = optJSONArray.length();
                    for (int i10 = 0; i10 < length; i10++) {
                        String string = optJSONArray.getString(i10);
                        Intrinsics.checkNotNullExpressionValue(string, "");
                        r22.add(string);
                    }
                } else {
                    r22 = m0.f13512d;
                }
                List list = r22;
                Intrinsics.checkNotNullExpressionValue(optString, "");
                Intrinsics.checkNotNullExpressionValue(optString2, "");
                i5 = new AFi1ySDK(j, optDouble, list, i6, optString, optString2);
            } else {
                i5 = null;
            }
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        q qVar3 = Result.f13476e;
        return (AFi1ySDK) (i5 instanceof r ? null : i5);
    }

    private static AFi1xSDK getMediationNetwork(JSONObject jSONObject) {
        Object i5;
        try {
            q qVar = Result.f13476e;
            JSONObject AFAdRevenueData = AFAdRevenueData(jSONObject, "meta_data");
            i5 = AFAdRevenueData != null ? new AFi1xSDK(AFAdRevenueData.optDouble("send_rate", 1.0d)) : null;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        return (AFi1xSDK) (i5 instanceof r ? null : i5);
    }

    private static AFh1aSDK getRevenue(JSONObject jSONObject) {
        Object i5;
        try {
            q qVar = Result.f13476e;
            JSONObject AFAdRevenueData = AFAdRevenueData(jSONObject, "exc_mngr");
            i5 = AFAdRevenueData != null ? new AFh1aSDK(AFAdRevenueData.getString("sdk_ver"), AFAdRevenueData.optInt("min", -1), AFAdRevenueData.optInt("expire", -1), AFAdRevenueData.optLong("ttl", -1L)) : null;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        return (AFh1aSDK) (i5 instanceof r ? null : i5);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(AFi1zSDK.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "");
        AFi1zSDK aFi1zSDK = (AFi1zSDK) obj;
        return Intrinsics.areEqual(this.getCurrencyIso4217Code, aFi1zSDK.getCurrencyIso4217Code) && Intrinsics.areEqual(this.AFAdRevenueData, aFi1zSDK.AFAdRevenueData) && Intrinsics.areEqual(this.getMediationNetwork, aFi1zSDK.getMediationNetwork);
    }

    public final int hashCode() {
        AFh1aSDK aFh1aSDK = this.getCurrencyIso4217Code;
        int hashCode = (aFh1aSDK != null ? aFh1aSDK.hashCode() : 0) * 31;
        AFi1xSDK aFi1xSDK = this.AFAdRevenueData;
        int hashCode2 = (hashCode + (aFi1xSDK != null ? aFi1xSDK.hashCode() : 0)) * 31;
        AFi1ySDK aFi1ySDK = this.getMediationNetwork;
        return hashCode2 + (aFi1ySDK != null ? aFi1ySDK.hashCode() : 0);
    }
}
