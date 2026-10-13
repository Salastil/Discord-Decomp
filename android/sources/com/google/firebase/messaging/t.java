package com.google.firebase.messaging;

import android.text.TextUtils;
import android.util.Log;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class t {

    /* renamed from: d, reason: collision with root package name */
    public static final long f6265d = TimeUnit.DAYS.toMillis(7);
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f6266b;

    /* renamed from: c, reason: collision with root package name */
    public final long f6267c;

    public t(long j, String str, String str2) {
        this.a = str;
        this.f6266b = str2;
        this.f6267c = j;
    }

    public static String a(long j, String str, String str2) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("token", str);
            jSONObject.put("appVersion", str2);
            jSONObject.put("timestamp", j);
            return jSONObject.toString();
        } catch (JSONException e9) {
            Log.w("FirebaseMessaging", "Failed to encode token: " + e9);
            return null;
        }
    }

    public static t b(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (!str.startsWith("{")) {
            return new t(0L, str, null);
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            return new t(jSONObject.getLong("timestamp"), jSONObject.getString("token"), jSONObject.getString("appVersion"));
        } catch (JSONException e9) {
            Log.w("FirebaseMessaging", "Failed to parse token: " + e9);
            return null;
        }
    }
}
