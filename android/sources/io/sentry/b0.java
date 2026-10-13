package io.sentry;

/* loaded from: classes3.dex */
public interface b0 {
    default x5 c(x5 x5Var, Hint hint) {
        return x5Var;
    }

    SentryEvent f(SentryEvent sentryEvent, Hint hint);

    default io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        return d0Var;
    }
}
