package ge;

import android.os.SystemClock;
import com.google.android.exoplayer2.Format;
import fi.b0;
import fi.e0;
import java.util.ArrayList;
import java.util.List;
import ke.d0;
import ke.y;
import nd.z0;

/* loaded from: classes3.dex */
public final class b extends c {

    /* renamed from: g, reason: collision with root package name */
    public final ie.g f9157g;

    /* renamed from: h, reason: collision with root package name */
    public final long f9158h;

    /* renamed from: i, reason: collision with root package name */
    public final long f9159i;
    public final long j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final int f9160l;

    /* renamed from: m, reason: collision with root package name */
    public final float f9161m;

    /* renamed from: n, reason: collision with root package name */
    public final float f9162n;

    /* renamed from: o, reason: collision with root package name */
    public final e0 f9163o;

    /* renamed from: p, reason: collision with root package name */
    public final y f9164p;

    /* renamed from: q, reason: collision with root package name */
    public float f9165q;

    /* renamed from: r, reason: collision with root package name */
    public int f9166r;

    /* renamed from: s, reason: collision with root package name */
    public int f9167s;

    /* renamed from: t, reason: collision with root package name */
    public long f9168t;

    /* renamed from: u, reason: collision with root package name */
    public pd.l f9169u;

    public b(z0 z0Var, int[] iArr, ie.g gVar, long j, long j5, long j7, e0 e0Var) {
        super(z0Var, iArr);
        if (j7 < j) {
            ke.b.N("AdaptiveTrackSelection", "Adjusting minDurationToRetainAfterDiscardMs to be at least minDurationForQualityIncreaseMs");
            j7 = j;
        }
        this.f9157g = gVar;
        this.f9158h = j * 1000;
        this.f9159i = j5 * 1000;
        this.j = j7 * 1000;
        this.k = 1279;
        this.f9160l = 719;
        this.f9161m = 0.7f;
        this.f9162n = 0.75f;
        this.f9163o = e0.k(e0Var);
        this.f9164p = y.a;
        this.f9165q = 1.0f;
        this.f9167s = 0;
        this.f9168t = -9223372036854775807L;
    }

    public static void t(ArrayList arrayList, long[] jArr) {
        long j = 0;
        for (long j5 : jArr) {
            j += j5;
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            b0 b0Var = (b0) arrayList.get(i5);
            if (b0Var != null) {
                b0Var.a(new a(j, jArr[i5]));
            }
        }
    }

    public static long v(List list) {
        if (!list.isEmpty()) {
            pd.l lVar = (pd.l) fi.p.i(list);
            long j = lVar.f16366y;
            if (j != -9223372036854775807L) {
                long j5 = lVar.E;
                if (j5 != -9223372036854775807L) {
                    return j5 - j;
                }
            }
        }
        return -9223372036854775807L;
    }

    @Override // ge.p
    public final void c(long j, long j5, long j7, List list, pd.m[] mVarArr) {
        long v5;
        this.f9164p.getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime();
        int i5 = this.f9166r;
        if (i5 >= mVarArr.length || !mVarArr[i5].next()) {
            int length = mVarArr.length;
            int i6 = 0;
            while (true) {
                if (i6 >= length) {
                    v5 = v(list);
                    break;
                }
                pd.m mVar = mVarArr[i6];
                if (mVar.next()) {
                    v5 = mVar.i() - mVar.c();
                    break;
                }
                i6++;
            }
        } else {
            pd.m mVar2 = mVarArr[this.f9166r];
            v5 = mVar2.i() - mVar2.c();
        }
        int i10 = this.f9167s;
        if (i10 == 0) {
            this.f9167s = 1;
            this.f9166r = u(elapsedRealtime);
            return;
        }
        int i11 = this.f9166r;
        int j10 = list.isEmpty() ? -1 : j(((pd.l) fi.p.i(list)).f16363v);
        if (j10 != -1) {
            i10 = ((pd.l) fi.p.i(list)).f16364w;
            i11 = j10;
        }
        int u5 = u(elapsedRealtime);
        if (u5 != i11 && !a(i11, elapsedRealtime)) {
            Format[] formatArr = this.f9172d;
            Format format = formatArr[i11];
            Format format2 = formatArr[u5];
            long j11 = this.f9158h;
            if (j7 != -9223372036854775807L) {
                j11 = Math.min((long) ((v5 != -9223372036854775807L ? j7 - v5 : j7) * this.f9162n), j11);
            }
            int i12 = format2.E;
            int i13 = format.E;
            if ((i12 > i13 && j5 < j11) || (i12 < i13 && j5 >= this.f9159i)) {
                u5 = i11;
            }
        }
        if (u5 != i11) {
            i10 = 3;
        }
        this.f9167s = i10;
        this.f9166r = u5;
    }

    @Override // ge.p
    public final int d() {
        return this.f9166r;
    }

    @Override // ge.c, ge.p
    public final void disable() {
        this.f9169u = null;
    }

    @Override // ge.c, ge.p
    public final void enable() {
        this.f9168t = -9223372036854775807L;
        this.f9169u = null;
    }

    @Override // ge.c, ge.p
    public final int i(long j, List list) {
        int i5;
        int i6;
        this.f9164p.getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime();
        long j5 = this.f9168t;
        if (j5 != -9223372036854775807L && elapsedRealtime - j5 < 1000 && (list.isEmpty() || ((pd.l) fi.p.i(list)).equals(this.f9169u))) {
            return list.size();
        }
        this.f9168t = elapsedRealtime;
        this.f9169u = list.isEmpty() ? null : (pd.l) fi.p.i(list);
        if (list.isEmpty()) {
            return 0;
        }
        int size = list.size();
        long y5 = d0.y(((pd.l) list.get(size - 1)).f16366y - j, this.f9165q);
        long j7 = this.j;
        if (y5 >= j7) {
            v(list);
            Format format = this.f9172d[u(elapsedRealtime)];
            for (int i10 = 0; i10 < size; i10++) {
                pd.l lVar = (pd.l) list.get(i10);
                Format format2 = lVar.f16363v;
                if (d0.y(lVar.f16366y - j, this.f9165q) >= j7 && format2.E < format.E && (i5 = format2.O) != -1 && i5 <= this.f9160l && (i6 = format2.N) != -1 && i6 <= this.k && i5 < format.O) {
                    return i10;
                }
            }
        }
        return size;
    }

    @Override // ge.p
    public final int m() {
        return this.f9167s;
    }

    @Override // ge.c, ge.p
    public final void o(float f2) {
        this.f9165q = f2;
    }

    @Override // ge.p
    public final Object p() {
        return null;
    }

    public final int u(long j) {
        long j5;
        ie.s sVar = (ie.s) this.f9157g;
        synchronized (sVar) {
            j5 = sVar.f10752l;
        }
        long j7 = (long) (j5 * this.f9161m);
        this.f9157g.getClass();
        long j10 = (long) (j7 / this.f9165q);
        if (!this.f9163o.isEmpty()) {
            int i5 = 1;
            while (i5 < this.f9163o.size() - 1 && ((a) this.f9163o.get(i5)).a < j10) {
                i5++;
            }
            a aVar = (a) this.f9163o.get(i5 - 1);
            a aVar2 = (a) this.f9163o.get(i5);
            long j11 = aVar.a;
            long j12 = aVar.f9156b;
            j10 = j12 + ((long) (((j10 - j11) / (aVar2.a - j11)) * (aVar2.f9156b - j12)));
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f9170b; i10++) {
            if (j == Long.MIN_VALUE || !a(i10, j)) {
                if (this.f9172d[i10].E <= j10) {
                    return i10;
                }
                i6 = i10;
            }
        }
        return i6;
    }
}
