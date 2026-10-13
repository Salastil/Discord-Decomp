package n1;

import android.os.Bundle;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class b {
    public final Bundle a;

    /* renamed from: b, reason: collision with root package name */
    public final Bundle f14712b;

    /* renamed from: c, reason: collision with root package name */
    public final e4.l f14713c;

    public b(Bundle credentialData, Bundle candidateQueryData, e4.l displayInfo) {
        Intrinsics.checkNotNullParameter("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", "type");
        Intrinsics.checkNotNullParameter(credentialData, "credentialData");
        Intrinsics.checkNotNullParameter(candidateQueryData, "candidateQueryData");
        Intrinsics.checkNotNullParameter(displayInfo, "displayInfo");
        this.a = credentialData;
        this.f14712b = candidateQueryData;
        this.f14713c = displayInfo;
        credentialData.putBoolean("androidx.credentials.BUNDLE_KEY_IS_AUTO_SELECT_ALLOWED", false);
        credentialData.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IMMEDIATELY_AVAILABLE_CREDENTIALS", false);
        candidateQueryData.putBoolean("androidx.credentials.BUNDLE_KEY_IS_AUTO_SELECT_ALLOWED", false);
    }
}
