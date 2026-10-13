package bf;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class s implements IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final IBinder f2918f;

    public s(IBinder iBinder) {
        this.f2918f = iBinder;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f2918f;
    }

    public final void b(x xVar, d dVar) {
        Parcel obtain = Parcel.obtain();
        Parcel obtain2 = Parcel.obtain();
        try {
            obtain.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
            obtain.writeStrongBinder(xVar);
            obtain.writeInt(1);
            android.support.v4.media.a.a(dVar, obtain, 0);
            this.f2918f.transact(46, obtain, obtain2, 0);
            obtain2.readException();
        } finally {
            obtain2.recycle();
            obtain.recycle();
        }
    }
}
