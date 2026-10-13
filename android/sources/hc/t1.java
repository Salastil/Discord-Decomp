package hc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class t1 implements g {
    public static final String E;
    public static final String F;

    /* renamed from: x, reason: collision with root package name */
    public static final String f9885x;

    /* renamed from: y, reason: collision with root package name */
    public static final String f9886y;

    /* renamed from: d, reason: collision with root package name */
    public final int f9887d;

    /* renamed from: e, reason: collision with root package name */
    public final nd.z0 f9888e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f9889i;

    /* renamed from: v, reason: collision with root package name */
    public final int[] f9890v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean[] f9891w;

    static {
        int i5 = ke.d0.a;
        f9885x = Integer.toString(0, 36);
        f9886y = Integer.toString(1, 36);
        E = Integer.toString(3, 36);
        F = Integer.toString(4, 36);
    }

    public t1(nd.z0 z0Var, boolean z5, int[] iArr, boolean[] zArr) {
        int i5 = z0Var.f15208d;
        this.f9887d = i5;
        boolean z6 = false;
        ke.b.g(i5 == iArr.length && i5 == zArr.length);
        this.f9888e = z0Var;
        if (z5 && i5 > 1) {
            z6 = true;
        }
        this.f9889i = z6;
        this.f9890v = (int[]) iArr.clone();
        this.f9891w = (boolean[]) zArr.clone();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && t1.class == obj.getClass()) {
            t1 t1Var = (t1) obj;
            if (this.f9889i == t1Var.f9889i && this.f9888e.equals(t1Var.f9888e) && Arrays.equals(this.f9890v, t1Var.f9890v) && Arrays.equals(this.f9891w, t1Var.f9891w)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f9891w) + ((Arrays.hashCode(this.f9890v) + (((this.f9888e.hashCode() * 31) + (this.f9889i ? 1 : 0)) * 31)) * 31);
    }
}
