package hc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class h1 extends n1 {

    /* renamed from: v, reason: collision with root package name */
    public static final String f9714v;

    /* renamed from: w, reason: collision with root package name */
    public static final hb.a f9715w;

    /* renamed from: i, reason: collision with root package name */
    public final float f9716i;

    static {
        int i5 = ke.d0.a;
        f9714v = Integer.toString(1, 36);
        f9715w = new hb.a(19);
    }

    public h1() {
        this.f9716i = -1.0f;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof h1) {
            return this.f9716i == ((h1) obj).f9716i;
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Float.valueOf(this.f9716i)});
    }

    public h1(float f2) {
        ke.b.f("percent must be in the range of [0, 100]", f2 >= 0.0f && f2 <= 100.0f);
        this.f9716i = f2;
    }
}
