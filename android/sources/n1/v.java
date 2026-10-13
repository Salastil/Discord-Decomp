package n1;

import android.os.Bundle;
import android.util.Log;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class v extends w {

    /* renamed from: c, reason: collision with root package name */
    public static final List f14727c = c0.g("rpId", "userId", "allAcceptedCredentialIds");

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public v(String requestJson) {
        super("androidx.credentials.SIGNAL_ALL_ACCEPTED_CREDENTIALS_REQUEST_TYPE", requestJson, requestData);
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Bundle requestData = new Bundle();
        requestData.putString("androidx.credentials.signal_request_json_key", requestJson);
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(requestData, "requestData");
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        try {
            JSONObject jSONObject = new JSONObject(requestJson);
            Iterator it = f14727c.iterator();
            while (true) {
                if (it.hasNext()) {
                    String str = (String) it.next();
                    if (!jSONObject.has(str)) {
                        Log.e("SignalAcceptedIdsReq", "Request json is missing required key " + str);
                        break;
                    }
                } else {
                    String string = jSONObject.getString("userId");
                    Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                    if (io.sentry.config.a.v(string)) {
                        JSONArray jSONArray = jSONObject.getJSONArray("allAcceptedCredentialIds");
                        int length = jSONArray.length();
                        for (int i5 = 0; i5 < length; i5++) {
                            Object obj = jSONArray.get(i5);
                            if ((obj instanceof String) && io.sentry.config.a.v((String) obj)) {
                            }
                        }
                        return;
                    }
                }
            }
        } catch (Exception unused) {
        }
        throw new IllegalArgumentException(k0.d.h('\'', "Structural/type validation failed for JSON: '", requestJson).toString());
    }
}
