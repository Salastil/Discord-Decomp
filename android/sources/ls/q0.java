package ls;

/* loaded from: classes3.dex */
public final class q0 extends j0 {
    public final boolean a;

    public q0(boolean z5) {
        this.a = z5;
    }

    @Override // ls.j0
    public final int a() {
        return this.a ? 1 : 0;
    }

    @Override // ls.j0
    public final j0 b(int i5) {
        return new q0(this.a);
    }

    public q0(boolean z5, int i5) {
        this.a = z5;
    }
}
