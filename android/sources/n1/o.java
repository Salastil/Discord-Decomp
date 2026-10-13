package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class o extends bq.b {

    /* renamed from: i, reason: collision with root package name */
    public final String f14723i;

    public o(String jsonString, Bundle bundle) {
        super("androidx.credentials.TYPE_DIGITAL_CREDENTIAL", bundle);
        this.f14723i = jsonString;
        Intrinsics.checkNotNullParameter(jsonString, "jsonString");
        if (jsonString.length() != 0) {
            try {
                new JSONObject(jsonString);
                return;
            } catch (Exception unused) {
            }
        }
        throw new IllegalArgumentException("credentialJson must not be empty, and must be a valid JSON");
    }
}
