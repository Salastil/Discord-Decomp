package io.sentry.backpressure;

import io.sentry.SentryLevel;
import io.sentry.a1;
import io.sentry.r;
import io.sentry.v3;
import io.sentry.v5;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;

/* loaded from: classes3.dex */
public final class a implements b, Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final v5 f11405d;

    /* renamed from: e, reason: collision with root package name */
    public final v3 f11406e;

    /* renamed from: i, reason: collision with root package name */
    public int f11407i;

    /* renamed from: v, reason: collision with root package name */
    public volatile Future f11408v;

    /* renamed from: w, reason: collision with root package name */
    public final io.sentry.util.a f11409w;

    public a(v5 v5Var) {
        v3 v3Var = v3.a;
        this.f11407i = 0;
        this.f11408v = null;
        this.f11409w = new io.sentry.util.a();
        this.f11405d = v5Var;
        this.f11406e = v3Var;
    }

    @Override // io.sentry.backpressure.b
    public final int a() {
        return this.f11407i;
    }

    public final void b(int i5) {
        a1 executorService = this.f11405d.getExecutorService();
        if (executorService.isClosed()) {
            return;
        }
        r a = this.f11409w.a();
        try {
            try {
                this.f11408v = executorService.l(this, i5);
            } catch (RejectedExecutionException e9) {
                this.f11405d.getLogger().k(SentryLevel.WARNING, "Backpressure monitor reschedule task rejected", e9);
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

    @Override // io.sentry.backpressure.b
    public final void close() {
        Future future = this.f11408v;
        if (future != null) {
            r a = this.f11409w.a();
            try {
                future.cancel(true);
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
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean e9 = this.f11406e.e();
        v5 v5Var = this.f11405d;
        if (e9) {
            if (this.f11407i > 0) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Health check positive, reverting to normal sampling.", new Object[0]);
            }
            this.f11407i = 0;
        } else {
            int i5 = this.f11407i;
            if (i5 < 10) {
                this.f11407i = i5 + 1;
                v5Var.getLogger().u(SentryLevel.DEBUG, "Health check negative, downsampling with a factor of %d", Integer.valueOf(this.f11407i));
            }
        }
        b(10000);
    }

    @Override // io.sentry.backpressure.b
    public final void start() {
        b(500);
    }
}
