package id;

import android.os.Parcel;
import android.os.Parcelable;
import ke.d0;

/* loaded from: classes3.dex */
public final class o extends j {
    public static final Parcelable.Creator<o> CREATOR = new gd.a(17);

    /* renamed from: e, reason: collision with root package name */
    public final String f10650e;

    /* renamed from: i, reason: collision with root package name */
    public final String f10651i;

    public o(String str, String str2, String str3) {
        super(str);
        this.f10650e = str2;
        this.f10651i = str3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && o.class == obj.getClass()) {
            o oVar = (o) obj;
            if (this.f10636d.equals(oVar.f10636d) && d0.a(this.f10650e, oVar.f10650e) && d0.a(this.f10651i, oVar.f10651i)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int d6 = a3.e.d(527, 31, this.f10636d);
        String str = this.f10650e;
        int hashCode = (d6 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f10651i;
        return hashCode + (str2 != null ? str2.hashCode() : 0);
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": url=" + this.f10651i;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10636d);
        parcel.writeString(this.f10650e);
        parcel.writeString(this.f10651i);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public o(Parcel parcel) {
        super(r0);
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10650e = parcel.readString();
        this.f10651i = parcel.readString();
    }
}
