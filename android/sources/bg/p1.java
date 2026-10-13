package bg;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class p1 implements IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final IBinder f2981f;

    /* renamed from: g, reason: collision with root package name */
    public final String f2982g;

    public p1(IBinder iBinder, String str) {
        this.f2981f = iBinder;
        this.f2982g = str;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f2981f;
    }

    public final void b(int i5, Parcel parcel) {
        Parcel obtain = Parcel.obtain();
        try {
            this.f2981f.transact(i5, parcel, obtain, 0);
            obtain.readException();
        } finally {
            parcel.recycle();
            obtain.recycle();
        }
    }
}
