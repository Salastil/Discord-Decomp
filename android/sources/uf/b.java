package uf;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class b implements d, IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final IBinder f18878f;

    public b(IBinder iBinder) {
        this.f18878f = iBinder;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f18878f;
    }

    public final Parcel b(int i5, Parcel parcel) {
        Parcel obtain = Parcel.obtain();
        try {
            try {
                this.f18878f.transact(i5, parcel, obtain, 0);
                obtain.readException();
                return obtain;
            } catch (RuntimeException e9) {
                obtain.recycle();
                throw e9;
            }
        } finally {
            parcel.recycle();
        }
    }
}
