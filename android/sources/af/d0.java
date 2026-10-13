package af;

import android.os.DeadObjectException;
import android.os.RemoteException;
import com.google.android.gms.common.api.Status;

/* loaded from: classes3.dex */
public final class d0 extends w {

    /* renamed from: b, reason: collision with root package name */
    public final jg.g f550b;

    public d0(jg.g gVar) {
        super(4);
        this.f550b = gVar;
    }

    @Override // af.e0
    public final void a(Status status) {
        this.f550b.c(new ze.e(status));
    }

    @Override // af.e0
    public final void b(Exception exc) {
        this.f550b.c(exc);
    }

    @Override // af.e0
    public final void c(q qVar) {
        try {
            h(qVar);
        } catch (DeadObjectException e9) {
            a(e0.e(e9));
            throw e9;
        } catch (RemoteException e10) {
            a(e0.e(e10));
        } catch (RuntimeException e11) {
            this.f550b.c(e11);
        }
    }

    @Override // af.w
    public final boolean f(q qVar) {
        if (qVar.k.get(null) == null) {
            return false;
        }
        throw new ClassCastException();
    }

    @Override // af.w
    public final ye.d[] g(q qVar) {
        if (qVar.k.get(null) == null) {
            return null;
        }
        throw new ClassCastException();
    }

    public final void h(q qVar) {
        if (qVar.k.remove(null) != null) {
            throw new ClassCastException();
        }
        this.f550b.d(Boolean.FALSE);
    }

    @Override // af.e0
    public final /* bridge */ /* synthetic */ void d(e4.c cVar, boolean z5) {
    }
}
