package se;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import java.util.Arrays;
import java.util.Objects;
import rf.s0;
import ys.l;

/* loaded from: classes3.dex */
public final class c extends cf.a {

    @NonNull
    public static final Parcelable.Creator<c> CREATOR = new s0(26);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17965d;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f17966e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17967i;

    public c(boolean z5, byte[] bArr, String str) {
        if (z5) {
            t.g(bArr);
            t.g(str);
        }
        this.f17965d = z5;
        this.f17966e = bArr;
        this.f17967i = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.f17965d == cVar.f17965d && Arrays.equals(this.f17966e, cVar.f17966e) && Objects.equals(this.f17967i, cVar.f17967i);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f17966e) + (Objects.hash(Boolean.valueOf(this.f17965d), this.f17967i) * 31);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f17965d ? 1 : 0);
        l.A(parcel, 2, this.f17966e);
        l.D(this.f17967i, parcel, 3);
        l.J(I, parcel);
    }
}
