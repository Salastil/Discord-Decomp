package bg;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;

/* loaded from: classes3.dex */
public final class n1 extends bf.e {
    @Override // bf.e, ze.c
    public final int h() {
        return 13000000;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.fido.fido2.internal.regular.IFido2AppService");
        return queryLocalInterface instanceof p1 ? (p1) queryLocalInterface : new p1(iBinder, "com.google.android.gms.fido.fido2.internal.regular.IFido2AppService");
    }

    @Override // bf.e
    public final ye.d[] m() {
        return new ye.d[]{of.a.f15860b, of.a.a};
    }

    @Override // bf.e
    public final Bundle n() {
        Bundle bundle = new Bundle();
        bundle.putString("FIDO2_ACTION_START_SERVICE", "com.google.android.gms.fido.fido2.regular.START");
        return bundle;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.fido.fido2.internal.regular.IFido2AppService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.fido.fido2.regular.START";
    }

    @Override // bf.e
    public final boolean s() {
        return true;
    }
}
