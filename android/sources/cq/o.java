package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class o extends iq.i implements iq.u {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7192e;

    /* renamed from: i, reason: collision with root package name */
    public int f7193i;

    /* renamed from: v, reason: collision with root package name */
    public List f7194v;

    public /* synthetic */ o(int i5) {
        this.f7192e = i5;
    }

    @Override // iq.i
    public final iq.a c() {
        switch (this.f7192e) {
            case 0:
                p f2 = f();
                if (f2.b()) {
                    return f2;
                }
                throw new ai.k();
            case 1:
                m0 g6 = g();
                if (g6.b()) {
                    return g6;
                }
                throw new ai.k();
            case 2:
                f1 j = j();
                j.b();
                return j;
            default:
                n0 h6 = h();
                h6.b();
                return h6;
        }
    }

    public final Object clone() {
        switch (this.f7192e) {
            case 0:
                o oVar = new o(0);
                oVar.f7194v = Collections.EMPTY_LIST;
                oVar.k(f());
                return oVar;
            case 1:
                o oVar2 = new o(1);
                oVar2.f7194v = Collections.EMPTY_LIST;
                oVar2.l(g());
                return oVar2;
            case 2:
                o oVar3 = new o(2);
                oVar3.f7194v = Collections.EMPTY_LIST;
                oVar3.n(j());
                return oVar3;
            default:
                o oVar4 = new o(3);
                oVar4.f7194v = iq.r.f12237e;
                oVar4.m(h());
                return oVar4;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x003f  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x007d  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        switch (this.f7192e) {
            case 0:
                p pVar = null;
                try {
                    try {
                        p.f7200x.getClass();
                        k(new p(eVar, gVar));
                        return this;
                    } catch (iq.q e9) {
                        p pVar2 = (p) e9.f12236d;
                        try {
                            throw e9;
                        } catch (Throwable th2) {
                            th = th2;
                            pVar = pVar2;
                            if (pVar != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th3) {
                    th = th3;
                    if (pVar != null) {
                        k(pVar);
                    }
                    throw th;
                }
            case 1:
                m0 m0Var = null;
                try {
                    try {
                        m0.f7175x.getClass();
                        l(new m0(eVar, gVar));
                        return this;
                    } catch (iq.q e10) {
                        m0 m0Var2 = (m0) e10.f12236d;
                        try {
                            throw e10;
                        } catch (Throwable th4) {
                            th = th4;
                            m0Var = m0Var2;
                            if (m0Var != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th5) {
                    th = th5;
                    if (m0Var != null) {
                        l(m0Var);
                    }
                    throw th;
                }
            case 2:
                f1 f1Var = null;
                try {
                    try {
                        f1.f7089x.getClass();
                        n(new f1(eVar, gVar));
                        return this;
                    } catch (Throwable th6) {
                        th = th6;
                        if (f1Var != null) {
                            n(f1Var);
                        }
                        throw th;
                    }
                } catch (iq.q e11) {
                    f1 f1Var2 = (f1) e11.f12236d;
                    try {
                        throw e11;
                    } catch (Throwable th7) {
                        th = th7;
                        f1Var = f1Var2;
                        if (f1Var != null) {
                        }
                        throw th;
                    }
                }
            default:
                n0 n0Var = null;
                try {
                    try {
                        n0.f7187x.getClass();
                        m(new n0(eVar));
                        return this;
                    } catch (iq.q e12) {
                        n0 n0Var2 = (n0) e12.f12236d;
                        try {
                            throw e12;
                        } catch (Throwable th8) {
                            th = th8;
                            n0Var = n0Var2;
                            if (n0Var != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th9) {
                    th = th9;
                    if (n0Var != null) {
                        m(n0Var);
                    }
                    throw th;
                }
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        switch (this.f7192e) {
            case 0:
                k((p) nVar);
                break;
            case 1:
                l((m0) nVar);
                break;
            case 2:
                n((f1) nVar);
                break;
            default:
                m((n0) nVar);
                break;
        }
        return this;
    }

    public p f() {
        p pVar = new p(this);
        if ((this.f7193i & 1) == 1) {
            this.f7194v = Collections.unmodifiableList(this.f7194v);
            this.f7193i &= -2;
        }
        pVar.f7202e = this.f7194v;
        return pVar;
    }

    public m0 g() {
        m0 m0Var = new m0(this);
        if ((this.f7193i & 1) == 1) {
            this.f7194v = Collections.unmodifiableList(this.f7194v);
            this.f7193i &= -2;
        }
        m0Var.f7177e = this.f7194v;
        return m0Var;
    }

    public n0 h() {
        n0 n0Var = new n0(this);
        if ((this.f7193i & 1) == 1) {
            this.f7194v = ((iq.s) this.f7194v).f();
            this.f7193i &= -2;
        }
        n0Var.f7189e = (iq.s) this.f7194v;
        return n0Var;
    }

    public f1 j() {
        f1 f1Var = new f1(this);
        if ((this.f7193i & 1) == 1) {
            this.f7194v = Collections.unmodifiableList(this.f7194v);
            this.f7193i &= -2;
        }
        f1Var.f7091e = this.f7194v;
        return f1Var;
    }

    public void k(p pVar) {
        if (pVar == p.f7199w) {
            return;
        }
        if (!pVar.f7202e.isEmpty()) {
            if (this.f7194v.isEmpty()) {
                this.f7194v = pVar.f7202e;
                this.f7193i &= -2;
            } else {
                if ((this.f7193i & 1) != 1) {
                    this.f7194v = new ArrayList(this.f7194v);
                    this.f7193i |= 1;
                }
                this.f7194v.addAll(pVar.f7202e);
            }
        }
        this.f12211d = this.f12211d.b(pVar.f7201d);
    }

    public void l(m0 m0Var) {
        if (m0Var == m0.f7174w) {
            return;
        }
        if (!m0Var.f7177e.isEmpty()) {
            if (this.f7194v.isEmpty()) {
                this.f7194v = m0Var.f7177e;
                this.f7193i &= -2;
            } else {
                if ((this.f7193i & 1) != 1) {
                    this.f7194v = new ArrayList(this.f7194v);
                    this.f7193i |= 1;
                }
                this.f7194v.addAll(m0Var.f7177e);
            }
        }
        this.f12211d = this.f12211d.b(m0Var.f7176d);
    }

    public void m(n0 n0Var) {
        if (n0Var == n0.f7186w) {
            return;
        }
        if (!n0Var.f7189e.isEmpty()) {
            if (((iq.s) this.f7194v).isEmpty()) {
                this.f7194v = n0Var.f7189e;
                this.f7193i &= -2;
            } else {
                if ((this.f7193i & 1) != 1) {
                    this.f7194v = new iq.r((iq.s) this.f7194v);
                    this.f7193i |= 1;
                }
                ((iq.s) this.f7194v).addAll(n0Var.f7189e);
            }
        }
        this.f12211d = this.f12211d.b(n0Var.f7188d);
    }

    public void n(f1 f1Var) {
        if (f1Var == f1.f7088w) {
            return;
        }
        if (!f1Var.f7091e.isEmpty()) {
            if (this.f7194v.isEmpty()) {
                this.f7194v = f1Var.f7091e;
                this.f7193i &= -2;
            } else {
                if ((this.f7193i & 1) != 1) {
                    this.f7194v = new ArrayList(this.f7194v);
                    this.f7193i |= 1;
                }
                this.f7194v.addAll(f1Var.f7091e);
            }
        }
        this.f12211d = this.f12211d.b(f1Var.f7090d);
    }
}
