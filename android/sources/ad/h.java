package ad;

import com.google.android.exoplayer2.Format;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class h implements i {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f369b;

    /* renamed from: c, reason: collision with root package name */
    public long f370c;

    /* renamed from: d, reason: collision with root package name */
    public int f371d;

    /* renamed from: e, reason: collision with root package name */
    public int f372e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f373f;

    /* renamed from: g, reason: collision with root package name */
    public Object f374g;

    public h(List list) {
        this.a = 0;
        this.f373f = list;
        this.f374g = new qc.v[list.size()];
        this.f370c = -9223372036854775807L;
    }

    @Override // ad.i
    public final void a() {
        switch (this.a) {
            case 0:
                this.f369b = false;
                this.f370c = -9223372036854775807L;
                break;
            default:
                this.f369b = false;
                this.f370c = -9223372036854775807L;
                break;
        }
    }

    @Override // ad.i
    public final void c(ke.w wVar) {
        boolean z5;
        boolean z6;
        switch (this.a) {
            case 0:
                if (this.f369b) {
                    if (this.f371d == 2) {
                        if (wVar.a() == 0) {
                            z6 = false;
                        } else {
                            if (wVar.u() != 32) {
                                this.f369b = false;
                            }
                            this.f371d--;
                            z6 = this.f369b;
                        }
                        if (!z6) {
                        }
                    }
                    if (this.f371d == 1) {
                        if (wVar.a() == 0) {
                            z5 = false;
                        } else {
                            if (wVar.u() != 0) {
                                this.f369b = false;
                            }
                            this.f371d--;
                            z5 = this.f369b;
                        }
                        if (!z5) {
                        }
                    }
                    int i5 = wVar.f13363b;
                    int a = wVar.a();
                    for (qc.v vVar : (qc.v[]) this.f374g) {
                        wVar.F(i5);
                        vVar.d(a, wVar);
                    }
                    this.f372e += a;
                    break;
                }
                break;
            default:
                ke.w wVar2 = (ke.w) this.f373f;
                ke.b.l((qc.v) this.f374g);
                if (this.f369b) {
                    int a10 = wVar.a();
                    int i6 = this.f372e;
                    if (i6 < 10) {
                        int min = Math.min(a10, 10 - i6);
                        System.arraycopy(wVar.a, wVar.f13363b, wVar2.a, this.f372e, min);
                        if (this.f372e + min == 10) {
                            wVar2.F(0);
                            if (73 != wVar2.u() || 68 != wVar2.u() || 51 != wVar2.u()) {
                                ke.b.N("Id3Reader", "Discarding invalid ID3 tag");
                                this.f369b = false;
                                break;
                            } else {
                                wVar2.G(3);
                                this.f371d = wVar2.t() + 10;
                            }
                        }
                    }
                    int min2 = Math.min(a10, this.f371d - this.f372e);
                    ((qc.v) this.f374g).d(min2, wVar);
                    this.f372e += min2;
                    break;
                }
                break;
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        switch (this.a) {
            case 0:
                qc.v[] vVarArr = (qc.v[]) this.f374g;
                for (int i5 = 0; i5 < vVarArr.length; i5++) {
                    f0 f0Var = (f0) ((List) this.f373f).get(i5);
                    g0Var.a();
                    g0Var.b();
                    qc.v y5 = lVar.y(g0Var.f367d, 3);
                    hc.f0 f0Var2 = new hc.f0();
                    g0Var.b();
                    f0Var2.a = g0Var.f368e;
                    f0Var2.k = "application/dvbsubs";
                    f0Var2.f9679m = Collections.singletonList(f0Var.f356b);
                    f0Var2.f9671c = f0Var.a;
                    y5.e(new Format(f0Var2));
                    vVarArr[i5] = y5;
                }
                break;
            default:
                g0Var.a();
                g0Var.b();
                qc.v y6 = lVar.y(g0Var.f367d, 5);
                this.f374g = y6;
                hc.f0 f0Var3 = new hc.f0();
                g0Var.b();
                f0Var3.a = g0Var.f368e;
                f0Var3.k = "application/id3";
                y6.e(new Format(f0Var3));
                break;
        }
    }

    @Override // ad.i
    public final void e() {
        int i5;
        switch (this.a) {
            case 0:
                if (this.f369b) {
                    if (this.f370c != -9223372036854775807L) {
                        for (qc.v vVar : (qc.v[]) this.f374g) {
                            vVar.b(this.f370c, 1, this.f372e, 0, null);
                        }
                    }
                    this.f369b = false;
                    break;
                }
                break;
            default:
                ke.b.l((qc.v) this.f374g);
                if (this.f369b && (i5 = this.f371d) != 0 && this.f372e == i5) {
                    long j = this.f370c;
                    if (j != -9223372036854775807L) {
                        ((qc.v) this.f374g).b(j, 1, i5, 0, null);
                    }
                    this.f369b = false;
                    break;
                }
                break;
        }
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        switch (this.a) {
            case 0:
                if ((i5 & 4) != 0) {
                    this.f369b = true;
                    if (j != -9223372036854775807L) {
                        this.f370c = j;
                    }
                    this.f372e = 0;
                    this.f371d = 2;
                    break;
                }
                break;
            default:
                if ((i5 & 4) != 0) {
                    this.f369b = true;
                    if (j != -9223372036854775807L) {
                        this.f370c = j;
                    }
                    this.f371d = 0;
                    this.f372e = 0;
                    break;
                }
                break;
        }
    }

    public h() {
        this.a = 1;
        this.f373f = new ke.w(10);
        this.f370c = -9223372036854775807L;
    }
}
