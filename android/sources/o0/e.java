package o0;

/* loaded from: classes.dex */
public final class e extends e4.f {
    @Override // e4.f
    public final void F(f fVar, f fVar2) {
        fVar.f15718b = fVar2;
    }

    @Override // e4.f
    public final void G(f fVar, Thread thread) {
        fVar.a = thread;
    }

    @Override // e4.f
    public final boolean g(g gVar, c cVar, c cVar2) {
        synchronized (gVar) {
            try {
                if (gVar.f15724e != cVar) {
                    return false;
                }
                gVar.f15724e = cVar2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // e4.f
    public final boolean h(g gVar, Object obj, Object obj2) {
        synchronized (gVar) {
            try {
                if (gVar.f15723d != obj) {
                    return false;
                }
                gVar.f15723d = obj2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // e4.f
    public final boolean i(g gVar, f fVar, f fVar2) {
        synchronized (gVar) {
            try {
                if (gVar.f15725i != fVar) {
                    return false;
                }
                gVar.f15725i = fVar2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
