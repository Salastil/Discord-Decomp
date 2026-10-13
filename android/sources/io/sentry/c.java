package io.sentry;

import java.text.DecimalFormat;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: f, reason: collision with root package name */
    public static final af.h0 f11411f = new af.h0(1);
    public final ConcurrentHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.util.a f11412b;

    /* renamed from: c, reason: collision with root package name */
    public Double f11413c;

    /* renamed from: d, reason: collision with root package name */
    public Double f11414d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f11415e;

    public c() {
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        this.f11412b = new io.sentry.util.a();
        this.a = concurrentHashMap;
        this.f11413c = null;
        this.f11414d = null;
        this.f11415e = true;
    }

    public final String a(String str) {
        return (String) this.a.get(str);
    }

    public final void b(String str, String str2) {
        if (this.f11415e) {
            ConcurrentHashMap concurrentHashMap = this.a;
            if (str2 == null) {
                concurrentHashMap.remove(str);
            } else {
                concurrentHashMap.put(str, str2);
            }
        }
    }

    public final void c(io.sentry.protocol.v vVar, io.sentry.protocol.v vVar2, v5 v5Var, f9.b bVar, String str, io.sentry.protocol.g0 g0Var) {
        b("sentry-trace_id", vVar.toString());
        b("sentry-public_key", v5Var.retrieveParsedDsn().f12088b);
        b("sentry-release", v5Var.getRelease());
        b("sentry-environment", v5Var.getEnvironment());
        if (g0Var == null || io.sentry.protocol.g0.URL.equals(g0Var)) {
            str = null;
        }
        b("sentry-transaction", str);
        if (vVar2 != null && !io.sentry.protocol.v.f11895e.equals(vVar2)) {
            b("sentry-replay_id", vVar2.toString());
        }
        Double d6 = bVar == null ? null : (Double) bVar.f8473e;
        if (this.f11415e) {
            this.f11413c = d6;
        }
        Boolean bool = bVar == null ? null : (Boolean) bVar.f8472d;
        b("sentry-sampled", bool == null ? null : bool.toString());
        Double d7 = bVar != null ? (Double) bVar.f8474i : null;
        if (this.f11415e) {
            this.f11414d = d7;
        }
    }

    public final n6 d() {
        String a = a("sentry-trace_id");
        String a10 = a("sentry-replay_id");
        String a11 = a("sentry-public_key");
        if (a == null || a11 == null) {
            return null;
        }
        io.sentry.protocol.v vVar = new io.sentry.protocol.v(a);
        String a12 = a("sentry-release");
        String a13 = a("sentry-environment");
        String a14 = a("sentry-user_id");
        String a15 = a("sentry-transaction");
        Double d6 = this.f11413c;
        boolean B = e4.f.B(d6, false);
        af.h0 h0Var = f11411f;
        String format = !B ? null : ((DecimalFormat) h0Var.get()).format(d6);
        String a16 = a("sentry-sampled");
        io.sentry.protocol.v vVar2 = a10 == null ? null : new io.sentry.protocol.v(a10);
        Double d7 = this.f11414d;
        n6 n6Var = new n6(vVar, a11, a12, a13, a14, a15, format, a16, vVar2, e4.f.B(d7, false) ? ((DecimalFormat) h0Var.get()).format(d7) : null);
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        r a17 = this.f11412b.a();
        try {
            for (Map.Entry entry : this.a.entrySet()) {
                String str = (String) entry.getKey();
                String str2 = (String) entry.getValue();
                if (!b.a.contains(str) && str2 != null) {
                    concurrentHashMap.put(str.replaceFirst("sentry-", ""), str2);
                }
            }
            a17.close();
            n6Var.H = concurrentHashMap;
            return n6Var;
        } finally {
        }
    }
}
