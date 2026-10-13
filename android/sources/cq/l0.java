package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class l0 extends iq.n {
    public static final l0 E;
    public static final a F = new a(15);

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7163d;

    /* renamed from: e, reason: collision with root package name */
    public int f7164e;

    /* renamed from: i, reason: collision with root package name */
    public int f7165i;

    /* renamed from: v, reason: collision with root package name */
    public int f7166v;

    /* renamed from: w, reason: collision with root package name */
    public k0 f7167w;

    /* renamed from: x, reason: collision with root package name */
    public byte f7168x;

    /* renamed from: y, reason: collision with root package name */
    public int f7169y;

    static {
        l0 l0Var = new l0();
        E = l0Var;
        l0Var.f7165i = -1;
        l0Var.f7166v = 0;
        l0Var.f7167w = k0.PACKAGE;
    }

    public l0() {
        this.f7168x = (byte) -1;
        this.f7169y = -1;
        this.f7163d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7168x;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if ((this.f7164e & 2) == 2) {
            this.f7168x = (byte) 1;
            return true;
        }
        this.f7168x = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7169y;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7164e & 1) == 1 ? w1.d(1, this.f7165i) : 0;
        if ((this.f7164e & 2) == 2) {
            d6 += w1.d(2, this.f7166v);
        }
        if ((this.f7164e & 4) == 4) {
            d6 += w1.c(3, this.f7167w.f7155d);
        }
        int size = this.f7163d.size() + d6;
        this.f7169y = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return j0.g();
    }

    @Override // iq.a
    public final iq.i e() {
        j0 g6 = j0.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7164e & 1) == 1) {
            w1Var.r(1, this.f7165i);
        }
        if ((this.f7164e & 2) == 2) {
            w1Var.r(2, this.f7166v);
        }
        if ((this.f7164e & 4) == 4) {
            w1Var.q(3, this.f7167w.f7155d);
        }
        w1Var.w(this.f7163d);
    }

    public l0(j0 j0Var) {
        this.f7168x = (byte) -1;
        this.f7169y = -1;
        this.f7163d = j0Var.f12211d;
    }

    public l0(iq.e eVar) {
        k0 k0Var;
        this.f7168x = (byte) -1;
        this.f7169y = -1;
        this.f7165i = -1;
        boolean z5 = false;
        this.f7166v = 0;
        k0 k0Var2 = k0.PACKAGE;
        this.f7167w = k0Var2;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f7164e |= 1;
                            this.f7165i = eVar.k();
                        } else if (n6 == 16) {
                            this.f7164e |= 2;
                            this.f7166v = eVar.k();
                        } else if (n6 != 24) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            int k = eVar.k();
                            if (k == 0) {
                                k0Var = k0.CLASS;
                            } else if (k != 1) {
                                k0Var = k != 2 ? null : k0.LOCAL;
                            } else {
                                k0Var = k0Var2;
                            }
                            if (k0Var == null) {
                                m5.A(n6);
                                m5.A(k);
                            } else {
                                this.f7164e |= 4;
                                this.f7167w = k0Var;
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
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7163d = cVar.g();
                    throw th3;
                }
                this.f7163d = cVar.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7163d = cVar.g();
            throw th4;
        }
        this.f7163d = cVar.g();
    }
}
