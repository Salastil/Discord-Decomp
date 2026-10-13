package ne;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class a implements c, IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final IBinder f15213f;

    public a(IBinder iBinder) {
        this.f15213f = iBinder;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f15213f;
    }

    public final Bundle b(Bundle bundle) {
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken("com.google.android.finsky.externalreferrer.IGetInstallReferrerService");
        int i5 = sb.a.a;
        obtain.writeInt(1);
        bundle.writeToParcel(obtain, 0);
        obtain = Parcel.obtain();
        try {
            this.f15213f.transact(1, obtain, obtain, 0);
            obtain.readException();
            obtain.recycle();
            return (Bundle) (obtain.readInt() == 0 ? null : (Parcelable) Bundle.CREATOR.createFromParcel(obtain));
        } catch (RuntimeException e9) {
            throw e9;
        } finally {
            obtain.recycle();
        }
    }
}
