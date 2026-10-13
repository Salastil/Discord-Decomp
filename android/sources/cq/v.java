package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class v extends iq.k {
    public static final a E = new a(8);

    /* renamed from: y, reason: collision with root package name */
    public static final v f7262y;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7263e;

    /* renamed from: i, reason: collision with root package name */
    public int f7264i;

    /* renamed from: v, reason: collision with root package name */
    public int f7265v;

    /* renamed from: w, reason: collision with root package name */
    public byte f7266w;

    /* renamed from: x, reason: collision with root package name */
    public int f7267x;

    static {
        v vVar = new v();
        f7262y = vVar;
        vVar.f7265v = 0;
    }

    public v(u uVar) {
        super(uVar);
        this.f7266w = (byte) -1;
        this.f7267x = -1;
        this.f7263e = uVar.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return f7262y;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7266w;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if (i()) {
            this.f7266w = (byte) 1;
            return true;
        }
        this.f7266w = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7267x;
        if (i5 != -1) {
            return i5;
        }
        int size = this.f7263e.size() + j() + ((this.f7264i & 1) == 1 ? w1.d(1, this.f7265v) : 0);
        this.f7267x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return new u();
    }

    @Override // iq.a
    public final iq.i e() {
        u uVar = new u();
        uVar.g(this);
        return uVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7264i & 1) == 1) {
            w1Var.r(1, this.f7265v);
        }
        rVar.v(androidx.recyclerview.widget.h0.DEFAULT_DRAG_ANIMATION_DURATION, w1Var);
        w1Var.w(this.f7263e);
    }

    public v() {
        this.f7266w = (byte) -1;
        this.f7267x = -1;
        this.f7263e = iq.d.f12197d;
    }

    public v(iq.e eVar, iq.g gVar) {
        this.f7266w = (byte) -1;
        this.f7267x = -1;
        boolean z5 = false;
        this.f7265v = 0;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 != 8) {
                                if (!n(eVar, m5, gVar, n6)) {
                                }
                            } else {
                                this.f7264i |= 1;
                                this.f7265v = eVar.k();
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
                    this.f7263e = cVar.g();
                    throw th3;
                }
                this.f7263e = cVar.g();
                m();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7263e = cVar.g();
            throw th4;
        }
        this.f7263e = cVar.g();
        m();
    }
}
