package com.appsflyer.internal;

import androidx.annotation.NonNull;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class AFg1hSDK {
    public static JSONObject getCurrencyIso4217Code(Map<String, ?> map) {
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry<String, ?> entry : map.entrySet()) {
            try {
                jSONObject.put(entry.getKey(), getRevenue(entry.getValue()));
            } catch (JSONException unused) {
            }
        }
        return jSONObject;
    }

    public static JSONObject getMonetizationNetwork(String str) {
        if (str == null) {
            return null;
        }
        try {
            return new JSONObject(str);
        } catch (JSONException unused) {
            return null;
        }
    }

    private static Object getRevenue(Object obj) {
        if (obj == null) {
            return JSONObject.NULL;
        }
        if ((obj instanceof JSONArray) || (obj instanceof JSONObject) || obj.equals(JSONObject.NULL)) {
            return obj;
        }
        try {
            if (obj instanceof Collection) {
                JSONArray jSONArray = new JSONArray();
                Iterator it = ((Collection) obj).iterator();
                while (it.hasNext()) {
                    jSONArray.put(getRevenue(it.next()));
                }
                return jSONArray;
            }
            if (!obj.getClass().isArray()) {
                return obj instanceof Map ? getCurrencyIso4217Code((Map) obj) : ((obj instanceof Boolean) || (obj instanceof Byte) || (obj instanceof Character) || (obj instanceof Double) || (obj instanceof Float) || (obj instanceof Integer) || (obj instanceof Long) || (obj instanceof Short) || (obj instanceof String)) ? obj : obj.toString();
            }
            int length = Array.getLength(obj);
            JSONArray jSONArray2 = new JSONArray();
            for (int i5 = 0; i5 < length; i5++) {
                jSONArray2.put(getRevenue(Array.get(obj, i5)));
            }
            return jSONArray2;
        } catch (Exception unused) {
            return JSONObject.NULL;
        }
    }

    public static Map<String, Object> getMonetizationNetwork(@NonNull JSONObject jSONObject) {
        HashMap hashMap = new HashMap();
        Iterator<String> keys = jSONObject.keys();
        while (keys.hasNext()) {
            String next = keys.next();
            Object obj = jSONObject.get(next);
            if (obj instanceof JSONArray) {
                obj = getRevenue((JSONArray) obj);
            } else if (obj instanceof JSONObject) {
                obj = getMonetizationNetwork((JSONObject) obj);
            }
            hashMap.put(next, obj);
        }
        return hashMap;
    }

    private static List<Object> getRevenue(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < jSONArray.length(); i5++) {
            Object obj = jSONArray.get(i5);
            if (obj instanceof JSONArray) {
                obj = getRevenue((JSONArray) obj);
            } else if (obj instanceof JSONObject) {
                obj = getMonetizationNetwork((JSONObject) obj);
            }
            arrayList.add(obj);
        }
        return arrayList;
    }
}
