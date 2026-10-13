package b;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import q.g;
import q.m;

/* loaded from: classes.dex */
public final class b implements d {

    /* renamed from: f, reason: collision with root package name */
    public IBinder f2697f;

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f2697f;
    }

    public final boolean b(g gVar, Bundle bundle) {
        Parcel obtain = Parcel.obtain();
        Parcel obtain2 = Parcel.obtain();
        try {
            obtain.writeInterfaceToken(d.f2699b);
            obtain.writeStrongInterface(gVar);
            obtain.writeInt(1);
            bundle.writeToParcel(obtain, 0);
            this.f2697f.transact(13, obtain, obtain2, 0);
            obtain2.readException();
            return obtain2.readInt() != 0;
        } finally {
            obtain2.recycle();
            obtain.recycle();
        }
    }

    public final boolean k(g gVar) {
        Parcel obtain = Parcel.obtain();
        Parcel obtain2 = Parcel.obtain();
        try {
            obtain.writeInterfaceToken(d.f2699b);
            obtain.writeStrongInterface(gVar);
            this.f2697f.transact(3, obtain, obtain2, 0);
            obtain2.readException();
            return obtain2.readInt() != 0;
        } finally {
            obtain2.recycle();
            obtain.recycle();
        }
    }

    public final boolean r(g gVar, m mVar, Bundle bundle) {
        Parcel obtain = Parcel.obtain();
        Parcel obtain2 = Parcel.obtain();
        try {
            obtain.writeInterfaceToken(d.f2699b);
            obtain.writeStrongInterface(gVar);
            obtain.writeStrongBinder(mVar);
            obtain.writeInt(1);
            bundle.writeToParcel(obtain, 0);
            this.f2697f.transact(14, obtain, obtain2, 0);
            obtain2.readException();
            return obtain2.readInt() != 0;
        } finally {
            obtain2.recycle();
            obtain.recycle();
        }
    }
}
