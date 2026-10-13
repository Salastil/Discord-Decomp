package id;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class l extends j {
    public static final Parcelable.Creator<l> CREATOR = new gd.a(14);

    /* renamed from: e, reason: collision with root package name */
    public final int f10640e;

    /* renamed from: i, reason: collision with root package name */
    public final int f10641i;

    /* renamed from: v, reason: collision with root package name */
    public final int f10642v;

    /* renamed from: w, reason: collision with root package name */
    public final int[] f10643w;

    /* renamed from: x, reason: collision with root package name */
    public final int[] f10644x;

    public l(int i5, int i6, int[] iArr, int[] iArr2, int i10) {
        super("MLLT");
        this.f10640e = i5;
        this.f10641i = i6;
        this.f10642v = i10;
        this.f10643w = iArr;
        this.f10644x = iArr2;
    }

    @Override // id.j, android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && l.class == obj.getClass()) {
            l lVar = (l) obj;
            if (this.f10640e == lVar.f10640e && this.f10641i == lVar.f10641i && this.f10642v == lVar.f10642v && Arrays.equals(this.f10643w, lVar.f10643w) && Arrays.equals(this.f10644x, lVar.f10644x)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f10644x) + ((Arrays.hashCode(this.f10643w) + ((((((527 + this.f10640e) * 31) + this.f10641i) * 31) + this.f10642v) * 31)) * 31);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f10640e);
        parcel.writeInt(this.f10641i);
        parcel.writeInt(this.f10642v);
        parcel.writeIntArray(this.f10643w);
        parcel.writeIntArray(this.f10644x);
    }

    public l(Parcel parcel) {
        super("MLLT");
        this.f10640e = parcel.readInt();
        this.f10641i = parcel.readInt();
        this.f10642v = parcel.readInt();
        int[] createIntArray = parcel.createIntArray();
        int i5 = d0.a;
        this.f10643w = createIntArray;
        this.f10644x = parcel.createIntArray();
    }
}
