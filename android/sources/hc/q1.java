package hc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class q1 extends n1 {

    /* renamed from: w, reason: collision with root package name */
    public static final String f9850w;

    /* renamed from: x, reason: collision with root package name */
    public static final String f9851x;

    /* renamed from: y, reason: collision with root package name */
    public static final hb.a f9852y;

    /* renamed from: i, reason: collision with root package name */
    public final int f9853i;

    /* renamed from: v, reason: collision with root package name */
    public final float f9854v;

    static {
        int i5 = ke.d0.a;
        f9850w = Integer.toString(1, 36);
        f9851x = Integer.toString(2, 36);
        f9852y = new hb.a(21);
    }

    public q1(int i5) {
        ke.b.f("maxStars must be a positive integer", i5 > 0);
        this.f9853i = i5;
        this.f9854v = -1.0f;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof q1)) {
            return false;
        }
        q1 q1Var = (q1) obj;
        return this.f9853i == q1Var.f9853i && this.f9854v == q1Var.f9854v;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f9853i), Float.valueOf(this.f9854v)});
    }

    public q1(int i5, float f2) {
        boolean z5 = false;
        ke.b.f("maxStars must be a positive integer", i5 > 0);
        if (f2 >= 0.0f && f2 <= i5) {
            z5 = true;
        }
        ke.b.f("starRating is out of range [0, maxStars]", z5);
        this.f9853i = i5;
        this.f9854v = f2;
    }
}
