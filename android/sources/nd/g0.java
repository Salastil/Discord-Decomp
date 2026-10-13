package nd;

/* loaded from: classes3.dex */
public final class g0 {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f15097b;

    public g0(int i5, boolean z5) {
        this.a = i5;
        this.f15097b = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || g0.class != obj.getClass()) {
            return false;
        }
        g0 g0Var = (g0) obj;
        return this.a == g0Var.a && this.f15097b == g0Var.f15097b;
    }

    public final int hashCode() {
        return (this.a * 31) + (this.f15097b ? 1 : 0);
    }
}
