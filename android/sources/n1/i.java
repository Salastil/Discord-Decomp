package n1;

import android.os.Bundle;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class i {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Bundle f14718b;

    /* renamed from: c, reason: collision with root package name */
    public final Bundle f14719c;

    /* renamed from: d, reason: collision with root package name */
    public final Set f14720d;

    public i(String type, Bundle requestData, Bundle candidateQueryData, boolean z5, Set allowedProviders) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(requestData, "requestData");
        Intrinsics.checkNotNullParameter(candidateQueryData, "candidateQueryData");
        Intrinsics.checkNotNullParameter(allowedProviders, "allowedProviders");
        this.a = type;
        this.f14718b = requestData;
        this.f14719c = candidateQueryData;
        this.f14720d = allowedProviders;
        requestData.putBoolean("androidx.credentials.BUNDLE_KEY_IS_AUTO_SELECT_ALLOWED", z5);
        candidateQueryData.putBoolean("androidx.credentials.BUNDLE_KEY_IS_AUTO_SELECT_ALLOWED", z5);
        requestData.putInt("androidx.credentials.BUNDLE_KEY_TYPE_PRIORITY_VALUE", 100);
        candidateQueryData.putInt("androidx.credentials.BUNDLE_KEY_TYPE_PRIORITY_VALUE", 100);
    }
}
