package jd;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class e implements dd.b {
    public static final Parcelable.Creator<e> CREATOR = new gd.a(22);

    /* renamed from: d, reason: collision with root package name */
    public final float f12714d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12715e;

    public e(float f2, int i5) {
        this.f12714d = f2;
        this.f12715e = i5;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && e.class == obj.getClass()) {
            e eVar = (e) obj;
            if (this.f12714d == eVar.f12714d && this.f12715e == eVar.f12715e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((Float.valueOf(this.f12714d).hashCode() + 527) * 31) + this.f12715e;
    }

    public final String toString() {
        return "smta: captureFrameRate=" + this.f12714d + ", svcTemporalLayerCount=" + this.f12715e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeFloat(this.f12714d);
        parcel.writeInt(this.f12715e);
    }

    public e(Parcel parcel) {
        this.f12714d = parcel.readFloat();
        this.f12715e = parcel.readInt();
    }
}
