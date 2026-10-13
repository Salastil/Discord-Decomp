package com.google.android.gms.internal.play_billing;

import java.util.Locale;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class n {
    public final a2 a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f5774b;

    /* renamed from: c, reason: collision with root package name */
    public long f5775c;

    /* renamed from: d, reason: collision with root package name */
    public long f5776d;

    public n(a2 a2Var) {
        if (a2Var == null) {
            throw new NullPointerException("ticker");
        }
        this.a = a2Var;
    }

    public final void a() {
        if (this.f5774b) {
            throw new IllegalStateException("This stopwatch is already running.");
        }
        this.f5774b = true;
        this.f5776d = this.a.d();
    }

    public final String toString() {
        String str;
        long d6 = this.f5774b ? (this.a.d() - this.f5776d) + this.f5775c : this.f5775c;
        TimeUnit timeUnit = TimeUnit.DAYS;
        TimeUnit timeUnit2 = TimeUnit.NANOSECONDS;
        if (timeUnit.convert(d6, timeUnit2) <= 0) {
            timeUnit = TimeUnit.HOURS;
            if (timeUnit.convert(d6, timeUnit2) <= 0) {
                timeUnit = TimeUnit.MINUTES;
                if (timeUnit.convert(d6, timeUnit2) <= 0) {
                    timeUnit = TimeUnit.SECONDS;
                    if (timeUnit.convert(d6, timeUnit2) <= 0) {
                        timeUnit = TimeUnit.MILLISECONDS;
                        if (timeUnit.convert(d6, timeUnit2) <= 0) {
                            timeUnit = TimeUnit.MICROSECONDS;
                            if (timeUnit.convert(d6, timeUnit2) <= 0) {
                                timeUnit = timeUnit2;
                            }
                        }
                    }
                }
            }
        }
        String format = String.format(Locale.ROOT, "%.4g", Double.valueOf(d6 / timeUnit2.convert(1L, timeUnit)));
        switch (m.a[timeUnit.ordinal()]) {
            case 1:
                str = "ns";
                break;
            case 2:
                str = "μs";
                break;
            case 3:
                str = "ms";
                break;
            case 4:
                str = "s";
                break;
            case 5:
                str = "min";
                break;
            case 6:
                str = "h";
                break;
            case 7:
                str = "d";
                break;
            default:
                throw new AssertionError();
        }
        return k0.d.l(format, " ", str);
    }
}
