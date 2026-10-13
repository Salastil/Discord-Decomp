package oi;

import bf.t;
import ii.o;
import java.util.ArrayDeque;
import java.util.concurrent.Executor;
import java.util.concurrent.RejectedExecutionException;
import java.util.logging.Logger;

/* loaded from: classes3.dex */
public final class h implements Executor {

    /* renamed from: x, reason: collision with root package name */
    public static final Logger f15991x = Logger.getLogger(h.class.getName());

    /* renamed from: d, reason: collision with root package name */
    public final Executor f15992d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayDeque f15993e = new ArrayDeque();

    /* renamed from: i, reason: collision with root package name */
    public int f15994i = 1;

    /* renamed from: v, reason: collision with root package name */
    public long f15995v = 0;

    /* renamed from: w, reason: collision with root package name */
    public final o f15996w = new o(this);

    public h(Executor executor) {
        t.g(executor);
        this.f15992d = executor;
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        t.g(runnable);
        synchronized (this.f15993e) {
            int i5 = this.f15994i;
            if (i5 != 4 && i5 != 3) {
                long j = this.f15995v;
                hf.a aVar = new hf.a(1, runnable);
                this.f15993e.add(aVar);
                this.f15994i = 2;
                try {
                    this.f15992d.execute(this.f15996w);
                    if (this.f15994i != 2) {
                        return;
                    }
                    synchronized (this.f15993e) {
                        try {
                            if (this.f15995v == j && this.f15994i == 2) {
                                this.f15994i = 3;
                            }
                        } finally {
                        }
                    }
                    return;
                } catch (Error | RuntimeException e9) {
                    synchronized (this.f15993e) {
                        try {
                            int i6 = this.f15994i;
                            boolean z5 = true;
                            if ((i6 != 1 && i6 != 2) || !this.f15993e.removeLastOccurrence(aVar)) {
                                z5 = false;
                            }
                            if (!(e9 instanceof RejectedExecutionException) || z5) {
                                throw e9;
                            }
                        } finally {
                        }
                    }
                    return;
                }
            }
            this.f15993e.add(runnable);
        }
    }

    public final String toString() {
        return "SequentialExecutor@" + System.identityHashCode(this) + "{" + this.f15992d + "}";
    }
}
