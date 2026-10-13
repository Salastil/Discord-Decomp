package dg;

import a5.c0;
import android.os.RemoteException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class e extends c {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7545e = 1;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f7546i;

    public e(c0 c0Var) {
        this.f7546i = c0Var;
    }

    @Override // dg.c
    public final void b() {
        switch (this.f7545e) {
            case 0:
                g gVar = (g) this.f7546i;
                synchronized (gVar.f7554f) {
                    try {
                        if (gVar.k.get() > 0 && gVar.k.decrementAndGet() > 0) {
                            gVar.f7550b.c("Leaving the connection open for other ongoing calls.", new Object[0]);
                            return;
                        }
                        if (gVar.f7559m != null) {
                            gVar.f7550b.c("Unbind from service.", new Object[0]);
                            gVar.a.unbindService(gVar.f7558l);
                            gVar.f7555g = false;
                            gVar.f7559m = null;
                            gVar.f7558l = null;
                        }
                        HashSet hashSet = gVar.f7553e;
                        Iterator it = hashSet.iterator();
                        while (it.hasNext()) {
                            ((jg.g) it.next()).c(new RemoteException(String.valueOf(gVar.f7551c).concat(" : Binder has died.")));
                        }
                        hashSet.clear();
                        return;
                    } finally {
                    }
                }
            default:
                g gVar2 = (g) ((c0) this.f7546i).f151e;
                gVar2.f7550b.c("unlinkToDeath", new Object[0]);
                gVar2.f7559m.asBinder().unlinkToDeath(gVar2.j, 0);
                gVar2.f7559m = null;
                gVar2.f7555g = false;
                return;
        }
    }

    public e(g gVar) {
        Objects.requireNonNull(gVar);
        this.f7546i = gVar;
    }
}
