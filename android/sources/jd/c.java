package jd;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import java.util.Locale;
import ke.d0;

/* loaded from: classes3.dex */
public final class c implements Parcelable {
    public static final Parcelable.Creator<c> CREATOR = new gd.a(21);

    /* renamed from: d, reason: collision with root package name */
    public final long f12710d;

    /* renamed from: e, reason: collision with root package name */
    public final long f12711e;

    /* renamed from: i, reason: collision with root package name */
    public final int f12712i;

    public c(int i5, long j, long j5) {
        ke.b.g(j < j5);
        this.f12710d = j;
        this.f12711e = j5;
        this.f12712i = i5;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && c.class == obj.getClass()) {
            c cVar = (c) obj;
            if (this.f12710d == cVar.f12710d && this.f12711e == cVar.f12711e && this.f12712i == cVar.f12712i) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Long.valueOf(this.f12710d), Long.valueOf(this.f12711e), Integer.valueOf(this.f12712i)});
    }

    public final String toString() {
        int i5 = d0.a;
        Locale locale = Locale.US;
        StringBuilder n6 = k0.d.n(this.f12710d, "Segment: startTimeMs=", ", endTimeMs=");
        n6.append(this.f12711e);
        n6.append(", speedDivisor=");
        n6.append(this.f12712i);
        return n6.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeLong(this.f12710d);
        parcel.writeLong(this.f12711e);
        parcel.writeInt(this.f12712i);
    }
}
