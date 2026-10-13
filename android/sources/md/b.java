package md;

import android.os.Parcel;
import android.os.Parcelable;
import hc.g;
import ke.d0;

/* loaded from: classes3.dex */
public final class b implements Comparable, Parcelable, g {
    public static final Parcelable.Creator<b> CREATOR = new kf.b(3);

    /* renamed from: v, reason: collision with root package name */
    public static final String f14441v;

    /* renamed from: w, reason: collision with root package name */
    public static final String f14442w;

    /* renamed from: x, reason: collision with root package name */
    public static final String f14443x;

    /* renamed from: d, reason: collision with root package name */
    public final int f14444d;

    /* renamed from: e, reason: collision with root package name */
    public final int f14445e;

    /* renamed from: i, reason: collision with root package name */
    public final int f14446i;

    static {
        int i5 = d0.a;
        f14441v = Integer.toString(0, 36);
        f14442w = Integer.toString(1, 36);
        f14443x = Integer.toString(2, 36);
    }

    public b(int i5, int i6, int i10) {
        this.f14444d = i5;
        this.f14445e = i6;
        this.f14446i = i10;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        b bVar = (b) obj;
        int i5 = this.f14444d - bVar.f14444d;
        if (i5 != 0) {
            return i5;
        }
        int i6 = this.f14445e - bVar.f14445e;
        return i6 == 0 ? this.f14446i - bVar.f14446i : i6;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && b.class == obj.getClass()) {
            b bVar = (b) obj;
            if (this.f14444d == bVar.f14444d && this.f14445e == bVar.f14445e && this.f14446i == bVar.f14446i) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((this.f14444d * 31) + this.f14445e) * 31) + this.f14446i;
    }

    public final String toString() {
        return this.f14444d + "." + this.f14445e + "." + this.f14446i;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f14444d);
        parcel.writeInt(this.f14445e);
        parcel.writeInt(this.f14446i);
    }

    public b(Parcel parcel) {
        this.f14444d = parcel.readInt();
        this.f14445e = parcel.readInt();
        this.f14446i = parcel.readInt();
    }
}
