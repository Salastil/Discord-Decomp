package di;

import android.os.RemoteException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class b extends b0 {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7563e = 0;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f7564i;

    public b(a5.c0 c0Var) {
        this.f7564i = c0Var;
    }

    @Override // di.b0
    public final void b() {
        switch (this.f7563e) {
            case 0:
                c cVar = (c) ((a5.c0) this.f7564i).f151e;
                cVar.f7567b.b("unlinkToDeath", new Object[0]);
                cVar.f7577n.asBinder().unlinkToDeath(cVar.k, 0);
                cVar.f7577n = null;
                cVar.f7572g = false;
                return;
            default:
                c cVar2 = (c) this.f7564i;
                synchronized (cVar2.f7571f) {
                    try {
                        if (cVar2.f7575l.get() > 0 && cVar2.f7575l.decrementAndGet() > 0) {
                            cVar2.f7567b.b("Leaving the connection open for other ongoing calls.", new Object[0]);
                            return;
                        }
                        if (cVar2.f7577n != null) {
                            cVar2.f7567b.b("Unbind from service.", new Object[0]);
                            cVar2.a.unbindService(cVar2.f7576m);
                            cVar2.f7572g = false;
                            cVar2.f7577n = null;
                            cVar2.f7576m = null;
                        }
                        HashSet hashSet = cVar2.f7570e;
                        Iterator it = hashSet.iterator();
                        while (it.hasNext()) {
                            ((jg.g) it.next()).c(new RemoteException(String.valueOf(cVar2.f7568c).concat(" : Binder has died.")));
                        }
                        hashSet.clear();
                        return;
                    } finally {
                    }
                }
        }
    }

    public b(c cVar) {
        Objects.requireNonNull(cVar);
        this.f7564i = cVar;
    }
}
