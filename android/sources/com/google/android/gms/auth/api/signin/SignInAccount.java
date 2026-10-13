package com.google.android.gms.auth.api.signin;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import cf.a;
import com.google.android.gms.common.internal.ReflectedParcelable;
import ue.c;
import ys.l;

/* loaded from: classes3.dex */
public class SignInAccount extends a implements ReflectedParcelable {

    @NonNull
    public static final Parcelable.Creator<SignInAccount> CREATOR = new c(2);

    /* renamed from: d, reason: collision with root package name */
    public final String f5631d;

    /* renamed from: e, reason: collision with root package name */
    public final GoogleSignInAccount f5632e;

    /* renamed from: i, reason: collision with root package name */
    public final String f5633i;

    public SignInAccount(String str, GoogleSignInAccount googleSignInAccount, String str2) {
        this.f5632e = googleSignInAccount;
        t.e(str, "8.3 and 8.4 SDKs require non-null email");
        this.f5631d = str;
        t.e(str2, "8.3 and 8.4 SDKs require non-null userId");
        this.f5633i = str2;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.D(this.f5631d, parcel, 4);
        l.C(parcel, 7, this.f5632e, i5);
        l.D(this.f5633i, parcel, 8);
        l.J(I, parcel);
    }
}
