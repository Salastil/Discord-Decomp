package ze;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.api.Status;

/* loaded from: classes3.dex */
public final class q implements Parcelable.Creator {

    /* renamed from: b, reason: collision with root package name */
    public static final q f21218b = new q(0);
    public final /* synthetic */ int a;

    public /* synthetic */ q(int i5) {
        this.a = i5;
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                int dataPosition = parcel.dataPosition();
                if (parcel.readInt() != -204102970) {
                    parcel.setDataPosition(dataPosition - 4);
                    return f.f21198v;
                }
                int g02 = ys.d.g0(parcel);
                boolean z5 = false;
                g gVar = null;
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    char c6 = (char) readInt;
                    if (c6 == 1) {
                        gVar = (g) ys.d.A(parcel, readInt, g.CREATOR);
                    } else if (c6 != 2) {
                        ys.d.e0(readInt, parcel);
                    } else {
                        z5 = ys.d.T(readInt, parcel);
                    }
                }
                ys.d.G(g02, parcel);
                return new f(gVar, z5);
            case 1:
                int g03 = ys.d.g0(parcel);
                int i5 = 0;
                boolean z6 = true;
                int i6 = 0;
                int i10 = 0;
                while (parcel.dataPosition() < g03) {
                    int readInt2 = parcel.readInt();
                    char c8 = (char) readInt2;
                    if (c8 == 1) {
                        i5 = ys.d.V(readInt2, parcel);
                    } else if (c8 == 2) {
                        i6 = ys.d.V(readInt2, parcel);
                    } else if (c8 == 3) {
                        i10 = ys.d.V(readInt2, parcel);
                    } else if (c8 != 4) {
                        ys.d.e0(readInt2, parcel);
                    } else {
                        z6 = ys.d.T(readInt2, parcel);
                    }
                }
                ys.d.G(g03, parcel);
                return new g(i5, i6, i10, z6);
            case 2:
                int g04 = ys.d.g0(parcel);
                String str = null;
                int i11 = 0;
                while (parcel.dataPosition() < g04) {
                    int readInt3 = parcel.readInt();
                    char c10 = (char) readInt3;
                    if (c10 == 1) {
                        i11 = ys.d.V(readInt3, parcel);
                    } else if (c10 != 2) {
                        ys.d.e0(readInt3, parcel);
                    } else {
                        str = ys.d.B(readInt3, parcel);
                    }
                }
                ys.d.G(g04, parcel);
                return new Scope(i11, str);
            default:
                int g05 = ys.d.g0(parcel);
                String str2 = null;
                ye.b bVar = null;
                int i12 = 0;
                PendingIntent pendingIntent = null;
                while (parcel.dataPosition() < g05) {
                    int readInt4 = parcel.readInt();
                    char c11 = (char) readInt4;
                    if (c11 == 1) {
                        i12 = ys.d.V(readInt4, parcel);
                    } else if (c11 == 2) {
                        str2 = ys.d.B(readInt4, parcel);
                    } else if (c11 == 3) {
                        pendingIntent = (PendingIntent) ys.d.A(parcel, readInt4, PendingIntent.CREATOR);
                    } else if (c11 != 4) {
                        ys.d.e0(readInt4, parcel);
                    } else {
                        bVar = (ye.b) ys.d.A(parcel, readInt4, ye.b.CREATOR);
                    }
                }
                ys.d.G(g05, parcel);
                return new Status(i12, str2, pendingIntent, bVar);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new f[i5];
            case 1:
                return new g[i5];
            case 2:
                return new Scope[i5];
            default:
                return new Status[i5];
        }
    }
}
