package bf;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class q extends cf.a {
    public static final Parcelable.Creator<q> CREATOR = new android.support.v4.media.a(15);

    /* renamed from: d, reason: collision with root package name */
    public final int f2908d;

    /* renamed from: e, reason: collision with root package name */
    public final IBinder f2909e;

    /* renamed from: i, reason: collision with root package name */
    public final ye.b f2910i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f2911v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f2912w;

    public q(int i5, IBinder iBinder, ye.b bVar, boolean z5, boolean z6) {
        this.f2908d = i5;
        this.f2909e = iBinder;
        this.f2910i = bVar;
        this.f2911v = z5;
        this.f2912w = z6;
    }

    public final boolean equals(Object obj) {
        Object g0Var;
        if (obj == null) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof q)) {
            return false;
        }
        q qVar = (q) obj;
        if (!this.f2910i.equals(qVar.f2910i)) {
            return false;
        }
        Object obj2 = null;
        IBinder iBinder = this.f2909e;
        if (iBinder == null) {
            g0Var = null;
        } else {
            int i5 = a.f2836g;
            IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.IAccountAccessor");
            g0Var = queryLocalInterface instanceof f ? (f) queryLocalInterface : new g0(iBinder, "com.google.android.gms.common.internal.IAccountAccessor", 5);
        }
        IBinder iBinder2 = qVar.f2909e;
        if (iBinder2 != null) {
            int i6 = a.f2836g;
            IInterface queryLocalInterface2 = iBinder2.queryLocalInterface("com.google.android.gms.common.internal.IAccountAccessor");
            obj2 = queryLocalInterface2 instanceof f ? (f) queryLocalInterface2 : new g0(iBinder2, "com.google.android.gms.common.internal.IAccountAccessor", 5);
        }
        return t.j(g0Var, obj2);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f2908d);
        IBinder iBinder = this.f2909e;
        if (iBinder != null) {
            int I2 = ys.l.I(2, parcel);
            parcel.writeStrongBinder(iBinder);
            ys.l.J(I2, parcel);
        }
        ys.l.C(parcel, 3, this.f2910i, i5);
        ys.l.H(parcel, 4, 4);
        parcel.writeInt(this.f2911v ? 1 : 0);
        ys.l.H(parcel, 5, 4);
        parcel.writeInt(this.f2912w ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
