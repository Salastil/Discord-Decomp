package io.sentry;

import java.util.Enumeration;
import java.util.Set;

/* loaded from: classes3.dex */
public final class h extends io.sentry.protocol.c {

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.protocol.c f11574i;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.protocol.c f11575v;

    /* renamed from: w, reason: collision with root package name */
    public final io.sentry.protocol.c f11576w;

    /* renamed from: x, reason: collision with root package name */
    public final t3 f11577x;

    public h(io.sentry.protocol.c cVar, io.sentry.protocol.c cVar2, io.sentry.protocol.c cVar3, t3 t3Var) {
        this.f11574i = cVar;
        this.f11575v = cVar2;
        this.f11576w = cVar3;
        this.f11577x = t3Var;
    }

    @Override // io.sentry.protocol.c
    public final boolean a(Object obj) {
        throw null;
    }

    @Override // io.sentry.protocol.c
    public final Set b() {
        return z().f11763d.entrySet();
    }

    @Override // io.sentry.protocol.c
    public final Object c(Object obj) {
        Object c6 = this.f11576w.c(obj);
        if (c6 != null) {
            return c6;
        }
        Object c8 = this.f11575v.c(obj);
        return c8 != null ? c8 : this.f11574i.c(obj);
    }

    @Override // io.sentry.protocol.c
    public final io.sentry.protocol.a d() {
        io.sentry.protocol.a d6 = this.f11576w.d();
        if (d6 != null) {
            return d6;
        }
        io.sentry.protocol.a d7 = this.f11575v.d();
        return d7 != null ? d7 : this.f11574i.d();
    }

    @Override // io.sentry.protocol.c
    public final io.sentry.protocol.f e() {
        io.sentry.protocol.f e9 = this.f11576w.e();
        if (e9 != null) {
            return e9;
        }
        io.sentry.protocol.f e10 = this.f11575v.e();
        return e10 != null ? e10 : this.f11574i.e();
    }

    @Override // io.sentry.protocol.c
    public final io.sentry.protocol.h f() {
        io.sentry.protocol.h f2 = this.f11576w.f();
        if (f2 != null) {
            return f2;
        }
        io.sentry.protocol.h f10 = this.f11575v.f();
        return f10 != null ? f10 : this.f11574i.f();
    }

    @Override // io.sentry.protocol.c
    public final io.sentry.protocol.o g() {
        io.sentry.protocol.o g6 = this.f11576w.g();
        if (g6 != null) {
            return g6;
        }
        io.sentry.protocol.o g10 = this.f11575v.g();
        return g10 != null ? g10 : this.f11574i.g();
    }

    @Override // io.sentry.protocol.c
    public final io.sentry.protocol.x h() {
        io.sentry.protocol.x h6 = this.f11576w.h();
        if (h6 != null) {
            return h6;
        }
        io.sentry.protocol.x h7 = this.f11575v.h();
        return h7 != null ? h7 : this.f11574i.h();
    }

    @Override // io.sentry.protocol.c
    public final i6 i() {
        i6 i5 = this.f11576w.i();
        if (i5 != null) {
            return i5;
        }
        i6 i6 = this.f11575v.i();
        return i6 != null ? i6 : this.f11574i.i();
    }

    @Override // io.sentry.protocol.c
    public final Enumeration j() {
        return z().f11763d.keys();
    }

    @Override // io.sentry.protocol.c
    public final Object k(Object obj, String str) {
        return y().k(obj, str);
    }

    @Override // io.sentry.protocol.c
    public final void l(io.sentry.protocol.c cVar) {
        throw null;
    }

    @Override // io.sentry.protocol.c
    public final Object m(Object obj) {
        return y().m(obj);
    }

    @Override // io.sentry.protocol.c
    public final void n(io.sentry.protocol.a aVar) {
        y().n(aVar);
    }

    @Override // io.sentry.protocol.c
    public final void o(io.sentry.protocol.b bVar) {
        y().o(bVar);
    }

    @Override // io.sentry.protocol.c
    public final void p(io.sentry.protocol.f fVar) {
        y().p(fVar);
    }

    @Override // io.sentry.protocol.c
    public final void q(io.sentry.protocol.h hVar) {
        throw null;
    }

    @Override // io.sentry.protocol.c
    public final void r(io.sentry.protocol.k kVar) {
        y().r(kVar);
    }

    @Override // io.sentry.protocol.c
    public final void s(io.sentry.protocol.o oVar) {
        y().s(oVar);
    }

    @Override // io.sentry.protocol.c, io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        z().serialize(y2Var, iLogger);
    }

    @Override // io.sentry.protocol.c
    public final void t(io.sentry.protocol.r rVar) {
        y().t(rVar);
    }

    @Override // io.sentry.protocol.c
    public final void u(io.sentry.protocol.x xVar) {
        y().u(xVar);
    }

    @Override // io.sentry.protocol.c
    public final void v(io.sentry.protocol.e0 e0Var) {
        y().v(e0Var);
    }

    @Override // io.sentry.protocol.c
    public final void w(i6 i6Var) {
        y().w(i6Var);
    }

    public final io.sentry.protocol.c y() {
        int i5 = g.a[this.f11577x.ordinal()];
        io.sentry.protocol.c cVar = this.f11576w;
        return i5 != 1 ? i5 != 2 ? i5 != 3 ? cVar : this.f11574i : this.f11575v : cVar;
    }

    public final io.sentry.protocol.c z() {
        io.sentry.protocol.c cVar = new io.sentry.protocol.c();
        cVar.l(this.f11574i);
        cVar.l(this.f11575v);
        cVar.l(this.f11576w);
        return cVar;
    }
}
