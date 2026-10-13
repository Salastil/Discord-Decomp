package io.sentry;

import java.util.Date;

/* loaded from: classes3.dex */
public final class d5 extends i4 {

    /* renamed from: d, reason: collision with root package name */
    public final Date f11508d;

    /* renamed from: e, reason: collision with root package name */
    public final long f11509e;

    public d5(Date date, long j) {
        this.f11508d = date;
        this.f11509e = j;
    }

    @Override // io.sentry.i4, java.lang.Comparable
    /* renamed from: a */
    public final int compareTo(i4 i4Var) {
        if (!(i4Var instanceof d5)) {
            return super.compareTo(i4Var);
        }
        d5 d5Var = (d5) i4Var;
        long time = this.f11508d.getTime();
        long time2 = d5Var.f11508d.getTime();
        return time == time2 ? Long.valueOf(this.f11509e).compareTo(Long.valueOf(d5Var.f11509e)) : Long.valueOf(time).compareTo(Long.valueOf(time2));
    }

    @Override // io.sentry.i4
    public final long b(i4 i4Var) {
        return i4Var instanceof d5 ? this.f11509e - ((d5) i4Var).f11509e : super.b(i4Var);
    }

    @Override // io.sentry.i4
    public final long c(i4 i4Var) {
        if (i4Var == null || !(i4Var instanceof d5)) {
            return super.c(i4Var);
        }
        d5 d5Var = (d5) i4Var;
        long j = d5Var.f11509e;
        int compareTo = compareTo(i4Var);
        long j5 = this.f11509e;
        if (compareTo < 0) {
            return d() + (j - j5);
        }
        return d5Var.d() + (j5 - j);
    }

    @Override // io.sentry.i4
    public final long d() {
        return this.f11508d.getTime() * 1000000;
    }

    public d5() {
        this(ki.b.r(), System.nanoTime());
    }
}
