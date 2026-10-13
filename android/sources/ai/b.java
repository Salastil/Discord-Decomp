package ai;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class b implements d, IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final IBinder f614f;

    public b(IBinder iBinder) {
        this.f614f = iBinder;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f614f;
    }

    @Override // ai.d
    public final void h(String str, Bundle bundle, zh.d dVar) {
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken("com.google.android.play.core.inappreview.protocol.IInAppReviewService");
        obtain.writeString(str);
        int i5 = a.a;
        obtain.writeInt(1);
        bundle.writeToParcel(obtain, 0);
        obtain.writeStrongBinder(dVar);
        try {
            this.f614f.transact(2, obtain, null, 1);
        } finally {
            obtain.recycle();
        }
    }
}
