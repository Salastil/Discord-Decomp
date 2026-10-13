package qd;

import a5.a0;
import a5.h0;
import android.os.SystemClock;
import ch.u;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.e0;
import hc.p1;
import ie.l0;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import ke.d0;
import qa.s;
import zo.c0;

/* loaded from: classes3.dex */
public final class m implements pd.i {
    public final l0 a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.i f16851b;

    /* renamed from: c, reason: collision with root package name */
    public final int[] f16852c;

    /* renamed from: d, reason: collision with root package name */
    public final int f16853d;

    /* renamed from: e, reason: collision with root package name */
    public final DataSource f16854e;

    /* renamed from: f, reason: collision with root package name */
    public final long f16855f;

    /* renamed from: g, reason: collision with root package name */
    public final p f16856g;

    /* renamed from: h, reason: collision with root package name */
    public final k[] f16857h;

    /* renamed from: i, reason: collision with root package name */
    public ge.p f16858i;
    public rd.c j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public nd.b f16859l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f16860m;

    public m(l0 l0Var, rd.c cVar, e4.i iVar, int i5, int[] iArr, ge.p pVar, int i6, DataSource dataSource, long j, boolean z5, ArrayList arrayList, p pVar2) {
        qc.j iVar2;
        Format format;
        k[] kVarArr;
        pd.d dVar;
        this.a = l0Var;
        this.j = cVar;
        this.f16851b = iVar;
        this.f16852c = iArr;
        this.f16858i = pVar;
        this.f16853d = i6;
        this.f16854e = dataSource;
        this.k = i5;
        this.f16855f = j;
        p pVar3 = pVar2;
        this.f16856g = pVar3;
        long d6 = cVar.d(i5);
        ArrayList h6 = h();
        this.f16857h = new k[pVar.length()];
        int i10 = 0;
        int i11 = 0;
        while (i11 < this.f16857h.length) {
            rd.m mVar = (rd.m) h6.get(pVar.h(i11));
            rd.b I = iVar.I(mVar.f17252e);
            k[] kVarArr2 = this.f16857h;
            rd.b bVar = I == null ? (rd.b) mVar.f17252e.get(i10) : I;
            Format format2 = mVar.f17251d;
            String str = format2.H;
            if (ke.o.k(str)) {
                dVar = null;
                kVarArr = kVarArr2;
            } else {
                if (str != null && (str.startsWith("video/webm") || str.startsWith("audio/webm") || str.startsWith("application/webm") || str.startsWith("video/x-matroska") || str.startsWith("audio/x-matroska") || str.startsWith("application/x-matroska"))) {
                    format = format2;
                    kVarArr = kVarArr2;
                    iVar2 = new wc.d(1);
                } else {
                    int i12 = z5 ? 4 : i10;
                    format = format2;
                    kVarArr = kVarArr2;
                    iVar2 = new yc.i(i12, null, null, arrayList, pVar3);
                }
                dVar = new pd.d(iVar2, i6, format);
            }
            long j5 = d6;
            kVarArr[i11] = new k(j5, mVar, bVar, dVar, 0L, mVar.c());
            i11++;
            pVar3 = pVar2;
            d6 = j5;
            i10 = 0;
        }
    }

    @Override // pd.i
    public final long a(long j, p1 p1Var) {
        long j5 = j;
        k[] kVarArr = this.f16857h;
        int length = kVarArr.length;
        int i5 = 0;
        while (i5 < length) {
            k kVar = kVarArr[i5];
            i iVar = kVar.f16846d;
            long j7 = kVar.f16848f;
            i iVar2 = kVar.f16846d;
            long j10 = kVar.f16847e;
            if (iVar != null) {
                long z5 = iVar.z(j10);
                if (z5 != 0) {
                    long m5 = iVar2.m(j5, j10) + j7;
                    long d6 = kVar.d(m5);
                    return p1Var.a(j5, d6, (d6 >= j5 || (z5 != -1 && m5 >= ((iVar2.w() + j7) + z5) - 1)) ? d6 : kVar.d(m5 + 1));
                }
            }
            i5++;
            j5 = j;
        }
        return j;
    }

    @Override // pd.i
    public final void b() {
        nd.b bVar = this.f16859l;
        if (bVar != null) {
            throw bVar;
        }
        this.a.b();
    }

    @Override // pd.i
    public final boolean c(long j, pd.e eVar, List list) {
        if (this.f16859l != null) {
            return false;
        }
        return this.f16858i.e(j, eVar, list);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:10:0x009c A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:162:0x0205  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x01b4  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0231  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0234  */
    @Override // pd.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(long j, long j5, List list, h0 h0Var) {
        long j7;
        List list2;
        pd.l lVar;
        k[] kVarArr;
        long j10;
        long j11;
        long j12;
        long j13;
        i iVar;
        pd.d dVar;
        long j14;
        long j15;
        long j16;
        k kVar;
        Object jVar;
        boolean z5;
        if (this.f16859l != null) {
            return;
        }
        long j17 = j5 - j;
        long I = d0.I(this.j.b(this.k).f17241b) + d0.I(this.j.a) + j5;
        int i5 = 0;
        p pVar = this.f16856g;
        if (pVar != null) {
            q qVar = pVar.f16872e;
            rd.c cVar = qVar.f16878x;
            f fVar = qVar.f16874e;
            if (!cVar.f17216d) {
                z5 = false;
            } else if (qVar.E) {
                z5 = true;
            } else {
                j7 = -9223372036854775807L;
                Map.Entry ceilingEntry = qVar.f16877w.ceilingEntry(Long.valueOf(cVar.f17220h));
                if (ceilingEntry == null || ((Long) ceilingEntry.getValue()).longValue() >= I) {
                    z5 = false;
                } else {
                    long longValue = ((Long) ceilingEntry.getKey()).longValue();
                    h hVar = (h) fVar.f16831e;
                    long j18 = hVar.f16842l0;
                    if (j18 == -9223372036854775807L || j18 < longValue) {
                        hVar.f16842l0 = longValue;
                    }
                    z5 = true;
                }
                if (z5 && qVar.f16879y) {
                    qVar.E = true;
                    qVar.f16879y = false;
                    h hVar2 = (h) fVar.f16831e;
                    hVar2.f16833b0.removeCallbacks(hVar2.U);
                    hVar2.y();
                }
                if (z5) {
                    return;
                }
            }
            j7 = -9223372036854775807L;
            if (z5) {
            }
        } else {
            j7 = -9223372036854775807L;
        }
        long I2 = d0.I(d0.v(this.f16855f));
        rd.c cVar2 = this.j;
        long j19 = cVar2.a;
        long I3 = j19 == j7 ? j7 : I2 - d0.I(j19 + cVar2.b(this.k).f17241b);
        if (list.isEmpty()) {
            list2 = list;
            lVar = null;
        } else {
            list2 = list;
            lVar = (pd.l) k0.d.g(1, list2);
        }
        int length = this.f16858i.length();
        pd.m[] mVarArr = new pd.m[length];
        int i6 = 0;
        while (true) {
            kVarArr = this.f16857h;
            if (i6 >= length) {
                break;
            }
            k kVar2 = kVarArr[i6];
            i iVar2 = kVar2.f16846d;
            int i10 = length;
            long j20 = kVar2.f16848f;
            int i11 = i5;
            long j21 = kVar2.f16847e;
            s sVar = pd.m.f16379r;
            if (iVar2 == null) {
                mVarArr[i6] = sVar;
            } else {
                long f2 = iVar2.f(j21, I2) + j20;
                long b10 = kVar2.b(I2);
                long a = lVar != null ? lVar.a() : d0.j(kVar2.f16846d.m(j5, j21) + j20, f2, b10);
                if (a < f2) {
                    mVarArr[i6] = sVar;
                } else {
                    mVarArr[i6] = new l(i(i6), a, b10);
                }
            }
            i6++;
            length = i10;
            i5 = i11;
        }
        int i12 = i5;
        if (this.j.f17216d) {
            k kVar3 = kVarArr[i12];
            if (kVar3.f16846d.z(kVar3.f16847e) != 0) {
                long c6 = kVarArr[i12].c(kVarArr[i12].b(I2));
                rd.c cVar3 = this.j;
                long j22 = cVar3.a;
                long min = Math.min(j22 == j7 ? j7 : I2 - d0.I(j22 + cVar3.b(this.k).f17241b), c6) - j;
                j10 = 0;
                j11 = Math.max(0L, min);
                j12 = j10;
                this.f16858i.c(j, j17, j11, list2, mVarArr);
                k i13 = i(this.f16858i.d());
                long j23 = i13.f16848f;
                j13 = i13.f16847e;
                iVar = i13.f16846d;
                rd.b bVar = i13.f16845c;
                dVar = i13.a;
                rd.m mVar = i13.f16844b;
                if (dVar == null) {
                    rd.j jVar2 = dVar.F == null ? mVar.f17257y : null;
                    j14 = j23;
                    rd.j d6 = iVar == null ? mVar.d() : null;
                    if (jVar2 != null || d6 != null) {
                        Format l6 = this.f16858i.l();
                        int m5 = this.f16858i.m();
                        Object p3 = this.f16858i.p();
                        if (jVar2 != null) {
                            rd.j a10 = jVar2.a(d6, bVar.a);
                            if (a10 != null) {
                                jVar2 = a10;
                            }
                        } else {
                            jVar2 = d6;
                        }
                        h0Var.f176i = new pd.k(this.f16854e, c0.g(mVar, bVar.a, jVar2, i12), l6, m5, p3, i13.a);
                        return;
                    }
                } else {
                    j14 = j23;
                }
                rd.c cVar4 = this.j;
                int i14 = (cVar4.f17216d || this.k != cVar4.f17223m.size() + (-1)) ? i12 : 1;
                boolean z6 = (i14 == 0 && j13 == j7) ? i12 : 1;
                if (iVar.z(j13) != j12) {
                    h0Var.f175e = z6;
                    return;
                }
                long f10 = iVar.f(j13, I2) + j14;
                long b11 = i13.b(I2);
                boolean z7 = z6;
                if (i14 != 0) {
                    long c8 = i13.c(b11);
                    z7 = (z6 ? 1 : 0) & ((c8 - i13.d(b11)) + c8 >= j13 ? 1 : i12);
                }
                if (lVar != null) {
                    j16 = lVar.a();
                    j15 = b11;
                } else {
                    j15 = b11;
                    j16 = d0.j(iVar.m(j5, j13) + j14, f10, j15);
                }
                long j24 = j16;
                if (j24 < f10) {
                    this.f16859l = new nd.b();
                    return;
                }
                if (j24 > j15 || (this.f16860m && j24 >= j15)) {
                    h0Var.f175e = z7;
                    return;
                }
                if (z7 != 0 && i13.d(j24) >= j13) {
                    h0Var.f175e = true;
                    return;
                }
                k kVar4 = i13;
                int min2 = (int) Math.min(1, (j15 - j24) + 1);
                if (j13 != j7) {
                    while (min2 > 1) {
                        kVar = kVar4;
                        if (kVar.d((min2 + j24) - 1) < j13) {
                            break;
                        }
                        min2--;
                        kVar4 = kVar;
                    }
                }
                kVar = kVar4;
                long j25 = list.isEmpty() ? j5 : j7;
                Format l7 = this.f16858i.l();
                int m6 = this.f16858i.m();
                Object p5 = this.f16858i.p();
                long d7 = kVar.d(j24);
                rd.j h6 = iVar.h(j24 - j14);
                DataSource dataSource = this.f16854e;
                if (dVar == null) {
                    jVar = new pd.n(dataSource, c0.g(mVar, bVar.a, h6, iVar.v() || (I3 > j7 ? 1 : (I3 == j7 ? 0 : -1)) == 0 || (kVar.c(j24) > I3 ? 1 : (kVar.c(j24) == I3 ? 0 : -1)) <= 0 ? 0 : 8), l7, m6, p5, d7, kVar.c(j24), j24, this.f16853d, l7);
                } else {
                    int i15 = 1;
                    int i16 = 1;
                    while (i15 < min2) {
                        rd.j a11 = h6.a(iVar.h((j24 + i15) - j14), bVar.a);
                        if (a11 == null) {
                            break;
                        }
                        i16++;
                        i15++;
                        h6 = a11;
                    }
                    long j26 = (j24 + i16) - 1;
                    long c10 = kVar.c(j26);
                    jVar = new pd.j(dataSource, c0.g(mVar, bVar.a, h6, iVar.v() || (I3 > j7 ? 1 : (I3 == j7 ? 0 : -1)) == 0 || (kVar.c(j26) > I3 ? 1 : (kVar.c(j26) == I3 ? 0 : -1)) <= 0 ? 0 : 8), l7, m6, p5, d7, c10, j25, (j13 == j7 || j13 > c10) ? j7 : j13, j24, i16, -mVar.f17253i, kVar.a);
                }
                h0Var.f176i = jVar;
                return;
            }
            j10 = 0;
        } else {
            j10 = 0;
        }
        j11 = j7;
        j12 = j10;
        this.f16858i.c(j, j17, j11, list2, mVarArr);
        k i132 = i(this.f16858i.d());
        long j232 = i132.f16848f;
        j13 = i132.f16847e;
        iVar = i132.f16846d;
        rd.b bVar2 = i132.f16845c;
        dVar = i132.a;
        rd.m mVar2 = i132.f16844b;
        if (dVar == null) {
        }
        rd.c cVar42 = this.j;
        if (cVar42.f17216d) {
        }
        if (i14 == 0) {
        }
        if (iVar.z(j13) != j12) {
        }
    }

    @Override // pd.i
    public final boolean e(pd.e eVar, boolean z5, a0 a0Var, p9.d dVar) {
        long j;
        if (z5) {
            p pVar = this.f16856g;
            if (pVar != null) {
                long j5 = pVar.f16871d;
                boolean z6 = j5 != -9223372036854775807L && j5 < eVar.f16366y;
                q qVar = pVar.f16872e;
                if (qVar.f16878x.f17216d) {
                    if (!qVar.E) {
                        if (z6) {
                            if (qVar.f16879y) {
                                qVar.E = true;
                                qVar.f16879y = false;
                                h hVar = (h) qVar.f16874e.f16831e;
                                hVar.f16833b0.removeCallbacks(hVar.U);
                                hVar.y();
                                return true;
                            }
                        }
                    }
                    return true;
                }
            }
            boolean z7 = this.j.f17216d;
            k[] kVarArr = this.f16857h;
            if (!z7 && (eVar instanceof pd.l)) {
                IOException iOException = (IOException) a0Var.f125i;
                if ((iOException instanceof ie.d0) && ((ie.d0) iOException).f10662v == 404) {
                    k kVar = kVarArr[this.f16858i.j(eVar.f16363v)];
                    long z8 = kVar.f16846d.z(kVar.f16847e);
                    if (z8 != -1 && z8 != 0) {
                        if (((pd.l) eVar).a() > ((kVar.f16846d.w() + kVar.f16848f) + z8) - 1) {
                            this.f16860m = true;
                            return true;
                        }
                    }
                }
            }
            k kVar2 = kVarArr[this.f16858i.j(eVar.f16363v)];
            rd.m mVar = kVar2.f16844b;
            rd.b bVar = kVar2.f16845c;
            e0 e0Var = mVar.f17252e;
            e4.i iVar = this.f16851b;
            rd.b I = iVar.I(e0Var);
            if (I == null || bVar.equals(I)) {
                ge.p pVar2 = this.f16858i;
                e0 e0Var2 = kVar2.f16844b.f17252e;
                long elapsedRealtime = SystemClock.elapsedRealtime();
                int length = pVar2.length();
                int i5 = 0;
                for (int i6 = 0; i6 < length; i6++) {
                    if (pVar2.a(i6, elapsedRealtime)) {
                        i5++;
                    }
                }
                HashSet hashSet = new HashSet();
                for (int i10 = 0; i10 < e0Var2.size(); i10++) {
                    hashSet.add(Integer.valueOf(((rd.b) e0Var2.get(i10)).f17212c));
                }
                int size = hashSet.size();
                HashSet hashSet2 = new HashSet();
                ArrayList i11 = iVar.i(e0Var2);
                for (int i12 = 0; i12 < i11.size(); i12++) {
                    hashSet2.add(Integer.valueOf(((rd.b) i11.get(i12)).f17212c));
                }
                u uVar = new u(size, size - hashSet2.size(), length, i5);
                if (uVar.a(2) || uVar.a(1)) {
                    dVar.getClass();
                    bd.f i13 = p9.d.i(uVar, a0Var);
                    if (i13 != null) {
                        long j7 = i13.f2806b;
                        int i14 = i13.a;
                        if (uVar.a(i14)) {
                            if (i14 == 2) {
                                ge.p pVar3 = this.f16858i;
                                return pVar3.n(pVar3.j(eVar.f16363v), j7);
                            }
                            if (i14 == 1) {
                                long elapsedRealtime2 = SystemClock.elapsedRealtime() + j7;
                                String str = bVar.f17211b;
                                HashMap hashMap = (HashMap) iVar.f7952d;
                                if (hashMap.containsKey(str)) {
                                    Long l6 = (Long) hashMap.get(str);
                                    int i15 = d0.a;
                                    j = Math.max(elapsedRealtime2, l6.longValue());
                                } else {
                                    j = elapsedRealtime2;
                                }
                                hashMap.put(str, Long.valueOf(j));
                                int i16 = bVar.f17212c;
                                if (i16 != Integer.MIN_VALUE) {
                                    Integer valueOf = Integer.valueOf(i16);
                                    HashMap hashMap2 = (HashMap) iVar.f7953e;
                                    if (hashMap2.containsKey(valueOf)) {
                                        Long l7 = (Long) hashMap2.get(valueOf);
                                        int i17 = d0.a;
                                        elapsedRealtime2 = Math.max(elapsedRealtime2, l7.longValue());
                                    }
                                    hashMap2.put(valueOf, Long.valueOf(elapsedRealtime2));
                                }
                            }
                        }
                    }
                }
            }
            return true;
        }
        return false;
    }

    @Override // pd.i
    public final int f(long j, List list) {
        return (this.f16859l != null || this.f16858i.length() < 2) ? list.size() : this.f16858i.i(j, list);
    }

    @Override // pd.i
    public final void g(pd.e eVar) {
        if (eVar instanceof pd.k) {
            int j = this.f16858i.j(((pd.k) eVar).f16363v);
            k[] kVarArr = this.f16857h;
            k kVar = kVarArr[j];
            if (kVar.f16846d == null) {
                pd.d dVar = kVar.a;
                qc.s sVar = dVar.E;
                qc.f fVar = sVar instanceof qc.f ? (qc.f) sVar : null;
                if (fVar != null) {
                    rd.m mVar = kVar.f16844b;
                    kVarArr[j] = new k(kVar.f16847e, mVar, kVar.f16845c, dVar, kVar.f16848f, new androidx.recyclerview.widget.h(fVar, mVar.f17253i, 2));
                }
            }
        }
        p pVar = this.f16856g;
        if (pVar != null) {
            long j5 = pVar.f16871d;
            if (j5 == -9223372036854775807L || eVar.E > j5) {
                pVar.f16871d = eVar.E;
            }
            pVar.f16872e.f16879y = true;
        }
    }

    public final ArrayList h() {
        List list = this.j.b(this.k).f17242c;
        ArrayList arrayList = new ArrayList();
        for (int i5 : this.f16852c) {
            arrayList.addAll(((rd.a) list.get(i5)).f17207c);
        }
        return arrayList;
    }

    public final k i(int i5) {
        k[] kVarArr = this.f16857h;
        k kVar = kVarArr[i5];
        rd.b I = this.f16851b.I(kVar.f16844b.f17252e);
        if (I == null || I.equals(kVar.f16845c)) {
            return kVar;
        }
        k kVar2 = new k(kVar.f16847e, kVar.f16844b, I, kVar.a, kVar.f16848f, kVar.f16846d);
        kVarArr[i5] = kVar2;
        return kVar2;
    }

    @Override // pd.i
    public final void release() {
        for (k kVar : this.f16857h) {
            pd.d dVar = kVar.a;
            if (dVar != null) {
                dVar.f16353d.release();
            }
        }
    }
}
