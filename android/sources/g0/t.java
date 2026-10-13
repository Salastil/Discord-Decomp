package g0;

/* loaded from: classes.dex */
public abstract class t {

    /* renamed from: d, reason: collision with root package name */
    public int f9081d;

    /* renamed from: e, reason: collision with root package name */
    public int f9082e;

    /* renamed from: i, reason: collision with root package name */
    public long f9083i = ys.l.a(0, 0);

    /* renamed from: v, reason: collision with root package name */
    public long f9084v = u.a;

    /* renamed from: w, reason: collision with root package name */
    public long f9085w;

    public t() {
        int i5 = m0.d.f14312b;
        this.f9085w = m0.d.a;
    }

    public final void m() {
        this.f9081d = yo.j.d((int) (this.f9083i >> 32), m0.a.d(this.f9084v), m0.a.b(this.f9084v));
        int d6 = yo.j.d((int) (this.f9083i & 4294967295L), m0.a.c(this.f9084v), m0.a.a(this.f9084v));
        this.f9082e = d6;
        int i5 = this.f9081d;
        long j = this.f9083i;
        this.f9085w = ys.d.a((i5 - ((int) (j >> 32))) / 2, (d6 - ((int) (j & 4294967295L))) / 2);
    }

    public abstract void n(long j);

    public final void o(long j) {
        if (this.f9083i == j) {
            return;
        }
        this.f9083i = j;
        m();
    }

    public final void p(long j) {
        if (this.f9084v == j) {
            return;
        }
        this.f9084v = j;
        m();
    }
}
