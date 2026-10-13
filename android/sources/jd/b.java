package jd;

import android.os.Parcel;
import android.os.Parcelable;
import ks.n;

/* loaded from: classes3.dex */
public final class b implements dd.b {
    public static final Parcelable.Creator<b> CREATOR = new gd.a(19);

    /* renamed from: d, reason: collision with root package name */
    public final long f12705d;

    /* renamed from: e, reason: collision with root package name */
    public final long f12706e;

    /* renamed from: i, reason: collision with root package name */
    public final long f12707i;

    /* renamed from: v, reason: collision with root package name */
    public final long f12708v;

    /* renamed from: w, reason: collision with root package name */
    public final long f12709w;

    public b(long j, long j5, long j7, long j10, long j11) {
        this.f12705d = j;
        this.f12706e = j5;
        this.f12707i = j7;
        this.f12708v = j10;
        this.f12709w = j11;
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
            if (this.f12705d == bVar.f12705d && this.f12706e == bVar.f12706e && this.f12707i == bVar.f12707i && this.f12708v == bVar.f12708v && this.f12709w == bVar.f12709w) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return n.p(this.f12709w) + ((n.p(this.f12708v) + ((n.p(this.f12707i) + ((n.p(this.f12706e) + ((n.p(this.f12705d) + 527) * 31)) * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "Motion photo metadata: photoStartPosition=" + this.f12705d + ", photoSize=" + this.f12706e + ", photoPresentationTimestampUs=" + this.f12707i + ", videoStartPosition=" + this.f12708v + ", videoSize=" + this.f12709w;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeLong(this.f12705d);
        parcel.writeLong(this.f12706e);
        parcel.writeLong(this.f12707i);
        parcel.writeLong(this.f12708v);
        parcel.writeLong(this.f12709w);
    }

    public b(Parcel parcel) {
        this.f12705d = parcel.readLong();
        this.f12706e = parcel.readLong();
        this.f12707i = parcel.readLong();
        this.f12708v = parcel.readLong();
        this.f12709w = parcel.readLong();
    }
}
