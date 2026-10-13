package ls;

/* loaded from: classes3.dex */
public final class m0 extends j0 {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f14242b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f14243c;

    public m0(int i5, int i6, Object obj) {
        if (i5 < 1 || i5 > 18) {
            throw new IllegalArgumentException(k0.d.i(i5, "Min width out of bounds: "));
        }
        if (i6 < i5) {
            throw new IllegalArgumentException("Max width smaller than min width.");
        }
        if (i6 > 18) {
            throw new IllegalArgumentException(k0.d.i(i6, "Max width out of bounds: "));
        }
        if (obj == null) {
            throw new NullPointerException("Missing unit.");
        }
        this.a = i5;
        this.f14242b = i6;
        this.f14243c = obj;
    }

    @Override // ls.j0
    public final int a() {
        return this.a;
    }

    @Override // ls.j0
    public final j0 b(int i5) {
        return new m0(this.a, this.f14242b, this.f14243c);
    }
}
