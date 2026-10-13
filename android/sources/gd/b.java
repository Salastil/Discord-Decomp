package gd;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import ei.d;
import hc.u0;
import java.util.Arrays;
import ke.d0;
import ke.w;

/* loaded from: classes3.dex */
public final class b implements dd.b {
    public static final Parcelable.Creator<b> CREATOR = new a(0);
    public final byte[] E;

    /* renamed from: d, reason: collision with root package name */
    public final int f9147d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9148e;

    /* renamed from: i, reason: collision with root package name */
    public final String f9149i;

    /* renamed from: v, reason: collision with root package name */
    public final int f9150v;

    /* renamed from: w, reason: collision with root package name */
    public final int f9151w;

    /* renamed from: x, reason: collision with root package name */
    public final int f9152x;

    /* renamed from: y, reason: collision with root package name */
    public final int f9153y;

    public b(int i5, String str, String str2, int i6, int i10, int i11, int i12, byte[] bArr) {
        this.f9147d = i5;
        this.f9148e = str;
        this.f9149i = str2;
        this.f9150v = i6;
        this.f9151w = i10;
        this.f9152x = i11;
        this.f9153y = i12;
        this.E = bArr;
    }

    public static b a(w wVar) {
        int g6 = wVar.g();
        String s2 = wVar.s(wVar.g(), d.a);
        String s5 = wVar.s(wVar.g(), d.f8100c);
        int g10 = wVar.g();
        int g11 = wVar.g();
        int g12 = wVar.g();
        int g13 = wVar.g();
        int g14 = wVar.g();
        byte[] bArr = new byte[g14];
        wVar.e(bArr, 0, g14);
        return new b(g6, s2, s5, g10, g11, g12, g13, bArr);
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
            if (this.f9147d == bVar.f9147d && this.f9148e.equals(bVar.f9148e) && this.f9149i.equals(bVar.f9149i) && this.f9150v == bVar.f9150v && this.f9151w == bVar.f9151w && this.f9152x == bVar.f9152x && this.f9153y == bVar.f9153y && Arrays.equals(this.E, bVar.E)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(this.E) + ((((((((e.d(e.d((527 + this.f9147d) * 31, 31, this.f9148e), 31, this.f9149i) + this.f9150v) * 31) + this.f9151w) * 31) + this.f9152x) * 31) + this.f9153y) * 31);
    }

    @Override // dd.b
    public final void o(u0 u0Var) {
        u0Var.a(this.E, this.f9147d);
    }

    public final String toString() {
        return "Picture: mimeType=" + this.f9148e + ", description=" + this.f9149i;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f9147d);
        parcel.writeString(this.f9148e);
        parcel.writeString(this.f9149i);
        parcel.writeInt(this.f9150v);
        parcel.writeInt(this.f9151w);
        parcel.writeInt(this.f9152x);
        parcel.writeInt(this.f9153y);
        parcel.writeByteArray(this.E);
    }

    public b(Parcel parcel) {
        this.f9147d = parcel.readInt();
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f9148e = readString;
        this.f9149i = parcel.readString();
        this.f9150v = parcel.readInt();
        this.f9151w = parcel.readInt();
        this.f9152x = parcel.readInt();
        this.f9153y = parcel.readInt();
        this.E = parcel.createByteArray();
    }
}
