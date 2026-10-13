package io.sentry.android.core;

import android.os.Handler;
import androidx.lifecycle.ProcessLifecycleOwner;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.j2;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class e0 implements Closeable {

    /* renamed from: w, reason: collision with root package name */
    public static final e0 f11119w = new e0();

    /* renamed from: e, reason: collision with root package name */
    public volatile d0 f11121e;

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.util.a f11120d = new io.sentry.util.a();

    /* renamed from: i, reason: collision with root package name */
    public final l0 f11122i = new l0(3);

    /* renamed from: v, reason: collision with root package name */
    public volatile Boolean f11123v = null;

    public final void c(b0 b0Var) {
        io.sentry.r a = this.f11120d.a();
        try {
            g(j2.f11638d);
            if (this.f11121e != null) {
                this.f11121e.f11114d.add(b0Var);
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        l();
    }

    public final void f(ILogger iLogger) {
        d0 d0Var = this.f11121e;
        if (d0Var != null) {
            try {
                ProcessLifecycleOwner.F.f2164x.a(d0Var);
            } catch (Throwable th2) {
                this.f11121e = null;
                iLogger.k(SentryLevel.ERROR, "AppState failed to get Lifecycle and could not install lifecycle observer.", th2);
            }
        }
    }

    public final void g(ILogger iLogger) {
        if (this.f11121e != null) {
            return;
        }
        try {
            ProcessLifecycleOwner processLifecycleOwner = ProcessLifecycleOwner.F;
            this.f11121e = new d0(this);
            if (io.sentry.android.core.internal.util.e.a.c()) {
                f(iLogger);
                return;
            }
            l0 l0Var = this.f11122i;
            ((Handler) l0Var.f11266d).post(new com.mkuczera.haptic.a(13, this, iLogger));
        } catch (ClassNotFoundException unused) {
            iLogger.u(SentryLevel.WARNING, "androidx.lifecycle is not available, some features might not be properly working,e.g. Session Tracking, Network and System Events breadcrumbs, etc.", new Object[0]);
        } catch (Throwable th2) {
            iLogger.k(SentryLevel.ERROR, "AppState could not register lifecycle observer", th2);
        }
    }

    public final void i(b0 b0Var) {
        io.sentry.r a = this.f11120d.a();
        try {
            if (this.f11121e != null) {
                this.f11121e.f11114d.remove(b0Var);
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final void l() {
        if (this.f11121e == null) {
            return;
        }
        io.sentry.r a = this.f11120d.a();
        try {
            d0 d0Var = this.f11121e;
            this.f11121e.f11114d.clear();
            this.f11121e = null;
            a.close();
            if (io.sentry.android.core.internal.util.e.a.c()) {
                if (d0Var != null) {
                    ProcessLifecycleOwner.F.f2164x.c(d0Var);
                }
            } else {
                l0 l0Var = this.f11122i;
                ((Handler) l0Var.f11266d).post(new com.google.firebase.messaging.s(29, this, d0Var));
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
}
