package gd;

import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;
import bf.q;
import fi.e0;
import hg.e;
import hg.f;
import id.k;
import id.l;
import id.m;
import id.n;
import id.o;
import java.util.ArrayList;
import kd.i;
import kd.j;
import ys.d;

/* loaded from: classes3.dex */
public final class a implements Parcelable.Creator {
    public final /* synthetic */ int a;

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                return new b(parcel);
            case 1:
                return new c(parcel);
            case 2:
                return new hd.b(parcel);
            case 3:
                return new hd.c(parcel);
            case 4:
                int g02 = d.g0(parcel);
                Intent intent = null;
                int i5 = 0;
                int i6 = 0;
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    char c6 = (char) readInt;
                    if (c6 == 1) {
                        i5 = d.V(readInt, parcel);
                    } else if (c6 == 2) {
                        i6 = d.V(readInt, parcel);
                    } else if (c6 != 3) {
                        d.e0(readInt, parcel);
                    } else {
                        intent = (Intent) d.A(parcel, readInt, Intent.CREATOR);
                    }
                }
                d.G(g02, parcel);
                return new hg.b(i5, i6, intent);
            case 5:
                int g03 = d.g0(parcel);
                ArrayList arrayList = null;
                String str = null;
                while (parcel.dataPosition() < g03) {
                    int readInt2 = parcel.readInt();
                    char c8 = (char) readInt2;
                    if (c8 == 1) {
                        arrayList = d.C(readInt2, parcel);
                    } else if (c8 != 2) {
                        d.e0(readInt2, parcel);
                    } else {
                        str = d.B(readInt2, parcel);
                    }
                }
                d.G(g03, parcel);
                return new e(str, arrayList);
            case 6:
                int g04 = d.g0(parcel);
                ye.b bVar = null;
                int i10 = 0;
                q qVar = null;
                while (parcel.dataPosition() < g04) {
                    int readInt3 = parcel.readInt();
                    char c10 = (char) readInt3;
                    if (c10 == 1) {
                        i10 = d.V(readInt3, parcel);
                    } else if (c10 == 2) {
                        bVar = (ye.b) d.A(parcel, readInt3, ye.b.CREATOR);
                    } else if (c10 != 3) {
                        d.e0(readInt3, parcel);
                    } else {
                        qVar = (q) d.A(parcel, readInt3, q.CREATOR);
                    }
                }
                d.G(g04, parcel);
                return new f(i10, bVar, qVar);
            case 7:
                return new id.a(parcel);
            case 8:
                return new id.b(parcel);
            case 9:
                return new id.c(parcel);
            case 10:
                return new id.d(parcel);
            case 11:
                return new id.e(parcel);
            case 12:
                return new id.f(parcel);
            case 13:
                return new k(parcel);
            case 14:
                return new l(parcel);
            case 15:
                return new m(parcel);
            case 16:
                String readString = parcel.readString();
                readString.getClass();
                String readString2 = parcel.readString();
                String[] createStringArray = parcel.createStringArray();
                createStringArray.getClass();
                return new n(readString, readString2, e0.m(createStringArray));
            case 17:
                return new o(parcel);
            case 18:
                return new jd.a(parcel);
            case 19:
                return new jd.b(parcel);
            case 20:
                ArrayList arrayList2 = new ArrayList();
                parcel.readList(arrayList2, jd.c.class.getClassLoader());
                return new jd.d(arrayList2);
            case 21:
                return new jd.c(parcel.readInt(), parcel.readLong(), parcel.readLong());
            case 22:
                return new jd.e(parcel);
            case 23:
                return new kc.a(parcel);
            case 24:
                return new kc.b(parcel);
            case 25:
                return new kd.a(parcel);
            case 26:
                return new kd.e(parcel);
            case 27:
                return new kd.f();
            case 28:
                return new i(parcel);
            default:
                return new j(parcel.readLong(), parcel.readLong());
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new b[i5];
            case 1:
                return new c[i5];
            case 2:
                return new hd.b[i5];
            case 3:
                return new hd.c[i5];
            case 4:
                return new hg.b[i5];
            case 5:
                return new e[i5];
            case 6:
                return new f[i5];
            case 7:
                return new id.a[i5];
            case 8:
                return new id.b[i5];
            case 9:
                return new id.c[i5];
            case 10:
                return new id.d[i5];
            case 11:
                return new id.e[i5];
            case 12:
                return new id.f[i5];
            case 13:
                return new k[i5];
            case 14:
                return new l[i5];
            case 15:
                return new m[i5];
            case 16:
                return new n[i5];
            case 17:
                return new o[i5];
            case 18:
                return new jd.a[i5];
            case 19:
                return new jd.b[i5];
            case 20:
                return new jd.d[i5];
            case 21:
                return new jd.c[i5];
            case 22:
                return new jd.e[i5];
            case 23:
                return new kc.a[i5];
            case 24:
                return new kc.b[i5];
            case 25:
                return new kd.a[i5];
            case 26:
                return new kd.e[i5];
            case 27:
                return new kd.f[i5];
            case 28:
                return new i[i5];
            default:
                return new j[i5];
        }
    }
}
