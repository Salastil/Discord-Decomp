package io.sentry;

/* loaded from: classes3.dex */
public final class v3 implements x0 {
    public static final v3 a = new v3();

    @Override // io.sentry.x0
    public final void a(boolean z5) {
        c4.c();
    }

    @Override // io.sentry.x0
    public final void b(long j) {
        c4.e(j);
    }

    @Override // io.sentry.x0
    public final void c(Breadcrumb breadcrumb) {
        g(breadcrumb, new Hint());
    }

    @Override // io.sentry.x0
    public final io.sentry.transport.p d() {
        return c4.f().d();
    }

    @Override // io.sentry.x0
    public final boolean e() {
        return c4.f().e();
    }

    @Override // io.sentry.x0
    public final void f(String str, String str2) {
        c4.m(str, str2);
    }

    @Override // io.sentry.x0
    public final void g(Breadcrumb breadcrumb, Hint hint) {
        c4.f().g(breadcrumb, hint);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v h(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        return c4.f().h(cVar, hint);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v i(d3 d3Var) {
        return c4.f().i(d3Var);
    }

    @Override // io.sentry.x0
    public final boolean isEnabled() {
        return c4.k();
    }

    @Override // io.sentry.x0
    public final f1 j(p6 p6Var, q6 q6Var) {
        return c4.f().j(p6Var, q6Var);
    }

    @Override // io.sentry.x0
    public final Boolean k() {
        return c4.j();
    }

    @Override // io.sentry.x0
    public final v5 l() {
        return c4.f().l();
    }

    @Override // io.sentry.x0
    public final f1 n() {
        return c4.f().n();
    }

    @Override // io.sentry.x0
    public final void o() {
        c4.f().o();
    }

    @Override // io.sentry.x0
    public final void p() {
        c4.f().p();
    }

    @Override // io.sentry.x0
    public final void q(t3 t3Var, r3 r3Var) {
        c4.d(t3Var, r3Var);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v r(x5 x5Var, Hint hint) {
        return c4.f().r(x5Var, hint);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v s(Throwable th2, Hint hint) {
        return c4.f().s(th2, hint);
    }

    @Override // io.sentry.x0
    public final void t(bc.a aVar) {
        c4.n(aVar);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v u(String str, SentryLevel sentryLevel) {
        return c4.b(str, sentryLevel);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v v(io.sentry.protocol.d0 d0Var, n6 n6Var, Hint hint, g3 g3Var) {
        return c4.f().v(d0Var, n6Var, hint, g3Var);
    }

    @Override // io.sentry.x0
    public final x0 w(String str) {
        return c4.f().w("getCurrentScopes");
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v x(SentryEvent sentryEvent, Hint hint) {
        return c4.f().x(sentryEvent, hint);
    }

    @Override // io.sentry.x0
    /* renamed from: clone, reason: merged with bridge method [inline-methods] */
    public final q0 m1300clone() {
        return c4.f().m1300clone();
    }
}
