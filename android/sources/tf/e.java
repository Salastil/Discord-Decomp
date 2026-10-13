package tf;

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
        int i5 = c.f18361g;
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.identitycredentials.internal.IIdentityCredentialService");
        return queryLocalInterface instanceof d ? (d) queryLocalInterface : new b(iBinder);
    }

    @Override // bf.e
    public final ye.d[] m() {
        ye.d[] ALL_FEATURES = cg.b.f3495d;
        Intrinsics.checkNotNullExpressionValue(ALL_FEATURES, "ALL_FEATURES");
        return ALL_FEATURES;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.identitycredentials.internal.IIdentityCredentialService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.identitycredentials.service.START";
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
