package zc;

import com.google.android.exoplayer2.Format;
import hc.g1;
import java.util.Arrays;
import ke.d0;
import ke.w;
import nd.k0;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.s;
import qc.v;

/* loaded from: classes3.dex */
public final class d implements j {
    public l a;

    /* renamed from: b, reason: collision with root package name */
    public h f21159b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f21160c;

    @Override // qc.j
    public final void a(l lVar) {
        this.a = lVar;
    }

    public final boolean b(k kVar) {
        boolean z5;
        e eVar = new e();
        if (eVar.a(kVar, true) && (eVar.a & 2) == 2) {
            int min = Math.min(eVar.f21164e, 8);
            w wVar = new w(min);
            kVar.C(wVar.a, 0, min);
            wVar.F(0);
            if (wVar.a() >= 5 && wVar.u() == 127 && wVar.v() == 1179402563) {
                this.f21159b = new c();
                return true;
            }
            wVar.F(0);
            try {
                z5 = zk.a.N(1, wVar, true);
            } catch (g1 unused) {
                z5 = false;
            }
            if (z5) {
                this.f21159b = new i();
            } else {
                wVar.F(0);
                if (g.e(wVar, g.f21167o)) {
                    this.f21159b = new g();
                }
            }
            return true;
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:60:0x0173 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0174  */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        int i5;
        w wVar;
        byte[] bArr;
        ke.b.l(this.a);
        if (this.f21159b == null) {
            if (!b(kVar)) {
                throw g1.a("Failed to determine bitstream type", null);
            }
            ((qc.g) kVar).f16775x = 0;
        }
        if (!this.f21160c) {
            v y5 = this.a.y(0, 1);
            this.a.r();
            h hVar = this.f21159b;
            hVar.f21171c = this.a;
            hVar.f21170b = y5;
            hVar.d(true);
            this.f21160c = true;
        }
        h hVar2 = this.f21159b;
        kj.a aVar = hVar2.a;
        ke.b.l(hVar2.f21170b);
        int i6 = d0.a;
        int i10 = hVar2.f21176h;
        long j = -1;
        if (i10 != 0) {
            if (i10 == 1) {
                ((qc.g) kVar).u((int) hVar2.f21174f);
                hVar2.f21176h = 2;
                return 0;
            }
            if (i10 != 2) {
                if (i10 == 3) {
                    return -1;
                }
                throw new IllegalStateException();
            }
            long a = hVar2.f21172d.a(kVar);
            if (a >= 0) {
                mVar.a = a;
                return 1;
            }
            if (a < -1) {
                hVar2.a(-(a + 2));
            }
            if (!hVar2.f21178l) {
                s m5 = hVar2.f21172d.m();
                ke.b.l(m5);
                hVar2.f21171c.c(m5);
                hVar2.f21178l = true;
            }
            if (hVar2.k <= 0 && !aVar.b(kVar)) {
                hVar2.f21176h = 3;
                return -1;
            }
            hVar2.k = 0L;
            w wVar2 = (w) aVar.f13404e;
            long b10 = hVar2.b(wVar2);
            if (b10 >= 0) {
                long j5 = hVar2.f21175g;
                if (j5 + b10 >= hVar2.f21173e) {
                    hVar2.f21170b.d(wVar2.f13364c, wVar2);
                    hVar2.f21170b.b((j5 * 1000000) / hVar2.f21177i, 1, wVar2.f13364c, 0, null);
                    hVar2.f21173e = -1L;
                }
            }
            hVar2.f21175g += b10;
            return 0;
        }
        while (true) {
            boolean b11 = aVar.b(kVar);
            w wVar3 = (w) aVar.f13404e;
            if (!b11) {
                hVar2.f21176h = 3;
                return -1;
            }
            long j7 = ((qc.g) kVar).f16773v;
            long j10 = j;
            long j11 = hVar2.f21174f;
            hVar2.k = j7 - j11;
            if (hVar2.c(wVar3, j11, hVar2.j)) {
                hVar2.f21174f = ((qc.g) kVar).f16773v;
                j = j10;
            } else {
                Format format = (Format) hVar2.j.f7939e;
                hVar2.f21177i = format.W;
                if (!hVar2.f21179m) {
                    hVar2.f21170b.e(format);
                    hVar2.f21179m = true;
                }
                k0 k0Var = (k0) hVar2.j.f7940i;
                if (k0Var != null) {
                    hVar2.f21172d = k0Var;
                } else {
                    long j12 = ((qc.g) kVar).f16772i;
                    if (j12 != j10) {
                        e eVar = (e) aVar.f13403d;
                        boolean z5 = (eVar.a & 4) != 0;
                        long j13 = hVar2.f21174f;
                        long j14 = eVar.f21163d + eVar.f21164e;
                        long j15 = eVar.f21161b;
                        i5 = 2;
                        wVar = wVar3;
                        hVar2.f21172d = new b(hVar2, j13, j12, j14, j15, z5);
                        hVar2.f21176h = i5;
                        bArr = wVar.a;
                        if (bArr.length != 65025) {
                            return 0;
                        }
                        wVar.D(Arrays.copyOf(bArr, Math.max(65025, wVar.f13364c)), wVar.f13364c);
                        return 0;
                    }
                    hVar2.f21172d = new qa.s();
                }
                i5 = 2;
                wVar = wVar3;
                hVar2.f21176h = i5;
                bArr = wVar.a;
                if (bArr.length != 65025) {
                }
            }
        }
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        try {
            return b(kVar);
        } catch (g1 unused) {
            return false;
        }
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        h hVar = this.f21159b;
        if (hVar != null) {
            kj.a aVar = hVar.a;
            e eVar = (e) aVar.f13403d;
            eVar.a = 0;
            eVar.f21161b = 0L;
            eVar.f21162c = 0;
            eVar.f21163d = 0;
            eVar.f21164e = 0;
            ((w) aVar.f13404e).C(0);
            aVar.a = -1;
            aVar.f13402c = false;
            if (j == 0) {
                hVar.d(!hVar.f21178l);
                return;
            }
            if (hVar.f21176h != 0) {
                long j7 = (hVar.f21177i * j5) / 1000000;
                hVar.f21173e = j7;
                f fVar = hVar.f21172d;
                int i5 = d0.a;
                fVar.t(j7);
                hVar.f21176h = 2;
            }
        }
    }

    @Override // qc.j
    public final void release() {
    }
}
