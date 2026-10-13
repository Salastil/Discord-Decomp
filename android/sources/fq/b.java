package fq;

import com.google.android.gms.internal.play_billing.w1;
import iq.n;
import iq.q;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class b extends n {
    public static final cq.a E = new cq.a(25);

    /* renamed from: y, reason: collision with root package name */
    public static final b f8939y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f8940d;

    /* renamed from: e, reason: collision with root package name */
    public int f8941e;

    /* renamed from: i, reason: collision with root package name */
    public int f8942i;

    /* renamed from: v, reason: collision with root package name */
    public int f8943v;

    /* renamed from: w, reason: collision with root package name */
    public byte f8944w;

    /* renamed from: x, reason: collision with root package name */
    public int f8945x;

    static {
        b bVar = new b();
        f8939y = bVar;
        bVar.f8942i = 0;
        bVar.f8943v = 0;
    }

    public b() {
        this.f8944w = (byte) -1;
        this.f8945x = -1;
        this.f8940d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.f8944w == 1) {
            return true;
        }
        this.f8944w = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f8945x;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f8941e & 1) == 1 ? w1.d(1, this.f8942i) : 0;
        if ((this.f8941e & 2) == 2) {
            d6 += w1.d(2, this.f8943v);
        }
        int size = this.f8940d.size() + d6;
        this.f8945x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return new a(0);
    }

    @Override // iq.a
    public final iq.i e() {
        a aVar = new a(0);
        aVar.h(this);
        return aVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f8941e & 1) == 1) {
            w1Var.r(1, this.f8942i);
        }
        if ((this.f8941e & 2) == 2) {
            w1Var.r(2, this.f8943v);
        }
        w1Var.w(this.f8940d);
    }

    public b(a aVar) {
        this.f8944w = (byte) -1;
        this.f8945x = -1;
        this.f8940d = aVar.f12211d;
    }

    public b(iq.e eVar) {
        this.f8944w = (byte) -1;
        this.f8945x = -1;
        boolean z5 = false;
        this.f8942i = 0;
        this.f8943v = 0;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f8941e |= 1;
                            this.f8942i = eVar.k();
                        } else if (n6 != 16) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            this.f8941e |= 2;
                            this.f8943v = eVar.k();
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
                    this.f8940d = cVar.g();
                    throw th3;
                }
                this.f8940d = cVar.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f8940d = cVar.g();
            throw th4;
        }
        this.f8940d = cVar.g();
    }
}
