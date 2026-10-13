package a3;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes.dex */
public final class d implements IInterface {

    /* renamed from: f, reason: collision with root package name */
    public IBinder f55f;

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f55f;
    }

    public final void b(String[] strArr) {
        Parcel obtain = Parcel.obtain();
        try {
            obtain.writeInterfaceToken("androidx.room.IMultiInstanceInvalidationCallback");
            obtain.writeStringArray(strArr);
            this.f55f.transact(1, obtain, null, 1);
        } finally {
            obtain.recycle();
        }
    }
}
