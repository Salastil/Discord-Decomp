package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class l extends iq.n {
    public static final a E = new a(4);

    /* renamed from: y, reason: collision with root package name */
    public static final l f7156y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7157d;

    /* renamed from: e, reason: collision with root package name */
    public int f7158e;

    /* renamed from: i, reason: collision with root package name */
    public int f7159i;

    /* renamed from: v, reason: collision with root package name */
    public iq.t f7160v;

    /* renamed from: w, reason: collision with root package name */
    public byte f7161w;

    /* renamed from: x, reason: collision with root package name */
    public int f7162x;

    static {
        l lVar = new l();
        f7156y = lVar;
        lVar.f7159i = 0;
        lVar.f7160v = iq.d.f12197d;
    }

    public l() {
        this.f7161w = (byte) -1;
        this.f7162x = -1;
        this.f7157d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7161w;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        int i5 = this.f7158e;
        if ((i5 & 1) != 1) {
            this.f7161w = (byte) 0;
            return false;
        }
        if ((i5 & 2) == 2) {
            this.f7161w = (byte) 1;
            return true;
        }
        this.f7161w = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7162x;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7158e & 1) == 1 ? w1.d(1, this.f7159i) : 0;
        if ((this.f7158e & 2) == 2) {
            iq.t tVar = this.f7160v;
            d6 += tVar.size() + w1.h(tVar.size()) + w1.j(2);
        }
        int size = this.f7157d.size() + d6;
        this.f7162x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        b bVar = new b(1);
        bVar.f7019w = iq.d.f12197d;
        return bVar;
    }

    @Override // iq.a
    public final iq.i e() {
        b bVar = new b(1);
        bVar.f7019w = iq.d.f12197d;
        bVar.j(this);
        return bVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7158e & 1) == 1) {
            w1Var.r(1, this.f7159i);
        }
        if ((this.f7158e & 2) == 2) {
            iq.t tVar = this.f7160v;
            w1Var.C(2, 2);
            w1Var.A(tVar.size());
            w1Var.w(tVar);
        }
        w1Var.w(this.f7157d);
    }

    public l(b bVar) {
        this.f7161w = (byte) -1;
        this.f7162x = -1;
        this.f7157d = bVar.f12211d;
    }

    public l(iq.e eVar) {
        this.f7161w = (byte) -1;
        this.f7162x = -1;
        boolean z5 = false;
        this.f7159i = 0;
        this.f7160v = iq.d.f12197d;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 8) {
                                this.f7158e |= 1;
                                this.f7159i = eVar.k();
                            } else if (n6 != 18) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                this.f7158e |= 2;
                                this.f7160v = eVar.e();
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
                    this.f7157d = cVar.g();
                    throw th3;
                }
                this.f7157d = cVar.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7157d = cVar.g();
            throw th4;
        }
        this.f7157d = cVar.g();
    }
}
