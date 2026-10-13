package nr;

import java.lang.reflect.Method;
import java.util.concurrent.CancellationException;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public final class q0 extends kotlinx.coroutines.c implements a0 {

    /* renamed from: i, reason: collision with root package name */
    public final Executor f15652i;

    public q0(Executor executor) {
        Method method;
        this.f15652i = executor;
        Method method2 = sr.a.a;
        try {
            ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = executor instanceof ScheduledThreadPoolExecutor ? (ScheduledThreadPoolExecutor) executor : null;
            if (scheduledThreadPoolExecutor != null && (method = sr.a.a) != null) {
                method.invoke(scheduledThreadPoolExecutor, Boolean.TRUE);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // nr.a0
    public final i0 Q(long j, Runnable runnable, CoroutineContext coroutineContext) {
        Executor executor = this.f15652i;
        ScheduledFuture<?> scheduledFuture = null;
        ScheduledExecutorService scheduledExecutorService = executor instanceof ScheduledExecutorService ? (ScheduledExecutorService) executor : null;
        if (scheduledExecutorService != null) {
            try {
                scheduledFuture = scheduledExecutorService.schedule(runnable, j, TimeUnit.MILLISECONDS);
            } catch (RejectedExecutionException e9) {
                CancellationException cancellationException = new CancellationException("The task was rejected");
                cancellationException.initCause(e9);
                Job job = (Job) coroutineContext.o(t.f15661e);
                if (job != null) {
                    job.f(cancellationException);
                }
            }
        }
        return scheduledFuture != null ? new h0(scheduledFuture) : kotlinx.coroutines.a.G.Q(j, runnable, coroutineContext);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        Executor executor = this.f15652i;
        ExecutorService executorService = executor instanceof ExecutorService ? (ExecutorService) executor : null;
        if (executorService != null) {
            executorService.shutdown();
        }
    }

    public final boolean equals(Object obj) {
        return (obj instanceof q0) && ((q0) obj).f15652i == this.f15652i;
    }

    public final int hashCode() {
        return System.identityHashCode(this.f15652i);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        try {
            this.f15652i.execute(runnable);
        } catch (RejectedExecutionException e9) {
            CancellationException cancellationException = new CancellationException("The task was rejected");
            cancellationException.initCause(e9);
            Job job = (Job) coroutineContext.o(t.f15661e);
            if (job != null) {
                job.f(cancellationException);
            }
            ur.e eVar = g0.a;
            ur.d.f19093i.l0(coroutineContext, runnable);
        }
    }

    @Override // nr.a0
    public final void q(long j, j jVar) {
        Executor executor = this.f15652i;
        ScheduledFuture<?> scheduledFuture = null;
        ScheduledExecutorService scheduledExecutorService = executor instanceof ScheduledExecutorService ? (ScheduledExecutorService) executor : null;
        if (scheduledExecutorService != null) {
            com.google.android.gms.internal.play_billing.v0 v0Var = new com.google.android.gms.internal.play_billing.v0(17, this, jVar);
            CoroutineContext coroutineContext = jVar.f15628w;
            try {
                scheduledFuture = scheduledExecutorService.schedule(v0Var, j, TimeUnit.MILLISECONDS);
            } catch (RejectedExecutionException e9) {
                CancellationException cancellationException = new CancellationException("The task was rejected");
                cancellationException.initCause(e9);
                Job job = (Job) coroutineContext.o(t.f15661e);
                if (job != null) {
                    job.f(cancellationException);
                }
            }
        }
        if (scheduledFuture != null) {
            jVar.w(new h(0, scheduledFuture));
        } else {
            kotlinx.coroutines.a.G.q(j, jVar);
        }
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        return this.f15652i.toString();
    }
}
