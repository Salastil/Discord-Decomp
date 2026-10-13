package bd;

import com.google.android.exoplayer2.Format;
import hc.f0;
import hc.g1;
import ke.d0;
import ke.w;
import qc.l;
import qc.v;

/* loaded from: classes3.dex */
public final class a implements b {

    /* renamed from: m, reason: collision with root package name */
    public static final int[] f2777m = {-1, -1, -1, -1, 2, 4, 6, 8, -1, -1, -1, -1, 2, 4, 6, 8};

    /* renamed from: n, reason: collision with root package name */
    public static final int[] f2778n = {7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 21, 23, 25, 28, 31, 34, 37, 41, 45, 50, 55, 60, 66, 73, 80, 88, 97, 107, 118, 130, 143, 157, 173, 190, 209, 230, 253, 279, 307, 337, 371, 408, 449, 494, 544, 598, 658, 724, 796, 876, 963, 1060, 1166, 1282, 1411, 1552, 1707, 1878, 2066, 2272, 2499, 2749, 3024, 3327, 3660, 4026, 4428, 4871, 5358, 5894, 6484, 7132, 7845, 8630, 9493, 10442, 11487, 12635, 13899, 15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794, 32767};
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final v f2779b;

    /* renamed from: c, reason: collision with root package name */
    public final e f2780c;

    /* renamed from: d, reason: collision with root package name */
    public final int f2781d;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f2782e;

    /* renamed from: f, reason: collision with root package name */
    public final w f2783f;

    /* renamed from: g, reason: collision with root package name */
    public final int f2784g;

    /* renamed from: h, reason: collision with root package name */
    public final Format f2785h;

    /* renamed from: i, reason: collision with root package name */
    public int f2786i;
    public long j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public long f2787l;

    public a(l lVar, v vVar, e eVar) {
        this.a = lVar;
        this.f2779b = vVar;
        this.f2780c = eVar;
        int i5 = eVar.f2802e;
        int max = Math.max(1, i5 / 10);
        this.f2784g = max;
        w wVar = new w((byte[]) eVar.f2805w);
        wVar.n();
        int n6 = wVar.n();
        this.f2781d = n6;
        int i6 = eVar.f2801d;
        int i10 = eVar.f2803i;
        int i11 = (((i10 - (i6 * 4)) * 8) / (eVar.f2804v * i6)) + 1;
        if (n6 != i11) {
            throw g1.a("Expected frames per block: " + i11 + "; got: " + n6, null);
        }
        int f2 = d0.f(max, n6);
        this.f2782e = new byte[f2 * i10];
        this.f2783f = new w(n6 * 2 * i6 * f2);
        int i12 = ((i10 * i5) * 8) / n6;
        f0 f0Var = new f0();
        f0Var.k = "audio/raw";
        f0Var.f9674f = i12;
        f0Var.f9675g = i12;
        f0Var.f9678l = max * 2 * i6;
        f0Var.f9690x = i6;
        f0Var.f9691y = i5;
        f0Var.f9692z = 2;
        this.f2785h = new Format(f0Var);
    }

    @Override // bd.b
    public final void a(long j) {
        this.f2786i = 0;
        this.j = j;
        this.k = 0;
        this.f2787l = 0L;
    }

    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions count limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0045 A[ADDED_TO_REGION, EDGE_INSN: B:49:0x0045->B:14:0x0045 BREAK  A[LOOP:0: B:5:0x0023->B:11:0x003f], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0027  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:9:0x003c -> B:3:0x0020). Please report as a decompilation issue!!! */
    @Override // bd.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean b(qc.k r25, long r26) {
        /*
            Method dump skipped, instructions count: 327
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: bd.a.b(qc.k, long):boolean");
    }

    @Override // bd.b
    public final void c(int i5, long j) {
        this.a.c(new g(this.f2780c, this.f2781d, i5, j));
        this.f2779b.e(this.f2785h);
    }

    public final void d(int i5) {
        long j = this.j;
        long j5 = this.f2787l;
        e eVar = this.f2780c;
        long P = j + d0.P(j5, 1000000L, eVar.f2802e);
        int i6 = i5 * 2 * eVar.f2801d;
        this.f2779b.b(P, 1, i6, this.k - i6, null);
        this.f2787l += i5;
        this.k -= i6;
    }
}
