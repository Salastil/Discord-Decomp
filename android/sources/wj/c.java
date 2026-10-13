package wj;

import jj.l;

/* loaded from: classes3.dex */
public final class c {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f19845b;

    /* renamed from: c, reason: collision with root package name */
    public final l[] f19846c;

    public c(int i5, int i6, int i10, int i11, int[] iArr) {
        this.a = i5;
        this.f19845b = iArr;
        float f2 = i11;
        this.f19846c = new l[]{new l(i6, f2), new l(i10, f2)};
    }

    public final boolean equals(Object obj) {
        return (obj instanceof c) && this.a == ((c) obj).a;
    }

    public final int hashCode() {
        return this.a;
    }
}
