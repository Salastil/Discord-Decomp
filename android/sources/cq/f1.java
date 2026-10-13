package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class f1 extends iq.n {

    /* renamed from: w, reason: collision with root package name */
    public static final f1 f7088w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f7089x = new a(24);

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7090d;

    /* renamed from: e, reason: collision with root package name */
    public List f7091e;

    /* renamed from: i, reason: collision with root package name */
    public byte f7092i;

    /* renamed from: v, reason: collision with root package name */
    public int f7093v;

    static {
        f1 f1Var = new f1();
        f7088w = f1Var;
        f1Var.f7091e = Collections.EMPTY_LIST;
    }

    public f1() {
        this.f7092i = (byte) -1;
        this.f7093v = -1;
        this.f7090d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.f7092i == 1) {
            return true;
        }
        this.f7092i = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7093v;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f7091e.size(); i10++) {
            i6 += w1.f(1, (iq.a) this.f7091e.get(i10));
        }
        int size = this.f7090d.size() + i6;
        this.f7093v = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        o oVar = new o(2);
        oVar.f7194v = Collections.EMPTY_LIST;
        return oVar;
    }

    @Override // iq.a
    public final iq.i e() {
        o oVar = new o(2);
        oVar.f7194v = Collections.EMPTY_LIST;
        oVar.n(this);
        return oVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        for (int i5 = 0; i5 < this.f7091e.size(); i5++) {
            w1Var.t(1, (iq.a) this.f7091e.get(i5));
        }
        w1Var.w(this.f7090d);
    }

    public final o i() {
        o oVar = new o(2);
        oVar.f7194v = Collections.EMPTY_LIST;
        oVar.n(this);
        return oVar;
    }

    public f1(o oVar) {
        this.f7092i = (byte) -1;
        this.f7093v = -1;
        this.f7090d = oVar.f12211d;
    }

    public f1(iq.e eVar, iq.g gVar) {
        this.f7092i = (byte) -1;
        this.f7093v = -1;
        this.f7091e = Collections.EMPTY_LIST;
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
                                this.f7091e = new ArrayList();
                                z6 = true;
                            }
                            this.f7091e.add(eVar.g(e1.I, gVar));
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if (z6) {
                        this.f7091e = Collections.unmodifiableList(this.f7091e);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7090d = cVar.g();
                        throw th3;
                    }
                    this.f7090d = cVar.g();
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
            this.f7091e = Collections.unmodifiableList(this.f7091e);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7090d = cVar.g();
            throw th4;
        }
        this.f7090d = cVar.g();
    }
}
