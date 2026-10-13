package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class u extends bq.b {

    /* renamed from: i, reason: collision with root package name */
    public final String f14726i;

    public u(String jsonString, Bundle bundle) {
        super("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", bundle);
        this.f14726i = jsonString;
        Intrinsics.checkNotNullParameter(jsonString, "jsonString");
        boolean z5 = false;
        if (jsonString.length() != 0) {
            try {
                new JSONObject(jsonString);
                z5 = true;
            } catch (Exception unused) {
            }
        }
        if (!z5) {
            throw new IllegalArgumentException("authenticationResponseJson must not be empty, and must be a valid JSON");
        }
    }
}
