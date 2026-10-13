package hc;

/* loaded from: classes3.dex */
public abstract class k0 implements g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final hb.a I;

    /* renamed from: x, reason: collision with root package name */
    public static final l0 f9766x = new l0(new j0());

    /* renamed from: y, reason: collision with root package name */
    public static final String f9767y;

    /* renamed from: d, reason: collision with root package name */
    public final long f9768d;

    /* renamed from: e, reason: collision with root package name */
    public final long f9769e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f9770i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9771v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f9772w;

    static {
        int i5 = ke.d0.a;
        f9767y = Integer.toString(0, 36);
        E = Integer.toString(1, 36);
        F = Integer.toString(2, 36);
        G = Integer.toString(3, 36);
        H = Integer.toString(4, 36);
        I = new hb.a(12);
    }

    public k0(j0 j0Var) {
        this.f9768d = j0Var.a;
        this.f9769e = j0Var.f9756b;
        this.f9770i = j0Var.f9757c;
        this.f9771v = j0Var.f9758d;
        this.f9772w = j0Var.f9759e;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof k0)) {
            return false;
        }
        k0 k0Var = (k0) obj;
        return this.f9768d == k0Var.f9768d && this.f9769e == k0Var.f9769e && this.f9770i == k0Var.f9770i && this.f9771v == k0Var.f9771v && this.f9772w == k0Var.f9772w;
    }

    public final int hashCode() {
        long j = this.f9768d;
        int i5 = ((int) (j ^ (j >>> 32))) * 31;
        long j5 = this.f9769e;
        return ((((((i5 + ((int) ((j5 >>> 32) ^ j5))) * 31) + (this.f9770i ? 1 : 0)) * 31) + (this.f9771v ? 1 : 0)) * 31) + (this.f9772w ? 1 : 0);
    }
}
