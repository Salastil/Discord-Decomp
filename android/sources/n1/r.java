package n1;

import android.os.Bundle;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class r extends i {

    /* renamed from: e, reason: collision with root package name */
    public final String f14724e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public r(String jsonString) {
        super("androidx.credentials.TYPE_DIGITAL_CREDENTIAL", requestData, candidateQueryData, false, allowedProviders);
        Intrinsics.checkNotNullParameter(jsonString, "requestJson");
        Intrinsics.checkNotNullParameter(jsonString, "requestJson");
        Bundle requestData = new Bundle();
        requestData.putString("androidx.credentials.BUNDLE_KEY_REQUEST_JSON", jsonString);
        Bundle candidateQueryData = new Bundle();
        o0 allowedProviders = o0.f13515d;
        Intrinsics.checkNotNullParameter(jsonString, "requestJson");
        Intrinsics.checkNotNullParameter(requestData, "requestData");
        Intrinsics.checkNotNullParameter(candidateQueryData, "candidateQueryData");
        Intrinsics.checkNotNullParameter(allowedProviders, "allowedProviders");
        this.f14724e = jsonString;
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
