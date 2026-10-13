package id;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class c extends j {
    public static final Parcelable.Creator<c> CREATOR = new gd.a(9);

    /* renamed from: e, reason: collision with root package name */
    public final String f10615e;

    /* renamed from: i, reason: collision with root package name */
    public final int f10616i;

    /* renamed from: v, reason: collision with root package name */
    public final int f10617v;

    /* renamed from: w, reason: collision with root package name */
    public final long f10618w;

    /* renamed from: x, reason: collision with root package name */
    public final long f10619x;

    /* renamed from: y, reason: collision with root package name */
    public final j[] f10620y;

    public c(String str, int i5, int i6, long j, long j5, j[] jVarArr) {
        super("CHAP");
        this.f10615e = str;
        this.f10616i = i5;
        this.f10617v = i6;
        this.f10618w = j;
        this.f10619x = j5;
        this.f10620y = jVarArr;
    }

    @Override // id.j, android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && c.class == obj.getClass()) {
            c cVar = (c) obj;
            if (this.f10616i == cVar.f10616i && this.f10617v == cVar.f10617v && this.f10618w == cVar.f10618w && this.f10619x == cVar.f10619x && d0.a(this.f10615e, cVar.f10615e) && Arrays.equals(this.f10620y, cVar.f10620y)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = (((((((527 + this.f10616i) * 31) + this.f10617v) * 31) + ((int) this.f10618w)) * 31) + ((int) this.f10619x)) * 31;
        String str = this.f10615e;
        return i5 + (str != null ? str.hashCode() : 0);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10615e);
        parcel.writeInt(this.f10616i);
        parcel.writeInt(this.f10617v);
        parcel.writeLong(this.f10618w);
        parcel.writeLong(this.f10619x);
        j[] jVarArr = this.f10620y;
        parcel.writeInt(jVarArr.length);
        for (j jVar : jVarArr) {
            parcel.writeParcelable(jVar, 0);
        }
    }

    public c(Parcel parcel) {
        super("CHAP");
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10615e = readString;
        this.f10616i = parcel.readInt();
        this.f10617v = parcel.readInt();
        this.f10618w = parcel.readLong();
        this.f10619x = parcel.readLong();
        int readInt = parcel.readInt();
        this.f10620y = new j[readInt];
        for (int i6 = 0; i6 < readInt; i6++) {
            this.f10620y[i6] = (j) parcel.readParcelable(j.class.getClassLoader());
        }
    }
}
