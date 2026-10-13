package bd;

import com.google.android.exoplayer2.Format;
import hc.f0;
import hc.g1;
import ke.d0;
import qc.k;
import qc.l;
import qc.v;

/* loaded from: classes3.dex */
public final class c implements b {
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final v f2788b;

    /* renamed from: c, reason: collision with root package name */
    public final e f2789c;

    /* renamed from: d, reason: collision with root package name */
    public final Format f2790d;

    /* renamed from: e, reason: collision with root package name */
    public final int f2791e;

    /* renamed from: f, reason: collision with root package name */
    public long f2792f;

    /* renamed from: g, reason: collision with root package name */
    public int f2793g;

    /* renamed from: h, reason: collision with root package name */
    public long f2794h;

    public c(l lVar, v vVar, e eVar, String str, int i5) {
        this.a = lVar;
        this.f2788b = vVar;
        this.f2789c = eVar;
        int i6 = eVar.f2801d;
        int i10 = eVar.f2802e;
        int i11 = (eVar.f2804v * i6) / 8;
        int i12 = eVar.f2803i;
        if (i12 != i11) {
            throw g1.a("Expected block size: " + i11 + "; got: " + i12, null);
        }
        int i13 = i10 * i11;
        int i14 = i13 * 8;
        int max = Math.max(i11, i13 / 10);
        this.f2791e = max;
        f0 f0Var = new f0();
        f0Var.k = str;
        f0Var.f9674f = i14;
        f0Var.f9675g = i14;
        f0Var.f9678l = max;
        f0Var.f9690x = i6;
        f0Var.f9691y = i10;
        f0Var.f9692z = i5;
        this.f2790d = new Format(f0Var);
    }

    @Override // bd.b
    public final void a(long j) {
        this.f2792f = j;
        this.f2793g = 0;
        this.f2794h = 0L;
    }

    @Override // bd.b
    public final boolean b(k kVar, long j) {
        int i5;
        int i6;
        long j5 = j;
        while (j5 > 0 && (i5 = this.f2793g) < (i6 = this.f2791e)) {
            int c6 = this.f2788b.c(kVar, (int) Math.min(i6 - i5, j5), true);
            if (c6 == -1) {
                j5 = 0;
            } else {
                this.f2793g += c6;
                j5 -= c6;
            }
        }
        int i10 = this.f2789c.f2803i;
        int i11 = this.f2793g / i10;
        if (i11 > 0) {
            long P = this.f2792f + d0.P(this.f2794h, 1000000L, r1.f2802e);
            int i12 = i11 * i10;
            int i13 = this.f2793g - i12;
            this.f2788b.b(P, 1, i12, i13, null);
            this.f2794h += i11;
            this.f2793g = i13;
        }
        return j5 <= 0;
    }

    @Override // bd.b
    public final void c(int i5, long j) {
        this.a.c(new g(this.f2789c, 1, i5, j));
        this.f2788b.e(this.f2790d);
    }
}
