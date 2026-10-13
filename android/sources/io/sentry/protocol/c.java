package io.sentry.protocol;

import com.discord.js_watchdog.SharedPreferencesKey;
import io.sentry.ILogger;
import io.sentry.e3;
import io.sentry.i6;
import io.sentry.y1;
import io.sentry.y2;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TimeZone;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public class c implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final ConcurrentHashMap f11763d = new ConcurrentHashMap();

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.util.a f11764e = new io.sentry.util.a();

    public c() {
    }

    public boolean a(Object obj) {
        if (obj == null) {
            return false;
        }
        return this.f11763d.containsKey(obj);
    }

    public Set b() {
        return this.f11763d.entrySet();
    }

    public Object c(Object obj) {
        if (obj == null) {
            return null;
        }
        return this.f11763d.get(obj);
    }

    public a d() {
        return (a) x(a.class, "app");
    }

    public f e() {
        return (f) x(f.class, "device");
    }

    public final boolean equals(Object obj) {
        if (obj == null || !(obj instanceof c)) {
            return false;
        }
        return this.f11763d.equals(((c) obj).f11763d);
    }

    public h f() {
        return (h) x(h.class, "flags");
    }

    public o g() {
        return (o) x(o.class, "os");
    }

    public x h() {
        return (x) x(x.class, "runtime");
    }

    public final int hashCode() {
        return this.f11763d.hashCode();
    }

    public i6 i() {
        return (i6) x(i6.class, SharedPreferencesKey.TRACE);
    }

    public Enumeration j() {
        return this.f11763d.keys();
    }

    public Object k(Object obj, String str) {
        if (str == null) {
            return null;
        }
        ConcurrentHashMap concurrentHashMap = this.f11763d;
        return obj == null ? concurrentHashMap.remove(str) : concurrentHashMap.put(str, obj);
    }

    public void l(c cVar) {
        if (cVar == null) {
            return;
        }
        this.f11763d.putAll(cVar.f11763d);
    }

    public Object m(Object obj) {
        if (obj == null) {
            return null;
        }
        return this.f11763d.remove(obj);
    }

    public void n(a aVar) {
        k(aVar, "app");
    }

    public void o(b bVar) {
        k(bVar, "browser");
    }

    public void p(f fVar) {
        k(fVar, "device");
    }

    public void q(h hVar) {
        k(hVar, "flags");
    }

    public void r(k kVar) {
        k(kVar, "gpu");
    }

    public void s(o oVar) {
        k(oVar, "os");
    }

    @Override // io.sentry.y1
    public void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        ArrayList<String> list = Collections.list(j());
        Collections.sort(list);
        for (String str : list) {
            Object c6 = c(str);
            if (c6 != null) {
                y2Var.C0(str).o0(iLogger, c6);
            }
        }
        y2Var.O();
    }

    public void t(r rVar) {
        io.sentry.r a = this.f11764e.a();
        try {
            k(rVar, "response");
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

    public void u(x xVar) {
        k(xVar, "runtime");
    }

    public void v(e0 e0Var) {
        k(e0Var, "spring");
    }

    public void w(i6 i6Var) {
        d9.a.L(i6Var, "traceContext is required");
        k(i6Var, SharedPreferencesKey.TRACE);
    }

    public final Object x(Class cls, String str) {
        Object c6 = c(str);
        if (cls.isInstance(c6)) {
            return cls.cast(c6);
        }
        return null;
    }

    public c(c cVar) {
        for (Map.Entry entry : cVar.b()) {
            if (entry != null) {
                Object value = entry.getValue();
                if ("app".equals(entry.getKey()) && (value instanceof a)) {
                    a aVar = (a) value;
                    a aVar2 = new a();
                    aVar2.f11754y = aVar.f11754y;
                    aVar2.f11748d = aVar.f11748d;
                    aVar2.f11752w = aVar.f11752w;
                    aVar2.f11749e = aVar.f11749e;
                    aVar2.f11753x = aVar.f11753x;
                    aVar2.f11751v = aVar.f11751v;
                    aVar2.f11750i = aVar.f11750i;
                    aVar2.E = ys.l.r(aVar.E);
                    aVar2.H = aVar.H;
                    List list = aVar.F;
                    aVar2.F = list != null ? new ArrayList(list) : null;
                    aVar2.G = aVar.G;
                    aVar2.I = aVar.I;
                    aVar2.J = aVar.J;
                    aVar2.K = ys.l.r(aVar.K);
                    n(aVar2);
                } else if ("browser".equals(entry.getKey()) && (value instanceof b)) {
                    b bVar = (b) value;
                    b bVar2 = new b();
                    bVar2.f11760d = bVar.f11760d;
                    bVar2.f11761e = bVar.f11761e;
                    bVar2.f11762i = ys.l.r(bVar.f11762i);
                    o(bVar2);
                } else if ("device".equals(entry.getKey()) && (value instanceof f)) {
                    f fVar = (f) value;
                    f fVar2 = new f();
                    fVar2.f11779d = fVar.f11779d;
                    fVar2.f11781e = fVar.f11781e;
                    fVar2.f11784i = fVar.f11784i;
                    fVar2.f11785v = fVar.f11785v;
                    fVar2.f11786w = fVar.f11786w;
                    fVar2.f11787x = fVar.f11787x;
                    fVar2.F = fVar.F;
                    fVar2.G = fVar.G;
                    fVar2.H = fVar.H;
                    fVar2.I = fVar.I;
                    fVar2.J = fVar.J;
                    fVar2.K = fVar.K;
                    fVar2.L = fVar.L;
                    fVar2.M = fVar.M;
                    fVar2.N = fVar.N;
                    fVar2.O = fVar.O;
                    fVar2.P = fVar.P;
                    fVar2.Q = fVar.Q;
                    fVar2.R = fVar.R;
                    fVar2.S = fVar.S;
                    fVar2.T = fVar.T;
                    fVar2.U = fVar.U;
                    fVar2.V = fVar.V;
                    fVar2.X = fVar.X;
                    fVar2.Z = fVar.Z;
                    fVar2.a0 = fVar.a0;
                    fVar2.E = fVar.E;
                    String[] strArr = fVar.f11788y;
                    fVar2.f11788y = strArr != null ? (String[]) strArr.clone() : null;
                    fVar2.Y = fVar.Y;
                    TimeZone timeZone = fVar.W;
                    fVar2.W = timeZone != null ? (TimeZone) timeZone.clone() : null;
                    fVar2.f11777b0 = fVar.f11777b0;
                    fVar2.f11778c0 = fVar.f11778c0;
                    fVar2.f11780d0 = fVar.f11780d0;
                    fVar2.f11782e0 = fVar.f11782e0;
                    fVar2.f11783f0 = ys.l.r(fVar.f11783f0);
                    p(fVar2);
                } else if ("os".equals(entry.getKey()) && (value instanceof o)) {
                    o oVar = (o) value;
                    o oVar2 = new o();
                    oVar2.f11846d = oVar.f11846d;
                    oVar2.f11847e = oVar.f11847e;
                    oVar2.f11848i = oVar.f11848i;
                    oVar2.f11849v = oVar.f11849v;
                    oVar2.f11850w = oVar.f11850w;
                    oVar2.f11851x = oVar.f11851x;
                    oVar2.f11852y = ys.l.r(oVar.f11852y);
                    s(oVar2);
                } else if ("runtime".equals(entry.getKey()) && (value instanceof x)) {
                    x xVar = (x) value;
                    x xVar2 = new x();
                    xVar2.f11900d = xVar.f11900d;
                    xVar2.f11901e = xVar.f11901e;
                    xVar2.f11902i = xVar.f11902i;
                    xVar2.f11903v = ys.l.r(xVar.f11903v);
                    u(xVar2);
                } else if ("feedback".equals(entry.getKey()) && (value instanceof i)) {
                    i iVar = (i) value;
                    i iVar2 = new i();
                    iVar2.f11803d = iVar.f11803d;
                    iVar2.f11804e = iVar.f11804e;
                    iVar2.f11805i = iVar.f11805i;
                    iVar2.f11806v = iVar.f11806v;
                    iVar2.f11807w = iVar.f11807w;
                    iVar2.f11808x = iVar.f11808x;
                    iVar2.f11809y = ys.l.r(iVar.f11809y);
                    k(iVar2, "feedback");
                } else if ("gpu".equals(entry.getKey()) && (value instanceof k)) {
                    k kVar = (k) value;
                    k kVar2 = new k();
                    kVar2.f11824d = kVar.f11824d;
                    kVar2.f11825e = kVar.f11825e;
                    kVar2.f11826i = kVar.f11826i;
                    kVar2.f11827v = kVar.f11827v;
                    kVar2.f11828w = kVar.f11828w;
                    kVar2.f11829x = kVar.f11829x;
                    kVar2.f11830y = kVar.f11830y;
                    kVar2.E = kVar.E;
                    kVar2.F = kVar.F;
                    kVar2.G = ys.l.r(kVar.G);
                    r(kVar2);
                } else if (SharedPreferencesKey.TRACE.equals(entry.getKey()) && (value instanceof i6)) {
                    w(new i6((i6) value));
                } else if ("profile".equals(entry.getKey()) && (value instanceof e3)) {
                    e3 e3Var = (e3) value;
                    e3 e3Var2 = new e3();
                    e3Var2.f11530d = e3Var.f11530d;
                    ConcurrentHashMap r5 = ys.l.r(e3Var.f11531e);
                    if (r5 != null) {
                        e3Var2.f11531e = r5;
                    }
                    k(e3Var2, "profile");
                } else if ("response".equals(entry.getKey()) && (value instanceof r)) {
                    r rVar = (r) value;
                    r rVar2 = new r();
                    rVar2.f11872d = rVar.f11872d;
                    rVar2.f11873e = ys.l.r(rVar.f11873e);
                    rVar2.f11877x = ys.l.r(rVar.f11877x);
                    rVar2.f11874i = rVar.f11874i;
                    rVar2.f11875v = rVar.f11875v;
                    rVar2.f11876w = rVar.f11876w;
                    t(rVar2);
                } else if ("spring".equals(entry.getKey()) && (value instanceof e0)) {
                    e0 e0Var = (e0) value;
                    e0 e0Var2 = new e0();
                    e0Var2.f11775d = e0Var.f11775d;
                    e0Var2.f11776e = ys.l.r(e0Var.f11776e);
                    v(e0Var2);
                } else {
                    k(value, (String) entry.getKey());
                }
            }
        }
    }
}
