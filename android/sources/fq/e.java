package fq;

import com.google.android.gms.internal.play_billing.w1;
import iq.n;
import iq.q;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class e extends n {
    public static final e G;
    public static final cq.a H = new cq.a(27);
    public byte E;
    public int F;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f8959d;

    /* renamed from: e, reason: collision with root package name */
    public int f8960e;

    /* renamed from: i, reason: collision with root package name */
    public b f8961i;

    /* renamed from: v, reason: collision with root package name */
    public c f8962v;

    /* renamed from: w, reason: collision with root package name */
    public c f8963w;

    /* renamed from: x, reason: collision with root package name */
    public c f8964x;

    /* renamed from: y, reason: collision with root package name */
    public c f8965y;

    static {
        e eVar = new e();
        G = eVar;
        eVar.f8961i = b.f8939y;
        c cVar = c.f8946y;
        eVar.f8962v = cVar;
        eVar.f8963w = cVar;
        eVar.f8964x = cVar;
        eVar.f8965y = cVar;
    }

    public e() {
        this.E = (byte) -1;
        this.F = -1;
        this.f8959d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.E == 1) {
            return true;
        }
        this.E = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.F;
        if (i5 != -1) {
            return i5;
        }
        int f2 = (this.f8960e & 1) == 1 ? w1.f(1, this.f8961i) : 0;
        if ((this.f8960e & 2) == 2) {
            f2 += w1.f(2, this.f8962v);
        }
        if ((this.f8960e & 4) == 4) {
            f2 += w1.f(3, this.f8963w);
        }
        if ((this.f8960e & 8) == 8) {
            f2 += w1.f(4, this.f8964x);
        }
        if ((this.f8960e & 16) == 16) {
            f2 += w1.f(5, this.f8965y);
        }
        int size = this.f8959d.size() + f2;
        this.F = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return d.g();
    }

    @Override // iq.a
    public final iq.i e() {
        d g6 = d.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f8960e & 1) == 1) {
            w1Var.t(1, this.f8961i);
        }
        if ((this.f8960e & 2) == 2) {
            w1Var.t(2, this.f8962v);
        }
        if ((this.f8960e & 4) == 4) {
            w1Var.t(3, this.f8963w);
        }
        if ((this.f8960e & 8) == 8) {
            w1Var.t(4, this.f8964x);
        }
        if ((this.f8960e & 16) == 16) {
            w1Var.t(5, this.f8965y);
        }
        w1Var.w(this.f8959d);
    }

    public e(d dVar) {
        this.E = (byte) -1;
        this.F = -1;
        this.f8959d = dVar.f12211d;
    }

    public e(iq.e eVar, iq.g gVar) {
        this.E = (byte) -1;
        this.F = -1;
        this.f8961i = b.f8939y;
        c cVar = c.f8946y;
        this.f8962v = cVar;
        this.f8963w = cVar;
        this.f8964x = cVar;
        this.f8965y = cVar;
        iq.c cVar2 = new iq.c();
        w1 m5 = w1.m(cVar2, 1);
        boolean z5 = false;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        a aVar = null;
                        if (n6 == 10) {
                            if ((this.f8960e & 1) == 1) {
                                b bVar = this.f8961i;
                                bVar.getClass();
                                aVar = new a(0);
                                aVar.h(bVar);
                            }
                            b bVar2 = (b) eVar.g(b.E, gVar);
                            this.f8961i = bVar2;
                            if (aVar != null) {
                                aVar.h(bVar2);
                                this.f8961i = aVar.f();
                            }
                            this.f8960e |= 1;
                        } else if (n6 == 18) {
                            if ((this.f8960e & 2) == 2) {
                                c cVar3 = this.f8962v;
                                cVar3.getClass();
                                aVar = c.i(cVar3);
                            }
                            c cVar4 = (c) eVar.g(c.E, gVar);
                            this.f8962v = cVar4;
                            if (aVar != null) {
                                aVar.j(cVar4);
                                this.f8962v = aVar.g();
                            }
                            this.f8960e |= 2;
                        } else if (n6 == 26) {
                            if ((this.f8960e & 4) == 4) {
                                c cVar5 = this.f8963w;
                                cVar5.getClass();
                                aVar = c.i(cVar5);
                            }
                            c cVar6 = (c) eVar.g(c.E, gVar);
                            this.f8963w = cVar6;
                            if (aVar != null) {
                                aVar.j(cVar6);
                                this.f8963w = aVar.g();
                            }
                            this.f8960e |= 4;
                        } else if (n6 == 34) {
                            if ((this.f8960e & 8) == 8) {
                                c cVar7 = this.f8964x;
                                cVar7.getClass();
                                aVar = c.i(cVar7);
                            }
                            c cVar8 = (c) eVar.g(c.E, gVar);
                            this.f8964x = cVar8;
                            if (aVar != null) {
                                aVar.j(cVar8);
                                this.f8964x = aVar.g();
                            }
                            this.f8960e |= 8;
                        } else if (n6 != 42) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            if ((this.f8960e & 16) == 16) {
                                c cVar9 = this.f8965y;
                                cVar9.getClass();
                                aVar = c.i(cVar9);
                            }
                            c cVar10 = (c) eVar.g(c.E, gVar);
                            this.f8965y = cVar10;
                            if (aVar != null) {
                                aVar.j(cVar10);
                                this.f8965y = aVar.g();
                            }
                            this.f8960e |= 16;
                        }
                    }
                    z5 = true;
                } catch (q e9) {
                    e9.f12236d = this;
                    throw e9;
                } catch (IOException e10) {
                    q qVar = new q(e10.getMessage());
                    qVar.f12236d = this;
                    throw qVar;
                }
            } catch (Throwable th2) {
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f8959d = cVar2.g();
                    throw th3;
                }
                this.f8959d = cVar2.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f8959d = cVar2.g();
            throw th4;
        }
        this.f8959d = cVar2.g();
    }
}
