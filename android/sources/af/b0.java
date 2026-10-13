package af;

import android.os.DeadObjectException;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.api.Status;
import java.util.Map;

/* loaded from: classes3.dex */
public final class b0 extends e0 {

    /* renamed from: b, reason: collision with root package name */
    public final ve.g f541b;

    public b0(ve.g gVar) {
        super(1);
        this.f541b = gVar;
    }

    @Override // af.e0
    public final void a(Status status) {
        try {
            this.f541b.O(status);
        } catch (IllegalStateException e9) {
            Log.w("ApiCallRunner", "Exception reporting failure", e9);
        }
    }

    @Override // af.e0
    public final void b(Exception exc) {
        try {
            this.f541b.O(new Status(10, k0.d.l(exc.getClass().getSimpleName(), ": ", exc.getLocalizedMessage()), null, null));
        } catch (IllegalStateException e9) {
            Log.w("ApiCallRunner", "Exception reporting failure", e9);
        }
    }

    @Override // af.e0
    public final void c(q qVar) {
        try {
            ve.g gVar = this.f541b;
            ze.c cVar = qVar.f583g;
            gVar.getClass();
            try {
                gVar.N(cVar);
            } catch (DeadObjectException e9) {
                gVar.O(new Status(8, e9.getLocalizedMessage(), null, null));
                throw e9;
            } catch (RemoteException e10) {
                gVar.O(new Status(8, e10.getLocalizedMessage(), null, null));
            }
        } catch (RuntimeException e11) {
            b(e11);
        }
    }

    @Override // af.e0
    public final void d(e4.c cVar, boolean z5) {
        Boolean valueOf = Boolean.valueOf(z5);
        Map map = (Map) cVar.f7939e;
        ve.g gVar = this.f541b;
        map.put(gVar, valueOf);
        gVar.addStatusListener(new l(cVar, gVar));
    }
}
