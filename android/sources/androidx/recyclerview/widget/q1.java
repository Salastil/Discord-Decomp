package androidx.recyclerview.widget;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes.dex */
public final class q1 implements Parcelable.Creator {
    public final /* synthetic */ int a;

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                r1 r1Var = new r1();
                r1Var.f2449d = parcel.readInt();
                r1Var.f2450e = parcel.readInt();
                r1Var.f2452v = parcel.readInt() == 1;
                int readInt = parcel.readInt();
                if (readInt > 0) {
                    int[] iArr = new int[readInt];
                    r1Var.f2451i = iArr;
                    parcel.readIntArray(iArr);
                }
                return r1Var;
            default:
                s1 s1Var = new s1();
                s1Var.f2454d = parcel.readInt();
                s1Var.f2455e = parcel.readInt();
                int readInt2 = parcel.readInt();
                s1Var.f2456i = readInt2;
                if (readInt2 > 0) {
                    int[] iArr2 = new int[readInt2];
                    s1Var.f2457v = iArr2;
                    parcel.readIntArray(iArr2);
                }
                int readInt3 = parcel.readInt();
                s1Var.f2458w = readInt3;
                if (readInt3 > 0) {
                    int[] iArr3 = new int[readInt3];
                    s1Var.f2459x = iArr3;
                    parcel.readIntArray(iArr3);
                }
                s1Var.E = parcel.readInt() == 1;
                s1Var.F = parcel.readInt() == 1;
                s1Var.G = parcel.readInt() == 1;
                s1Var.f2460y = parcel.readArrayList(r1.class.getClassLoader());
                return s1Var;
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new r1[i5];
            default:
                return new s1[i5];
        }
    }
}
