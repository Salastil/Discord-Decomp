package io.sentry;

import java.nio.charset.Charset;
import java.util.Arrays;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public class i6 implements y1 {
    public ConcurrentHashMap E;
    public String F;
    public Map G;
    public ConcurrentHashMap H;
    public k1 I;
    public c J;
    public final u4.b K;
    public final io.sentry.protocol.v L;

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.protocol.v f11610d;

    /* renamed from: e, reason: collision with root package name */
    public final k6 f11611e;

    /* renamed from: i, reason: collision with root package name */
    public final k6 f11612i;

    /* renamed from: v, reason: collision with root package name */
    public transient f9.b f11613v;

    /* renamed from: w, reason: collision with root package name */
    public final String f11614w;

    /* renamed from: x, reason: collision with root package name */
    public String f11615x;

    /* renamed from: y, reason: collision with root package name */
    public l6 f11616y;

    public i6(io.sentry.protocol.v vVar, k6 k6Var, String str, k6 k6Var2) {
        this(vVar, k6Var, k6Var2, str, null, null, null, "manual");
    }

    public final void a(f9.b bVar) {
        this.f11613v = bVar;
        c cVar = this.J;
        if (cVar == null || bVar == null) {
            return;
        }
        Boolean bool = (Boolean) bVar.f8472d;
        Charset charset = io.sentry.util.l.a;
        cVar.b("sentry-sampled", bool == null ? null : bool.toString());
        Double d6 = (Double) bVar.f8474i;
        if (d6 != null && cVar.f11415e) {
            cVar.f11414d = d6;
        }
        Double d7 = (Double) bVar.f8473e;
        if (d7 != null) {
            cVar.f11413c = d7;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i6)) {
            return false;
        }
        i6 i6Var = (i6) obj;
        return this.f11610d.equals(i6Var.f11610d) && this.f11611e.equals(i6Var.f11611e) && d9.a.k(this.f11612i, i6Var.f11612i) && this.f11614w.equals(i6Var.f11614w) && d9.a.k(this.f11615x, i6Var.f11615x) && this.f11616y == i6Var.f11616y;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11610d, this.f11611e, this.f11612i, this.f11614w, this.f11615x, this.f11616y});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("trace_id");
        this.f11610d.serialize(y2Var, iLogger);
        y2Var.C0("span_id");
        this.f11611e.serialize(y2Var, iLogger);
        k6 k6Var = this.f11612i;
        if (k6Var != null) {
            y2Var.C0("parent_span_id");
            k6Var.serialize(y2Var, iLogger);
        }
        y2Var.C0("op").s(this.f11614w);
        if (this.f11615x != null) {
            y2Var.C0("description").s(this.f11615x);
        }
        if (this.f11616y != null) {
            y2Var.C0("status").o0(iLogger, this.f11616y);
        }
        if (this.F != null) {
            y2Var.C0("origin").o0(iLogger, this.F);
        }
        if (!this.E.isEmpty()) {
            y2Var.C0("tags").o0(iLogger, this.E);
        }
        if (!this.G.isEmpty()) {
            y2Var.C0("data").o0(iLogger, this.G);
        }
        ConcurrentHashMap concurrentHashMap = this.H;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.H.get(str));
            }
        }
        y2Var.O();
    }

    public i6(io.sentry.protocol.v vVar, k6 k6Var, k6 k6Var2, String str, String str2, f9.b bVar, l6 l6Var, String str3) {
        this.E = new ConcurrentHashMap();
        this.F = "manual";
        this.G = new ConcurrentHashMap();
        this.I = k1.SENTRY;
        this.K = new u4.b(19);
        this.L = io.sentry.protocol.v.f11895e;
        d9.a.L(vVar, "traceId is required");
        this.f11610d = vVar;
        d9.a.L(k6Var, "spanId is required");
        this.f11611e = k6Var;
        d9.a.L(str, "operation is required");
        this.f11614w = str;
        this.f11612i = k6Var2;
        this.f11615x = str2;
        this.f11616y = l6Var;
        this.F = str3;
        a(bVar);
        io.sentry.util.thread.a threadChecker = c4.f().l().getThreadChecker();
        this.G.put("thread.id", String.valueOf(threadChecker.b()));
        this.G.put("thread.name", threadChecker.a());
    }

    public i6(i6 i6Var) {
        this.E = new ConcurrentHashMap();
        this.F = "manual";
        this.G = new ConcurrentHashMap();
        this.I = k1.SENTRY;
        this.K = new u4.b(19);
        this.L = io.sentry.protocol.v.f11895e;
        this.f11610d = i6Var.f11610d;
        this.f11611e = i6Var.f11611e;
        this.f11612i = i6Var.f11612i;
        a(i6Var.f11613v);
        this.f11614w = i6Var.f11614w;
        this.f11615x = i6Var.f11615x;
        this.f11616y = i6Var.f11616y;
        ConcurrentHashMap r5 = ys.l.r(i6Var.E);
        if (r5 != null) {
            this.E = r5;
        }
        ConcurrentHashMap r7 = ys.l.r(i6Var.H);
        if (r7 != null) {
            this.H = r7;
        }
        this.J = i6Var.J;
        ConcurrentHashMap r10 = ys.l.r(i6Var.G);
        if (r10 != null) {
            this.G = r10;
        }
    }
}
