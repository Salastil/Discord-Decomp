package m8;

import java.util.concurrent.Callable;
import java.util.concurrent.Delayed;
import java.util.concurrent.FutureTask;
import java.util.concurrent.RunnableFuture;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class c implements RunnableFuture, ScheduledFuture {

    /* renamed from: d, reason: collision with root package name */
    public final FutureTask f14408d;

    public c(Callable callable) {
        this.f14408d = new FutureTask(callable);
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        return this.f14408d.cancel(z5);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Delayed delayed) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        return this.f14408d.get();
    }

    @Override // java.util.concurrent.Delayed
    public final long getDelay(TimeUnit timeUnit) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f14408d.isCancelled();
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return this.f14408d.isDone();
    }

    @Override // java.util.concurrent.RunnableFuture, java.lang.Runnable
    public final void run() {
        this.f14408d.run();
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        return this.f14408d.get(j, timeUnit);
    }

    public c(Runnable runnable, Object obj) {
        this.f14408d = new FutureTask(runnable, obj);
    }
}
