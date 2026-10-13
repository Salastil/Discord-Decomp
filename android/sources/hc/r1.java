package hc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class r1 extends n1 {

    /* renamed from: w, reason: collision with root package name */
    public static final String f9856w;

    /* renamed from: x, reason: collision with root package name */
    public static final String f9857x;

    /* renamed from: y, reason: collision with root package name */
    public static final hb.a f9858y;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f9859i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9860v;

    static {
        int i5 = ke.d0.a;
        f9856w = Integer.toString(1, 36);
        f9857x = Integer.toString(2, 36);
        f9858y = new hb.a(22);
    }

    public r1() {
        this.f9859i = false;
        this.f9860v = false;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof r1)) {
            return false;
        }
        r1 r1Var = (r1) obj;
        return this.f9860v == r1Var.f9860v && this.f9859i == r1Var.f9859i;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f9859i), Boolean.valueOf(this.f9860v)});
    }

    public r1(boolean z5) {
        this.f9859i = true;
        this.f9860v = z5;
    }
}
