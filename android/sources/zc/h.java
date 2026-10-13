package zc;

import ke.w;
import qc.l;
import qc.v;

/* loaded from: classes3.dex */
public abstract class h {

    /* renamed from: b, reason: collision with root package name */
    public v f21170b;

    /* renamed from: c, reason: collision with root package name */
    public l f21171c;

    /* renamed from: d, reason: collision with root package name */
    public f f21172d;

    /* renamed from: e, reason: collision with root package name */
    public long f21173e;

    /* renamed from: f, reason: collision with root package name */
    public long f21174f;

    /* renamed from: g, reason: collision with root package name */
    public long f21175g;

    /* renamed from: h, reason: collision with root package name */
    public int f21176h;

    /* renamed from: i, reason: collision with root package name */
    public int f21177i;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f21178l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f21179m;
    public final kj.a a = new kj.a();
    public e4.c j = new e4.c(28, (byte) 0);

    public void a(long j) {
        this.f21175g = j;
    }

    public abstract long b(w wVar);

    public abstract boolean c(w wVar, long j, e4.c cVar);

    public void d(boolean z5) {
        if (z5) {
            this.j = new e4.c(28, (byte) 0);
            this.f21174f = 0L;
            this.f21176h = 0;
        } else {
            this.f21176h = 1;
        }
        this.f21173e = -1L;
        this.f21175g = 0L;
    }
}
