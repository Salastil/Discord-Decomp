package com.google.android.gms.internal.play_billing;

import com.discord.age_assurance.DigitalCredentialModule;
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

/* loaded from: classes3.dex */
public class w4 implements y0 {

    /* renamed from: v, reason: collision with root package name */
    public static final boolean f5873v = Boolean.parseBoolean(System.getProperty("guava.concurrent.generate_cancellation_cause", "false"));

    /* renamed from: w, reason: collision with root package name */
    public static final Logger f5874w = Logger.getLogger(w4.class.getName());

    /* renamed from: x, reason: collision with root package name */
    public static final a2 f5875x;

    /* renamed from: y, reason: collision with root package name */
    public static final Object f5876y;

    /* renamed from: d, reason: collision with root package name */
    public volatile Object f5877d;

    /* renamed from: e, reason: collision with root package name */
    public volatile l2 f5878e;

    /* renamed from: i, reason: collision with root package name */
    public volatile v4 f5879i;

    static {
        a2 n4Var;
        try {
            n4Var = new m3(AtomicReferenceFieldUpdater.newUpdater(v4.class, Thread.class, "a"), AtomicReferenceFieldUpdater.newUpdater(v4.class, v4.class, "b"), AtomicReferenceFieldUpdater.newUpdater(w4.class, v4.class, "i"), AtomicReferenceFieldUpdater.newUpdater(w4.class, l2.class, "e"), AtomicReferenceFieldUpdater.newUpdater(w4.class, Object.class, "d"));
            th = null;
        } catch (Throwable th2) {
            th = th2;
            n4Var = new n4();
        }
        Throwable th3 = th;
        f5875x = n4Var;
        if (th3 != null) {
            f5874w.logp(Level.SEVERE, "com.android.billingclient.util.concurrent.AbstractResolvableFuture", "<clinit>", "SafeAtomicHelper is broken!", th3);
        }
        f5876y = new Object();
    }

    public static void d(w4 w4Var) {
        v4 v4Var;
        a2 a2Var;
        l2 l2Var;
        l2 l2Var2;
        l2 l2Var3;
        do {
            v4Var = w4Var.f5879i;
            a2Var = f5875x;
        } while (!a2Var.B(w4Var, v4Var, v4.f5859c));
        while (true) {
            l2Var = null;
            if (v4Var == null) {
                break;
            }
            Thread thread = v4Var.a;
            if (thread != null) {
                v4Var.a = null;
                LockSupport.unpark(thread);
            }
            v4Var = v4Var.f5860b;
        }
        do {
            l2Var2 = w4Var.f5878e;
        } while (!a2Var.t(w4Var, l2Var2, l2.f5757d));
        while (true) {
            l2Var3 = l2Var;
            l2Var = l2Var2;
            if (l2Var == null) {
                break;
            }
            l2Var2 = l2Var.f5759c;
            l2Var.f5759c = l2Var3;
        }
        while (l2Var3 != null) {
            Runnable runnable = l2Var3.a;
            l2 l2Var4 = l2Var3.f5759c;
            f(runnable, l2Var3.f5758b);
            l2Var3 = l2Var4;
        }
    }

    public static void f(Runnable runnable, Executor executor) {
        try {
            executor.execute(runnable);
        } catch (RuntimeException e9) {
            f5874w.logp(Level.SEVERE, "com.android.billingclient.util.concurrent.AbstractResolvableFuture", "executeListener", a3.e.l("RuntimeException while executing runnable ", String.valueOf(runnable), " with executor ", String.valueOf(executor)), (Throwable) e9);
        }
    }

    public static final Object h(Object obj) {
        if (obj instanceof d1) {
            Throwable th2 = ((d1) obj).a;
            CancellationException cancellationException = new CancellationException("Task was cancelled.");
            cancellationException.initCause(th2);
            throw cancellationException;
        }
        if (obj instanceof y1) {
            throw new ExecutionException(((y1) obj).a);
        }
        if (obj == f5876y) {
            return null;
        }
        return obj;
    }

    @Override // com.google.android.gms.internal.play_billing.y0
    public final void b(Runnable runnable, Executor executor) {
        executor.getClass();
        l2 l2Var = this.f5878e;
        l2 l2Var2 = l2.f5757d;
        if (l2Var != l2Var2) {
            l2 l2Var3 = new l2(runnable, executor);
            do {
                l2Var3.f5759c = l2Var;
                if (f5875x.t(this, l2Var, l2Var3)) {
                    return;
                } else {
                    l2Var = this.f5878e;
                }
            } while (l2Var != l2Var2);
        }
        f(runnable, executor);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public String c() {
        if (this instanceof ScheduledFuture) {
            return a3.e.g(((ScheduledFuture) this).getDelay(TimeUnit.MILLISECONDS), "remaining delay=[", " ms]");
        }
        return null;
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        Object obj = this.f5877d;
        if (obj != null) {
            return false;
        }
        if (!f5875x.w(this, obj, f5873v ? new d1(new CancellationException("Future.cancel() was called.")) : z5 ? d1.f5725b : d1.f5726c)) {
            return false;
        }
        d(this);
        return true;
    }

    public final void e(StringBuilder sb2) {
        Object obj;
        boolean z5 = false;
        while (true) {
            try {
                try {
                    obj = get();
                    break;
                } catch (InterruptedException unused) {
                    z5 = true;
                } catch (Throwable th2) {
                    if (z5) {
                        Thread.currentThread().interrupt();
                    }
                    throw th2;
                }
            } catch (CancellationException unused2) {
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
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
        sb2.append("SUCCESS, result=[");
        sb2.append(obj == this ? "this future" : String.valueOf(obj));
        sb2.append("]");
    }

    public final void g(v4 v4Var) {
        v4Var.a = null;
        while (true) {
            v4 v4Var2 = this.f5879i;
            if (v4Var2 != v4.f5859c) {
                v4 v4Var3 = null;
                while (v4Var2 != null) {
                    v4 v4Var4 = v4Var2.f5860b;
                    if (v4Var2.a != null) {
                        v4Var3 = v4Var2;
                    } else if (v4Var3 != null) {
                        v4Var3.f5860b = v4Var4;
                        if (v4Var3.a == null) {
                            break;
                        }
                    } else if (!f5875x.B(this, v4Var2, v4Var4)) {
                        break;
                    }
                    v4Var2 = v4Var4;
                }
                return;
            }
            return;
        }
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        Object obj;
        if (Thread.interrupted()) {
            throw new InterruptedException();
        }
        Object obj2 = this.f5877d;
        if (obj2 != null) {
            return h(obj2);
        }
        v4 v4Var = this.f5879i;
        v4 v4Var2 = v4.f5859c;
        if (v4Var != v4Var2) {
            v4 v4Var3 = new v4();
            do {
                a2 a2Var = f5875x;
                a2Var.i(v4Var3, v4Var);
                if (a2Var.B(this, v4Var, v4Var3)) {
                    do {
                        LockSupport.park(this);
                        if (Thread.interrupted()) {
                            g(v4Var3);
                            throw new InterruptedException();
                        }
                        obj = this.f5877d;
                    } while (obj == null);
                    return h(obj);
                }
                v4Var = this.f5879i;
            } while (v4Var != v4Var2);
        }
        return h(this.f5877d);
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f5877d instanceof d1;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return this.f5877d != null;
    }

    public final String toString() {
        String concat;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append("[status=");
        if (this.f5877d instanceof d1) {
            sb2.append(DigitalCredentialModule.CODE_CANCELLED);
        } else if (isDone()) {
            e(sb2);
        } else {
            try {
                concat = c();
            } catch (RuntimeException e9) {
                concat = "Exception thrown from implementation: ".concat(String.valueOf(e9.getClass()));
            }
            if (concat != null && !concat.isEmpty()) {
                sb2.append("PENDING, info=[");
                sb2.append(concat);
                sb2.append("]");
            } else if (isDone()) {
                e(sb2);
            } else {
                sb2.append("PENDING");
            }
        }
        sb2.append("]");
        return sb2.toString();
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        long nanos = timeUnit.toNanos(j);
        if (!Thread.interrupted()) {
            Object obj = this.f5877d;
            if (obj != null) {
                return h(obj);
            }
            long nanoTime = nanos > 0 ? System.nanoTime() + nanos : 0L;
            if (nanos >= 1000) {
                v4 v4Var = this.f5879i;
                v4 v4Var2 = v4.f5859c;
                if (v4Var != v4Var2) {
                    v4 v4Var3 = new v4();
                    do {
                        a2 a2Var = f5875x;
                        a2Var.i(v4Var3, v4Var);
                        if (a2Var.B(this, v4Var, v4Var3)) {
                            do {
                                LockSupport.parkNanos(this, nanos);
                                if (!Thread.interrupted()) {
                                    Object obj2 = this.f5877d;
                                    if (obj2 != null) {
                                        return h(obj2);
                                    }
                                    nanos = nanoTime - System.nanoTime();
                                } else {
                                    g(v4Var3);
                                    throw new InterruptedException();
                                }
                            } while (nanos >= 1000);
                            g(v4Var3);
                        } else {
                            v4Var = this.f5879i;
                        }
                    } while (v4Var != v4Var2);
                }
                return h(this.f5877d);
            }
            while (nanos > 0) {
                Object obj3 = this.f5877d;
                if (obj3 != null) {
                    return h(obj3);
                }
                if (!Thread.interrupted()) {
                    nanos = nanoTime - System.nanoTime();
                } else {
                    throw new InterruptedException();
                }
            }
            String w4Var = toString();
            String obj4 = timeUnit.toString();
            Locale locale = Locale.ROOT;
            String lowerCase = obj4.toLowerCase(locale);
            String str = "Waited " + j + " " + timeUnit.toString().toLowerCase(locale);
            if (nanos + 1000 < 0) {
                String concat = str.concat(" (plus ");
                long j5 = -nanos;
                long convert = timeUnit.convert(j5, TimeUnit.NANOSECONDS);
                long nanos2 = j5 - timeUnit.toNanos(convert);
                boolean z5 = true;
                if (convert != 0 && nanos2 <= 1000) {
                    z5 = false;
                }
                if (convert > 0) {
                    String str2 = concat + convert + " " + lowerCase;
                    if (z5) {
                        str2 = str2.concat(",");
                    }
                    concat = str2.concat(" ");
                }
                if (z5) {
                    concat = concat + nanos2 + " nanoseconds ";
                }
                str = concat.concat("delay)");
            }
            if (isDone()) {
                throw new TimeoutException(str.concat(" but future completed as timeout expired"));
            }
            throw new TimeoutException(k0.d.l(str, " for ", w4Var));
        }
        throw new InterruptedException();
    }
}
