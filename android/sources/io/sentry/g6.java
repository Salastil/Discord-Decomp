package io.sentry;

import java.util.Date;
import java.util.Locale;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class g6 implements y1 {
    public Long E;
    public Double F;
    public final String G;
    public String H;
    public final String I;
    public final String J;
    public String K;
    public final io.sentry.util.a L = new io.sentry.util.a();
    public ConcurrentHashMap M;

    /* renamed from: d, reason: collision with root package name */
    public final Date f11567d;

    /* renamed from: e, reason: collision with root package name */
    public Date f11568e;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicInteger f11569i;

    /* renamed from: v, reason: collision with root package name */
    public final String f11570v;

    /* renamed from: w, reason: collision with root package name */
    public final String f11571w;

    /* renamed from: x, reason: collision with root package name */
    public Boolean f11572x;

    /* renamed from: y, reason: collision with root package name */
    public f6 f11573y;

    public g6(f6 f6Var, Date date, Date date2, int i5, String str, String str2, Boolean bool, Long l6, Double d6, String str3, String str4, String str5, String str6, String str7) {
        this.f11573y = f6Var;
        this.f11567d = date;
        this.f11568e = date2;
        this.f11569i = new AtomicInteger(i5);
        this.f11570v = str;
        this.f11571w = str2;
        this.f11572x = bool;
        this.E = l6;
        this.F = d6;
        this.G = str3;
        this.H = str4;
        this.I = str5;
        this.J = str6;
        this.K = str7;
    }

    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public final g6 clone() {
        return new g6(this.f11573y, this.f11567d, this.f11568e, this.f11569i.get(), this.f11570v, this.f11571w, this.f11572x, this.E, this.F, this.G, this.H, this.I, this.J, this.K);
    }

    public final void b(Date date) {
        r a = this.L.a();
        try {
            this.f11572x = null;
            if (this.f11573y == f6.Ok) {
                this.f11573y = f6.Exited;
            }
            if (date != null) {
                this.f11568e = date;
            } else {
                this.f11568e = ki.b.r();
            }
            if (this.f11568e != null) {
                this.F = Double.valueOf(Math.abs(r6.getTime() - this.f11567d.getTime()) / 1000.0d);
                long time = this.f11568e.getTime();
                if (time < 0) {
                    time = Math.abs(time);
                }
                this.E = Long.valueOf(time);
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final Date c() {
        Date date = this.f11567d;
        if (date == null) {
            return null;
        }
        return (Date) date.clone();
    }

    public final boolean d(f6 f6Var, String str, boolean z5, String str2) {
        boolean z6;
        r a = this.L.a();
        boolean z7 = true;
        if (f6Var != null) {
            try {
                this.f11573y = f6Var;
                z6 = true;
            } catch (Throwable th2) {
                try {
                    a.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        } else {
            z6 = false;
        }
        if (str != null) {
            this.H = str;
            z6 = true;
        }
        if (z5) {
            this.f11569i.addAndGet(1);
            z6 = true;
        }
        if (str2 != null) {
            this.K = str2;
        } else {
            z7 = z6;
        }
        if (z7) {
            this.f11572x = null;
            Date r5 = ki.b.r();
            this.f11568e = r5;
            if (r5 != null) {
                long time = r5.getTime();
                if (time < 0) {
                    time = Math.abs(time);
                }
                this.E = Long.valueOf(time);
            }
        }
        a.close();
        return z7;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        String str = this.f11571w;
        if (str != null) {
            y2Var.C0("sid").s(str);
        }
        String str2 = this.f11570v;
        if (str2 != null) {
            y2Var.C0("did").s(str2);
        }
        if (this.f11572x != null) {
            y2Var.C0("init").q0(this.f11572x);
        }
        y2Var.C0("started").o0(iLogger, this.f11567d);
        y2Var.C0("status").o0(iLogger, this.f11573y.name().toLowerCase(Locale.ROOT));
        if (this.E != null) {
            y2Var.C0("seq").a0(this.E);
        }
        y2Var.C0("errors").g(this.f11569i.intValue());
        if (this.F != null) {
            y2Var.C0("duration").a0(this.F);
        }
        if (this.f11568e != null) {
            y2Var.C0("timestamp").o0(iLogger, this.f11568e);
        }
        if (this.K != null) {
            y2Var.C0("abnormal_mechanism").o0(iLogger, this.K);
        }
        y2Var.C0("attrs");
        y2Var.n0();
        y2Var.C0("release").o0(iLogger, this.J);
        String str3 = this.I;
        if (str3 != null) {
            y2Var.C0("environment").o0(iLogger, str3);
        }
        String str4 = this.G;
        if (str4 != null) {
            y2Var.C0("ip_address").o0(iLogger, str4);
        }
        if (this.H != null) {
            y2Var.C0("user_agent").o0(iLogger, this.H);
        }
        y2Var.O();
        ConcurrentHashMap concurrentHashMap = this.M;
        if (concurrentHashMap != null) {
            for (String str5 : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.M, str5, y2Var, str5, iLogger);
            }
        }
        y2Var.O();
    }
}
