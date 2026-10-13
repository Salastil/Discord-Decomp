package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class h extends iq.n {
    public static final a E = new a(0);

    /* renamed from: y, reason: collision with root package name */
    public static final h f7106y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7107d;

    /* renamed from: e, reason: collision with root package name */
    public int f7108e;

    /* renamed from: i, reason: collision with root package name */
    public int f7109i;

    /* renamed from: v, reason: collision with root package name */
    public List f7110v;

    /* renamed from: w, reason: collision with root package name */
    public byte f7111w;

    /* renamed from: x, reason: collision with root package name */
    public int f7112x;

    static {
        h hVar = new h();
        f7106y = hVar;
        hVar.f7109i = 0;
        hVar.f7110v = Collections.EMPTY_LIST;
    }

    public h() {
        this.f7111w = (byte) -1;
        this.f7112x = -1;
        this.f7107d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7111w;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if ((this.f7108e & 1) != 1) {
            this.f7111w = (byte) 0;
            return false;
        }
        for (int i5 = 0; i5 < this.f7110v.size(); i5++) {
            if (!((f) this.f7110v.get(i5)).b()) {
                this.f7111w = (byte) 0;
                return false;
            }
        }
        this.f7111w = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7112x;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7108e & 1) == 1 ? w1.d(1, this.f7109i) : 0;
        for (int i6 = 0; i6 < this.f7110v.size(); i6++) {
            d6 += w1.f(2, (iq.a) this.f7110v.get(i6));
        }
        int size = this.f7107d.size() + d6;
        this.f7112x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        g gVar = new g(0);
        gVar.f7096v = Collections.EMPTY_LIST;
        return gVar;
    }

    @Override // iq.a
    public final iq.i e() {
        g gVar = new g(0);
        gVar.f7096v = Collections.EMPTY_LIST;
        gVar.j(this);
        return gVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7108e & 1) == 1) {
            w1Var.r(1, this.f7109i);
        }
        for (int i5 = 0; i5 < this.f7110v.size(); i5++) {
            w1Var.t(2, (iq.a) this.f7110v.get(i5));
        }
        w1Var.w(this.f7107d);
    }

    public h(g gVar) {
        this.f7111w = (byte) -1;
        this.f7112x = -1;
        this.f7107d = gVar.f12211d;
    }

    public h(iq.e eVar, iq.g gVar) {
        this.f7111w = (byte) -1;
        this.f7112x = -1;
        boolean z5 = false;
        this.f7109i = 0;
        this.f7110v = Collections.EMPTY_LIST;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        char c6 = 0;
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 8) {
                                this.f7108e |= 1;
                                this.f7109i = eVar.k();
                            } else if (n6 != 18) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                if ((c6 & 2) != 2) {
                                    this.f7110v = new ArrayList();
                                    c6 = 2;
                                }
                                this.f7110v.add(eVar.g(f.E, gVar));
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
                if ((c6 & 2) == 2) {
                    this.f7110v = Collections.unmodifiableList(this.f7110v);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7107d = cVar.g();
                    throw th3;
                }
                this.f7107d = cVar.g();
                throw th2;
            }
        }
        if ((c6 & 2) == 2) {
            this.f7110v = Collections.unmodifiableList(this.f7110v);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7107d = cVar.g();
            throw th4;
        }
        this.f7107d = cVar.g();
    }
}
