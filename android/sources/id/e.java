package id;

import android.os.Parcel;
import android.os.Parcelable;
import ke.d0;

/* loaded from: classes3.dex */
public final class e extends j {
    public static final Parcelable.Creator<e> CREATOR = new gd.a(11);

    /* renamed from: e, reason: collision with root package name */
    public final String f10626e;

    /* renamed from: i, reason: collision with root package name */
    public final String f10627i;

    /* renamed from: v, reason: collision with root package name */
    public final String f10628v;

    public e(String str, String str2, String str3) {
        super("COMM");
        this.f10626e = str;
        this.f10627i = str2;
        this.f10628v = str3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && e.class == obj.getClass()) {
            e eVar = (e) obj;
            if (d0.a(this.f10627i, eVar.f10627i) && d0.a(this.f10626e, eVar.f10626e) && d0.a(this.f10628v, eVar.f10628v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f10626e;
        int hashCode = (527 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f10627i;
        int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f10628v;
        return hashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": language=" + this.f10626e + ", description=" + this.f10627i;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10636d);
        parcel.writeString(this.f10626e);
        parcel.writeString(this.f10628v);
    }

    public e(Parcel parcel) {
        super("COMM");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10626e = readString;
        this.f10627i = parcel.readString();
        this.f10628v = parcel.readString();
    }
}
