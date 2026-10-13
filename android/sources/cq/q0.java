package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class q0 extends iq.n {
    public static final q0 E;
    public static final a F = new a(18);

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7216d;

    /* renamed from: e, reason: collision with root package name */
    public int f7217e;

    /* renamed from: i, reason: collision with root package name */
    public p0 f7218i;

    /* renamed from: v, reason: collision with root package name */
    public s0 f7219v;

    /* renamed from: w, reason: collision with root package name */
    public int f7220w;

    /* renamed from: x, reason: collision with root package name */
    public byte f7221x;

    /* renamed from: y, reason: collision with root package name */
    public int f7222y;

    static {
        q0 q0Var = new q0();
        E = q0Var;
        q0Var.f7218i = p0.INV;
        q0Var.f7219v = s0.Q;
        q0Var.f7220w = 0;
    }

    public q0() {
        this.f7221x = (byte) -1;
        this.f7222y = -1;
        this.f7216d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7221x;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if ((this.f7217e & 2) != 2 || this.f7219v.b()) {
            this.f7221x = (byte) 1;
            return true;
        }
        this.f7221x = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7222y;
        if (i5 != -1) {
            return i5;
        }
        int c6 = (this.f7217e & 1) == 1 ? w1.c(1, this.f7218i.f7210d) : 0;
        if ((this.f7217e & 2) == 2) {
            c6 += w1.f(2, this.f7219v);
        }
        if ((this.f7217e & 4) == 4) {
            c6 += w1.d(3, this.f7220w);
        }
        int size = this.f7216d.size() + c6;
        this.f7222y = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return o0.g();
    }

    @Override // iq.a
    public final iq.i e() {
        o0 g6 = o0.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7217e & 1) == 1) {
            w1Var.q(1, this.f7218i.f7210d);
        }
        if ((this.f7217e & 2) == 2) {
            w1Var.t(2, this.f7219v);
        }
        if ((this.f7217e & 4) == 4) {
            w1Var.r(3, this.f7220w);
        }
        w1Var.w(this.f7216d);
    }

    public q0(o0 o0Var) {
        this.f7221x = (byte) -1;
        this.f7222y = -1;
        this.f7216d = o0Var.f12211d;
    }

    public q0(iq.e eVar, iq.g gVar) {
        this.f7221x = (byte) -1;
        this.f7222y = -1;
        p0 p0Var = p0.INV;
        this.f7218i = p0Var;
        this.f7219v = s0.Q;
        boolean z5 = false;
        this.f7220w = 0;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            r0 r0Var = null;
                            p0 p0Var2 = null;
                            if (n6 == 8) {
                                int k = eVar.k();
                                if (k == 0) {
                                    p0Var2 = p0.IN;
                                } else if (k == 1) {
                                    p0Var2 = p0.OUT;
                                } else if (k == 2) {
                                    p0Var2 = p0Var;
                                } else if (k == 3) {
                                    p0Var2 = p0.STAR;
                                }
                                if (p0Var2 == null) {
                                    m5.A(n6);
                                    m5.A(k);
                                } else {
                                    this.f7217e |= 1;
                                    this.f7218i = p0Var2;
                                }
                            } else if (n6 == 18) {
                                if ((this.f7217e & 2) == 2) {
                                    s0 s0Var = this.f7219v;
                                    s0Var.getClass();
                                    r0Var = s0.q(s0Var);
                                }
                                s0 s0Var2 = (s0) eVar.g(s0.R, gVar);
                                this.f7219v = s0Var2;
                                if (r0Var != null) {
                                    r0Var.j(s0Var2);
                                    this.f7219v = r0Var.g();
                                }
                                this.f7217e |= 2;
                            } else if (n6 != 24) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                this.f7217e |= 4;
                                this.f7220w = eVar.k();
                            }
                        }
                        z5 = true;
                    } catch (iq.q e9) {
                        e9.f12236d = this;
                        throw e9;
                    }
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
                    this.f7216d = cVar.g();
                    throw th3;
                }
                this.f7216d = cVar.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7216d = cVar.g();
            throw th4;
        }
        this.f7216d = cVar.g();
    }
}
