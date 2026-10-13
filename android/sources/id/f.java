package id;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class f extends j {
    public static final Parcelable.Creator<f> CREATOR = new gd.a(12);

    /* renamed from: e, reason: collision with root package name */
    public final String f10629e;

    /* renamed from: i, reason: collision with root package name */
    public final String f10630i;

    /* renamed from: v, reason: collision with root package name */
    public final String f10631v;

    /* renamed from: w, reason: collision with root package name */
    public final byte[] f10632w;

    public f(String str, String str2, String str3, byte[] bArr) {
        super("GEOB");
        this.f10629e = str;
        this.f10630i = str2;
        this.f10631v = str3;
        this.f10632w = bArr;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && f.class == obj.getClass()) {
            f fVar = (f) obj;
            if (d0.a(this.f10629e, fVar.f10629e) && d0.a(this.f10630i, fVar.f10630i) && d0.a(this.f10631v, fVar.f10631v) && Arrays.equals(this.f10632w, fVar.f10632w)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f10629e;
        int hashCode = (527 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f10630i;
        int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f10631v;
        return Arrays.hashCode(this.f10632w) + ((hashCode2 + (str3 != null ? str3.hashCode() : 0)) * 31);
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": mimeType=" + this.f10629e + ", filename=" + this.f10630i + ", description=" + this.f10631v;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10629e);
        parcel.writeString(this.f10630i);
        parcel.writeString(this.f10631v);
        parcel.writeByteArray(this.f10632w);
    }

    public f(Parcel parcel) {
        super("GEOB");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10629e = readString;
        this.f10630i = parcel.readString();
        this.f10631v = parcel.readString();
        this.f10632w = parcel.createByteArray();
    }
}
