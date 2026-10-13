package bg;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class d1 extends h1 {

    /* renamed from: d, reason: collision with root package name */
    public final long f2944d;

    public d1(long j) {
        this.f2944d = j;
    }

    @Override // bg.h1
    public final int a() {
        return h1.d(this.f2944d >= 0 ? (byte) 0 : (byte) 32);
    }

    @Override // java.lang.Comparable
    public final /* bridge */ /* synthetic */ int compareTo(Object obj) {
        h1 h1Var = (h1) obj;
        return a() != h1Var.a() ? a() - h1Var.a() : Long.compare(Math.abs(this.f2944d), Math.abs(((d1) h1Var).f2944d));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && d1.class == obj.getClass() && this.f2944d == ((d1) obj).f2944d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(a()), Long.valueOf(this.f2944d)});
    }

    public final String toString() {
        return Long.toString(this.f2944d);
    }
}
