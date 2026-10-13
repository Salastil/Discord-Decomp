package id;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class d extends j {
    public static final Parcelable.Creator<d> CREATOR = new gd.a(10);

    /* renamed from: e, reason: collision with root package name */
    public final String f10621e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f10622i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f10623v;

    /* renamed from: w, reason: collision with root package name */
    public final String[] f10624w;

    /* renamed from: x, reason: collision with root package name */
    public final j[] f10625x;

    public d(String str, boolean z5, boolean z6, String[] strArr, j[] jVarArr) {
        super("CTOC");
        this.f10621e = str;
        this.f10622i = z5;
        this.f10623v = z6;
        this.f10624w = strArr;
        this.f10625x = jVarArr;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && d.class == obj.getClass()) {
            d dVar = (d) obj;
            if (this.f10622i == dVar.f10622i && this.f10623v == dVar.f10623v && d0.a(this.f10621e, dVar.f10621e) && Arrays.equals(this.f10624w, dVar.f10624w) && Arrays.equals(this.f10625x, dVar.f10625x)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = (((527 + (this.f10622i ? 1 : 0)) * 31) + (this.f10623v ? 1 : 0)) * 31;
        String str = this.f10621e;
        return i5 + (str != null ? str.hashCode() : 0);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10621e);
        parcel.writeByte(this.f10622i ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.f10623v ? (byte) 1 : (byte) 0);
        parcel.writeStringArray(this.f10624w);
        j[] jVarArr = this.f10625x;
        parcel.writeInt(jVarArr.length);
        for (j jVar : jVarArr) {
            parcel.writeParcelable(jVar, 0);
        }
    }

    public d(Parcel parcel) {
        super("CTOC");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10621e = readString;
        this.f10622i = parcel.readByte() != 0;
        this.f10623v = parcel.readByte() != 0;
        this.f10624w = parcel.createStringArray();
        int readInt = parcel.readInt();
        this.f10625x = new j[readInt];
        for (int i6 = 0; i6 < readInt; i6++) {
            this.f10625x[i6] = (j) parcel.readParcelable(j.class.getClassLoader());
        }
    }
}
