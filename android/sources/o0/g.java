package o0;

import com.discord.age_assurance.DigitalCredentialModule;
import com.google.common.util.concurrent.ListenableFuture;
import java.util.Locale;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import java.util.concurrent.locks.LockSupport;
import java.util.logging.Level;
import java.util.logging.Logger;

/* loaded from: classes.dex */
public abstract class g implements ListenableFuture {

    /* renamed from: v, reason: collision with root package name */
    public static final boolean f15719v = Boolean.parseBoolean(System.getProperty("guava.concurrent.generate_cancellation_cause", "false"));

    /* renamed from: w, reason: collision with root package name */
    public static final Logger f15720w = Logger.getLogger(g.class.getName());

    /* renamed from: x, reason: collision with root package name */
    public static final e4.f f15721x;

    /* renamed from: y, reason: collision with root package name */
    public static final Object f15722y;

    /* renamed from: d, reason: collision with root package name */
    public volatile Object f15723d;

    /* renamed from: e, reason: collision with root package name */
    public volatile c f15724e;

    /* renamed from: i, reason: collision with root package name */
    public volatile f f15725i;

    static {
        e4.f eVar;
        try {
            eVar = new d(AtomicReferenceFieldUpdater.newUpdater(f.class, Thread.class, "a"), AtomicReferenceFieldUpdater.newUpdater(f.class, f.class, "b"), AtomicReferenceFieldUpdater.newUpdater(g.class, f.class, "i"), AtomicReferenceFieldUpdater.newUpdater(g.class, c.class, "e"), AtomicReferenceFieldUpdater.newUpdater(g.class, Object.class, "d"));
            th = null;
        } catch (Throwable th2) {
            th = th2;
            eVar = new e();
        }
        f15721x = eVar;
        if (th != null) {
            f15720w.log(Level.SEVERE, "SafeAtomicHelper is broken!", th);
        }
        f15722y = new Object();
    }

    public static void e(g gVar) {
        f fVar;
        c cVar;
        c cVar2;
        c cVar3;
        do {
            fVar = gVar.f15725i;
        } while (!f15721x.i(gVar, fVar, f.f15717c));
        while (true) {
            cVar = null;
            if (fVar == null) {
                break;
            }
            Thread thread = fVar.a;
            if (thread != null) {
                fVar.a = null;
                LockSupport.unpark(thread);
            }
            fVar = fVar.f15718b;
        }
        gVar.d();
        do {
            cVar2 = gVar.f15724e;
        } while (!f15721x.g(gVar, cVar2, c.f15710d));
        while (true) {
            cVar3 = cVar;
            cVar = cVar2;
            if (cVar == null) {
                break;
            }
            cVar2 = cVar.f15712c;
            cVar.f15712c = cVar3;
        }
        while (cVar3 != null) {
            c cVar4 = cVar3.f15712c;
            f(cVar3.a, cVar3.f15711b);
            cVar3 = cVar4;
        }
    }

    public static void f(Runnable runnable, Executor executor) {
        try {
            executor.execute(runnable);
        } catch (RuntimeException e9) {
            f15720w.log(Level.SEVERE, "RuntimeException while executing runnable " + runnable + " with executor " + executor, (Throwable) e9);
        }
    }

    public static Object g(Object obj) {
        if (obj instanceof a) {
            Throwable th2 = ((a) obj).f15709b;
            CancellationException cancellationException = new CancellationException("Task was cancelled.");
            cancellationException.initCause(th2);
            throw cancellationException;
        }
        if (obj instanceof b) {
            throw new ExecutionException(((b) obj).a);
        }
        if (obj == f15722y) {
            return null;
        }
        return obj;
    }

    public static Object h(g gVar) {
        Object obj;
        boolean z5 = false;
        while (true) {
            try {
                obj = gVar.get();
                break;
            } catch (InterruptedException unused) {
                z5 = true;
            } catch (Throwable th2) {
                if (z5) {
                    Thread.currentThread().interrupt();
                }
                throw th2;
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
        return obj;
    }

    @Override // com.google.common.util.concurrent.ListenableFuture
    public final void a(Runnable runnable, Executor executor) {
        executor.getClass();
        c cVar = this.f15724e;
        c cVar2 = c.f15710d;
        if (cVar != cVar2) {
            c cVar3 = new c(runnable, executor);
            do {
                cVar3.f15712c = cVar;
                if (f15721x.g(this, cVar, cVar3)) {
                    return;
                } else {
                    cVar = this.f15724e;
                }
            } while (cVar != cVar2);
        }
        f(runnable, executor);
    }

    public final void c(StringBuilder sb2) {
        try {
            Object h6 = h(this);
            sb2.append("SUCCESS, result=[");
            sb2.append(h6 == this ? "this future" : String.valueOf(h6));
            sb2.append("]");
        } catch (CancellationException unused) {
            sb2.append(DigitalCredentialModule.CODE_CANCELLED);
        } catch (RuntimeException e9) {
            sb2.append("UNKNOWN, cause=[");
            sb2.append(e9.getClass());
            sb2.append(" thrown from get()]");
        } catch (ExecutionException e10) {
            sb2.append("FAILURE, cause=[");
            sb2.append(e10.getCause());
            sb2.append("]");
        }
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        Object obj = this.f15723d;
        if (obj == null) {
            if (f15721x.h(this, obj, f15719v ? new a(new CancellationException("Future.cancel() was called."), z5) : z5 ? a.f15707c : a.f15708d)) {
                e(this);
                return true;
            }
        }
        return false;
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        f fVar = f.f15717c;
        long nanos = timeUnit.toNanos(j);
        if (Thread.interrupted()) {
            throw new InterruptedException();
        }
        Object obj = this.f15723d;
        if (obj != null) {
            return g(obj);
        }
        long nanoTime = nanos > 0 ? System.nanoTime() + nanos : 0L;
        if (nanos >= 1000) {
            f fVar2 = this.f15725i;
            if (fVar2 != fVar) {
                f fVar3 = new f();
                do {
                    e4.f fVar4 = f15721x;
                    fVar4.F(fVar3, fVar2);
                    if (fVar4.i(this, fVar2, fVar3)) {
                        do {
                            LockSupport.parkNanos(this, nanos);
                            if (Thread.interrupted()) {
                                i(fVar3);
                                throw new InterruptedException();
                            }
                            Object obj2 = this.f15723d;
                            if (obj2 != null) {
                                return g(obj2);
                            }
                            nanos = nanoTime - System.nanoTime();
                        } while (nanos >= 1000);
                        i(fVar3);
                    } else {
                        fVar2 = this.f15725i;
                    }
                } while (fVar2 != fVar);
            }
            return g(this.f15723d);
        }
        while (nanos > 0) {
            Object obj3 = this.f15723d;
            if (obj3 != null) {
                return g(obj3);
            }
            if (Thread.interrupted()) {
                throw new InterruptedException();
            }
            nanos = nanoTime - System.nanoTime();
        }
        String gVar = toString();
        String obj4 = timeUnit.toString();
        Locale locale = Locale.ROOT;
        String lowerCase = obj4.toLowerCase(locale);
        StringBuilder n6 = k0.d.n(j, "Waited ", " ");
        n6.append(timeUnit.toString().toLowerCase(locale));
        String sb2 = n6.toString();
        if (nanos + 1000 < 0) {
            String k = k0.d.k(sb2, " (plus ");
            long j5 = -nanos;
            long convert = timeUnit.convert(j5, TimeUnit.NANOSECONDS);
            long nanos2 = j5 - timeUnit.toNanos(convert);
            boolean z5 = convert == 0 || nanos2 > 1000;
            if (convert > 0) {
                String str = k + convert + " " + lowerCase;
                if (z5) {
                    str = k0.d.k(str, ",");
                }
                k = k0.d.k(str, " ");
            }
            if (z5) {
                k = k + nanos2 + " nanoseconds ";
            }
            sb2 = k0.d.k(k, "delay)");
        }
        if (isDone()) {
            throw new TimeoutException(k0.d.k(sb2, " but future completed as timeout expired"));
        }
        throw new TimeoutException(k0.d.l(sb2, " for ", gVar));
    }

    public final void i(f fVar) {
        fVar.a = null;
        while (true) {
            f fVar2 = this.f15725i;
            if (fVar2 == f.f15717c) {
                return;
            }
            f fVar3 = null;
            while (fVar2 != null) {
                f fVar4 = fVar2.f15718b;
                if (fVar2.a != null) {
                    fVar3 = fVar2;
                } else if (fVar3 != null) {
                    fVar3.f15718b = fVar4;
                    if (fVar3.a == null) {
                        break;
                    }
                } else if (!f15721x.i(this, fVar2, fVar4)) {
                    break;
                }
                fVar2 = fVar4;
            }
            return;
        }
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f15723d instanceof a;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return this.f15723d != null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append("[status=");
        if (this.f15723d instanceof a) {
            sb2.append(DigitalCredentialModule.CODE_CANCELLED);
        } else if (isDone()) {
            c(sb2);
        } else {
            try {
                if (this instanceof ScheduledFuture) {
                    str = "remaining delay=[" + ((ScheduledFuture) this).getDelay(TimeUnit.MILLISECONDS) + " ms]";
                } else {
                    str = null;
                }
            } catch (RuntimeException e9) {
                str = "Exception thrown from implementation: " + e9.getClass();
            }
            if (str != null && !str.isEmpty()) {
                sb2.append("PENDING, info=[");
                sb2.append(str);
                sb2.append("]");
            } else if (isDone()) {
                c(sb2);
            } else {
                sb2.append("PENDING");
            }
        }
        sb2.append("]");
        return sb2.toString();
    }

    public void d() {
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        Object obj;
        f fVar = f.f15717c;
        if (!Thread.interrupted()) {
            Object obj2 = this.f15723d;
            if (obj2 != null) {
                return g(obj2);
            }
            f fVar2 = this.f15725i;
            if (fVar2 != fVar) {
                f fVar3 = new f();
                do {
                    e4.f fVar4 = f15721x;
                    fVar4.F(fVar3, fVar2);
                    if (fVar4.i(this, fVar2, fVar3)) {
                        do {
                            LockSupport.park(this);
                            if (!Thread.interrupted()) {
                                obj = this.f15723d;
                            } else {
                                i(fVar3);
                                throw new InterruptedException();
                            }
                        } while (obj == null);
                        return g(obj);
                    }
                    fVar2 = this.f15725i;
                } while (fVar2 != fVar);
            }
            return g(this.f15723d);
        }
        throw new InterruptedException();
    }
}
