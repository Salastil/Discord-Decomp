package n1;

import android.os.Bundle;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class y extends w {

    /* renamed from: c, reason: collision with root package name */
    public static final List f14729c = c0.g("rpId", "userId", StackTraceHelper.NAME_KEY, "displayName");

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0045, code lost:
    
        r0 = r0.getString("userId");
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, "getString(...)");
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0055, code lost:
    
        if (io.sentry.config.a.v(r0) == false) goto L12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0057, code lost:
    
        return;
     */
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public y(String requestJson) {
        super("androidx.credentials.SIGNAL_CURRENT_USER_DETAILS_STATE_REQUEST_TYPE", requestJson, requestData);
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        List list = v.f14727c;
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Bundle requestData = new Bundle();
        requestData.putString("androidx.credentials.signal_request_json_key", requestJson);
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(requestData, "requestData");
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        try {
            JSONObject jSONObject = new JSONObject(requestJson);
            Iterator it = f14729c.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                } else if (!jSONObject.has((String) it.next())) {
                    break;
                }
            }
        } catch (Exception unused) {
        }
        throw new IllegalArgumentException(k0.d.h('\'', "Structural/type validation failed for JSON: '", requestJson).toString());
    }
}
