package fq;

import iq.n;
import iq.q;
import iq.u;

/* loaded from: classes3.dex */
public final class a extends iq.i implements u {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f8935e;

    /* renamed from: i, reason: collision with root package name */
    public int f8936i;

    /* renamed from: v, reason: collision with root package name */
    public int f8937v;

    /* renamed from: w, reason: collision with root package name */
    public int f8938w;

    public /* synthetic */ a(int i5) {
        this.f8935e = i5;
    }

    @Override // iq.i
    public final iq.a c() {
        switch (this.f8935e) {
            case 0:
                b f2 = f();
                f2.b();
                return f2;
            default:
                c g6 = g();
                g6.b();
                return g6;
        }
    }

    public final Object clone() {
        switch (this.f8935e) {
            case 0:
                a aVar = new a(0);
                aVar.h(f());
                return aVar;
            default:
                a aVar2 = new a(1);
                aVar2.j(g());
                return aVar2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x003f  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        switch (this.f8935e) {
            case 0:
                b bVar = null;
                try {
                    try {
                        b.E.getClass();
                        h(new b(eVar));
                        return this;
                    } catch (Throwable th2) {
                        th = th2;
                        if (bVar != null) {
                            h(bVar);
                        }
                        throw th;
                    }
                } catch (q e9) {
                    b bVar2 = (b) e9.f12236d;
                    try {
                        throw e9;
                    } catch (Throwable th3) {
                        th = th3;
                        bVar = bVar2;
                        if (bVar != null) {
                        }
                        throw th;
                    }
                }
            default:
                c cVar = null;
                try {
                    try {
                        c.E.getClass();
                        j(new c(eVar));
                        return this;
                    } catch (q e10) {
                        c cVar2 = (c) e10.f12236d;
                        try {
                            throw e10;
                        } catch (Throwable th4) {
                            th = th4;
                            cVar = cVar2;
                            if (cVar != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th5) {
                    th = th5;
                    if (cVar != null) {
                        j(cVar);
                    }
                    throw th;
                }
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(n nVar) {
        switch (this.f8935e) {
            case 0:
                h((b) nVar);
                break;
            default:
                j((c) nVar);
                break;
        }
        return this;
    }

    public b f() {
        b bVar = new b(this);
        int i5 = this.f8936i;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        bVar.f8942i = this.f8937v;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        bVar.f8943v = this.f8938w;
        bVar.f8941e = i6;
        return bVar;
    }

    public c g() {
        c cVar = new c(this);
        int i5 = this.f8936i;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        cVar.f8949i = this.f8937v;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        cVar.f8950v = this.f8938w;
        cVar.f8948e = i6;
        return cVar;
    }

    public void h(b bVar) {
        if (bVar == b.f8939y) {
            return;
        }
        int i5 = bVar.f8941e;
        if ((i5 & 1) == 1) {
            int i6 = bVar.f8942i;
            this.f8936i = 1 | this.f8936i;
            this.f8937v = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = bVar.f8943v;
            this.f8936i = 2 | this.f8936i;
            this.f8938w = i10;
        }
        this.f12211d = this.f12211d.b(bVar.f8940d);
    }

    public void j(c cVar) {
        if (cVar == c.f8946y) {
            return;
        }
        int i5 = cVar.f8948e;
        if ((i5 & 1) == 1) {
            int i6 = cVar.f8949i;
            this.f8936i = 1 | this.f8936i;
            this.f8937v = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = cVar.f8950v;
            this.f8936i = 2 | this.f8936i;
            this.f8938w = i10;
        }
        this.f12211d = this.f12211d.b(cVar.f8947d);
    }
}
