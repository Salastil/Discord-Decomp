package kc;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class b implements dd.b {
    public static final Parcelable.Creator<b> CREATOR = new gd.a(24);

    /* renamed from: d, reason: collision with root package name */
    public final float f13245d;

    /* renamed from: e, reason: collision with root package name */
    public final float f13246e;

    public b(float f2, float f10) {
        ke.b.f("Invalid latitude or longitude", f2 >= -90.0f && f2 <= 90.0f && f10 >= -180.0f && f10 <= 180.0f);
        this.f13245d = f2;
        this.f13246e = f10;
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
            if (this.f13245d == bVar.f13245d && this.f13246e == bVar.f13246e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Float.valueOf(this.f13246e).hashCode() + ((Float.valueOf(this.f13245d).hashCode() + 527) * 31);
    }

    public final String toString() {
        return "xyz: latitude=" + this.f13245d + ", longitude=" + this.f13246e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeFloat(this.f13245d);
        parcel.writeFloat(this.f13246e);
    }

    public b(Parcel parcel) {
        this.f13245d = parcel.readFloat();
        this.f13246e = parcel.readFloat();
    }
}
