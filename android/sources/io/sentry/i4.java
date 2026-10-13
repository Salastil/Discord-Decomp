package io.sentry;

/* loaded from: classes3.dex */
public abstract class i4 implements Comparable {
    @Override // java.lang.Comparable
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(i4 i4Var) {
        return Long.valueOf(d()).compareTo(Long.valueOf(i4Var.d()));
    }

    public long b(i4 i4Var) {
        return d() - i4Var.d();
    }

    public long c(i4 i4Var) {
        return (i4Var == null || compareTo(i4Var) >= 0) ? d() : i4Var.d();
    }

    public abstract long d();
}
