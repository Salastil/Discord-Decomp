package cq;

/* loaded from: classes3.dex */
public final class b extends iq.i implements iq.u {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7016e;

    /* renamed from: i, reason: collision with root package name */
    public int f7017i;

    /* renamed from: v, reason: collision with root package name */
    public int f7018v;

    /* renamed from: w, reason: collision with root package name */
    public Object f7019w;

    public /* synthetic */ b(int i5) {
        this.f7016e = i5;
    }

    @Override // iq.i
    public final iq.a c() {
        switch (this.f7016e) {
            case 0:
                f f2 = f();
                if (f2.b()) {
                    return f2;
                }
                throw new ai.k();
            default:
                l g6 = g();
                if (g6.b()) {
                    return g6;
                }
                throw new ai.k();
        }
    }

    public final Object clone() {
        switch (this.f7016e) {
            case 0:
                b bVar = new b(0);
                bVar.f7019w = e.M;
                bVar.h(f());
                return bVar;
            default:
                b bVar2 = new b(1);
                bVar2.f7019w = iq.d.f12197d;
                bVar2.j(g());
                return bVar2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x003f  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        switch (this.f7016e) {
            case 0:
                f fVar = null;
                try {
                    try {
                        f.E.getClass();
                        h(new f(eVar, gVar));
                        return this;
                    } catch (Throwable th2) {
                        th = th2;
                        if (fVar != null) {
                            h(fVar);
                        }
                        throw th;
                    }
                } catch (iq.q e9) {
                    f fVar2 = (f) e9.f12236d;
                    try {
                        throw e9;
                    } catch (Throwable th3) {
                        th = th3;
                        fVar = fVar2;
                        if (fVar != null) {
                        }
                        throw th;
                    }
                }
            default:
                l lVar = null;
                try {
                    try {
                        l.E.getClass();
                        j(new l(eVar));
                        return this;
                    } catch (iq.q e10) {
                        l lVar2 = (l) e10.f12236d;
                        try {
                            throw e10;
                        } catch (Throwable th4) {
                            th = th4;
                            lVar = lVar2;
                            if (lVar != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th5) {
                    th = th5;
                    if (lVar != null) {
                        j(lVar);
                    }
                    throw th;
                }
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        switch (this.f7016e) {
            case 0:
                h((f) nVar);
                break;
            default:
                j((l) nVar);
                break;
        }
        return this;
    }

    public f f() {
        f fVar = new f(this);
        int i5 = this.f7017i;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        fVar.f7080i = this.f7018v;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        fVar.f7081v = (e) this.f7019w;
        fVar.f7079e = i6;
        return fVar;
    }

    public l g() {
        l lVar = new l(this);
        int i5 = this.f7017i;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        lVar.f7159i = this.f7018v;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        lVar.f7160v = (iq.t) this.f7019w;
        lVar.f7158e = i6;
        return lVar;
    }

    public void h(f fVar) {
        e eVar;
        if (fVar == f.f7077y) {
            return;
        }
        int i5 = fVar.f7079e;
        if ((i5 & 1) == 1) {
            int i6 = fVar.f7080i;
            this.f7017i = 1 | this.f7017i;
            this.f7018v = i6;
        }
        if ((i5 & 2) == 2) {
            e eVar2 = fVar.f7081v;
            if ((this.f7017i & 2) != 2 || (eVar = (e) this.f7019w) == e.M) {
                this.f7019w = eVar2;
            } else {
                c g6 = c.g();
                g6.h(eVar);
                g6.h(eVar2);
                this.f7019w = g6.f();
            }
            this.f7017i |= 2;
        }
        this.f12211d = this.f12211d.b(fVar.f7078d);
    }

    public void j(l lVar) {
        if (lVar == l.f7156y) {
            return;
        }
        int i5 = lVar.f7158e;
        if ((i5 & 1) == 1) {
            int i6 = lVar.f7159i;
            this.f7017i = 1 | this.f7017i;
            this.f7018v = i6;
        }
        if ((i5 & 2) == 2) {
            iq.t tVar = lVar.f7160v;
            tVar.getClass();
            this.f7017i = 2 | this.f7017i;
            this.f7019w = tVar;
        }
        this.f12211d = this.f12211d.b(lVar.f7157d);
    }
}
