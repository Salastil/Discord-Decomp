package io.sentry;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class h6 implements ISpan {
    public final i4 a;

    /* renamed from: b, reason: collision with root package name */
    public i4 f11589b;

    /* renamed from: c, reason: collision with root package name */
    public final i6 f11590c;

    /* renamed from: d, reason: collision with root package name */
    public final d6 f11591d;

    /* renamed from: e, reason: collision with root package name */
    public final x0 f11592e;

    /* renamed from: h, reason: collision with root package name */
    public final a3.f f11595h;

    /* renamed from: i, reason: collision with root package name */
    public j6 f11596i;

    /* renamed from: f, reason: collision with root package name */
    public boolean f11593f = false;

    /* renamed from: g, reason: collision with root package name */
    public final AtomicBoolean f11594g = new AtomicBoolean(false);
    public final ConcurrentHashMap j = new ConcurrentHashMap();
    public final ConcurrentHashMap k = new ConcurrentHashMap();

    public h6(d6 d6Var, u3 u3Var, i6 i6Var, a3.f fVar, hc.m mVar) {
        new ConcurrentHashMap();
        new io.sentry.util.a();
        this.f11590c = i6Var;
        i6Var.F = (String) fVar.f58d;
        this.f11591d = d6Var;
        d9.a.L(u3Var, "Scopes are required");
        this.f11592e = u3Var;
        this.f11595h = fVar;
        this.f11596i = mVar;
        i4 i4Var = (i4) fVar.f56b;
        if (i4Var != null) {
            this.a = i4Var;
        } else {
            this.a = u3Var.l().getDateProvider().now();
        }
    }

    @Override // io.sentry.ISpan
    public final l6 a() {
        return this.f11590c.f11616y;
    }

    @Override // io.sentry.ISpan
    public final ISpan c(String str, i4 i4Var, k1 k1Var) {
        return r("activity.load", str, i4Var, k1Var, new a3.f(5, false));
    }

    @Override // io.sentry.ISpan
    public final void e(Number number, String str) {
        if (this.f11593f) {
            this.f11592e.l().getLogger().u(SentryLevel.DEBUG, "The span is already finished. Measurement %s cannot be set", str);
            return;
        }
        this.k.put(str, new io.sentry.protocol.l(number, null));
        d6 d6Var = this.f11591d;
        h6 h6Var = d6Var.f11510b;
        if (h6Var == this || h6Var.k.containsKey(str)) {
            return;
        }
        d6Var.e(number, str);
    }

    @Override // io.sentry.ISpan
    public final void f(l6 l6Var) {
        q(l6Var, this.f11592e.l().getDateProvider().now());
    }

    @Override // io.sentry.ISpan
    public final void g() {
        f(this.f11590c.f11616y);
    }

    @Override // io.sentry.ISpan
    public final String getDescription() {
        return this.f11590c.f11615x;
    }

    @Override // io.sentry.ISpan
    public final void h(Object obj, String str) {
        ConcurrentHashMap concurrentHashMap = this.j;
        if (obj == null) {
            concurrentHashMap.remove(str);
        } else {
            concurrentHashMap.put(str, obj);
        }
    }

    @Override // io.sentry.ISpan
    public final boolean isFinished() {
        return this.f11593f;
    }

    @Override // io.sentry.ISpan
    public final void j(String str) {
        this.f11590c.f11615x = str;
    }

    @Override // io.sentry.ISpan
    public final ISpan l(String str) {
        if (this.f11593f) {
            return t2.a;
        }
        k6 k6Var = this.f11590c.f11611e;
        d6 d6Var = this.f11591d;
        d6Var.getClass();
        a3.f fVar = new a3.f(5, false);
        i6 i6Var = d6Var.f11510b.f11590c;
        i6 i6Var2 = new i6(i6Var.f11610d, new k6(), k6Var, str, null, i6Var.f11613v, null, "manual");
        i6Var2.f11615x = null;
        i6Var2.I = k1.SENTRY;
        return d6Var.v(i6Var2, fVar);
    }

    @Override // io.sentry.ISpan
    public final void n(String str, Long l6, c2 c2Var) {
        if (this.f11593f) {
            this.f11592e.l().getLogger().u(SentryLevel.DEBUG, "The span is already finished. Measurement %s cannot be set", str);
            return;
        }
        this.k.put(str, new io.sentry.protocol.l(l6, c2Var.apiName()));
        d6 d6Var = this.f11591d;
        h6 h6Var = d6Var.f11510b;
        if (h6Var == this || h6Var.k.containsKey(str)) {
            return;
        }
        d6Var.n(str, l6, c2Var);
    }

    @Override // io.sentry.ISpan
    public final i6 o() {
        return this.f11590c;
    }

    @Override // io.sentry.ISpan
    public final i4 p() {
        return this.f11589b;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // io.sentry.ISpan
    public final void q(l6 l6Var, i4 i4Var) {
        i4 i4Var2;
        i4 i4Var3;
        if (this.f11593f || !this.f11594g.compareAndSet(false, true)) {
            return;
        }
        i6 i6Var = this.f11590c;
        i6Var.f11616y = l6Var;
        k6 k6Var = i6Var.f11611e;
        if (i4Var == null) {
            i4Var = this.f11592e.l().getDateProvider().now();
        }
        this.f11589b = i4Var;
        a3.f fVar = this.f11595h;
        fVar.getClass();
        if (fVar.a) {
            d6 d6Var = this.f11591d;
            h6 h6Var = d6Var.f11510b;
            CopyOnWriteArrayList<h6> copyOnWriteArrayList = d6Var.f11511c;
            if (!h6Var.f11590c.f11611e.equals(k6Var)) {
                ArrayList arrayList = new ArrayList();
                Iterator it = copyOnWriteArrayList.iterator();
                while (it.hasNext()) {
                    h6 h6Var2 = (h6) it.next();
                    k6 k6Var2 = h6Var2.f11590c.f11612i;
                    if (k6Var2 != null && k6Var2.equals(k6Var)) {
                        arrayList.add(h6Var2);
                    }
                }
                copyOnWriteArrayList = arrayList;
            }
            i4 i4Var4 = null;
            i4 i4Var5 = null;
            for (h6 h6Var3 : copyOnWriteArrayList) {
                if (i4Var4 == null || h6Var3.a.b(i4Var4) < 0) {
                    i4Var4 = h6Var3.a;
                }
                if (i4Var5 == null || ((i4Var3 = h6Var3.f11589b) != null && i4Var3.b(i4Var5) > 0)) {
                    i4Var5 = h6Var3.f11589b;
                }
            }
            if (fVar.a && i4Var5 != null && (((i4Var2 = this.f11589b) == null || i4Var2.b(i4Var5) > 0) && this.f11589b != null)) {
                this.f11589b = i4Var5;
            }
        }
        j6 j6Var = this.f11596i;
        if (j6Var != null) {
            j6Var.c(this);
        }
        this.f11593f = true;
    }

    @Override // io.sentry.ISpan
    public final ISpan r(String str, String str2, i4 i4Var, k1 k1Var, a3.f fVar) {
        if (this.f11593f) {
            return t2.a;
        }
        k6 k6Var = this.f11590c.f11611e;
        d6 d6Var = this.f11591d;
        i6 i6Var = d6Var.f11510b.f11590c;
        i6 i6Var2 = new i6(i6Var.f11610d, new k6(), k6Var, str, null, i6Var.f11613v, null, "manual");
        i6Var2.f11615x = str2;
        i6Var2.I = k1Var;
        fVar.f56b = i4Var;
        return d6Var.v(i6Var2, fVar);
    }

    @Override // io.sentry.ISpan
    public final i4 s() {
        return this.a;
    }

    public final Boolean t() {
        f9.b bVar = this.f11590c.f11613v;
        if (bVar == null) {
            return null;
        }
        return (Boolean) bVar.f8472d;
    }

    public h6(p6 p6Var, d6 d6Var, u3 u3Var, q6 q6Var) {
        new ConcurrentHashMap();
        new io.sentry.util.a();
        this.f11590c = p6Var;
        p6Var.F = (String) q6Var.f58d;
        this.f11591d = d6Var;
        this.f11592e = u3Var;
        this.f11596i = null;
        i4 i4Var = (i4) q6Var.f56b;
        if (i4Var != null) {
            this.a = i4Var;
        } else {
            this.a = u3Var.l().getDateProvider().now();
        }
        this.f11595h = q6Var;
    }
}
