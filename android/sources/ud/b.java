package ud;

import a5.a0;
import a5.h0;
import android.net.Uri;
import bd.f;
import ch.u;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.w0;
import ge.p;
import hc.p1;
import ie.l0;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import ke.d0;
import pd.i;
import pd.j;
import pd.l;
import pd.m;
import yc.o;

/* loaded from: classes3.dex */
public final class b implements i {
    public final l0 a;

    /* renamed from: b, reason: collision with root package name */
    public final int f18854b;

    /* renamed from: c, reason: collision with root package name */
    public final pd.d[] f18855c;

    /* renamed from: d, reason: collision with root package name */
    public final DataSource f18856d;

    /* renamed from: e, reason: collision with root package name */
    public p f18857e;

    /* renamed from: f, reason: collision with root package name */
    public vd.c f18858f;

    /* renamed from: g, reason: collision with root package name */
    public int f18859g;

    /* renamed from: h, reason: collision with root package name */
    public nd.b f18860h;

    public b(l0 l0Var, vd.c cVar, int i5, p pVar, DataSource dataSource) {
        yc.p[] pVarArr;
        this.a = l0Var;
        this.f18858f = cVar;
        this.f18854b = i5;
        this.f18857e = pVar;
        this.f18856d = dataSource;
        vd.b bVar = cVar.f19354f[i5];
        this.f18855c = new pd.d[pVar.length()];
        for (int i6 = 0; i6 < this.f18855c.length; i6++) {
            int h6 = pVar.h(i6);
            Format format = bVar.j[h6];
            if (format.L != null) {
                vd.a aVar = cVar.f19353e;
                aVar.getClass();
                pVarArr = aVar.f19336c;
            } else {
                pVarArr = null;
            }
            yc.p[] pVarArr2 = pVarArr;
            int i10 = bVar.a;
            this.f18855c[i6] = new pd.d(new yc.i(3, null, new o(h6, i10, bVar.f19338c, -9223372036854775807L, cVar.f19355g, format, 0, pVarArr2, i10 == 2 ? 4 : 0, null, null), Collections.EMPTY_LIST, null), bVar.a, format);
        }
    }

    @Override // pd.i
    public final long a(long j, p1 p1Var) {
        vd.b bVar = this.f18858f.f19354f[this.f18854b];
        int e9 = d0.e(bVar.f19348o, j, true);
        long[] jArr = bVar.f19348o;
        long j5 = jArr[e9];
        return p1Var.a(j, j5, (j5 >= j || e9 >= bVar.k - 1) ? j5 : jArr[e9 + 1]);
    }

    @Override // pd.i
    public final void b() {
        nd.b bVar = this.f18860h;
        if (bVar != null) {
            throw bVar;
        }
        this.a.b();
    }

    @Override // pd.i
    public final boolean c(long j, pd.e eVar, List list) {
        if (this.f18860h != null) {
            return false;
        }
        return this.f18857e.e(j, eVar, list);
    }

    @Override // pd.i
    public final void d(long j, long j5, List list, h0 h0Var) {
        List list2;
        int a;
        long b10;
        if (this.f18860h != null) {
            return;
        }
        vd.b[] bVarArr = this.f18858f.f19354f;
        int i5 = this.f18854b;
        vd.b bVar = bVarArr[i5];
        int i6 = bVar.k;
        long[] jArr = bVar.f19348o;
        if (i6 == 0) {
            h0Var.f175e = !r4.f19352d;
            return;
        }
        if (list.isEmpty()) {
            a = d0.e(jArr, j5, true);
            list2 = list;
        } else {
            list2 = list;
            a = (int) (((l) k0.d.g(1, list2)).a() - this.f18859g);
            if (a < 0) {
                this.f18860h = new nd.b();
                return;
            }
        }
        if (a >= bVar.k) {
            h0Var.f175e = !this.f18858f.f19352d;
            return;
        }
        long j7 = j5 - j;
        vd.c cVar = this.f18858f;
        if (cVar.f19352d) {
            vd.b bVar2 = cVar.f19354f[i5];
            int i10 = bVar2.k - 1;
            b10 = (bVar2.b(i10) + bVar2.f19348o[i10]) - j;
        } else {
            b10 = -9223372036854775807L;
        }
        int length = this.f18857e.length();
        m[] mVarArr = new m[length];
        for (int i11 = 0; i11 < length; i11++) {
            this.f18857e.h(i11);
            mVarArr[i11] = new qd.l(bVar, a);
        }
        this.f18857e.c(j, j7, b10, list2, mVarArr);
        long j10 = jArr[a];
        long b11 = bVar.b(a) + j10;
        long j11 = list.isEmpty() ? j5 : -9223372036854775807L;
        int i12 = this.f18859g + a;
        int d6 = this.f18857e.d();
        pd.d dVar = this.f18855c[d6];
        int h6 = this.f18857e.h(d6);
        List list3 = bVar.f19347n;
        Format[] formatArr = bVar.j;
        ke.b.k(formatArr != null);
        ke.b.k(list3 != null);
        ke.b.k(a < list3.size());
        String num = Integer.toString(formatArr[h6].E);
        String l6 = ((Long) list3.get(a)).toString();
        Uri K = ke.b.K(bVar.f19345l, bVar.f19346m.replace("{bitrate}", num).replace("{Bitrate}", num).replace("{start time}", l6).replace("{start_time}", l6));
        Format l7 = this.f18857e.l();
        int m5 = this.f18857e.m();
        Object p3 = this.f18857e.p();
        Map map = Collections.EMPTY_MAP;
        ke.b.m(K, "The uri must be set.");
        h0Var.f176i = new j(this.f18856d, new ie.p(K, 0L, 1, null, w0.f8728y, 0L, -1L, null, 0), l7, m5, p3, j10, b11, j11, -9223372036854775807L, i12, 1, j10, dVar);
    }

    @Override // pd.i
    public final boolean e(pd.e eVar, boolean z5, a0 a0Var, p9.d dVar) {
        u h6 = ys.l.h(this.f18857e);
        dVar.getClass();
        f i5 = p9.d.i(h6, a0Var);
        if (!z5 || i5 == null || i5.a != 2) {
            return false;
        }
        p pVar = this.f18857e;
        return pVar.n(pVar.j(eVar.f16363v), i5.f2806b);
    }

    @Override // pd.i
    public final int f(long j, List list) {
        return (this.f18860h != null || this.f18857e.length() < 2) ? list.size() : this.f18857e.i(j, list);
    }

    @Override // pd.i
    public final void release() {
        for (pd.d dVar : this.f18855c) {
            dVar.f16353d.release();
        }
    }

    @Override // pd.i
    public final void g(pd.e eVar) {
    }
}
