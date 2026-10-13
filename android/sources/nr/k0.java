package nr;

/* loaded from: classes3.dex */
public final class k0 implements t0 {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f15632d;

    public k0(boolean z5) {
        this.f15632d = z5;
    }

    @Override // nr.t0
    public final g1 b() {
        return null;
    }

    @Override // nr.t0
    public final boolean c() {
        return this.f15632d;
    }

    public final String toString() {
        return s4.h.h(new StringBuilder("Empty{"), this.f15632d ? "Active" : "New", '}');
    }
}
