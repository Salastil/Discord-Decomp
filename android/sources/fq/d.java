package fq;

import iq.n;
import iq.q;
import iq.u;

/* loaded from: classes3.dex */
public final class d extends iq.i implements u {

    /* renamed from: e, reason: collision with root package name */
    public int f8953e;

    /* renamed from: i, reason: collision with root package name */
    public b f8954i;

    /* renamed from: v, reason: collision with root package name */
    public c f8955v;

    /* renamed from: w, reason: collision with root package name */
    public c f8956w;

    /* renamed from: x, reason: collision with root package name */
    public c f8957x;

    /* renamed from: y, reason: collision with root package name */
    public c f8958y;

    public static d g() {
        d dVar = new d();
        dVar.f8954i = b.f8939y;
        c cVar = c.f8946y;
        dVar.f8955v = cVar;
        dVar.f8956w = cVar;
        dVar.f8957x = cVar;
        dVar.f8958y = cVar;
        return dVar;
    }

    @Override // iq.i
    public final iq.a c() {
        e f2 = f();
        f2.b();
        return f2;
    }

    public final Object clone() {
        d g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        e eVar2 = null;
        try {
            try {
                e.H.getClass();
                h(new e(eVar, gVar));
                return this;
            } catch (q e9) {
                e eVar3 = (e) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    eVar2 = eVar3;
                    if (eVar2 != null) {
                        h(eVar2);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (eVar2 != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(n nVar) {
        h((e) nVar);
        return this;
    }

    public final e f() {
        e eVar = new e(this);
        int i5 = this.f8953e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        eVar.f8961i = this.f8954i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        eVar.f8962v = this.f8955v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        eVar.f8963w = this.f8956w;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        eVar.f8964x = this.f8957x;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        eVar.f8965y = this.f8958y;
        eVar.f8960e = i6;
        return eVar;
    }

    public final void h(e eVar) {
        c cVar;
        c cVar2;
        c cVar3;
        c cVar4;
        b bVar;
        if (eVar == e.G) {
            return;
        }
        if ((eVar.f8960e & 1) == 1) {
            b bVar2 = eVar.f8961i;
            if ((this.f8953e & 1) != 1 || (bVar = this.f8954i) == b.f8939y) {
                this.f8954i = bVar2;
            } else {
                a aVar = new a(0);
                aVar.h(bVar);
                aVar.h(bVar2);
                this.f8954i = aVar.f();
            }
            this.f8953e |= 1;
        }
        if ((eVar.f8960e & 2) == 2) {
            c cVar5 = eVar.f8962v;
            if ((this.f8953e & 2) != 2 || (cVar4 = this.f8955v) == c.f8946y) {
                this.f8955v = cVar5;
            } else {
                a i5 = c.i(cVar4);
                i5.j(cVar5);
                this.f8955v = i5.g();
            }
            this.f8953e |= 2;
        }
        if ((eVar.f8960e & 4) == 4) {
            c cVar6 = eVar.f8963w;
            if ((this.f8953e & 4) != 4 || (cVar3 = this.f8956w) == c.f8946y) {
                this.f8956w = cVar6;
            } else {
                a i6 = c.i(cVar3);
                i6.j(cVar6);
                this.f8956w = i6.g();
            }
            this.f8953e |= 4;
        }
        if ((eVar.f8960e & 8) == 8) {
            c cVar7 = eVar.f8964x;
            if ((this.f8953e & 8) != 8 || (cVar2 = this.f8957x) == c.f8946y) {
                this.f8957x = cVar7;
            } else {
                a i10 = c.i(cVar2);
                i10.j(cVar7);
                this.f8957x = i10.g();
            }
            this.f8953e |= 8;
        }
        if ((eVar.f8960e & 16) == 16) {
            c cVar8 = eVar.f8965y;
            if ((this.f8953e & 16) != 16 || (cVar = this.f8958y) == c.f8946y) {
                this.f8958y = cVar8;
            } else {
                a i11 = c.i(cVar);
                i11.j(cVar8);
                this.f8958y = i11.g();
            }
            this.f8953e |= 16;
        }
        this.f12211d = this.f12211d.b(eVar.f8959d);
    }
}
