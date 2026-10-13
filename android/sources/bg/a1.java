package bg;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class a1 extends h1 {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f2928d;

    public a1(boolean z5) {
        this.f2928d = z5;
    }

    @Override // bg.h1
    public final int a() {
        return h1.d((byte) -32);
    }

    @Override // java.lang.Comparable
    public final /* bridge */ /* synthetic */ int compareTo(Object obj) {
        h1 h1Var = (h1) obj;
        int a = h1Var.a();
        int d6 = h1.d((byte) -32);
        if (d6 != a) {
            return d6 - h1Var.a();
        }
        return (true != this.f2928d ? 20 : 21) - (true != ((a1) h1Var).f2928d ? 20 : 21);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && a1.class == obj.getClass() && this.f2928d == ((a1) obj).f2928d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(h1.d((byte) -32)), Boolean.valueOf(this.f2928d)});
    }

    public final String toString() {
        return Boolean.toString(this.f2928d);
    }
}
