package com.google.android.gms.auth.api.signin.internal;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import cf.a;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.common.internal.ReflectedParcelable;
import sf.c;
import ys.l;

/* loaded from: classes3.dex */
public final class SignInConfiguration extends a implements ReflectedParcelable {

    @NonNull
    public static final Parcelable.Creator<SignInConfiguration> CREATOR = new c(19);

    /* renamed from: d, reason: collision with root package name */
    public final String f5634d;

    /* renamed from: e, reason: collision with root package name */
    public final GoogleSignInOptions f5635e;

    public SignInConfiguration(String str, GoogleSignInOptions googleSignInOptions) {
        t.d(str);
        this.f5634d = str;
        this.f5635e = googleSignInOptions;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof SignInConfiguration)) {
            return false;
        }
        SignInConfiguration signInConfiguration = (SignInConfiguration) obj;
        GoogleSignInOptions googleSignInOptions = signInConfiguration.f5635e;
        if (this.f5634d.equals(signInConfiguration.f5634d)) {
            GoogleSignInOptions googleSignInOptions2 = this.f5635e;
            if (googleSignInOptions2 == null) {
                if (googleSignInOptions == null) {
                    return true;
                }
            } else if (googleSignInOptions2.equals(googleSignInOptions)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = 1 * 31;
        String str = this.f5634d;
        int hashCode = (i5 + (str == null ? 0 : str.hashCode())) * 31;
        GoogleSignInOptions googleSignInOptions = this.f5635e;
        return hashCode + (googleSignInOptions != null ? googleSignInOptions.hashCode() : 0);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.D(this.f5634d, parcel, 2);
        l.C(parcel, 5, this.f5635e, i5);
        l.J(I, parcel);
    }
}
