package hc;

/* loaded from: classes3.dex */
public final class o0 implements g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final hb.a I;

    /* renamed from: x, reason: collision with root package name */
    public static final o0 f9823x = new o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f);

    /* renamed from: y, reason: collision with root package name */
    public static final String f9824y;

    /* renamed from: d, reason: collision with root package name */
    public final long f9825d;

    /* renamed from: e, reason: collision with root package name */
    public final long f9826e;

    /* renamed from: i, reason: collision with root package name */
    public final long f9827i;

    /* renamed from: v, reason: collision with root package name */
    public final float f9828v;

    /* renamed from: w, reason: collision with root package name */
    public final float f9829w;

    static {
        int i5 = ke.d0.a;
        f9824y = Integer.toString(0, 36);
        E = Integer.toString(1, 36);
        F = Integer.toString(2, 36);
        G = Integer.toString(3, 36);
        H = Integer.toString(4, 36);
        I = new hb.a(14);
    }

    public o0(long j, long j5, long j7, float f2, float f10) {
        this.f9825d = j;
        this.f9826e = j5;
        this.f9827i = j7;
        this.f9828v = f2;
        this.f9829w = f10;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof o0)) {
            return false;
        }
        o0 o0Var = (o0) obj;
        return this.f9825d == o0Var.f9825d && this.f9826e == o0Var.f9826e && this.f9827i == o0Var.f9827i && this.f9828v == o0Var.f9828v && this.f9829w == o0Var.f9829w;
    }

    public final int hashCode() {
        long j = this.f9825d;
        long j5 = this.f9826e;
        int i5 = ((((int) (j ^ (j >>> 32))) * 31) + ((int) (j5 ^ (j5 >>> 32)))) * 31;
        long j7 = this.f9827i;
        int i6 = (i5 + ((int) ((j7 >>> 32) ^ j7))) * 31;
        float f2 = this.f9828v;
        int floatToIntBits = (i6 + (f2 != 0.0f ? Float.floatToIntBits(f2) : 0)) * 31;
        float f10 = this.f9829w;
        return floatToIntBits + (f10 != 0.0f ? Float.floatToIntBits(f10) : 0);
    }
}
