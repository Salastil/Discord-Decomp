package io.sentry.transport;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.h0;
import io.sentry.i4;
import io.sentry.j4;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.Future;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class n extends ThreadPoolExecutor implements AutoCloseable {

    /* renamed from: d, reason: collision with root package name */
    public final int f12007d;

    /* renamed from: e, reason: collision with root package name */
    public i4 f12008e;

    /* renamed from: i, reason: collision with root package name */
    public final ILogger f12009i;

    /* renamed from: v, reason: collision with root package name */
    public final j4 f12010v;

    /* renamed from: w, reason: collision with root package name */
    public final u4.c f12011w;

    public n(int i5, h0 h0Var, a aVar, ILogger iLogger, j4 j4Var) {
        super(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(), h0Var, aVar);
        this.f12008e = null;
        this.f12011w = new u4.c(18);
        this.f12007d = i5;
        this.f12009i = iLogger;
        this.f12010v = j4Var;
    }

    @Override // java.util.concurrent.ThreadPoolExecutor
    public final void afterExecute(Runnable runnable, Throwable th2) {
        u4.c cVar = this.f12011w;
        try {
            super.afterExecute(runnable, th2);
        } finally {
            q qVar = (q) cVar.f18811d;
            int i5 = q.f12018d;
            qVar.releaseShared(1);
        }
    }

    @Override // java.lang.AutoCloseable
    public final /* synthetic */ void close() {
        boolean isTerminated;
        if (this == ForkJoinPool.commonPool() || (isTerminated = isTerminated())) {
            return;
        }
        shutdown();
        boolean z5 = false;
        while (!isTerminated) {
            try {
                isTerminated = awaitTermination(1L, TimeUnit.DAYS);
            } catch (InterruptedException unused) {
                if (!z5) {
                    shutdownNow();
                    z5 = true;
                }
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
    }

    @Override // java.util.concurrent.AbstractExecutorService, java.util.concurrent.ExecutorService
    public final Future submit(Runnable runnable) {
        u4.c cVar = this.f12011w;
        q qVar = (q) cVar.f18811d;
        q qVar2 = (q) cVar.f18811d;
        int a = q.a(qVar);
        int i5 = this.f12007d;
        ILogger iLogger = this.f12009i;
        j4 j4Var = this.f12010v;
        if (a >= i5) {
            this.f12008e = j4Var.now();
            iLogger.u(SentryLevel.WARNING, "Submit cancelled", new Object[0]);
            return new m();
        }
        q.b(qVar2);
        try {
            return super.submit(runnable);
        } catch (RejectedExecutionException e9) {
            qVar2.releaseShared(1);
            this.f12008e = j4Var.now();
            iLogger.k(SentryLevel.WARNING, "Submit rejected by thread pool executor", e9);
            return new m();
        }
    }
}
