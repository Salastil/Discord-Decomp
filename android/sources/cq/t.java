package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class t extends iq.n {
    public static final t F;
    public static final a G = new a(7);
    public int E;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7243d;

    /* renamed from: e, reason: collision with root package name */
    public int f7244e;

    /* renamed from: i, reason: collision with root package name */
    public r f7245i;

    /* renamed from: v, reason: collision with root package name */
    public List f7246v;

    /* renamed from: w, reason: collision with root package name */
    public y f7247w;

    /* renamed from: x, reason: collision with root package name */
    public s f7248x;

    /* renamed from: y, reason: collision with root package name */
    public byte f7249y;

    static {
        t tVar = new t();
        F = tVar;
        tVar.f7245i = r.RETURNS_CONSTANT;
        tVar.f7246v = Collections.EMPTY_LIST;
        tVar.f7247w = y.I;
        tVar.f7248x = s.AT_MOST_ONCE;
    }

    public t() {
        this.f7249y = (byte) -1;
        this.E = -1;
        this.f7243d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7249y;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7246v.size(); i5++) {
            if (!((y) this.f7246v.get(i5)).b()) {
                this.f7249y = (byte) 0;
                return false;
            }
        }
        if ((this.f7244e & 2) != 2 || this.f7247w.b()) {
            this.f7249y = (byte) 1;
            return true;
        }
        this.f7249y = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.E;
        if (i5 != -1) {
            return i5;
        }
        int c6 = (this.f7244e & 1) == 1 ? w1.c(1, this.f7245i.f7227d) : 0;
        for (int i6 = 0; i6 < this.f7246v.size(); i6++) {
            c6 += w1.f(2, (iq.a) this.f7246v.get(i6));
        }
        if ((this.f7244e & 2) == 2) {
            c6 += w1.f(3, this.f7247w);
        }
        if ((this.f7244e & 4) == 4) {
            c6 += w1.c(4, this.f7248x.f7236d);
        }
        int size = this.f7243d.size() + c6;
        this.E = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return q.g();
    }

    @Override // iq.a
    public final iq.i e() {
        q g6 = q.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7244e & 1) == 1) {
            w1Var.q(1, this.f7245i.f7227d);
        }
        for (int i5 = 0; i5 < this.f7246v.size(); i5++) {
            w1Var.t(2, (iq.a) this.f7246v.get(i5));
        }
        if ((this.f7244e & 2) == 2) {
            w1Var.t(3, this.f7247w);
        }
        if ((this.f7244e & 4) == 4) {
            w1Var.q(4, this.f7248x.f7236d);
        }
        w1Var.w(this.f7243d);
    }

    public t(q qVar) {
        this.f7249y = (byte) -1;
        this.E = -1;
        this.f7243d = qVar.f12211d;
    }

    public t(iq.e eVar, iq.g gVar) {
        this.f7249y = (byte) -1;
        this.E = -1;
        r rVar = r.RETURNS_CONSTANT;
        this.f7245i = rVar;
        this.f7246v = Collections.EMPTY_LIST;
        this.f7247w = y.I;
        s sVar = s.AT_MOST_ONCE;
        this.f7248x = sVar;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        char c6 = 0;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        s sVar2 = null;
                        r rVar2 = null;
                        w wVar = null;
                        if (n6 == 8) {
                            int k = eVar.k();
                            if (k == 0) {
                                rVar2 = rVar;
                            } else if (k == 1) {
                                rVar2 = r.CALLS;
                            } else if (k == 2) {
                                rVar2 = r.RETURNS_NOT_NULL;
                            }
                            if (rVar2 == null) {
                                m5.A(n6);
                                m5.A(k);
                            } else {
                                this.f7244e |= 1;
                                this.f7245i = rVar2;
                            }
                        } else if (n6 == 18) {
                            int i5 = (c6 == true ? 1 : 0) & 2;
                            c6 = c6;
                            if (i5 != 2) {
                                this.f7246v = new ArrayList();
                                c6 = 2;
                            }
                            this.f7246v.add(eVar.g(y.J, gVar));
                        } else if (n6 == 26) {
                            if ((this.f7244e & 2) == 2) {
                                y yVar = this.f7247w;
                                yVar.getClass();
                                wVar = w.g();
                                wVar.h(yVar);
                            }
                            y yVar2 = (y) eVar.g(y.J, gVar);
                            this.f7247w = yVar2;
                            if (wVar != null) {
                                wVar.h(yVar2);
                                this.f7247w = wVar.f();
                            }
                            this.f7244e |= 2;
                        } else if (n6 != 32) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            int k5 = eVar.k();
                            if (k5 == 0) {
                                sVar2 = sVar;
                            } else if (k5 == 1) {
                                sVar2 = s.EXACTLY_ONCE;
                            } else if (k5 == 2) {
                                sVar2 = s.AT_LEAST_ONCE;
                            }
                            if (sVar2 == null) {
                                m5.A(n6);
                                m5.A(k5);
                            } else {
                                this.f7244e |= 4;
                                this.f7248x = sVar2;
                            }
                        }
                    }
                    z5 = true;
                } catch (iq.q e9) {
                    e9.f12236d = this;
                    throw e9;
                } catch (IOException e10) {
                    iq.q qVar = new iq.q(e10.getMessage());
                    qVar.f12236d = this;
                    throw qVar;
                }
            } catch (Throwable th2) {
                if (((c6 == true ? 1 : 0) & 2) == 2) {
                    this.f7246v = Collections.unmodifiableList(this.f7246v);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7243d = cVar.g();
                    throw th3;
                }
                this.f7243d = cVar.g();
                throw th2;
            }
        }
        if (((c6 == true ? 1 : 0) & 2) == 2) {
            this.f7246v = Collections.unmodifiableList(this.f7246v);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7243d = cVar.g();
            throw th4;
        }
        this.f7243d = cVar.g();
    }
}
