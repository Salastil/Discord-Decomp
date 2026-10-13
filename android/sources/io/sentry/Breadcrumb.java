package io.sentry;

import java.util.Arrays;
import java.util.Date;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class Breadcrumb implements y1, Comparable {
    public String E;
    public SentryLevel F;
    public ConcurrentHashMap G;

    /* renamed from: d, reason: collision with root package name */
    public final Long f10972d;

    /* renamed from: e, reason: collision with root package name */
    public Date f10973e;

    /* renamed from: i, reason: collision with root package name */
    public final Long f10974i;

    /* renamed from: v, reason: collision with root package name */
    public String f10975v;

    /* renamed from: w, reason: collision with root package name */
    public String f10976w;

    /* renamed from: x, reason: collision with root package name */
    public ConcurrentHashMap f10977x;

    /* renamed from: y, reason: collision with root package name */
    public String f10978y;

    public Breadcrumb(Date date) {
        this.f10977x = new ConcurrentHashMap();
        this.f10974i = Long.valueOf(System.nanoTime());
        this.f10973e = date;
        this.f10972d = null;
    }

    public static boolean a(Breadcrumb breadcrumb, Breadcrumb breadcrumb2) {
        return breadcrumb.b().getTime() == breadcrumb2.b().getTime() && d9.a.k(breadcrumb.f10975v, breadcrumb2.f10975v) && d9.a.k(breadcrumb.f10976w, breadcrumb2.f10976w) && d9.a.k(breadcrumb.f10978y, breadcrumb2.f10978y) && d9.a.k(breadcrumb.E, breadcrumb2.E) && breadcrumb.F == breadcrumb2.F;
    }

    public final Date b() {
        Date date = this.f10973e;
        if (date != null) {
            return (Date) date.clone();
        }
        Long l6 = this.f10972d;
        if (l6 == null) {
            throw new IllegalStateException("No timestamp set for breadcrumb");
        }
        Date s2 = ki.b.s(l6.longValue());
        this.f10973e = s2;
        return s2;
    }

    public final void c(Object obj, String str) {
        if (str == null) {
            return;
        }
        if (obj == null) {
            this.f10977x.remove(str);
        } else {
            this.f10977x.put(str, obj);
        }
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f10974i.compareTo(((Breadcrumb) obj).f10974i);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || Breadcrumb.class != obj.getClass()) {
            return false;
        }
        Breadcrumb breadcrumb = (Breadcrumb) obj;
        return "http".equals(this.f10976w) ? a(this, breadcrumb) && d9.a.k(this.f10977x.get("status_code"), breadcrumb.f10977x.get("status_code")) && d9.a.k(this.f10977x.get("url"), breadcrumb.f10977x.get("url")) && d9.a.k(this.f10977x.get("method"), breadcrumb.f10977x.get("method")) && d9.a.k(this.f10977x.get("http.fragment"), breadcrumb.f10977x.get("http.fragment")) && d9.a.k(this.f10977x.get("http.query"), breadcrumb.f10977x.get("http.query")) : a(this, breadcrumb);
    }

    public final int hashCode() {
        return "http".equals(this.f10976w) ? Arrays.hashCode(new Object[]{Long.valueOf(b().getTime()), this.f10975v, this.f10976w, this.f10978y, this.E, this.F, this.f10977x.get("status_code"), this.f10977x.get("url"), this.f10977x.get("method"), this.f10977x.get("http.fragment"), this.f10977x.get("http.query")}) : Arrays.hashCode(new Object[]{Long.valueOf(b().getTime()), this.f10975v, this.f10976w, this.f10978y, this.E, this.F});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("timestamp").o0(iLogger, b());
        if (this.f10975v != null) {
            y2Var.C0("message").s(this.f10975v);
        }
        if (this.f10976w != null) {
            y2Var.C0("type").s(this.f10976w);
        }
        y2Var.C0("data").o0(iLogger, this.f10977x);
        if (this.f10978y != null) {
            y2Var.C0("category").s(this.f10978y);
        }
        if (this.E != null) {
            y2Var.C0("origin").s(this.E);
        }
        if (this.F != null) {
            y2Var.C0("level").o0(iLogger, this.F);
        }
        ConcurrentHashMap concurrentHashMap = this.G;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.G, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }

    public Breadcrumb(long j) {
        this.f10977x = new ConcurrentHashMap();
        this.f10974i = Long.valueOf(System.nanoTime());
        this.f10972d = Long.valueOf(j);
        this.f10973e = null;
    }

    public Breadcrumb(Breadcrumb breadcrumb) {
        this.f10977x = new ConcurrentHashMap();
        this.f10974i = Long.valueOf(System.nanoTime());
        this.f10973e = breadcrumb.f10973e;
        this.f10972d = breadcrumb.f10972d;
        this.f10975v = breadcrumb.f10975v;
        this.f10976w = breadcrumb.f10976w;
        this.f10978y = breadcrumb.f10978y;
        this.E = breadcrumb.E;
        ConcurrentHashMap r5 = ys.l.r(breadcrumb.f10977x);
        if (r5 != null) {
            this.f10977x = r5;
        }
        this.G = ys.l.r(breadcrumb.G);
        this.F = breadcrumb.F;
    }

    public Breadcrumb() {
        this(System.currentTimeMillis());
    }
}
