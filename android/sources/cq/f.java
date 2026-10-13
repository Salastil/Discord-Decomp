package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class f extends iq.n {
    public static final a E = new a(1);

    /* renamed from: y, reason: collision with root package name */
    public static final f f7077y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7078d;

    /* renamed from: e, reason: collision with root package name */
    public int f7079e;

    /* renamed from: i, reason: collision with root package name */
    public int f7080i;

    /* renamed from: v, reason: collision with root package name */
    public e f7081v;

    /* renamed from: w, reason: collision with root package name */
    public byte f7082w;

    /* renamed from: x, reason: collision with root package name */
    public int f7083x;

    static {
        f fVar = new f();
        f7077y = fVar;
        fVar.f7080i = 0;
        fVar.f7081v = e.M;
    }

    public f() {
        this.f7082w = (byte) -1;
        this.f7083x = -1;
        this.f7078d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7082w;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        int i5 = this.f7079e;
        if ((i5 & 1) != 1) {
            this.f7082w = (byte) 0;
            return false;
        }
        if ((i5 & 2) != 2) {
            this.f7082w = (byte) 0;
            return false;
        }
        if (this.f7081v.b()) {
            this.f7082w = (byte) 1;
            return true;
        }
        this.f7082w = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7083x;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7079e & 1) == 1 ? w1.d(1, this.f7080i) : 0;
        if ((this.f7079e & 2) == 2) {
            d6 += w1.f(2, this.f7081v);
        }
        int size = this.f7078d.size() + d6;
        this.f7083x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        b bVar = new b(0);
        bVar.f7019w = e.M;
        return bVar;
    }

    @Override // iq.a
    public final iq.i e() {
        b bVar = new b(0);
        bVar.f7019w = e.M;
        bVar.h(this);
        return bVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7079e & 1) == 1) {
            w1Var.r(1, this.f7080i);
        }
        if ((this.f7079e & 2) == 2) {
            w1Var.t(2, this.f7081v);
        }
        w1Var.w(this.f7078d);
    }

    public f(b bVar) {
        this.f7082w = (byte) -1;
        this.f7083x = -1;
        this.f7078d = bVar.f12211d;
    }

    public f(iq.e eVar, iq.g gVar) {
        c cVar;
        this.f7082w = (byte) -1;
        this.f7083x = -1;
        boolean z5 = false;
        this.f7080i = 0;
        this.f7081v = e.M;
        iq.c cVar2 = new iq.c();
        w1 m5 = w1.m(cVar2, 1);
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 8) {
                                this.f7079e |= 1;
                                this.f7080i = eVar.k();
                            } else if (n6 != 18) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                if ((this.f7079e & 2) == 2) {
                                    e eVar2 = this.f7081v;
                                    eVar2.getClass();
                                    cVar = c.g();
                                    cVar.h(eVar2);
                                } else {
                                    cVar = null;
                                }
                                e eVar3 = (e) eVar.g(e.N, gVar);
                                this.f7081v = eVar3;
                                if (cVar != null) {
                                    cVar.h(eVar3);
                                    this.f7081v = cVar.f();
                                }
                                this.f7079e |= 2;
                            }
                        }
                        z5 = true;
                    } catch (IOException e9) {
                        iq.q qVar = new iq.q(e9.getMessage());
                        qVar.f12236d = this;
                        throw qVar;
                    }
                } catch (iq.q e10) {
                    e10.f12236d = this;
                    throw e10;
                }
            } catch (Throwable th2) {
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7078d = cVar2.g();
                    throw th3;
                }
                this.f7078d = cVar2.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7078d = cVar2.g();
            throw th4;
        }
        this.f7078d = cVar2.g();
    }
}
