package io.sentry.android.core;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v3;
import io.sentry.v5;
import io.sentry.z2;
import java.io.Closeable;

/* loaded from: classes3.dex */
public abstract class EnvelopeFileObserverIntegration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public r0 f11045d;

    /* renamed from: e, reason: collision with root package name */
    public ILogger f11046e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f11047i = false;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.util.a f11048v = new io.sentry.util.a();

    public static final class OutboxEnvelopeFileObserverIntegration extends EnvelopeFileObserverIntegration {
        private OutboxEnvelopeFileObserverIntegration() {
        }

        public /* synthetic */ OutboxEnvelopeFileObserverIntegration(int i5) {
            this();
        }
    }

    public final void c(v5 v5Var, String str) {
        r0 r0Var = new r0(str, new z2(v3.a, v5Var.getEnvelopeReader(), v5Var.getSerializer(), v5Var.getLogger(), v5Var.getFlushTimeoutMillis(), v5Var.getMaxQueueSize()), v5Var.getLogger(), v5Var.getFlushTimeoutMillis());
        this.f11045d = r0Var;
        try {
            r0Var.startWatching();
            v5Var.getLogger().u(SentryLevel.DEBUG, "EnvelopeFileObserverIntegration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("EnvelopeFileObserver");
        } catch (Throwable th2) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Failed to initialize EnvelopeFileObserverIntegration.", th2);
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        io.sentry.r a = this.f11048v.a();
        try {
            this.f11047i = true;
            a.close();
            r0 r0Var = this.f11045d;
            if (r0Var != null) {
                r0Var.stopWatching();
                ILogger iLogger = this.f11046e;
                if (iLogger != null) {
                    iLogger.u(SentryLevel.DEBUG, "EnvelopeFileObserverIntegration removed.", new Object[0]);
                }
            }
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        this.f11046e = v5Var.getLogger();
        String outboxPath = v5Var.getOutboxPath();
        if (outboxPath == null) {
            this.f11046e.u(SentryLevel.WARNING, "Null given as a path to EnvelopeFileObserverIntegration. Nothing will be registered.", new Object[0]);
            return;
        }
        this.f11046e.u(SentryLevel.DEBUG, "Registering EnvelopeFileObserverIntegration for path: %s", outboxPath);
        try {
            v5Var.getExecutorService().submit(new b1(this, v5Var, outboxPath, 3));
        } catch (Throwable th2) {
            this.f11046e.k(SentryLevel.DEBUG, "Failed to start EnvelopeFileObserverIntegration on executor thread.", th2);
        }
    }
}
