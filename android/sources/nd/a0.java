package nd;

/* loaded from: classes3.dex */
public final class a0 implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public final q0 f15061d;

    /* renamed from: e, reason: collision with root package name */
    public final long f15062e;

    public a0(q0 q0Var, long j) {
        this.f15061d = q0Var;
        this.f15062e = j;
    }

    @Override // nd.q0
    public final void b() {
        this.f15061d.b();
    }

    @Override // nd.q0
    public final int c(long j) {
        return this.f15061d.c(j - this.f15062e);
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        int f2 = this.f15061d.f(lVar, fVar, i5);
        if (f2 == -4) {
            fVar.f14438x = Math.max(0L, fVar.f14438x + this.f15062e);
        }
        return f2;
    }

    @Override // nd.q0
    public final boolean isReady() {
        return this.f15061d.isReady();
    }
}
