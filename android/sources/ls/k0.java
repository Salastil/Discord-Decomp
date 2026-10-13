package ls;

/* loaded from: classes3.dex */
public final class k0 extends j0 {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f14240b;

    public k0(int i5, Object obj) {
        if (i5 < 1 || i5 > 9) {
            throw new IllegalArgumentException(k0.d.i(i5, "Fraction width out of bounds: "));
        }
        this.a = i5;
        this.f14240b = obj;
    }

    @Override // ls.j0
    public final int a() {
        return this.a;
    }

    @Override // ls.j0
    public final j0 b(int i5) {
        return new k0(this.a, this.f14240b);
    }
}
