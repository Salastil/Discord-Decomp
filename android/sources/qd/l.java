package qd;

/* loaded from: classes3.dex */
public final class l extends pd.b {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f16849v = 0;

    /* renamed from: w, reason: collision with root package name */
    public final Object f16850w;

    public l(vd.b bVar, int i5) {
        super(i5, bVar.k - 1);
        this.f16850w = bVar;
    }

    @Override // pd.m
    public final long c() {
        switch (this.f16849v) {
            case 0:
                a();
                return ((k) this.f16850w).d(this.f16347i);
            default:
                a();
                vd.b bVar = (vd.b) this.f16850w;
                return bVar.f19348o[(int) this.f16347i];
        }
    }

    @Override // pd.m
    public final long i() {
        switch (this.f16849v) {
            case 0:
                a();
                return ((k) this.f16850w).c(this.f16347i);
            default:
                return ((vd.b) this.f16850w).b((int) this.f16347i) + c();
        }
    }

    public l(k kVar, long j, long j5) {
        super(j, j5);
        this.f16850w = kVar;
    }
}
