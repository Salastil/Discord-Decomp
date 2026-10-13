package af;

import android.os.DeadObjectException;
import android.os.RemoteException;
import com.google.android.gms.common.api.Status;
import java.util.Map;

/* loaded from: classes3.dex */
public final class c0 extends w {

    /* renamed from: b, reason: collision with root package name */
    public final k f547b;

    /* renamed from: c, reason: collision with root package name */
    public final jg.g f548c;

    /* renamed from: d, reason: collision with root package name */
    public final l8.a f549d;

    public c0(int i5, k kVar, jg.g gVar, l8.a aVar) {
        super(i5);
        this.f548c = gVar;
        this.f547b = kVar;
        this.f549d = aVar;
        if (i5 == 2 && kVar.f565c) {
            throw new IllegalArgumentException("Best-effort write calls cannot pass methods that should auto-resolve missing features.");
        }
    }

    @Override // af.e0
    public final void a(Status status) {
        this.f549d.getClass();
        this.f548c.c(status.f5659i != null ? new qh.a(status) : new ze.e(status));
    }

    @Override // af.e0
    public final void b(Exception exc) {
        this.f548c.c(exc);
    }

    @Override // af.e0
    public final void c(q qVar) {
        jg.g gVar = this.f548c;
        try {
            k kVar = this.f547b;
            ((i) ((k) kVar.f567e).f567e).accept(qVar.f583g, gVar);
        } catch (DeadObjectException e9) {
            throw e9;
        } catch (RemoteException e10) {
            a(e0.e(e10));
        } catch (RuntimeException e11) {
            gVar.c(e11);
        }
    }

    @Override // af.e0
    public final void d(e4.c cVar, boolean z5) {
        Boolean valueOf = Boolean.valueOf(z5);
        Map map = (Map) cVar.f7940i;
        jg.g gVar = this.f548c;
        map.put(gVar, valueOf);
        gVar.a.addOnCompleteListener(new io.sentry.internal.debugmeta.c(2, cVar, gVar));
    }

    @Override // af.w
    public final boolean f(q qVar) {
        return this.f547b.f565c;
    }

    @Override // af.w
    public final ye.d[] g(q qVar) {
        return (ye.d[]) this.f547b.f564b;
    }
}
