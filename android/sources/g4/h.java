package g4;

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
public abstract class h implements ListenableFuture {

    /* renamed from: v, reason: collision with root package name */
    public static final boolean f9106v = Boolean.parseBoolean(System.getProperty("guava.concurrent.generate_cancellation_cause", "false"));

    /* renamed from: w, reason: collision with root package name */
    public static final Logger f9107w = Logger.getLogger(h.class.getName());

    /* renamed from: x, reason: collision with root package name */
    public static final ys.d f9108x;

    /* renamed from: y, reason: collision with root package name */
    public static final Object f9109y;

    /* renamed from: d, reason: collision with root package name */
    public volatile Object f9110d;

    /* renamed from: e, reason: collision with root package name */
    public volatile c f9111e;

    /* renamed from: i, reason: collision with root package name */
    public volatile g f9112i;

    static {
        ys.d fVar;
        try {
            fVar = new d(AtomicReferenceFieldUpdater.newUpdater(g.class, Thread.class, "a"), AtomicReferenceFieldUpdater.newUpdater(g.class, g.class, "b"), AtomicReferenceFieldUpdater.newUpdater(h.class, g.class, "i"), AtomicReferenceFieldUpdater.newUpdater(h.class, c.class, "e"), AtomicReferenceFieldUpdater.newUpdater(h.class, Object.class, "d"));
            th = null;
        } catch (Throwable th2) {
            th = th2;
            fVar = new f();
        }
        f9108x = fVar;
        if (th != null) {
            f9107w.log(Level.SEVERE, "SafeAtomicHelper is broken!", th);
        }
        f9109y = new Object();
    }

    public static void d(h hVar) {
        c cVar;
        c cVar2;
        c cVar3 = null;
        while (true) {
            g gVar = hVar.f9112i;
            if (f9108x.o(hVar, gVar, g.f9104c)) {
                while (gVar != null) {
                    Thread thread = gVar.a;
                    if (thread != null) {
                        gVar.a = null;
                        LockSupport.unpark(thread);
                    }
                    gVar = gVar.f9105b;
                }
                do {
                    cVar = hVar.f9111e;
                } while (!f9108x.m(hVar, cVar, c.f9094d));
                while (true) {
                    cVar2 = cVar3;
                    cVar3 = cVar;
                    if (cVar3 == null) {
                        break;
                    }
                    cVar = cVar3.f9096c;
                    cVar3.f9096c = cVar2;
                }
                while (cVar2 != null) {
                    cVar3 = cVar2.f9096c;
                    Runnable runnable = cVar2.a;
                    if (runnable instanceof e) {
                        e eVar = (e) runnable;
                        hVar = eVar.f9102d;
                        if (hVar.f9110d == eVar) {
                            if (f9108x.n(hVar, eVar, g(eVar.f9103e))) {
                                break;
                            }
                        } else {
                            continue;
                        }
                    } else {
                        e(runnable, cVar2.f9095b);
                    }
                    cVar2 = cVar3;
                }
                return;
            }
        }
    }

    public static void e(Runnable runnable, Executor executor) {
        try {
            executor.execute(runnable);
        } catch (RuntimeException e9) {
            f9107w.log(Level.SEVERE, "RuntimeException while executing runnable " + runnable + " with executor " + executor, (Throwable) e9);
        }
    }

    public static Object f(Object obj) {
        if (obj instanceof a) {
            Throwable th2 = ((a) obj).f9092b;
            CancellationException cancellationException = new CancellationException("Task was cancelled.");
            cancellationException.initCause(th2);
            throw cancellationException;
        }
        if (obj instanceof b) {
            throw new ExecutionException(((b) obj).a);
        }
        if (obj == f9109y) {
            return null;
        }
        return obj;
    }

    public static Object g(ListenableFuture listenableFuture) {
        Object obj;
        if (listenableFuture instanceof h) {
            Object obj2 = ((h) listenableFuture).f9110d;
            if (!(obj2 instanceof a)) {
                return obj2;
            }
            a aVar = (a) obj2;
            return aVar.a ? aVar.f9092b != null ? new a(aVar.f9092b, false) : a.f9091d : obj2;
        }
        boolean isCancelled = listenableFuture.isCancelled();
        boolean z5 = true;
        if ((!f9106v) && isCancelled) {
            return a.f9091d;
        }
        boolean z6 = false;
        while (true) {
            try {
                try {
                    obj = listenableFuture.get();
                    break;
                } catch (InterruptedException unused) {
                    z6 = z5;
                } catch (Throwable th2) {
                    if (z6) {
                        Thread.currentThread().interrupt();
                    }
                    throw th2;
                }
            } catch (CancellationException e9) {
                if (isCancelled) {
                    return new a(e9, false);
                }
                return new b(new IllegalArgumentException("get() threw CancellationException, despite reporting isCancelled() == false: " + listenableFuture, e9));
            } catch (ExecutionException e10) {
                return new b(e10.getCause());
            } catch (Throwable th3) {
                return new b(th3);
            }
        }
        if (z6) {
            Thread.currentThread().interrupt();
        }
        return obj == null ? f9109y : obj;
    }

    @Override // com.google.common.util.concurrent.ListenableFuture
    public final void a(Runnable runnable, Executor executor) {
        executor.getClass();
        c cVar = this.f9111e;
        c cVar2 = c.f9094d;
        if (cVar != cVar2) {
            c cVar3 = new c(runnable, executor);
            do {
                cVar3.f9096c = cVar;
                if (f9108x.m(this, cVar, cVar3)) {
                    return;
                } else {
                    cVar = this.f9111e;
                }
            } while (cVar != cVar2);
        }
        e(runnable, executor);
    }

    public final void c(StringBuilder sb2) {
        Object obj;
        boolean z5 = false;
        while (true) {
            try {
                try {
                    obj = get();
                    break;
                } catch (CancellationException unused) {
                    sb2.append(DigitalCredentialModule.CODE_CANCELLED);
                    return;
                } catch (RuntimeException e9) {
                    sb2.append("UNKNOWN, cause=[");
                    sb2.append(e9.getClass());
                    sb2.append(" thrown from get()]");
                    return;
                } catch (ExecutionException e10) {
                    sb2.append("FAILURE, cause=[");
                    sb2.append(e10.getCause());
                    sb2.append("]");
                    return;
                }
            } catch (InterruptedException unused2) {
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
        sb2.append("SUCCESS, result=[");
        sb2.append(obj == this ? "this future" : String.valueOf(obj));
        sb2.append("]");
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        Object obj = this.f9110d;
        if (!(obj == null) && !(obj instanceof e)) {
            return false;
        }
        a aVar = f9106v ? new a(new CancellationException("Future.cancel() was called."), z5) : z5 ? a.f9090c : a.f9091d;
        h hVar = this;
        boolean z6 = false;
        while (true) {
            if (f9108x.n(hVar, obj, aVar)) {
                d(hVar);
                if (!(obj instanceof e)) {
                    break;
                }
                ListenableFuture listenableFuture = ((e) obj).f9103e;
                if (!(listenableFuture instanceof h)) {
                    listenableFuture.cancel(z5);
                    break;
                }
                hVar = (h) listenableFuture;
                obj = hVar.f9110d;
                if (!(obj == null) && !(obj instanceof e)) {
                    break;
                }
                z6 = true;
            } else {
                obj = hVar.f9110d;
                if (!(obj instanceof e)) {
                    return z6;
                }
            }
        }
        return true;
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        boolean z5;
        g gVar = g.f9104c;
        long nanos = timeUnit.toNanos(j);
        if (Thread.interrupted()) {
            throw new InterruptedException();
        }
        Object obj = this.f9110d;
        if ((obj != null) && (!(obj instanceof e))) {
            return f(obj);
        }
        long nanoTime = nanos > 0 ? System.nanoTime() + nanos : 0L;
        if (nanos >= 1000) {
            g gVar2 = this.f9112i;
            if (gVar2 != gVar) {
                g gVar3 = new g();
                z5 = true;
                do {
                    ys.d dVar = f9108x;
                    dVar.R(gVar3, gVar2);
                    if (dVar.o(this, gVar2, gVar3)) {
                        do {
                            LockSupport.parkNanos(this, nanos);
                            if (Thread.interrupted()) {
                                i(gVar3);
                                throw new InterruptedException();
                            }
                            Object obj2 = this.f9110d;
                            if ((obj2 != null) && (!(obj2 instanceof e))) {
                                return f(obj2);
                            }
                            nanos = nanoTime - System.nanoTime();
                        } while (nanos >= 1000);
                        i(gVar3);
                    } else {
                        gVar2 = this.f9112i;
                    }
                } while (gVar2 != gVar);
            }
            return f(this.f9110d);
        }
        z5 = true;
        while (nanos > 0) {
            Object obj3 = this.f9110d;
            if ((obj3 != null ? z5 : false) && (!(obj3 instanceof e))) {
                return f(obj3);
            }
            if (Thread.interrupted()) {
                throw new InterruptedException();
            }
            nanos = nanoTime - System.nanoTime();
        }
        String hVar = toString();
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
            boolean z6 = (convert == 0 || nanos2 > 1000) ? z5 : false;
            if (convert > 0) {
                String str = k + convert + " " + lowerCase;
                if (z6) {
                    str = k0.d.k(str, ",");
                }
                k = k0.d.k(str, " ");
            }
            if (z6) {
                k = k + nanos2 + " nanoseconds ";
            }
            sb2 = k0.d.k(k, "delay)");
        }
        if (isDone()) {
            throw new TimeoutException(k0.d.k(sb2, " but future completed as timeout expired"));
        }
        throw new TimeoutException(k0.d.l(sb2, " for ", hVar));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final String h() {
        Object obj = this.f9110d;
        if (obj instanceof e) {
            StringBuilder sb2 = new StringBuilder("setFuture=[");
            ListenableFuture listenableFuture = ((e) obj).f9103e;
            return com.discord.chat.bridge.botuikit.a.j(sb2, listenableFuture == this ? "this future" : String.valueOf(listenableFuture), "]");
        }
        if (!(this instanceof ScheduledFuture)) {
            return null;
        }
        return "remaining delay=[" + ((ScheduledFuture) this).getDelay(TimeUnit.MILLISECONDS) + " ms]";
    }

    public final void i(g gVar) {
        gVar.a = null;
        while (true) {
            g gVar2 = this.f9112i;
            if (gVar2 == g.f9104c) {
                return;
            }
            g gVar3 = null;
            while (gVar2 != null) {
                g gVar4 = gVar2.f9105b;
                if (gVar2.a != null) {
                    gVar3 = gVar2;
                } else if (gVar3 != null) {
                    gVar3.f9105b = gVar4;
                    if (gVar3.a == null) {
                        break;
                    }
                } else if (!f9108x.o(this, gVar2, gVar4)) {
                    break;
                }
                gVar2 = gVar4;
            }
            return;
        }
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f9110d instanceof a;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return (!(r0 instanceof e)) & (this.f9110d != null);
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append("[status=");
        if (this.f9110d instanceof a) {
            sb2.append(DigitalCredentialModule.CODE_CANCELLED);
        } else if (isDone()) {
            c(sb2);
        } else {
            try {
                str = h();
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

    @Override // java.util.concurrent.Future
    public final Object get() {
        Object obj;
        g gVar = g.f9104c;
        if (!Thread.interrupted()) {
            Object obj2 = this.f9110d;
            if ((obj2 != null) & (!(obj2 instanceof e))) {
                return f(obj2);
            }
            g gVar2 = this.f9112i;
            if (gVar2 != gVar) {
                g gVar3 = new g();
                do {
                    ys.d dVar = f9108x;
                    dVar.R(gVar3, gVar2);
                    if (dVar.o(this, gVar2, gVar3)) {
                        do {
                            LockSupport.park(this);
                            if (!Thread.interrupted()) {
                                obj = this.f9110d;
                            } else {
                                i(gVar3);
                                throw new InterruptedException();
                            }
                        } while (!((obj != null) & (!(obj instanceof e))));
                        return f(obj);
                    }
                    gVar2 = this.f9112i;
                } while (gVar2 != gVar);
            }
            return f(this.f9110d);
        }
        throw new InterruptedException();
    }
}
