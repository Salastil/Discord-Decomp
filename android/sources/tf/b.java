package tf;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class b implements d, IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final IBinder f18360f;

    public b(IBinder iBinder) {
        this.f18360f = iBinder;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f18360f;
    }

    public final void b(int i5, Parcel parcel) {
        Parcel obtain = Parcel.obtain();
        try {
            this.f18360f.transact(i5, parcel, obtain, 0);
            obtain.readException();
        } finally {
            parcel.recycle();
            obtain.recycle();
        }
    }
}
