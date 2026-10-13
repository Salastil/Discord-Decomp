package g4;

/* loaded from: classes.dex */
public final class f extends ys.d {
    @Override // ys.d
    public final void R(g gVar, g gVar2) {
        gVar.f9105b = gVar2;
    }

    @Override // ys.d
    public final void S(g gVar, Thread thread) {
        gVar.a = thread;
    }

    @Override // ys.d
    public final boolean m(h hVar, c cVar, c cVar2) {
        synchronized (hVar) {
            try {
                if (hVar.f9111e != cVar) {
                    return false;
                }
                hVar.f9111e = cVar2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // ys.d
    public final boolean n(h hVar, Object obj, Object obj2) {
        synchronized (hVar) {
            try {
                if (hVar.f9110d != obj) {
                    return false;
                }
                hVar.f9110d = obj2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // ys.d
    public final boolean o(h hVar, g gVar, g gVar2) {
        synchronized (hVar) {
            try {
                if (hVar.f9112i != gVar) {
                    return false;
                }
                hVar.f9112i = gVar2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
