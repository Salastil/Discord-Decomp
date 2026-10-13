package fq;

import com.google.android.gms.internal.play_billing.w1;
import iq.n;
import iq.q;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class j extends n {
    public static final cq.a E = new cq.a(28);

    /* renamed from: y, reason: collision with root package name */
    public static final j f8987y;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f8988d;

    /* renamed from: e, reason: collision with root package name */
    public List f8989e;

    /* renamed from: i, reason: collision with root package name */
    public List f8990i;

    /* renamed from: v, reason: collision with root package name */
    public int f8991v;

    /* renamed from: w, reason: collision with root package name */
    public byte f8992w;

    /* renamed from: x, reason: collision with root package name */
    public int f8993x;

    static {
        j jVar = new j();
        f8987y = jVar;
        List list = Collections.EMPTY_LIST;
        jVar.f8989e = list;
        jVar.f8990i = list;
    }

    public j() {
        this.f8991v = -1;
        this.f8992w = (byte) -1;
        this.f8993x = -1;
        this.f8988d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.f8992w == 1) {
            return true;
        }
        this.f8992w = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f8993x;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f8989e.size(); i10++) {
            i6 += w1.f(1, (iq.a) this.f8989e.get(i10));
        }
        int i11 = 0;
        for (int i12 = 0; i12 < this.f8990i.size(); i12++) {
            i11 += w1.e(((Integer) this.f8990i.get(i12)).intValue());
        }
        int i13 = i6 + i11;
        if (!this.f8990i.isEmpty()) {
            i13 = i13 + 1 + w1.e(i11);
        }
        this.f8991v = i11;
        int size = this.f8988d.size() + i13;
        this.f8993x = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        f fVar = new f();
        List list = Collections.EMPTY_LIST;
        fVar.f8967i = list;
        fVar.f8968v = list;
        return fVar;
    }

    @Override // iq.a
    public final iq.i e() {
        f fVar = new f();
        List list = Collections.EMPTY_LIST;
        fVar.f8967i = list;
        fVar.f8968v = list;
        fVar.g(this);
        return fVar;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        for (int i5 = 0; i5 < this.f8989e.size(); i5++) {
            w1Var.t(1, (iq.a) this.f8989e.get(i5));
        }
        if (this.f8990i.size() > 0) {
            w1Var.A(42);
            w1Var.A(this.f8991v);
        }
        for (int i6 = 0; i6 < this.f8990i.size(); i6++) {
            w1Var.s(((Integer) this.f8990i.get(i6)).intValue());
        }
        w1Var.w(this.f8988d);
    }

    public j(f fVar) {
        this.f8991v = -1;
        this.f8992w = (byte) -1;
        this.f8993x = -1;
        this.f8988d = fVar.f12211d;
    }

    public j(iq.e eVar, iq.g gVar) {
        this.f8991v = -1;
        this.f8992w = (byte) -1;
        this.f8993x = -1;
        List list = Collections.EMPTY_LIST;
        this.f8989e = list;
        this.f8990i = list;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        int i5 = 0;
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 10) {
                                if ((i5 & 1) != 1) {
                                    this.f8989e = new ArrayList();
                                    i5 |= 1;
                                }
                                this.f8989e.add(eVar.g(i.K, gVar));
                            } else if (n6 == 40) {
                                if ((i5 & 2) != 2) {
                                    this.f8990i = new ArrayList();
                                    i5 |= 2;
                                }
                                this.f8990i.add(Integer.valueOf(eVar.k()));
                            } else if (n6 != 42) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                int d6 = eVar.d(eVar.k());
                                if ((i5 & 2) != 2 && eVar.b() > 0) {
                                    this.f8990i = new ArrayList();
                                    i5 |= 2;
                                }
                                while (eVar.b() > 0) {
                                    this.f8990i.add(Integer.valueOf(eVar.k()));
                                }
                                eVar.c(d6);
                            }
                        }
                        z5 = true;
                    } catch (q e9) {
                        e9.f12236d = this;
                        throw e9;
                    }
                } catch (IOException e10) {
                    q qVar = new q(e10.getMessage());
                    qVar.f12236d = this;
                    throw qVar;
                }
            } catch (Throwable th2) {
                if ((i5 & 1) == 1) {
                    this.f8989e = Collections.unmodifiableList(this.f8989e);
                }
                if ((i5 & 2) == 2) {
                    this.f8990i = Collections.unmodifiableList(this.f8990i);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f8988d = cVar.g();
                    throw th3;
                }
                this.f8988d = cVar.g();
                throw th2;
            }
        }
        if ((i5 & 1) == 1) {
            this.f8989e = Collections.unmodifiableList(this.f8989e);
        }
        if ((i5 & 2) == 2) {
            this.f8990i = Collections.unmodifiableList(this.f8990i);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f8988d = cVar.g();
            throw th4;
        }
        this.f8988d = cVar.g();
    }
}
