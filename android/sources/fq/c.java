package fq;

import com.google.android.gms.internal.play_billing.w1;
import iq.n;
import iq.q;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class c extends n {
    public static final cq.a E = new cq.a(26);

    /* renamed from: y, reason: collision with root package name */
    public static final c f8946y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f8947d;

    /* renamed from: e, reason: collision with root package name */
    public int f8948e;

    /* renamed from: i, reason: collision with root package name */
    public int f8949i;

    /* renamed from: v, reason: collision with root package name */
    public int f8950v;

    /* renamed from: w, reason: collision with root package name */
    public byte f8951w;

    /* renamed from: x, reason: collision with root package name */
    public int f8952x;

    static {
        c cVar = new c();
        f8946y = cVar;
        cVar.f8949i = 0;
        cVar.f8950v = 0;
    }

    public c() {
        this.f8951w = (byte) -1;
        this.f8952x = -1;
        this.f8947d = iq.d.f12197d;
    }

    public static a i(c cVar) {
        a aVar = new a(1);
        aVar.j(cVar);
        return aVar;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.f8951w == 1) {
            return true;
        }
        this.f8951w = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f8952x;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f8948e & 1) == 1 ? w1.d(1, this.f8949i) : 0;
        if ((this.f8948e & 2) == 2) {
            d6 += w1.d(2, this.f8950v);
        }
        int size = this.f8947d.size() + d6;
        this.f8952x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return new a(1);
    }

    @Override // iq.a
    public final iq.i e() {
        return i(this);
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f8948e & 1) == 1) {
            w1Var.r(1, this.f8949i);
        }
        if ((this.f8948e & 2) == 2) {
            w1Var.r(2, this.f8950v);
        }
        w1Var.w(this.f8947d);
    }

    public c(a aVar) {
        this.f8951w = (byte) -1;
        this.f8952x = -1;
        this.f8947d = aVar.f12211d;
    }

    public c(iq.e eVar) {
        this.f8951w = (byte) -1;
        this.f8952x = -1;
        boolean z5 = false;
        this.f8949i = 0;
        this.f8950v = 0;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f8948e |= 1;
                            this.f8949i = eVar.k();
                        } else if (n6 != 16) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            this.f8948e |= 2;
                            this.f8950v = eVar.k();
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
                    this.f8947d = cVar.g();
                    throw th3;
                }
                this.f8947d = cVar.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f8947d = cVar.g();
            throw th4;
        }
        this.f8947d = cVar.g();
    }
}
