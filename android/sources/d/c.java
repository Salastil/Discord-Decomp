package d;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;

/* loaded from: classes.dex */
public final class c extends Binder implements b {

    /* renamed from: g, reason: collision with root package name */
    public static final /* synthetic */ int f7342g = 0;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ d f7343f;

    public c(d dVar) {
        this.f7343f = dVar;
        attachInterface(this, b.f7341e);
    }

    @Override // android.os.Binder
    public final boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
        String str = b.f7341e;
        if (i5 >= 1 && i5 <= 16777215) {
            parcel.enforceInterface(str);
        }
        if (i5 == 1598968902) {
            parcel2.writeString(str);
            return true;
        }
        if (i5 != 1) {
            return super.onTransact(i5, parcel, parcel2, i6);
        }
        this.f7343f.a(parcel.readInt(), (Bundle) (parcel.readInt() != 0 ? Bundle.CREATOR.createFromParcel(parcel) : null));
        return true;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this;
    }
}
