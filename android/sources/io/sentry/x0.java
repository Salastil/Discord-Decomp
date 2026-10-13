package io.sentry;

/* loaded from: classes3.dex */
public interface x0 {
    void a(boolean z5);

    void b(long j);

    void c(Breadcrumb breadcrumb);

    q0 clone();

    io.sentry.transport.p d();

    boolean e();

    void f(String str, String str2);

    void g(Breadcrumb breadcrumb, Hint hint);

    io.sentry.protocol.v h(io.sentry.internal.debugmeta.c cVar, Hint hint);

    io.sentry.protocol.v i(d3 d3Var);

    boolean isEnabled();

    f1 j(p6 p6Var, q6 q6Var);

    Boolean k();

    v5 l();

    default boolean m() {
        return false;
    }

    f1 n();

    void o();

    void p();

    void q(t3 t3Var, r3 r3Var);

    io.sentry.protocol.v r(x5 x5Var, Hint hint);

    io.sentry.protocol.v s(Throwable th2, Hint hint);

    void t(bc.a aVar);

    io.sentry.protocol.v u(String str, SentryLevel sentryLevel);

    io.sentry.protocol.v v(io.sentry.protocol.d0 d0Var, n6 n6Var, Hint hint, g3 g3Var);

    x0 w(String str);

    io.sentry.protocol.v x(SentryEvent sentryEvent, Hint hint);
}
