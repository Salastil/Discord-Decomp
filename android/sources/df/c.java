package df;

import af.q;
import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import androidx.appcompat.widget.w;
import bf.e;
import bf.k;
import ye.d;

/* loaded from: classes3.dex */
public final class c extends e {
    public final k V;

    public c(Context context, Looper looper, w wVar, k kVar, q qVar, q qVar2) {
        super(context, looper, 270, wVar, qVar, qVar2, 0);
        this.V = kVar;
    }

    @Override // bf.e, ze.c
    public final int h() {
        return 203400000;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.service.IClientTelemetryService");
        return queryLocalInterface instanceof a ? (a) queryLocalInterface : new a(iBinder, "com.google.android.gms.common.internal.service.IClientTelemetryService", 4);
    }

    @Override // bf.e
    public final d[] m() {
        return xf.b.f20423b;
    }

    @Override // bf.e
    public final Bundle n() {
        k kVar = this.V;
        kVar.getClass();
        Bundle bundle = new Bundle();
        String str = kVar.f2897d;
        if (str != null) {
            bundle.putString("api", str);
        }
        return bundle;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.common.internal.service.IClientTelemetryService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.common.telemetry.service.START";
    }

    @Override // bf.e
    public final boolean r() {
        return true;
    }
}
