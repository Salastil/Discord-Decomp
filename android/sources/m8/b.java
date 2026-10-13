package m8;

import a3.h;
import java.util.List;
import java.util.concurrent.AbstractExecutorService;
import java.util.concurrent.Executor;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class b extends AbstractExecutorService implements d, AutoCloseable {
    public static final /* synthetic */ int E = 0;

    /* renamed from: d, reason: collision with root package name */
    public final String f14401d;

    /* renamed from: e, reason: collision with root package name */
    public final Executor f14402e;

    /* renamed from: i, reason: collision with root package name */
    public volatile int f14403i;

    /* renamed from: v, reason: collision with root package name */
    public final LinkedBlockingQueue f14404v;

    /* renamed from: w, reason: collision with root package name */
    public final h f14405w;

    /* renamed from: x, reason: collision with root package name */
    public final AtomicInteger f14406x;

    /* renamed from: y, reason: collision with root package name */
    public final AtomicInteger f14407y;

    public b(Executor executor) {
        LinkedBlockingQueue linkedBlockingQueue = new LinkedBlockingQueue();
        this.f14401d = "SerialExecutor";
        this.f14402e = executor;
        this.f14403i = 1;
        this.f14404v = linkedBlockingQueue;
        this.f14405w = new h(27, this);
        this.f14406x = new AtomicInteger(0);
        this.f14407y = new AtomicInteger(0);
    }

    @Override // java.util.concurrent.ExecutorService
    public final boolean awaitTermination(long j, TimeUnit timeUnit) {
        throw new UnsupportedOperationException();
    }

    public final void c(Runnable runnable) {
        if (runnable == null) {
            throw new NullPointerException("runnable parameter is null");
        }
        LinkedBlockingQueue linkedBlockingQueue = this.f14404v;
        boolean offer = linkedBlockingQueue.offer(runnable);
        String str = this.f14401d;
        if (!offer) {
            StringBuilder p3 = k0.d.p(str, " queue is full, size=");
            p3.append(linkedBlockingQueue.size());
            throw new RejectedExecutionException(p3.toString());
        }
        int size = linkedBlockingQueue.size();
        AtomicInteger atomicInteger = this.f14407y;
        int i5 = atomicInteger.get();
        if (size > i5 && atomicInteger.compareAndSet(i5, size)) {
            p8.a.o(b.class, "%s: max pending work in queue = %d", str, Integer.valueOf(size));
        }
        f();
    }

    @Override // java.lang.AutoCloseable
    public final /* synthetic */ void close() {
        if (this == ForkJoinPool.commonPool()) {
            return;
        }
        shutdown();
        throw null;
    }

    @Override // java.util.concurrent.Executor
    public final synchronized void execute(Runnable runnable) {
        c(runnable);
    }

    public final void f() {
        int i5 = this.f14406x.get();
        while (i5 < this.f14403i) {
            int i6 = i5 + 1;
            if (this.f14406x.compareAndSet(i5, i6)) {
                p8.a.p(b.class, "%s: starting worker %d of %d", this.f14401d, Integer.valueOf(i6), Integer.valueOf(this.f14403i));
                this.f14402e.execute(this.f14405w);
                return;
            } else {
                p8.a.q("%s: race in startWorkerIfNeeded; retrying", this.f14401d, b.class);
                i5 = this.f14406x.get();
            }
        }
    }

    @Override // java.util.concurrent.ExecutorService
    public final boolean isShutdown() {
        return false;
    }

    @Override // java.util.concurrent.ExecutorService
    public final boolean isTerminated() {
        return false;
    }

    @Override // java.util.concurrent.ExecutorService
    public final void shutdown() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.concurrent.ExecutorService
    public final List shutdownNow() {
        throw new UnsupportedOperationException();
    }
}
