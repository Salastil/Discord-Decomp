package vf;

import af.q;
import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import androidx.appcompat.widget.w;

/* loaded from: classes3.dex */
public final class g extends bf.e {
    public final re.b V;

    public g(Context context, Looper looper, w wVar, re.b bVar, q qVar, q qVar2) {
        super(context, looper, 68, wVar, qVar, qVar2, 0);
        bVar = bVar == null ? re.b.f17276i : bVar;
        e4.e eVar = new e4.e(20, false);
        eVar.f7943e = Boolean.FALSE;
        re.b bVar2 = re.b.f17276i;
        bVar.getClass();
        eVar.f7943e = Boolean.valueOf(bVar.f17277d);
        eVar.f7944i = bVar.f17278e;
        eVar.f7944i = e.a();
        this.V = new re.b(eVar);
    }

    @Override // bf.e, ze.c
    public final int h() {
        return 12800000;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.auth.api.credentials.internal.ICredentialsService");
        return queryLocalInterface instanceof h ? (h) queryLocalInterface : new h(iBinder, "com.google.android.gms.auth.api.credentials.internal.ICredentialsService", 3);
    }

    @Override // bf.e
    public final Bundle n() {
        re.b bVar = this.V;
        bVar.getClass();
        Bundle bundle = new Bundle();
        bundle.putString("consumer_package", null);
        bundle.putBoolean("force_save_dialog", bVar.f17277d);
        bundle.putString("log_session_id", bVar.f17278e);
        return bundle;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.auth.api.credentials.internal.ICredentialsService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.auth.api.credentials.service.START";
    }
}
