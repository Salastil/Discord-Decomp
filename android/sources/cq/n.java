package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class n extends iq.k {
    public static final n G;
    public static final a H = new a(5);
    public byte E;
    public int F;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7180e;

    /* renamed from: i, reason: collision with root package name */
    public int f7181i;

    /* renamed from: v, reason: collision with root package name */
    public int f7182v;

    /* renamed from: w, reason: collision with root package name */
    public List f7183w;

    /* renamed from: x, reason: collision with root package name */
    public List f7184x;

    /* renamed from: y, reason: collision with root package name */
    public List f7185y;

    static {
        n nVar = new n();
        G = nVar;
        nVar.f7182v = 6;
        List list = Collections.EMPTY_LIST;
        nVar.f7183w = list;
        nVar.f7184x = list;
        nVar.f7185y = list;
    }

    public n(m mVar) {
        super(mVar);
        this.E = (byte) -1;
        this.F = -1;
        this.f7180e = mVar.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return G;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.E;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7183w.size(); i5++) {
            if (!((a1) this.f7183w.get(i5)).b()) {
                this.E = (byte) 0;
                return false;
            }
        }
        for (int i6 = 0; i6 < this.f7185y.size(); i6++) {
            if (!((l) this.f7185y.get(i6)).b()) {
                this.E = (byte) 0;
                return false;
            }
        }
        if (i()) {
            this.E = (byte) 1;
            return true;
        }
        this.E = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.F;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7181i & 1) == 1 ? w1.d(1, this.f7182v) : 0;
        for (int i6 = 0; i6 < this.f7183w.size(); i6++) {
            d6 += w1.f(2, (iq.a) this.f7183w.get(i6));
        }
        int i10 = 0;
        for (int i11 = 0; i11 < this.f7184x.size(); i11++) {
            i10 += w1.e(((Integer) this.f7184x.get(i11)).intValue());
        }
        int size = (this.f7184x.size() * 2) + d6 + i10;
        for (int i12 = 0; i12 < this.f7185y.size(); i12++) {
            size += w1.f(32, (iq.a) this.f7185y.get(i12));
        }
        int size2 = this.f7180e.size() + j() + size;
        this.F = size2;
        return size2;
    }

    @Override // iq.a
    public final iq.i d() {
        return m.h();
    }

    @Override // iq.a
    public final iq.i e() {
        m h6 = m.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7181i & 1) == 1) {
            w1Var.r(1, this.f7182v);
        }
        for (int i5 = 0; i5 < this.f7183w.size(); i5++) {
            w1Var.t(2, (iq.a) this.f7183w.get(i5));
        }
        for (int i6 = 0; i6 < this.f7184x.size(); i6++) {
            w1Var.r(31, ((Integer) this.f7184x.get(i6)).intValue());
        }
        for (int i10 = 0; i10 < this.f7185y.size(); i10++) {
            w1Var.t(32, (iq.a) this.f7185y.get(i10));
        }
        rVar.v(19000, w1Var);
        w1Var.w(this.f7180e);
    }

    public n() {
        this.E = (byte) -1;
        this.F = -1;
        this.f7180e = iq.d.f12197d;
    }

    public n(iq.e eVar, iq.g gVar) {
        this.E = (byte) -1;
        this.F = -1;
        this.f7182v = 6;
        List list = Collections.EMPTY_LIST;
        this.f7183w = list;
        this.f7184x = list;
        this.f7185y = list;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        int i5 = 0;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f7181i |= 1;
                            this.f7182v = eVar.k();
                        } else if (n6 == 18) {
                            if ((i5 & 2) != 2) {
                                this.f7183w = new ArrayList();
                                i5 |= 2;
                            }
                            this.f7183w.add(eVar.g(a1.J, gVar));
                        } else if (n6 == 248) {
                            if ((i5 & 4) != 4) {
                                this.f7184x = new ArrayList();
                                i5 |= 4;
                            }
                            this.f7184x.add(Integer.valueOf(eVar.k()));
                        } else if (n6 == 250) {
                            int d6 = eVar.d(eVar.k());
                            if ((i5 & 4) != 4 && eVar.b() > 0) {
                                this.f7184x = new ArrayList();
                                i5 |= 4;
                            }
                            while (eVar.b() > 0) {
                                this.f7184x.add(Integer.valueOf(eVar.k()));
                            }
                            eVar.c(d6);
                        } else if (n6 != 258) {
                            if (!n(eVar, m5, gVar, n6)) {
                            }
                        } else {
                            if ((i5 & 8) != 8) {
                                this.f7185y = new ArrayList();
                                i5 |= 8;
                            }
                            this.f7185y.add(eVar.g(l.E, gVar));
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
                if ((i5 & 2) == 2) {
                    this.f7183w = Collections.unmodifiableList(this.f7183w);
                }
                if ((i5 & 4) == 4) {
                    this.f7184x = Collections.unmodifiableList(this.f7184x);
                }
                if ((i5 & 8) == 8) {
                    this.f7185y = Collections.unmodifiableList(this.f7185y);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7180e = cVar.g();
                    throw th3;
                }
                this.f7180e = cVar.g();
                m();
                throw th2;
            }
        }
        if ((i5 & 2) == 2) {
            this.f7183w = Collections.unmodifiableList(this.f7183w);
        }
        if ((i5 & 4) == 4) {
            this.f7184x = Collections.unmodifiableList(this.f7184x);
        }
        if ((i5 & 8) == 8) {
            this.f7185y = Collections.unmodifiableList(this.f7185y);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7180e = cVar.g();
            throw th4;
        }
        this.f7180e = cVar.g();
        m();
    }
}
