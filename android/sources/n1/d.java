package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class d extends c {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public d(String jsonString) {
        super("androidx.credentials.TYPE_DIGITAL_CREDENTIAL", r0);
        Intrinsics.checkNotNullParameter(jsonString, "responseJson");
        Intrinsics.checkNotNullParameter(jsonString, "responseJson");
        Bundle bundle = new Bundle();
        bundle.putString("androidx.credentials.BUNDLE_KEY_RESPONSE_JSON", jsonString);
        Intrinsics.checkNotNullParameter(jsonString, "jsonString");
        if (jsonString.length() != 0) {
            try {
                new JSONObject(jsonString);
                return;
            } catch (Exception unused) {
            }
        }
        throw new IllegalArgumentException("responseJson must not be empty, and must be a valid JSON");
    }
}
