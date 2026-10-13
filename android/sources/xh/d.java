package xh;

import a5.k0;
import android.util.Base64;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.integrity.IntegrityManager;
import com.google.android.play.core.integrity.IntegrityTokenRequest;
import di.c0;

/* loaded from: classes3.dex */
public final class d implements IntegrityManager {
    public final g a;

    public d(g gVar) {
        this.a = gVar;
    }

    @Override // com.google.android.play.core.integrity.IntegrityManager
    public final Task requestIntegrityToken(IntegrityTokenRequest integrityTokenRequest) {
        g gVar = this.a;
        di.c cVar = gVar.f20473e;
        if (cVar == null) {
            return k0.r(new a(-2, null));
        }
        if (di.e.a(gVar.f20471c) < 82380000) {
            return k0.r(new a(-14, null));
        }
        try {
            byte[] decode = Base64.decode(integrityTokenRequest.b(), 10);
            Long a = integrityTokenRequest.a();
            gVar.a.b("requestIntegrityToken(%s)", integrityTokenRequest);
            jg.g gVar2 = new jg.g();
            cVar.a().post(new c0(cVar, gVar2, gVar2, new e(gVar, gVar2, decode, a, gVar2, integrityTokenRequest)));
            return gVar2.a;
        } catch (IllegalArgumentException e9) {
            return k0.r(new a(-13, e9));
        }
    }
}
