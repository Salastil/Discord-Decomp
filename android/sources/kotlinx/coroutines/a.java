package kotlinx.coroutines;

import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.LockSupport;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import nr.i0;
import nr.i1;
import nr.m0;
import nr.n0;
import nr.o1;

/* loaded from: classes3.dex */
public final class a extends b implements Runnable {
    public static final a G;
    public static final long H;
    private static volatile Thread _thread;
    private static volatile int debugStatus;

    static {
        Long l6;
        a aVar = new a();
        G = aVar;
        aVar.s0(false);
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        try {
            l6 = Long.getLong("kotlinx.coroutines.DefaultExecutor.keepAlive", 1000L);
        } catch (SecurityException unused) {
            l6 = 1000L;
        }
        H = timeUnit.toNanos(l6.longValue());
    }

    public final synchronized void B0() {
        int i5 = debugStatus;
        if (i5 == 2 || i5 == 3) {
            debugStatus = 3;
            b.f13600y.set(this, null);
            b.E.set(this, null);
            Intrinsics.checkNotNull(this, "null cannot be cast to non-null type java.lang.Object");
            notifyAll();
        }
    }

    @Override // kotlinx.coroutines.b, nr.a0
    public final i0 Q(long j, Runnable runnable, CoroutineContext coroutineContext) {
        long j5 = j > 0 ? j >= 9223372036854L ? LongCompanionObject.MAX_VALUE : 1000000 * j : 0L;
        if (j5 >= 4611686018427387903L) {
            return i1.f15624d;
        }
        long nanoTime = System.nanoTime();
        m0 m0Var = new m0(runnable, j5 + nanoTime);
        A0(nanoTime, m0Var);
        return m0Var;
    }

    @Override // nr.p0
    public final Thread r0() {
        Thread thread;
        Thread thread2 = _thread;
        if (thread2 != null) {
            return thread2;
        }
        synchronized (this) {
            thread = _thread;
            if (thread == null) {
                thread = new Thread(this, "kotlinx.coroutines.DefaultExecutor");
                _thread = thread;
                thread.setContextClassLoader(G.getClass().getClassLoader());
                thread.setDaemon(true);
                thread.start();
            }
        }
        return thread;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z02;
        o1.a.set(this);
        try {
            synchronized (this) {
                int i5 = debugStatus;
                if (i5 == 2 || i5 == 3) {
                    if (z02) {
                        return;
                    } else {
                        return;
                    }
                }
                debugStatus = 1;
                Intrinsics.checkNotNull(this, "null cannot be cast to non-null type java.lang.Object");
                notifyAll();
                long j = Long.MAX_VALUE;
                while (true) {
                    Thread.interrupted();
                    long t02 = t0();
                    if (t02 == LongCompanionObject.MAX_VALUE) {
                        long nanoTime = System.nanoTime();
                        if (j == LongCompanionObject.MAX_VALUE) {
                            j = H + nanoTime;
                        }
                        long j5 = j - nanoTime;
                        if (j5 <= 0) {
                            _thread = null;
                            B0();
                            if (z0()) {
                                return;
                            }
                            r0();
                            return;
                        }
                        if (t02 > j5) {
                            t02 = j5;
                        }
                    } else {
                        j = Long.MAX_VALUE;
                    }
                    if (t02 > 0) {
                        int i6 = debugStatus;
                        if (i6 == 2 || i6 == 3) {
                            _thread = null;
                            B0();
                            if (z0()) {
                                return;
                            }
                            r0();
                            return;
                        }
                        LockSupport.parkNanos(this, t02);
                    }
                }
            }
        } finally {
            _thread = null;
            B0();
            if (!z0()) {
                r0();
            }
        }
    }

    @Override // kotlinx.coroutines.b, nr.p0
    public final void shutdown() {
        debugStatus = 4;
        super.shutdown();
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        return "DefaultExecutor";
    }

    @Override // nr.p0
    public final void v0(long j, n0 n0Var) {
        throw new RejectedExecutionException("DefaultExecutor was shut down. This error indicates that Dispatchers.shutdown() was invoked prior to completion of exiting coroutines, leaving coroutines in incomplete state. Please refer to Dispatchers.shutdown documentation for more details");
    }

    @Override // kotlinx.coroutines.b
    public final void w0(Runnable runnable) {
        if (debugStatus == 4) {
            throw new RejectedExecutionException("DefaultExecutor was shut down. This error indicates that Dispatchers.shutdown() was invoked prior to completion of exiting coroutines, leaving coroutines in incomplete state. Please refer to Dispatchers.shutdown documentation for more details");
        }
        super.w0(runnable);
    }
}
