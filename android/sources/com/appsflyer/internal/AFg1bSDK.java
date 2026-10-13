package com.appsflyer.internal;

import com.appsflyer.AFLogger;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFg1bSDK {
    private static String getCurrencyIso4217Code(String str) {
        StringBuilder sb2 = new StringBuilder();
        for (int i5 = 0; i5 < str.length(); i5++) {
            if (i5 == 0 || i5 == str.length() - 1) {
                sb2.append(str.charAt(i5));
            } else {
                sb2.append("*");
            }
        }
        return sb2.toString();
    }

    public static void getMediationNetwork(String str, JSONObject jSONObject) {
        if (jSONObject != null) {
            try {
                if (jSONObject.has("appsflyerKey")) {
                    jSONObject.put("appsflyerKey", getCurrencyIso4217Code(jSONObject.getString("appsflyerKey")));
                }
                if (jSONObject.has("tcstring")) {
                    jSONObject.put("tcstring", getMonetizationNetwork("tcstring"));
                }
                if (jSONObject.has("referrer")) {
                    jSONObject.put("referrer", getMonetizationNetwork("referrer"));
                }
                AFLogger aFLogger = AFLogger.INSTANCE;
                AFg1cSDK aFg1cSDK = AFg1cSDK.OTHER;
                StringBuilder sb2 = new StringBuilder();
                sb2.append(str);
                sb2.append(jSONObject);
                aFLogger.i(aFg1cSDK, sb2.toString());
            } catch (JSONException e9) {
                AFLogger.INSTANCE.e(AFg1cSDK.OTHER, "Not able to log the payload", e9);
            }
        }
    }

    public static String getMonetizationNetwork(String str) {
        if (str.length() <= 20) {
            return str;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str.substring(0, 10));
        sb2.append("...");
        return sb2.toString();
    }
}
