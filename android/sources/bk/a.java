package bk;

import e4.l;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final a f3033e = new a();
    public final int[] a = new int[929];

    /* renamed from: b, reason: collision with root package name */
    public final int[] f3034b = new int[929];

    /* renamed from: c, reason: collision with root package name */
    public final l f3035c;

    /* renamed from: d, reason: collision with root package name */
    public final l f3036d;

    public a() {
        int i5 = 1;
        for (int i6 = 0; i6 < 929; i6++) {
            this.a[i6] = i5;
            i5 = (i5 * 3) % 929;
        }
        for (int i10 = 0; i10 < 928; i10++) {
            this.f3034b[this.a[i10]] = i10;
        }
        this.f3035c = new l(this, new int[]{0});
        this.f3036d = new l(this, new int[]{1});
    }

    public final int a(int i5, int i6) {
        return (i5 + i6) % 929;
    }

    public final int b(int i5) {
        if (i5 == 0) {
            throw new ArithmeticException();
        }
        return this.a[928 - this.f3034b[i5]];
    }

    public final int c(int i5, int i6) {
        if (i5 == 0 || i6 == 0) {
            return 0;
        }
        int[] iArr = this.f3034b;
        return this.a[(iArr[i5] + iArr[i6]) % 928];
    }
}
