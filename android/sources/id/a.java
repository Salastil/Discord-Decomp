package id;

import android.os.Parcel;
import android.os.Parcelable;
import hc.u0;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class a extends j {
    public static final Parcelable.Creator<a> CREATOR = new gd.a(7);

    /* renamed from: e, reason: collision with root package name */
    public final String f10610e;

    /* renamed from: i, reason: collision with root package name */
    public final String f10611i;

    /* renamed from: v, reason: collision with root package name */
    public final int f10612v;

    /* renamed from: w, reason: collision with root package name */
    public final byte[] f10613w;

    public a(String str, String str2, int i5, byte[] bArr) {
        super("APIC");
        this.f10610e = str;
        this.f10611i = str2;
        this.f10612v = i5;
        this.f10613w = bArr;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && a.class == obj.getClass()) {
            a aVar = (a) obj;
            if (this.f10612v == aVar.f10612v && d0.a(this.f10610e, aVar.f10610e) && d0.a(this.f10611i, aVar.f10611i) && Arrays.equals(this.f10613w, aVar.f10613w)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = (527 + this.f10612v) * 31;
        String str = this.f10610e;
        int hashCode = (i5 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f10611i;
        return Arrays.hashCode(this.f10613w) + ((hashCode + (str2 != null ? str2.hashCode() : 0)) * 31);
    }

    @Override // dd.b
    public final void o(u0 u0Var) {
        u0Var.a(this.f10613w, this.f10612v);
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": mimeType=" + this.f10610e + ", description=" + this.f10611i;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10610e);
        parcel.writeString(this.f10611i);
        parcel.writeInt(this.f10612v);
        parcel.writeByteArray(this.f10613w);
    }

    public a(Parcel parcel) {
        super("APIC");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10610e = readString;
        this.f10611i = parcel.readString();
        this.f10612v = parcel.readInt();
        this.f10613w = parcel.createByteArray();
    }
}
