package io.sentry.android.core;

import io.sentry.SentryLevel;
import io.sentry.v5;

/* loaded from: classes3.dex */
public final class l extends io.sentry.logger.c implements b0 {
    @Override // io.sentry.logger.c, io.sentry.logger.a, io.sentry.metrics.a
    public final void a(boolean z5) {
        e0.f11119w.i(this);
        super.a(z5);
    }

    @Override // io.sentry.android.core.b0
    public final void c() {
    }

    @Override // io.sentry.android.core.b0
    public final void f() {
        v5 v5Var = this.f11657e;
        try {
            v5Var.getExecutorService().submit(new k(this, 0));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Failed to submit log flush in onBackground()", new Object[0]);
        }
    }
}
