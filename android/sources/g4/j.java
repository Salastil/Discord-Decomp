package g4;

import com.google.common.util.concurrent.ListenableFuture;

/* loaded from: classes.dex */
public final class j extends h {
    public final boolean j(Object obj) {
        if (obj == null) {
            obj = h.f9109y;
        }
        if (!h.f9108x.n(this, null, obj)) {
            return false;
        }
        h.d(this);
        return true;
    }

    public final boolean k(Throwable th2) {
        if (!h.f9108x.n(this, null, new b(th2))) {
            return false;
        }
        h.d(this);
        return true;
    }

    public final boolean l(ListenableFuture listenableFuture) {
        b bVar;
        listenableFuture.getClass();
        Object obj = this.f9110d;
        if (obj == null) {
            if (listenableFuture.isDone()) {
                if (h.f9108x.n(this, null, h.g(listenableFuture))) {
                    h.d(this);
                    return true;
                }
                return false;
            }
            e eVar = new e(this, listenableFuture);
            if (h.f9108x.n(this, null, eVar)) {
                try {
                    listenableFuture.a(eVar, i.f9113d);
                    return true;
                } catch (Throwable th2) {
                    try {
                        bVar = new b(th2);
                    } catch (Throwable unused) {
                        bVar = b.f9093b;
                    }
                    h.f9108x.n(this, eVar, bVar);
                    return true;
                }
            }
            obj = this.f9110d;
        }
        if (obj instanceof a) {
            listenableFuture.cancel(((a) obj).a);
        }
        return false;
    }
}
