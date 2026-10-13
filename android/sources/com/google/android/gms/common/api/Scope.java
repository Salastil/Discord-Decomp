package com.google.android.gms.common.api;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import cf.a;
import com.google.android.gms.common.internal.ReflectedParcelable;
import ys.l;
import ze.q;

/* loaded from: classes3.dex */
public final class Scope extends a implements ReflectedParcelable {

    @NonNull
    public static final Parcelable.Creator<Scope> CREATOR = new q(2);

    /* renamed from: d, reason: collision with root package name */
    public final int f5652d;

    /* renamed from: e, reason: collision with root package name */
    public final String f5653e;

    public Scope(int i5, String str) {
        t.e(str, "scopeUri must not be null or empty");
        this.f5652d = i5;
        this.f5653e = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Scope)) {
            return false;
        }
        return this.f5653e.equals(((Scope) obj).f5653e);
    }

    public final int hashCode() {
        return this.f5653e.hashCode();
    }

    public final String toString() {
        return this.f5653e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f5652d);
        l.D(this.f5653e, parcel, 2);
        l.J(I, parcel);
    }
}
