package sc;

import com.google.android.exoplayer2.Format;
import fi.c0;
import hc.f0;
import hc.g1;
import hc.l;
import java.util.ArrayList;
import java.util.Arrays;
import ke.d0;
import ke.o;
import ke.w;
import qc.j;
import qc.k;
import qc.m;
import qc.n;
import qc.v;

/* loaded from: classes3.dex */
public final class b implements j {

    /* renamed from: c, reason: collision with root package name */
    public int f17832c;

    /* renamed from: e, reason: collision with root package name */
    public c f17834e;

    /* renamed from: h, reason: collision with root package name */
    public long f17837h;

    /* renamed from: i, reason: collision with root package name */
    public e f17838i;

    /* renamed from: m, reason: collision with root package name */
    public int f17840m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f17841n;
    public final w a = new w(12);

    /* renamed from: b, reason: collision with root package name */
    public final l f17831b = new l();

    /* renamed from: d, reason: collision with root package name */
    public qc.l f17833d = new io.sentry.hints.j(16);

    /* renamed from: g, reason: collision with root package name */
    public e[] f17836g = new e[0];
    public long k = -1;

    /* renamed from: l, reason: collision with root package name */
    public long f17839l = -1;
    public int j = -1;

    /* renamed from: f, reason: collision with root package name */
    public long f17835f = -9223372036854775807L;

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.f17832c = 0;
        this.f17833d = lVar;
        this.f17837h = -1L;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0034 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0379  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0108  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x010f  */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        boolean z5;
        e eVar;
        int i5;
        e eVar2;
        long j = this.f17837h;
        int i6 = 0;
        if (j != -1) {
            long j5 = ((qc.g) kVar).f16773v;
            if (j < j5 || j > 262144 + j5) {
                mVar.a = j;
                z5 = true;
                this.f17837h = -1L;
                if (!z5) {
                    return 1;
                }
                int i10 = this.f17832c;
                e eVar3 = null;
                l lVar = this.f17831b;
                int i11 = 2;
                w wVar = this.a;
                switch (i10) {
                    case 0:
                        if (!f(kVar)) {
                            throw g1.a("AVI Header List not found", null);
                        }
                        ((qc.g) kVar).u(12);
                        this.f17832c = 1;
                        return 0;
                    case 1:
                        ((qc.g) kVar).a(wVar.a, 0, 12, false);
                        wVar.F(0);
                        lVar.getClass();
                        lVar.a = wVar.i();
                        lVar.f9773b = wVar.i();
                        lVar.f9774c = 0;
                        if (lVar.a != 1414744396) {
                            throw g1.a("LIST expected, found: " + lVar.a, null);
                        }
                        int i12 = wVar.i();
                        lVar.f9774c = i12;
                        if (i12 == 1819436136) {
                            this.j = lVar.f9773b;
                            this.f17832c = 2;
                            return 0;
                        }
                        throw g1.a("hdrl expected, found: " + lVar.f9774c, null);
                    case 2:
                        int i13 = this.j - 4;
                        w wVar2 = new w(i13);
                        ((qc.g) kVar).a(wVar2.a, 0, i13, false);
                        f b10 = f.b(1819436136, wVar2);
                        int i14 = b10.f17857b;
                        if (i14 != 1819436136) {
                            throw g1.a("Unexpected header list type " + i14, null);
                        }
                        c cVar = (c) b10.a(c.class);
                        if (cVar == null) {
                            throw g1.a("AviHeader not found", null);
                        }
                        this.f17834e = cVar;
                        this.f17835f = cVar.f17843c * cVar.a;
                        ArrayList arrayList = new ArrayList();
                        c0 listIterator = b10.a.listIterator(0);
                        int i15 = 0;
                        while (listIterator.hasNext()) {
                            a aVar = (a) listIterator.next();
                            if (aVar.getType() == 1819440243) {
                                f fVar = (f) aVar;
                                int i16 = i15 + 1;
                                d dVar = (d) fVar.a(d.class);
                                g gVar = (g) fVar.a(g.class);
                                if (dVar == null) {
                                    ke.b.N("AviExtractor", "Missing Stream Header");
                                } else if (gVar == null) {
                                    ke.b.N("AviExtractor", "Missing Stream Format");
                                } else {
                                    long P = d0.P(dVar.f17846d, dVar.f17844b * 1000000, dVar.f17845c);
                                    Format format = gVar.a;
                                    f0 a = format.a();
                                    a.a = Integer.toString(i15);
                                    int i17 = dVar.f17847e;
                                    if (i17 != 0) {
                                        a.f9678l = i17;
                                    }
                                    h hVar = (h) fVar.a(h.class);
                                    if (hVar != null) {
                                        a.f9670b = hVar.a;
                                    }
                                    int h6 = o.h(format.I);
                                    if (h6 == 1 || h6 == i11) {
                                        v y5 = this.f17833d.y(i15, h6);
                                        y5.e(new Format(a));
                                        eVar = new e(i15, h6, P, dVar.f17846d, y5);
                                        this.f17835f = P;
                                        if (eVar != null) {
                                            arrayList.add(eVar);
                                        }
                                        i15 = i16;
                                    }
                                }
                                eVar = null;
                                if (eVar != null) {
                                }
                                i15 = i16;
                            }
                            i11 = 2;
                        }
                        this.f17836g = (e[]) arrayList.toArray(new e[0]);
                        this.f17833d.r();
                        this.f17832c = 3;
                        return 0;
                    case 3:
                        long j7 = this.k;
                        if (j7 != -1 && ((qc.g) kVar).f16773v != j7) {
                            this.f17837h = j7;
                            return 0;
                        }
                        ((qc.g) kVar).j(wVar.a, 0, 12, false);
                        qc.g gVar2 = (qc.g) kVar;
                        gVar2.f16775x = 0;
                        wVar.F(0);
                        lVar.getClass();
                        lVar.a = wVar.i();
                        lVar.f9773b = wVar.i();
                        lVar.f9774c = 0;
                        int i18 = wVar.i();
                        int i19 = lVar.a;
                        if (i19 == 1179011410) {
                            gVar2.u(12);
                            return 0;
                        }
                        if (i19 != 1414744396 || i18 != 1769369453) {
                            this.f17837h = gVar2.f16773v + lVar.f9773b + 8;
                            return 0;
                        }
                        long j10 = gVar2.f16773v;
                        this.k = j10;
                        this.f17839l = j10 + lVar.f9773b + 8;
                        if (!this.f17841n) {
                            c cVar2 = this.f17834e;
                            cVar2.getClass();
                            if ((cVar2.f17842b & 16) == 16) {
                                this.f17832c = 4;
                                this.f17837h = this.f17839l;
                                return 0;
                            }
                            this.f17833d.c(new n(this.f17835f));
                            this.f17841n = true;
                        }
                        this.f17837h = gVar2.f16773v + 12;
                        this.f17832c = 6;
                        return 0;
                    case 4:
                        ((qc.g) kVar).a(wVar.a, 0, 8, false);
                        wVar.F(0);
                        int i20 = wVar.i();
                        int i21 = wVar.i();
                        if (i20 != 829973609) {
                            this.f17837h = ((qc.g) kVar).f16773v + i21;
                            return 0;
                        }
                        this.f17832c = 5;
                        this.f17840m = i21;
                        return 0;
                    case 5:
                        w wVar3 = new w(this.f17840m);
                        ((qc.g) kVar).a(wVar3.a, 0, this.f17840m, false);
                        if (wVar3.a() >= 16) {
                            int i22 = wVar3.f13363b;
                            wVar3.G(8);
                            long i23 = wVar3.i();
                            long j11 = this.k;
                            r5 = i23 <= j11 ? j11 + 8 : 0L;
                            wVar3.F(i22);
                        }
                        while (wVar3.a() >= 16) {
                            int i24 = wVar3.i();
                            int i25 = wVar3.i();
                            long i26 = wVar3.i() + r5;
                            wVar3.i();
                            e[] eVarArr = this.f17836g;
                            int length = eVarArr.length;
                            int i27 = i6;
                            while (true) {
                                if (i27 < length) {
                                    eVar2 = eVarArr[i27];
                                    i5 = i6;
                                    if (eVar2.f17848b != i24 && eVar2.f17849c != i24) {
                                        i27++;
                                        i6 = i5;
                                    }
                                } else {
                                    i5 = i6;
                                    eVar2 = null;
                                }
                            }
                            if (eVar2 != null) {
                                if ((i25 & 16) == 16) {
                                    if (eVar2.j == eVar2.f17856l.length) {
                                        long[] jArr = eVar2.k;
                                        eVar2.k = Arrays.copyOf(jArr, (jArr.length * 3) / 2);
                                        int[] iArr = eVar2.f17856l;
                                        eVar2.f17856l = Arrays.copyOf(iArr, (iArr.length * 3) / 2);
                                    }
                                    long[] jArr2 = eVar2.k;
                                    int i28 = eVar2.j;
                                    jArr2[i28] = i26;
                                    eVar2.f17856l[i28] = eVar2.f17855i;
                                    eVar2.j = i28 + 1;
                                }
                                eVar2.f17855i++;
                            }
                            i6 = i5;
                        }
                        int i29 = i6;
                        e[] eVarArr2 = this.f17836g;
                        int length2 = eVarArr2.length;
                        for (int i30 = i29; i30 < length2; i30++) {
                            e eVar4 = eVarArr2[i30];
                            eVar4.k = Arrays.copyOf(eVar4.k, eVar4.j);
                            eVar4.f17856l = Arrays.copyOf(eVar4.f17856l, eVar4.j);
                        }
                        this.f17841n = true;
                        this.f17833d.c(new n(this, this.f17835f, 2));
                        this.f17832c = 6;
                        this.f17837h = this.k;
                        return i29;
                    case 6:
                        if (((qc.g) kVar).f16773v >= this.f17839l) {
                            return -1;
                        }
                        e eVar5 = this.f17838i;
                        if (eVar5 != null) {
                            int i31 = eVar5.f17853g;
                            int c6 = i31 - eVar5.a.c(kVar, i31, false);
                            eVar5.f17853g = c6;
                            boolean z6 = c6 == 0;
                            if (z6) {
                                if (eVar5.f17852f > 0) {
                                    v vVar = eVar5.a;
                                    int i32 = eVar5.f17854h;
                                    vVar.b((eVar5.f17850d * i32) / eVar5.f17851e, Arrays.binarySearch(eVar5.f17856l, i32) >= 0 ? 1 : 0, eVar5.f17852f, 0, null);
                                }
                                eVar5.f17854h++;
                            }
                            if (z6) {
                                this.f17838i = null;
                            }
                            return 0;
                        }
                        qc.g gVar3 = (qc.g) kVar;
                        if ((gVar3.f16773v & 1) == 1) {
                            gVar3.u(1);
                        }
                        gVar3.j(wVar.a, 0, 12, false);
                        wVar.F(0);
                        int i33 = wVar.i();
                        if (i33 == 1414744396) {
                            wVar.F(8);
                            gVar3.u(wVar.i() == 1769369453 ? 12 : 8);
                            gVar3.f16775x = 0;
                            return 0;
                        }
                        int i34 = wVar.i();
                        if (i33 == 1263424842) {
                            this.f17837h = gVar3.f16773v + i34 + 8;
                            return 0;
                        }
                        gVar3.u(8);
                        gVar3.f16775x = 0;
                        for (e eVar6 : this.f17836g) {
                            if (eVar6.f17848b == i33 || eVar6.f17849c == i33) {
                                eVar3 = eVar6;
                                if (eVar3 != null) {
                                    this.f17837h = gVar3.f16773v + i34;
                                    return 0;
                                }
                                eVar3.f17852f = i34;
                                eVar3.f17853g = i34;
                                this.f17838i = eVar3;
                                return 0;
                            }
                        }
                        if (eVar3 != null) {
                        }
                        break;
                    default:
                        throw new AssertionError();
                }
            } else {
                ((qc.g) kVar).u((int) (j - j5));
            }
        }
        z5 = false;
        this.f17837h = -1L;
        if (!z5) {
        }
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        w wVar = this.a;
        kVar.C(wVar.a, 0, 12);
        wVar.F(0);
        if (wVar.i() == 1179011410) {
            wVar.G(4);
            if (wVar.i() == 541677121) {
                return true;
            }
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f17837h = -1L;
        this.f17838i = null;
        for (e eVar : this.f17836g) {
            if (eVar.j == 0) {
                eVar.f17854h = 0;
            } else {
                eVar.f17854h = eVar.f17856l[d0.e(eVar.k, j, true)];
            }
        }
        if (j != 0) {
            this.f17832c = 6;
        } else if (this.f17836g.length == 0) {
            this.f17832c = 0;
        } else {
            this.f17832c = 3;
        }
    }

    @Override // qc.j
    public final void release() {
    }
}
