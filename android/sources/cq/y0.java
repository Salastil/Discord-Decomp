package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class y0 extends iq.n {
    public static final a E = new a(21);

    /* renamed from: y, reason: collision with root package name */
    public static final y0 f7301y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7302d;

    /* renamed from: e, reason: collision with root package name */
    public int f7303e;

    /* renamed from: i, reason: collision with root package name */
    public List f7304i;

    /* renamed from: v, reason: collision with root package name */
    public int f7305v;

    /* renamed from: w, reason: collision with root package name */
    public byte f7306w;

    /* renamed from: x, reason: collision with root package name */
    public int f7307x;

    static {
        y0 y0Var = new y0();
        f7301y = y0Var;
        y0Var.f7304i = Collections.EMPTY_LIST;
        y0Var.f7305v = -1;
    }

    public y0() {
        this.f7306w = (byte) -1;
        this.f7307x = -1;
        this.f7302d = iq.d.f12197d;
    }

    public static g i(y0 y0Var) {
        g h6 = g.h();
        h6.k(y0Var);
        return h6;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7306w;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7304i.size(); i5++) {
            if (!((s0) this.f7304i.get(i5)).b()) {
                this.f7306w = (byte) 0;
                return false;
            }
        }
        this.f7306w = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7307x;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f7304i.size(); i10++) {
            i6 += w1.f(1, (iq.a) this.f7304i.get(i10));
        }
        if ((this.f7303e & 1) == 1) {
            i6 += w1.d(2, this.f7305v);
        }
        int size = this.f7302d.size() + i6;
        this.f7307x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return g.h();
    }

    @Override // iq.a
    public final iq.i e() {
        return i(this);
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        for (int i5 = 0; i5 < this.f7304i.size(); i5++) {
            w1Var.t(1, (iq.a) this.f7304i.get(i5));
        }
        if ((this.f7303e & 1) == 1) {
            w1Var.r(2, this.f7305v);
        }
        w1Var.w(this.f7302d);
    }

    public final g j() {
        return i(this);
    }

    public y0(g gVar) {
        this.f7306w = (byte) -1;
        this.f7307x = -1;
        this.f7302d = gVar.f12211d;
    }

    public y0(iq.e eVar, iq.g gVar) {
        this.f7306w = (byte) -1;
        this.f7307x = -1;
        this.f7304i = Collections.EMPTY_LIST;
        this.f7305v = -1;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        boolean z6 = false;
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 10) {
                                if (!z6) {
                                    this.f7304i = new ArrayList();
                                    z6 = true;
                                }
                                this.f7304i.add(eVar.g(s0.R, gVar));
                            } else if (n6 != 16) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                this.f7303e |= 1;
                                this.f7305v = eVar.k();
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
                if (z6) {
                    this.f7304i = Collections.unmodifiableList(this.f7304i);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7302d = cVar.g();
                    throw th3;
                }
                this.f7302d = cVar.g();
                throw th2;
            }
        }
        if (z6) {
            this.f7304i = Collections.unmodifiableList(this.f7304i);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7302d = cVar.g();
            throw th4;
        }
        this.f7302d = cVar.g();
    }
}
