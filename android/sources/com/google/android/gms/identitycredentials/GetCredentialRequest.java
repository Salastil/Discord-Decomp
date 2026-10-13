package com.google.android.gms.identitycredentials;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import cf.a;
import com.google.android.gms.common.internal.ReflectedParcelable;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import sf.c;
import ys.l;

@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0007\u0018\u00002\u00020\u00012\u00020\u0002B\u0011\b\u0017\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u000f\u0010\u0007\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Lcom/google/android/gms/identitycredentials/GetCredentialRequest;", "Lcf/a;", "Lcom/google/android/gms/common/internal/ReflectedParcelable;", "Landroid/os/Bundle;", "bundle", "<init>", "(Landroid/os/Bundle;)V", "toBundle", "()Landroid/os/Bundle;", "java.com.google.android.gmscore.integ.client.identity_credentials_identity_credentials"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class GetCredentialRequest extends a implements ReflectedParcelable {

    @NotNull
    public static final Parcelable.Creator<GetCredentialRequest> CREATOR = new c(9);

    /* renamed from: d, reason: collision with root package name */
    public final List f5681d;

    /* renamed from: e, reason: collision with root package name */
    public final Bundle f5682e;

    /* renamed from: i, reason: collision with root package name */
    public final String f5683i;

    /* renamed from: v, reason: collision with root package name */
    public final ResultReceiver f5684v;

    public GetCredentialRequest(ArrayList credentialOptions, Bundle data, String str, ResultReceiver resultReceiver) {
        Intrinsics.checkNotNullParameter(credentialOptions, "credentialOptions");
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(resultReceiver, "resultReceiver");
        this.f5681d = credentialOptions;
        this.f5682e = data;
        this.f5683i = str;
        this.f5684v = resultReceiver;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int i5) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int I = l.I(20293, dest);
        l.G(dest, 1, this.f5681d);
        l.z(dest, 2, this.f5682e);
        l.D(this.f5683i, dest, 3);
        l.C(dest, 4, this.f5684v, i5);
        l.J(I, dest);
    }
}
