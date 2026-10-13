package fq;

import com.google.android.gms.internal.play_billing.w1;
import iq.n;
import iq.q;
import iq.t;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class i extends n {
    public static final i J;
    public static final cq.a K = new cq.a(29);
    public int E;
    public List F;
    public int G;
    public byte H;
    public int I;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f8980d;

    /* renamed from: e, reason: collision with root package name */
    public int f8981e;

    /* renamed from: i, reason: collision with root package name */
    public int f8982i;

    /* renamed from: v, reason: collision with root package name */
    public int f8983v;

    /* renamed from: w, reason: collision with root package name */
    public Object f8984w;

    /* renamed from: x, reason: collision with root package name */
    public h f8985x;

    /* renamed from: y, reason: collision with root package name */
    public List f8986y;

    static {
        i iVar = new i();
        J = iVar;
        iVar.f8982i = 1;
        iVar.f8983v = 0;
        iVar.f8984w = "";
        iVar.f8985x = h.NONE;
        List list = Collections.EMPTY_LIST;
        iVar.f8986y = list;
        iVar.F = list;
    }

    public i() {
        this.E = -1;
        this.G = -1;
        this.H = (byte) -1;
        this.I = -1;
        this.f8980d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.H == 1) {
            return true;
        }
        this.H = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        iq.d dVar;
        int i5 = this.I;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f8981e & 1) == 1 ? w1.d(1, this.f8982i) : 0;
        if ((this.f8981e & 2) == 2) {
            d6 += w1.d(2, this.f8983v);
        }
        if ((this.f8981e & 8) == 8) {
            d6 += w1.c(3, this.f8985x.f8979d);
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f8986y.size(); i10++) {
            i6 += w1.e(((Integer) this.f8986y.get(i10)).intValue());
        }
        int i11 = d6 + i6;
        if (!this.f8986y.isEmpty()) {
            i11 = i11 + 1 + w1.e(i6);
        }
        this.E = i6;
        int i12 = 0;
        for (int i13 = 0; i13 < this.F.size(); i13++) {
            i12 += w1.e(((Integer) this.F.get(i13)).intValue());
        }
        int i14 = i11 + i12;
        if (!this.F.isEmpty()) {
            i14 = i14 + 1 + w1.e(i12);
        }
        this.G = i12;
        if ((this.f8981e & 4) == 4) {
            Object obj = this.f8984w;
            if (obj instanceof String) {
                try {
                    dVar = new t(((String) obj).getBytes("UTF-8"));
                    this.f8984w = dVar;
                } catch (UnsupportedEncodingException e9) {
                    throw new RuntimeException("UTF-8 not supported?", e9);
                }
            } else {
                dVar = (iq.d) obj;
            }
            i14 += dVar.size() + w1.h(dVar.size()) + w1.j(6);
        }
        int size = this.f8980d.size() + i14;
        this.I = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return g.g();
    }

    @Override // iq.a
    public final iq.i e() {
        g g6 = g.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        iq.d dVar;
        c();
        if ((this.f8981e & 1) == 1) {
            w1Var.r(1, this.f8982i);
        }
        if ((this.f8981e & 2) == 2) {
            w1Var.r(2, this.f8983v);
        }
        if ((this.f8981e & 8) == 8) {
            w1Var.q(3, this.f8985x.f8979d);
        }
        if (this.f8986y.size() > 0) {
            w1Var.A(34);
            w1Var.A(this.E);
        }
        for (int i5 = 0; i5 < this.f8986y.size(); i5++) {
            w1Var.s(((Integer) this.f8986y.get(i5)).intValue());
        }
        if (this.F.size() > 0) {
            w1Var.A(42);
            w1Var.A(this.G);
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            w1Var.s(((Integer) this.F.get(i6)).intValue());
        }
        if ((this.f8981e & 4) == 4) {
            Object obj = this.f8984w;
            if (obj instanceof String) {
                try {
                    dVar = new t(((String) obj).getBytes("UTF-8"));
                    this.f8984w = dVar;
                } catch (UnsupportedEncodingException e9) {
                    throw new RuntimeException("UTF-8 not supported?", e9);
                }
            } else {
                dVar = (iq.d) obj;
            }
            w1Var.C(6, 2);
            w1Var.A(dVar.size());
            w1Var.w(dVar);
        }
        w1Var.w(this.f8980d);
    }

    public i(g gVar) {
        this.E = -1;
        this.G = -1;
        this.H = (byte) -1;
        this.I = -1;
        this.f8980d = gVar.f12211d;
    }

    public i(iq.e eVar) {
        h hVar;
        this.E = -1;
        this.G = -1;
        this.H = (byte) -1;
        this.I = -1;
        this.f8982i = 1;
        boolean z5 = false;
        this.f8983v = 0;
        this.f8984w = "";
        h hVar2 = h.NONE;
        this.f8985x = hVar2;
        List list = Collections.EMPTY_LIST;
        this.f8986y = list;
        this.F = list;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        int i5 = 0;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f8981e |= 1;
                            this.f8982i = eVar.k();
                        } else if (n6 == 16) {
                            this.f8981e |= 2;
                            this.f8983v = eVar.k();
                        } else if (n6 == 24) {
                            int k = eVar.k();
                            if (k == 0) {
                                hVar = hVar2;
                            } else if (k != 1) {
                                hVar = k != 2 ? null : h.DESC_TO_CLASS_ID;
                            } else {
                                hVar = h.INTERNAL_TO_CLASS_ID;
                            }
                            if (hVar == null) {
                                m5.A(n6);
                                m5.A(k);
                            } else {
                                this.f8981e |= 8;
                                this.f8985x = hVar;
                            }
                        } else if (n6 == 32) {
                            if ((i5 & 16) != 16) {
                                this.f8986y = new ArrayList();
                                i5 |= 16;
                            }
                            this.f8986y.add(Integer.valueOf(eVar.k()));
                        } else if (n6 == 34) {
                            int d6 = eVar.d(eVar.k());
                            if ((i5 & 16) != 16 && eVar.b() > 0) {
                                this.f8986y = new ArrayList();
                                i5 |= 16;
                            }
                            while (eVar.b() > 0) {
                                this.f8986y.add(Integer.valueOf(eVar.k()));
                            }
                            eVar.c(d6);
                        } else if (n6 == 40) {
                            if ((i5 & 32) != 32) {
                                this.F = new ArrayList();
                                i5 |= 32;
                            }
                            this.F.add(Integer.valueOf(eVar.k()));
                        } else if (n6 == 42) {
                            int d7 = eVar.d(eVar.k());
                            if ((i5 & 32) != 32 && eVar.b() > 0) {
                                this.F = new ArrayList();
                                i5 |= 32;
                            }
                            while (eVar.b() > 0) {
                                this.F.add(Integer.valueOf(eVar.k()));
                            }
                            eVar.c(d7);
                        } else if (n6 != 50) {
                            if (!eVar.q(n6, m5)) {
                            }
                        } else {
                            t e9 = eVar.e();
                            this.f8981e |= 4;
                            this.f8984w = e9;
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if ((i5 & 16) == 16) {
                        this.f8986y = Collections.unmodifiableList(this.f8986y);
                    }
                    if ((i5 & 32) == 32) {
                        this.F = Collections.unmodifiableList(this.F);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f8980d = cVar.g();
                        throw th3;
                    }
                    this.f8980d = cVar.g();
                    throw th2;
                }
            } catch (q e10) {
                e10.f12236d = this;
                throw e10;
            } catch (IOException e11) {
                q qVar = new q(e11.getMessage());
                qVar.f12236d = this;
                throw qVar;
            }
        }
        if ((i5 & 16) == 16) {
            this.f8986y = Collections.unmodifiableList(this.f8986y);
        }
        if ((i5 & 32) == 32) {
            this.F = Collections.unmodifiableList(this.F);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f8980d = cVar.g();
            throw th4;
        }
        this.f8980d = cVar.g();
    }
}
