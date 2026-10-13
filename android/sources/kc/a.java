package kc;

import android.os.Parcel;
import android.os.Parcelable;
import ks.n;

/* loaded from: classes3.dex */
public final class a implements dd.b {
    public static final Parcelable.Creator<a> CREATOR = new gd.a(23);

    /* renamed from: d, reason: collision with root package name */
    public final long f13244d;

    public a(long j) {
        this.f13244d = j;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof a) {
            return this.f13244d == ((a) obj).f13244d;
        }
        return false;
    }

    public final int hashCode() {
        return n.p(this.f13244d);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Creation time: ");
        long j = this.f13244d;
        sb2.append(j == -2082844800000L ? "unset" : Long.valueOf(j));
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeLong(this.f13244d);
    }

    public a(Parcel parcel) {
        this.f13244d = parcel.readLong();
    }
}
