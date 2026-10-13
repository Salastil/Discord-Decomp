package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class p extends iq.n {

    /* renamed from: w, reason: collision with root package name */
    public static final p f7199w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f7200x = new a(6);

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7201d;

    /* renamed from: e, reason: collision with root package name */
    public List f7202e;

    /* renamed from: i, reason: collision with root package name */
    public byte f7203i;

    /* renamed from: v, reason: collision with root package name */
    public int f7204v;

    static {
        p pVar = new p();
        f7199w = pVar;
        pVar.f7202e = Collections.EMPTY_LIST;
    }

    public p() {
        this.f7203i = (byte) -1;
        this.f7204v = -1;
        this.f7201d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7203i;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7202e.size(); i5++) {
            if (!((t) this.f7202e.get(i5)).b()) {
                this.f7203i = (byte) 0;
                return false;
            }
        }
        this.f7203i = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7204v;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f7202e.size(); i10++) {
            i6 += w1.f(1, (iq.a) this.f7202e.get(i10));
        }
        int size = this.f7201d.size() + i6;
        this.f7204v = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        o oVar = new o(0);
        oVar.f7194v = Collections.EMPTY_LIST;
        return oVar;
    }

    @Override // iq.a
    public final iq.i e() {
        o oVar = new o(0);
        oVar.f7194v = Collections.EMPTY_LIST;
        oVar.k(this);
        return oVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        for (int i5 = 0; i5 < this.f7202e.size(); i5++) {
            w1Var.t(1, (iq.a) this.f7202e.get(i5));
        }
        w1Var.w(this.f7201d);
    }

    public p(o oVar) {
        this.f7203i = (byte) -1;
        this.f7204v = -1;
        this.f7201d = oVar.f12211d;
    }

    public p(iq.e eVar, iq.g gVar) {
        this.f7203i = (byte) -1;
        this.f7204v = -1;
        this.f7202e = Collections.EMPTY_LIST;
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
                            if (!z6) {
                                this.f7202e = new ArrayList();
                                z6 = true;
                            }
                            this.f7202e.add(eVar.g(t.G, gVar));
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if (z6) {
                        this.f7202e = Collections.unmodifiableList(this.f7202e);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7201d = cVar.g();
                        throw th3;
                    }
                    this.f7201d = cVar.g();
                    throw th2;
                }
            } catch (iq.q e9) {
                e9.f12236d = this;
                throw e9;
            } catch (IOException e10) {
                iq.q qVar = new iq.q(e10.getMessage());
                qVar.f12236d = this;
                throw qVar;
            }
        }
        if (z6) {
            this.f7202e = Collections.unmodifiableList(this.f7202e);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7201d = cVar.g();
            throw th4;
        }
        this.f7201d = cVar.g();
    }
}
