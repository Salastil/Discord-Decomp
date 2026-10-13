package org.chromium.net;

import org.json.JSONException;
import org.json.JSONObject;
import s4.h;

/* loaded from: classes.dex */
public abstract class d {
    public static JSONObject a(JSONObject jSONObject, String str) {
        JSONObject optJSONObject = jSONObject.optJSONObject(str);
        if (optJSONObject != null) {
            return optJSONObject;
        }
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject.put(str, jSONObject2);
            return jSONObject2;
        } catch (JSONException e9) {
            throw new IllegalArgumentException(h.f("Failed adding a default object for key [", str, "]"), e9);
        }
    }
}
