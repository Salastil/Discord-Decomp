package jd;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class d implements dd.b {
    public static final Parcelable.Creator<d> CREATOR = new gd.a(20);

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f12713d;

    public d(ArrayList arrayList) {
        this.f12713d = arrayList;
        boolean z5 = false;
        if (!arrayList.isEmpty()) {
            long j = ((c) arrayList.get(0)).f12711e;
            int i5 = 1;
            while (true) {
                if (i5 >= arrayList.size()) {
                    break;
                }
                if (((c) arrayList.get(i5)).f12710d < j) {
                    z5 = true;
                    break;
                } else {
                    j = ((c) arrayList.get(i5)).f12711e;
                    i5++;
                }
            }
        }
        ke.b.g(!z5);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || d.class != obj.getClass()) {
            return false;
        }
        return this.f12713d.equals(((d) obj).f12713d);
    }

    public final int hashCode() {
        return this.f12713d.hashCode();
    }

    public final String toString() {
        return "SlowMotion: segments=" + this.f12713d;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeList(this.f12713d);
    }
}
