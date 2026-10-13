package io.sentry;

import java.io.Closeable;

/* loaded from: classes3.dex */
public final class ShutdownHookIntegration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final Runtime f10986d;

    /* renamed from: e, reason: collision with root package name */
    public Thread f10987e;

    public ShutdownHookIntegration() {
        Runtime runtime = Runtime.getRuntime();
        d9.a.L(runtime, "Runtime is required");
        this.f10986d = runtime;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f10987e != null) {
            try {
                this.f10986d.removeShutdownHook(this.f10987e);
            } catch (IllegalStateException e9) {
                String message = e9.getMessage();
                if (message == null || !(message.equals("Shutdown in progress") || message.equals("VM already shutting down"))) {
                    throw e9;
                }
            }
        }
    }

    @Override // io.sentry.l1
    public final void register(x0 x0Var, v5 v5Var) {
        if (!v5Var.isEnableShutdownHook()) {
            v5Var.getLogger().u(SentryLevel.INFO, "enableShutdownHook is disabled.", new Object[0]);
            return;
        }
        this.f10987e = new Thread(new z3(v5Var, 3), "sentry-shutdownhook");
        try {
            this.f10986d.addShutdownHook(this.f10987e);
            v5Var.getLogger().u(SentryLevel.DEBUG, "ShutdownHookIntegration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("ShutdownHook");
        } catch (IllegalStateException e9) {
            String message = e9.getMessage();
            if (message == null || !(message.equals("Shutdown in progress") || message.equals("VM already shutting down"))) {
                throw e9;
            }
        }
    }
}
