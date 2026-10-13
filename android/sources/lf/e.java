package lf;

import android.os.IBinder;
import android.os.IInterface;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends bf.e {
    @Override // bf.e, ze.c
    public final int h() {
        return 17895000;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        Intrinsics.checkNotNullParameter(iBinder, "iBinder");
        int i5 = b.f13950g;
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.deviceperformance.internal.IDevicePerformanceService");
        return queryLocalInterface instanceof c ? (c) queryLocalInterface : new a(iBinder);
    }

    @Override // bf.e
    public final ye.d[] m() {
        ye.d[] ALL_FEATURES = ag.c.f612b;
        Intrinsics.checkNotNullExpressionValue(ALL_FEATURES, "ALL_FEATURES");
        return ALL_FEATURES;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.deviceperformance.internal.IDevicePerformanceService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.deviceperformance.service.START";
    }

    @Override // bf.e
    public final boolean r() {
        return true;
    }

    @Override // bf.e
    public final boolean s() {
        return true;
    }
}
