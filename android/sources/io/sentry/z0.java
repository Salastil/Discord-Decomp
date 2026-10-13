package io.sentry;

/* loaded from: classes3.dex */
public interface z0 {
    void a(boolean z5);

    void b(long j);

    void c(g6 g6Var, Hint hint);

    io.sentry.transport.p d();

    default boolean e() {
        return true;
    }

    io.sentry.protocol.v g(x5 x5Var, IScope iScope, Hint hint);

    io.sentry.protocol.v h(io.sentry.internal.debugmeta.c cVar, Hint hint);

    io.sentry.protocol.v i(d3 d3Var);

    boolean isEnabled();

    io.sentry.protocol.v j(io.sentry.protocol.d0 d0Var, n6 n6Var, IScope iScope, Hint hint, g3 g3Var);

    io.sentry.protocol.v k(SentryEvent sentryEvent, IScope iScope, Hint hint);
}
