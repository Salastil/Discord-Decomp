package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class m0 extends iq.n {

    /* renamed from: w, reason: collision with root package name */
    public static final m0 f7174w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f7175x = new a(14);

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7176d;

    /* renamed from: e, reason: collision with root package name */
    public List f7177e;

    /* renamed from: i, reason: collision with root package name */
    public byte f7178i;

    /* renamed from: v, reason: collision with root package name */
    public int f7179v;

    static {
        m0 m0Var = new m0();
        f7174w = m0Var;
        m0Var.f7177e = Collections.EMPTY_LIST;
    }

    public m0() {
        this.f7178i = (byte) -1;
        this.f7179v = -1;
        this.f7176d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7178i;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7177e.size(); i5++) {
            if (!((l0) this.f7177e.get(i5)).b()) {
                this.f7178i = (byte) 0;
                return false;
            }
        }
        this.f7178i = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7179v;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f7177e.size(); i10++) {
            i6 += w1.f(1, (iq.a) this.f7177e.get(i10));
        }
        int size = this.f7176d.size() + i6;
        this.f7179v = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        o oVar = new o(1);
        oVar.f7194v = Collections.EMPTY_LIST;
        return oVar;
    }

    @Override // iq.a
    public final iq.i e() {
        o oVar = new o(1);
        oVar.f7194v = Collections.EMPTY_LIST;
        oVar.l(this);
        return oVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        for (int i5 = 0; i5 < this.f7177e.size(); i5++) {
            w1Var.t(1, (iq.a) this.f7177e.get(i5));
        }
        w1Var.w(this.f7176d);
    }

    public m0(o oVar) {
        this.f7178i = (byte) -1;
        this.f7179v = -1;
        this.f7176d = oVar.f12211d;
    }

    public m0(iq.e eVar, iq.g gVar) {
        this.f7178i = (byte) -1;
        this.f7179v = -1;
        this.f7177e = Collections.EMPTY_LIST;
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
                                this.f7177e = new ArrayList();
                                z6 = true;
                            }
                            this.f7177e.add(eVar.g(l0.F, gVar));
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if (z6) {
                        this.f7177e = Collections.unmodifiableList(this.f7177e);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7176d = cVar.g();
                        throw th3;
                    }
                    this.f7176d = cVar.g();
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
            this.f7177e = Collections.unmodifiableList(this.f7177e);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7176d = cVar.g();
            throw th4;
        }
        this.f7176d = cVar.g();
    }
}
