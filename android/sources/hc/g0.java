package hc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class g0 extends n1 {

    /* renamed from: w, reason: collision with root package name */
    public static final String f9702w;

    /* renamed from: x, reason: collision with root package name */
    public static final String f9703x;

    /* renamed from: y, reason: collision with root package name */
    public static final hb.a f9704y;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f9705i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9706v;

    static {
        int i5 = ke.d0.a;
        f9702w = Integer.toString(1, 36);
        f9703x = Integer.toString(2, 36);
        f9704y = new hb.a(9);
    }

    public g0() {
        this.f9705i = false;
        this.f9706v = false;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof g0)) {
            return false;
        }
        g0 g0Var = (g0) obj;
        return this.f9706v == g0Var.f9706v && this.f9705i == g0Var.f9705i;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f9705i), Boolean.valueOf(this.f9706v)});
    }

    public g0(boolean z5) {
        this.f9705i = true;
        this.f9706v = z5;
    }
}
