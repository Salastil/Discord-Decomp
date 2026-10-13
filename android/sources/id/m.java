package id;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class m extends j {
    public static final Parcelable.Creator<m> CREATOR = new gd.a(15);

    /* renamed from: e, reason: collision with root package name */
    public final String f10645e;

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f10646i;

    public m(byte[] bArr, String str) {
        super("PRIV");
        this.f10645e = str;
        this.f10646i = bArr;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && m.class == obj.getClass()) {
            m mVar = (m) obj;
            if (d0.a(this.f10645e, mVar.f10645e) && Arrays.equals(this.f10646i, mVar.f10646i)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f10645e;
        return Arrays.hashCode(this.f10646i) + ((527 + (str != null ? str.hashCode() : 0)) * 31);
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": owner=" + this.f10645e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10645e);
        parcel.writeByteArray(this.f10646i);
    }

    public m(Parcel parcel) {
        super("PRIV");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10645e = readString;
        this.f10646i = parcel.createByteArray();
    }
}
