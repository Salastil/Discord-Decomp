package io.sentry;

/* loaded from: classes3.dex */
public final class j0 implements q0 {
    public final u3 a;

    public j0(u3 u3Var) {
        this.a = u3Var;
    }

    @Override // io.sentry.x0
    public final void a(boolean z5) {
        this.a.a(z5);
    }

    @Override // io.sentry.x0
    public final void b(long j) {
        this.a.b(j);
    }

    @Override // io.sentry.x0
    public final void c(Breadcrumb breadcrumb) {
        this.a.c(breadcrumb);
    }

    @Override // io.sentry.x0
    /* renamed from: clone */
    public final q0 m1300clone() {
        return this.a.m1300clone();
    }

    @Override // io.sentry.x0
    public final io.sentry.transport.p d() {
        return this.a.d();
    }

    @Override // io.sentry.x0
    public final boolean e() {
        return this.a.e();
    }

    @Override // io.sentry.x0
    public final void f(String str, String str2) {
        this.a.f(str, str2);
    }

    @Override // io.sentry.x0
    public final void g(Breadcrumb breadcrumb, Hint hint) {
        this.a.g(breadcrumb, hint);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v h(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        return this.a.h(cVar, hint);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v i(d3 d3Var) {
        return this.a.i(d3Var);
    }

    @Override // io.sentry.x0
    public final boolean isEnabled() {
        return this.a.isEnabled();
    }

    @Override // io.sentry.x0
    public final f1 j(p6 p6Var, q6 q6Var) {
        return this.a.j(p6Var, q6Var);
    }

    @Override // io.sentry.x0
    public final Boolean k() {
        return this.a.k();
    }

    @Override // io.sentry.x0
    public final v5 l() {
        return this.a.l();
    }

    @Override // io.sentry.x0
    public final f1 n() {
        return this.a.n();
    }

    @Override // io.sentry.x0
    public final void o() {
        this.a.o();
    }

    @Override // io.sentry.x0
    public final void p() {
        this.a.p();
    }

    @Override // io.sentry.x0
    public final void q(t3 t3Var, r3 r3Var) {
        this.a.q(t3Var, r3Var);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v r(x5 x5Var, Hint hint) {
        return this.a.r(x5Var, hint);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v s(Throwable th2, Hint hint) {
        return this.a.s(th2, hint);
    }

    @Override // io.sentry.x0
    public final void t(bc.a aVar) {
        this.a.t(aVar);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v u(String str, SentryLevel sentryLevel) {
        return this.a.u(str, sentryLevel);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v v(io.sentry.protocol.d0 d0Var, n6 n6Var, Hint hint, g3 g3Var) {
        return this.a.v(d0Var, n6Var, hint, g3Var);
    }

    @Override // io.sentry.x0
    public final x0 w(String str) {
        return this.a.w("getCurrentScopes");
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v x(SentryEvent sentryEvent, Hint hint) {
        return this.a.x(sentryEvent, hint);
    }

    /* renamed from: clone, reason: collision with other method in class */
    public final Object m1295clone() {
        return this.a.m1300clone();
    }
}
