package jd;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class a implements dd.b {
    public static final Parcelable.Creator<a> CREATOR = new gd.a(18);

    /* renamed from: d, reason: collision with root package name */
    public final String f12701d;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f12702e;

    /* renamed from: i, reason: collision with root package name */
    public final int f12703i;

    /* renamed from: v, reason: collision with root package name */
    public final int f12704v;

    public a(String str, byte[] bArr, int i5, int i6) {
        this.f12701d = str;
        this.f12702e = bArr;
        this.f12703i = i5;
        this.f12704v = i6;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && a.class == obj.getClass()) {
            a aVar = (a) obj;
            if (this.f12701d.equals(aVar.f12701d) && Arrays.equals(this.f12702e, aVar.f12702e) && this.f12703i == aVar.f12703i && this.f12704v == aVar.f12704v) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((((Arrays.hashCode(this.f12702e) + a3.e.d(527, 31, this.f12701d)) * 31) + this.f12703i) * 31) + this.f12704v;
    }

    public final String toString() {
        String n6;
        byte[] bArr = this.f12702e;
        int i5 = this.f12704v;
        if (i5 != 1) {
            if (i5 == 23) {
                int i6 = d0.a;
                ke.b.g(bArr.length == 4);
                n6 = String.valueOf(Float.intBitsToFloat((bArr[3] & 255) | (bArr[0] << 24) | ((bArr[1] & 255) << 16) | ((bArr[2] & 255) << 8)));
            } else if (i5 != 67) {
                int i10 = d0.a;
                StringBuilder sb2 = new StringBuilder(bArr.length * 2);
                for (int i11 = 0; i11 < bArr.length; i11++) {
                    sb2.append(Character.forDigit((bArr[i11] >> 4) & 15, 16));
                    sb2.append(Character.forDigit(bArr[i11] & 15, 16));
                }
                n6 = sb2.toString();
            } else {
                int i12 = d0.a;
                ke.b.g(bArr.length == 4);
                n6 = String.valueOf(bArr[3] | (bArr[0] << 24) | (bArr[1] << 16) | (bArr[2] << 8));
            }
        } else {
            n6 = d0.n(bArr);
        }
        return a3.e.n(new StringBuilder("mdta: key="), this.f12701d, ", value=", n6);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f12701d);
        parcel.writeByteArray(this.f12702e);
        parcel.writeInt(this.f12703i);
        parcel.writeInt(this.f12704v);
    }

    public a(Parcel parcel) {
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f12701d = readString;
        this.f12702e = parcel.createByteArray();
        this.f12703i = parcel.readInt();
        this.f12704v = parcel.readInt();
    }
}
