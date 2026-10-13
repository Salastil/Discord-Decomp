package se;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import java.util.Arrays;
import rf.s0;
import ys.l;

/* loaded from: classes3.dex */
public final class b extends cf.a {

    @NonNull
    public static final Parcelable.Creator<b> CREATOR = new s0(25);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17963d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17964e;

    public b(boolean z5, String str) {
        if (z5) {
            t.g(str);
        }
        this.f17963d = z5;
        this.f17964e = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.f17963d == bVar.f17963d && t.j(this.f17964e, bVar.f17964e);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17963d), this.f17964e});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f17963d ? 1 : 0);
        l.D(this.f17964e, parcel, 2);
        l.J(I, parcel);
    }
}
