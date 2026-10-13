package lf;

import af.i;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class g implements i {

    /* renamed from: d, reason: collision with root package name */
    public static final g f13952d = new g();

    @Override // af.i
    public final void accept(Object obj, Object obj2) {
        f fVar = new f((jg.g) obj2);
        a aVar = (a) ((c) ((e) obj).o());
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken("com.google.android.gms.deviceperformance.internal.IDevicePerformanceService");
        int i5 = ag.b.a;
        obtain.writeStrongBinder(fVar);
        Parcel obtain2 = Parcel.obtain();
        try {
            aVar.f13949f.transact(1, obtain, obtain2, 0);
            obtain2.readException();
        } finally {
            obtain.recycle();
            obtain2.recycle();
        }
    }
}
