package n1;

import android.os.Bundle;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class s extends i {

    /* renamed from: e, reason: collision with root package name */
    public final String f14725e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public s(String jsonString) {
        super("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", r2, r3, true, allowedProviders);
        o0 allowedProviders = o0.f13515d;
        Intrinsics.checkNotNullParameter(jsonString, "requestJson");
        Intrinsics.checkNotNullParameter(allowedProviders, "allowedProviders");
        Intrinsics.checkNotNullParameter(jsonString, "requestJson");
        Bundle bundle = new Bundle();
        bundle.putString("androidx.credentials.BUNDLE_KEY_SUBTYPE", "androidx.credentials.BUNDLE_VALUE_SUBTYPE_GET_PUBLIC_KEY_CREDENTIAL_OPTION");
        bundle.putString("androidx.credentials.BUNDLE_KEY_REQUEST_JSON", jsonString);
        bundle.putByteArray("androidx.credentials.BUNDLE_KEY_CLIENT_DATA_HASH", null);
        Intrinsics.checkNotNullParameter(jsonString, "requestJson");
        Bundle bundle2 = new Bundle();
        bundle2.putString("androidx.credentials.BUNDLE_KEY_SUBTYPE", "androidx.credentials.BUNDLE_VALUE_SUBTYPE_GET_PUBLIC_KEY_CREDENTIAL_OPTION");
        bundle2.putString("androidx.credentials.BUNDLE_KEY_REQUEST_JSON", jsonString);
        bundle2.putByteArray("androidx.credentials.BUNDLE_KEY_CLIENT_DATA_HASH", null);
        this.f14725e = jsonString;
        Intrinsics.checkNotNullParameter(jsonString, "jsonString");
        if (jsonString.length() != 0) {
            try {
                new JSONObject(jsonString);
                return;
            } catch (Exception unused) {
            }
        }
        throw new IllegalArgumentException("requestJson must not be empty, and must be a valid JSON");
    }
}
