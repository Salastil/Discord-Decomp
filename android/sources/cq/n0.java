package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class n0 extends iq.n {

    /* renamed from: w, reason: collision with root package name */
    public static final n0 f7186w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f7187x = new a(16);

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7188d;

    /* renamed from: e, reason: collision with root package name */
    public iq.s f7189e;

    /* renamed from: i, reason: collision with root package name */
    public byte f7190i;

    /* renamed from: v, reason: collision with root package name */
    public int f7191v;

    static {
        n0 n0Var = new n0();
        f7186w = n0Var;
        n0Var.f7189e = iq.r.f12237e;
    }

    public n0() {
        this.f7190i = (byte) -1;
        this.f7191v = -1;
        this.f7188d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.f7190i == 1) {
            return true;
        }
        this.f7190i = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7191v;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f7189e.size(); i10++) {
            iq.d P = this.f7189e.P(i10);
            i6 += P.size() + w1.h(P.size());
        }
        int size = this.f7188d.size() + this.f7189e.size() + i6;
        this.f7191v = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        o oVar = new o(3);
        oVar.f7194v = iq.r.f12237e;
        return oVar;
    }

    @Override // iq.a
    public final iq.i e() {
        o oVar = new o(3);
        oVar.f7194v = iq.r.f12237e;
        oVar.m(this);
        return oVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        for (int i5 = 0; i5 < this.f7189e.size(); i5++) {
            iq.d P = this.f7189e.P(i5);
            w1Var.C(1, 2);
            w1Var.A(P.size());
            w1Var.w(P);
        }
        w1Var.w(this.f7188d);
    }

    public n0(o oVar) {
        this.f7190i = (byte) -1;
        this.f7191v = -1;
        this.f7188d = oVar.f12211d;
    }

    public n0(iq.e eVar) {
        this.f7190i = (byte) -1;
        this.f7191v = -1;
        this.f7189e = iq.r.f12237e;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        boolean z6 = false;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 != 10) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            iq.t e9 = eVar.e();
                            if (!z6) {
                                this.f7189e = new iq.r();
                                z6 = true;
                            }
                            this.f7189e.A(e9);
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if (z6) {
                        this.f7189e = this.f7189e.f();
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7188d = cVar.g();
                        throw th3;
                    }
                    this.f7188d = cVar.g();
                    throw th2;
                }
            } catch (iq.q e10) {
                e10.f12236d = this;
                throw e10;
            } catch (IOException e11) {
                iq.q qVar = new iq.q(e11.getMessage());
                qVar.f12236d = this;
                throw qVar;
            }
        }
        if (z6) {
            this.f7189e = this.f7189e.f();
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7188d = cVar.g();
            throw th4;
        }
        this.f7188d = cVar.g();
    }
}
