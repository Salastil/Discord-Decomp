package id;

import android.os.Parcel;
import android.os.Parcelable;
import ke.d0;

/* loaded from: classes3.dex */
public final class k extends j {
    public static final Parcelable.Creator<k> CREATOR = new gd.a(13);

    /* renamed from: e, reason: collision with root package name */
    public final String f10637e;

    /* renamed from: i, reason: collision with root package name */
    public final String f10638i;

    /* renamed from: v, reason: collision with root package name */
    public final String f10639v;

    public k(String str, String str2, String str3) {
        super("----");
        this.f10637e = str;
        this.f10638i = str2;
        this.f10639v = str3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && k.class == obj.getClass()) {
            k kVar = (k) obj;
            if (d0.a(this.f10638i, kVar.f10638i) && d0.a(this.f10637e, kVar.f10637e) && d0.a(this.f10639v, kVar.f10639v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f10637e;
        int hashCode = (527 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f10638i;
        int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f10639v;
        return hashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": domain=" + this.f10637e + ", description=" + this.f10638i;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10636d);
        parcel.writeString(this.f10637e);
        parcel.writeString(this.f10639v);
    }

    public k(Parcel parcel) {
        super("----");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10637e = readString;
        this.f10638i = parcel.readString();
        this.f10639v = parcel.readString();
    }
}
