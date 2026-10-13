package td;

import fi.e0;
import fi.w0;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public final class i extends m {

    /* renamed from: d, reason: collision with root package name */
    public final int f18295d;

    /* renamed from: e, reason: collision with root package name */
    public final long f18296e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f18297f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f18298g;

    /* renamed from: h, reason: collision with root package name */
    public final long f18299h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f18300i;
    public final int j;
    public final long k;

    /* renamed from: l, reason: collision with root package name */
    public final int f18301l;

    /* renamed from: m, reason: collision with root package name */
    public final long f18302m;

    /* renamed from: n, reason: collision with root package name */
    public final long f18303n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f18304o;

    /* renamed from: p, reason: collision with root package name */
    public final boolean f18305p;

    /* renamed from: q, reason: collision with root package name */
    public final nc.i f18306q;

    /* renamed from: r, reason: collision with root package name */
    public final e0 f18307r;

    /* renamed from: s, reason: collision with root package name */
    public final e0 f18308s;

    /* renamed from: t, reason: collision with root package name */
    public final w0 f18309t;

    /* renamed from: u, reason: collision with root package name */
    public final long f18310u;

    /* renamed from: v, reason: collision with root package name */
    public final h f18311v;

    public i(int i5, String str, List list, long j, boolean z5, long j5, boolean z6, int i6, long j7, int i10, long j10, long j11, boolean z7, boolean z8, boolean z10, nc.i iVar, List list2, List list3, h hVar, Map map) {
        super(str, list, z7);
        this.f18295d = i5;
        this.f18299h = j5;
        this.f18298g = z5;
        this.f18300i = z6;
        this.j = i6;
        this.k = j7;
        this.f18301l = i10;
        this.f18302m = j10;
        this.f18303n = j11;
        this.f18304o = z8;
        this.f18305p = z10;
        this.f18306q = iVar;
        this.f18307r = e0.k(list2);
        this.f18308s = e0.k(list3);
        this.f18309t = w0.a(map);
        if (!list3.isEmpty()) {
            d dVar = (d) fi.p.i(list3);
            this.f18310u = dVar.f18288w + dVar.f18286i;
        } else if (list2.isEmpty()) {
            this.f18310u = 0L;
        } else {
            f fVar = (f) fi.p.i(list2);
            this.f18310u = fVar.f18288w + fVar.f18286i;
        }
        this.f18296e = j != -9223372036854775807L ? j >= 0 ? Math.min(this.f18310u, j) : Math.max(0L, this.f18310u + j) : -9223372036854775807L;
        this.f18297f = j >= 0;
        this.f18311v = hVar;
    }

    @Override // md.a
    public final Object a(List list) {
        return this;
    }
}
