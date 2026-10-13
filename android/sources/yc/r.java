package yc;

import ke.d0;

/* loaded from: classes3.dex */
public final class r {
    public final o a;

    /* renamed from: b, reason: collision with root package name */
    public final int f20863b;

    /* renamed from: c, reason: collision with root package name */
    public final long[] f20864c;

    /* renamed from: d, reason: collision with root package name */
    public final int[] f20865d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20866e;

    /* renamed from: f, reason: collision with root package name */
    public final long[] f20867f;

    /* renamed from: g, reason: collision with root package name */
    public final int[] f20868g;

    /* renamed from: h, reason: collision with root package name */
    public final long f20869h;

    public r(o oVar, long[] jArr, int[] iArr, int i5, long[] jArr2, int[] iArr2, long j) {
        ke.b.g(iArr.length == jArr2.length);
        ke.b.g(jArr.length == jArr2.length);
        ke.b.g(iArr2.length == jArr2.length);
        this.a = oVar;
        this.f20864c = jArr;
        this.f20865d = iArr;
        this.f20866e = i5;
        this.f20867f = jArr2;
        this.f20868g = iArr2;
        this.f20869h = j;
        this.f20863b = jArr.length;
        if (iArr2.length > 0) {
            int length = iArr2.length - 1;
            iArr2[length] = iArr2[length] | 536870912;
        }
    }

    public final int a(long j) {
        long[] jArr = this.f20867f;
        for (int b10 = d0.b(jArr, j, true); b10 < jArr.length; b10++) {
            if ((this.f20868g[b10] & 1) != 0) {
                return b10;
            }
        }
        return -1;
    }
}
