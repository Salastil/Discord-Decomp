package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class f extends c {

    /* renamed from: b, reason: collision with root package name */
    public final String f14715b;

    public f(String jsonString, Bundle bundle) {
        super("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", bundle);
        this.f14715b = jsonString;
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
            throw new IllegalArgumentException("registrationResponseJson must not be empty, and must be a valid JSON");
        }
    }
}
