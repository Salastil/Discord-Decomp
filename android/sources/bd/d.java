package bd;

import android.util.Pair;
import hc.g1;
import ke.d0;
import ke.w;
import m3.n;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.v;

/* loaded from: classes3.dex */
public final class d implements j {
    public l a;

    /* renamed from: b, reason: collision with root package name */
    public v f2795b;

    /* renamed from: c, reason: collision with root package name */
    public int f2796c;

    /* renamed from: d, reason: collision with root package name */
    public long f2797d;

    /* renamed from: e, reason: collision with root package name */
    public b f2798e;

    /* renamed from: f, reason: collision with root package name */
    public int f2799f;

    /* renamed from: g, reason: collision with root package name */
    public long f2800g;

    @Override // qc.j
    public final void a(l lVar) {
        this.a = lVar;
        this.f2795b = lVar.y(0, 1);
        lVar.r();
    }

    /* JADX WARN: Code restructure failed: missing block: B:51:0x0175, code lost:
    
        if (r9 != 65534) goto L53;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x017c, code lost:
    
        if (r2 == 32) goto L56;
     */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0188  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x019a  */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        byte[] bArr;
        int i5;
        ke.b.l(this.f2795b);
        int i6 = d0.a;
        int i10 = this.f2796c;
        int i11 = 4;
        if (i10 == 0) {
            ke.b.k(((qc.g) kVar).f16773v == 0);
            int i12 = this.f2799f;
            if (i12 != -1) {
                ((qc.g) kVar).u(i12);
                this.f2796c = 4;
                return 0;
            }
            if (!n.u(kVar)) {
                throw g1.a("Unsupported or unrecognized wav file type.", null);
            }
            qc.g gVar = (qc.g) kVar;
            gVar.u((int) (gVar.k() - gVar.f16773v));
            this.f2796c = 1;
            return 0;
        }
        long j = -1;
        if (i10 == 1) {
            w wVar = new w(8);
            f b10 = f.b(kVar, wVar);
            if (b10.a != 1685272116) {
                ((qc.g) kVar).f16775x = 0;
            } else {
                qc.g gVar2 = (qc.g) kVar;
                gVar2.b(8, false);
                wVar.F(0);
                gVar2.j(wVar.a, 0, 8, false);
                j = wVar.j();
                gVar2.u(((int) b10.f2806b) + 8);
            }
            this.f2797d = j;
            this.f2796c = 2;
            return 0;
        }
        if (i10 != 2) {
            if (i10 != 3) {
                if (i10 != 4) {
                    throw new IllegalStateException();
                }
                ke.b.k(this.f2800g != -1);
                long j5 = this.f2800g - ((qc.g) kVar).f16773v;
                b bVar = this.f2798e;
                bVar.getClass();
                return bVar.b(kVar, j5) ? -1 : 0;
            }
            ((qc.g) kVar).f16775x = 0;
            f O0 = n.O0(1684108385, kVar, new w(8));
            qc.g gVar3 = (qc.g) kVar;
            gVar3.u(8);
            Pair create = Pair.create(Long.valueOf(gVar3.f16773v), Long.valueOf(O0.f2806b));
            this.f2799f = ((Long) create.first).intValue();
            long longValue = ((Long) create.second).longValue();
            long j7 = this.f2797d;
            if (j7 != -1 && longValue == 4294967295L) {
                longValue = j7;
            }
            long j10 = this.f2799f + longValue;
            this.f2800g = j10;
            long j11 = gVar3.f16772i;
            if (j11 != -1 && j10 > j11) {
                ke.b.N("WavExtractor", "Data exceeds input length: " + this.f2800g + ", " + j11);
                this.f2800g = j11;
            }
            b bVar2 = this.f2798e;
            bVar2.getClass();
            bVar2.c(this.f2799f, this.f2800g);
            this.f2796c = 4;
            return 0;
        }
        w wVar2 = new w(16);
        long j12 = n.O0(1718449184, kVar, wVar2).f2806b;
        ke.b.k(j12 >= 16);
        qc.g gVar4 = (qc.g) kVar;
        gVar4.j(wVar2.a, 0, 16, false);
        wVar2.F(0);
        int n6 = wVar2.n();
        int n10 = wVar2.n();
        int m5 = wVar2.m();
        wVar2.m();
        int n11 = wVar2.n();
        int n12 = wVar2.n();
        int i13 = ((int) j12) - 16;
        if (i13 > 0) {
            bArr = new byte[i13];
            gVar4.j(bArr, 0, i13, false);
        } else {
            bArr = d0.f13298f;
        }
        gVar4.u((int) (gVar4.k() - gVar4.f16773v));
        e eVar = new e();
        eVar.f2801d = n10;
        eVar.f2802e = m5;
        eVar.f2803i = n11;
        eVar.f2804v = n12;
        eVar.f2805w = bArr;
        if (n6 == 17) {
            this.f2798e = new a(this.a, this.f2795b, eVar);
        } else if (n6 == 6) {
            this.f2798e = new c(this.a, this.f2795b, eVar, "audio/g711-alaw", -1);
        } else if (n6 == 7) {
            this.f2798e = new c(this.a, this.f2795b, eVar, "audio/g711-mlaw", -1);
        } else {
            if (n6 != 1) {
                if (n6 != 3) {
                }
                i5 = 0;
                if (i5 != 0) {
                    throw g1.c("Unsupported WAV format type: " + n6);
                }
                this.f2798e = new c(this.a, this.f2795b, eVar, "audio/raw", i5);
            }
            i11 = d0.w(n12);
            i5 = i11;
            if (i5 != 0) {
            }
        }
        this.f2796c = 3;
        return 0;
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        return n.u(kVar);
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f2796c = j == 0 ? 0 : 4;
        b bVar = this.f2798e;
        if (bVar != null) {
            bVar.a(j5);
        }
    }

    @Override // qc.j
    public final void release() {
    }
}
