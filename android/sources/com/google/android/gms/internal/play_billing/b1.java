package com.google.android.gms.internal.play_billing;

import com.discord.age_assurance.DigitalCredentialModule;
import java.util.Locale;
import java.util.Objects;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import java.util.concurrent.locks.LockSupport;
import java.util.logging.Level;

/* loaded from: classes3.dex */
public final class b1 extends q0 implements l0 {
    public y0 E;
    public ScheduledFuture F;

    public static Object e(Object obj) {
        if (obj instanceof g0) {
            CancellationException cancellationException = new CancellationException("Task was cancelled.");
            cancellationException.initCause(((g0) obj).f5739b);
            throw cancellationException;
        }
        if (obj instanceof j0) {
            throw new ExecutionException(((j0) obj).a);
        }
        if (obj == q0.f5805v) {
            return null;
        }
        return obj;
    }

    public static boolean g(Object obj) {
        return !(obj instanceof h0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static Object h(y0 y0Var) {
        Object obj;
        Throwable c6;
        if (y0Var instanceof l0) {
            Object obj2 = ((b1) y0Var).f5809d;
            if (obj2 instanceof g0) {
                g0 g0Var = (g0) obj2;
                if (g0Var.a) {
                    Throwable th2 = g0Var.f5739b;
                    obj2 = th2 != null ? new g0(th2, false) : g0.f5738d;
                }
            }
            Objects.requireNonNull(obj2);
            return obj2;
        }
        if ((y0Var instanceof c1) && (c6 = ((c1) y0Var).c()) != null) {
            return new j0(c6);
        }
        boolean isCancelled = y0Var.isCancelled();
        boolean z5 = true;
        if ((!q0.f5807x) && isCancelled) {
            g0 g0Var2 = g0.f5738d;
            Objects.requireNonNull(g0Var2);
            return g0Var2;
        }
        boolean z6 = false;
        while (true) {
            try {
                try {
                    try {
                        obj = y0Var.get();
                        break;
                    } catch (Error e9) {
                        e = e9;
                        return new j0(e);
                    }
                } catch (InterruptedException unused) {
                    z6 = z5;
                } catch (Throwable th3) {
                    if (z6) {
                        Thread.currentThread().interrupt();
                    }
                    throw th3;
                }
            } catch (Error | Exception e10) {
                e = e10;
                return new j0(e);
            } catch (CancellationException e11) {
                return !isCancelled ? new j0(new IllegalArgumentException("get() threw CancellationException, despite reporting isCancelled() == false: ".concat(String.valueOf(y0Var)), e11)) : new g0(e11, false);
            } catch (ExecutionException e12) {
                return isCancelled ? new g0(new IllegalArgumentException("get() did not throw CancellationException, despite reporting isCancelled() == true: ".concat(String.valueOf(y0Var)), e12), false) : new j0(e12.getCause());
            }
        }
        if (z6) {
            Thread.currentThread().interrupt();
        }
        return isCancelled ? new g0(new IllegalArgumentException("get() did not throw CancellationException, despite reporting isCancelled() == true: ".concat(String.valueOf(y0Var))), false) : obj == null ? q0.f5805v : obj;
    }

    public static void j(b1 b1Var) {
        k0 k0Var;
        k0 k0Var2 = null;
        while (true) {
            b1Var.getClass();
            for (p0 o6 = q0.f5808y.o(b1Var); o6 != null; o6 = o6.f5801b) {
                Thread thread = o6.a;
                if (thread != null) {
                    o6.a = null;
                    LockSupport.unpark(thread);
                }
            }
            y0 y0Var = b1Var.E;
            if ((b1Var.f5809d instanceof g0) & (y0Var != null)) {
                Object obj = b1Var.f5809d;
                y0Var.cancel((obj instanceof g0) && ((g0) obj).a);
            }
            ScheduledFuture scheduledFuture = b1Var.F;
            if (scheduledFuture != null) {
                scheduledFuture.cancel(false);
            }
            b1Var.E = null;
            b1Var.F = null;
            k0 k0Var3 = k0Var2;
            k0 e9 = q0.f5808y.e(b1Var);
            k0 k0Var4 = k0Var3;
            while (e9 != null) {
                k0 k0Var5 = e9.f5756c;
                e9.f5756c = k0Var4;
                k0Var4 = e9;
                e9 = k0Var5;
            }
            while (k0Var4 != null) {
                Runnable runnable = k0Var4.a;
                k0Var = k0Var4.f5756c;
                Objects.requireNonNull(runnable);
                if (runnable instanceof h0) {
                    h0 h0Var = (h0) runnable;
                    b1Var = h0Var.f5746d;
                    if (b1Var.f5809d == h0Var) {
                        if (q0.f5808y.E(b1Var, h0Var, h(h0Var.f5747e))) {
                            break;
                        }
                    } else {
                        continue;
                    }
                } else {
                    Executor executor = k0Var4.f5755b;
                    Objects.requireNonNull(executor);
                    k(runnable, executor);
                }
                k0Var4 = k0Var;
            }
            return;
            k0Var2 = k0Var;
        }
    }

    public static void k(Runnable runnable, Executor executor) {
        try {
            executor.execute(runnable);
        } catch (Exception e9) {
            q0.f5806w.a().logp(Level.SEVERE, "com.google.common.util.concurrent.AbstractFuture", "executeListener", a3.e.l("RuntimeException while executing runnable ", String.valueOf(runnable), " with executor ", String.valueOf(executor)), (Throwable) e9);
        }
    }

    @Override // com.google.android.gms.internal.play_billing.y0
    public final void b(Runnable runnable, Executor executor) {
        k0 k0Var;
        k0 k0Var2 = k0.f5754d;
        if (executor == null) {
            throw new NullPointerException("Executor was null.");
        }
        if (!isDone() && (k0Var = this.f5810e) != k0Var2) {
            k0 k0Var3 = new k0(runnable, executor);
            do {
                k0Var3.f5756c = k0Var;
                if (q0.f5808y.A(this, k0Var, k0Var3)) {
                    return;
                } else {
                    k0Var = this.f5810e;
                }
            } while (k0Var != k0Var2);
        }
        k(runnable, executor);
    }

    @Override // com.google.android.gms.internal.play_billing.c1
    public final Throwable c() {
        if (!(this instanceof l0)) {
            return null;
        }
        Object obj = this.f5809d;
        if (obj instanceof j0) {
            return ((j0) obj).a;
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x0056, code lost:
    
        return true;
     */
    @Override // java.util.concurrent.Future
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean cancel(boolean z5) {
        g0 g0Var;
        Object obj = this.f5809d;
        if (!(obj instanceof h0) && !(obj == null)) {
            return false;
        }
        if (q0.f5807x) {
            g0Var = new g0(new CancellationException("Future.cancel() was called."), z5);
        } else {
            g0Var = z5 ? g0.f5737c : g0.f5738d;
            Objects.requireNonNull(g0Var);
        }
        b1 b1Var = this;
        boolean z6 = false;
        while (true) {
            if (q0.f5808y.E(b1Var, obj, g0Var)) {
                j(b1Var);
                if (!(obj instanceof h0)) {
                    break;
                }
                y0 y0Var = ((h0) obj).f5747e;
                if (!(y0Var instanceof l0)) {
                    y0Var.cancel(z5);
                    break;
                }
                b1Var = (b1) y0Var;
                obj = b1Var.f5809d;
                if (!(obj == null) && !(obj instanceof h0)) {
                    break;
                }
                z6 = true;
            } else {
                obj = b1Var.f5809d;
                if (g(obj)) {
                    return z6;
                }
            }
        }
    }

    public final String f() {
        y0 y0Var = this.E;
        ScheduledFuture scheduledFuture = this.F;
        if (y0Var == null) {
            return null;
        }
        String f2 = s4.h.f("inputFuture=[", y0Var.toString(), "]");
        if (scheduledFuture == null) {
            return f2;
        }
        long delay = scheduledFuture.getDelay(TimeUnit.MILLISECONDS);
        if (delay <= 0) {
            return f2;
        }
        return f2 + ", remaining delay=[" + delay + " ms]";
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        Object obj;
        p0 p0Var = p0.f5800c;
        if (Thread.interrupted()) {
            throw new InterruptedException();
        }
        Object obj2 = this.f5809d;
        if ((obj2 != null) && g(obj2)) {
            return e(obj2);
        }
        p0 p0Var2 = this.f5811i;
        if (p0Var2 != p0Var) {
            p0 p0Var3 = new p0();
            do {
                a2 a2Var = q0.f5808y;
                a2Var.s(p0Var3, p0Var2);
                if (a2Var.G(this, p0Var2, p0Var3)) {
                    do {
                        LockSupport.park(this);
                        if (Thread.interrupted()) {
                            d(p0Var3);
                            throw new InterruptedException();
                        }
                        obj = this.f5809d;
                    } while (!((obj != null) & g(obj)));
                    return e(obj);
                }
                p0Var2 = this.f5811i;
            } while (p0Var2 != p0Var);
        }
        Object obj3 = this.f5809d;
        Objects.requireNonNull(obj3);
        return e(obj3);
    }

    public final void i(StringBuilder sb2) {
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
            } catch (ExecutionException e9) {
                sb2.append("FAILURE, cause=[");
                sb2.append(e9.getCause());
                sb2.append("]");
                return;
            } catch (Exception e10) {
                sb2.append("UNKNOWN, cause=[");
                sb2.append(e10.getClass());
                sb2.append(" thrown from get()]");
                return;
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
        sb2.append("SUCCESS, result=[");
        if (obj == null) {
            sb2.append("null");
        } else if (obj == this) {
            sb2.append("this future");
        } else {
            sb2.append(obj.getClass().getName());
            sb2.append("@");
            sb2.append(Integer.toHexString(System.identityHashCode(obj)));
        }
        sb2.append("]");
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f5809d instanceof g0;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        Object obj = this.f5809d;
        return (obj != null) & g(obj);
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x00b1  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00cd  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String toString() {
        String concat;
        boolean z5;
        StringBuilder sb2 = new StringBuilder();
        if (getClass().getName().startsWith("com.google.common.util.concurrent.")) {
            sb2.append(getClass().getSimpleName());
        } else {
            sb2.append(getClass().getName());
        }
        sb2.append('@');
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append("[status=");
        if (this.f5809d instanceof g0) {
            sb2.append(DigitalCredentialModule.CODE_CANCELLED);
        } else if (isDone()) {
            i(sb2);
        } else {
            int length = sb2.length();
            sb2.append("PENDING");
            Object obj = this.f5809d;
            if (obj instanceof h0) {
                sb2.append(", setFuture=[");
                y0 y0Var = ((h0) obj).f5747e;
                try {
                    if (y0Var == this) {
                        sb2.append("this future");
                    } else {
                        sb2.append(y0Var);
                    }
                } catch (Throwable th2) {
                    if ((th2 instanceof Error) && !(th2 instanceof StackOverflowError)) {
                        throw th2;
                    }
                    sb2.append("Exception thrown from implementation: ");
                    sb2.append(th2.getClass());
                }
                sb2.append("]");
            } else {
                try {
                    concat = f();
                } catch (Throwable th3) {
                    if ((th3 instanceof Error) && !(th3 instanceof StackOverflowError)) {
                        throw th3;
                    }
                    concat = "Exception thrown from implementation: ".concat(String.valueOf(th3.getClass()));
                }
                if (concat != null) {
                    if (!concat.isEmpty()) {
                        z5 = false;
                        if (z5) {
                            concat = null;
                        }
                        if (concat != null) {
                            sb2.append(", info=[");
                            sb2.append(concat);
                            sb2.append("]");
                        }
                    }
                }
                z5 = true;
                if (z5) {
                }
                if (concat != null) {
                }
            }
            if (isDone()) {
                sb2.delete(length, sb2.length());
                i(sb2);
            }
        }
        sb2.append("]");
        return sb2.toString();
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        long j5;
        p0 p0Var = p0.f5800c;
        long nanos = timeUnit.toNanos(j);
        if (!Thread.interrupted()) {
            Object obj = this.f5809d;
            if ((obj != null) & g(obj)) {
                return e(obj);
            }
            long j7 = 0;
            long nanoTime = nanos > 0 ? System.nanoTime() + nanos : 0L;
            if (nanos >= 1000) {
                p0 p0Var2 = this.f5811i;
                if (p0Var2 != p0Var) {
                    p0 p0Var3 = new p0();
                    while (true) {
                        a2 a2Var = q0.f5808y;
                        a2Var.s(p0Var3, p0Var2);
                        if (a2Var.G(this, p0Var2, p0Var3)) {
                            j5 = j7;
                            do {
                                LockSupport.parkNanos(this, Math.min(nanos, 2147483647999999999L));
                                if (!Thread.interrupted()) {
                                    Object obj2 = this.f5809d;
                                    if ((obj2 != null) & g(obj2)) {
                                        return e(obj2);
                                    }
                                    nanos = nanoTime - System.nanoTime();
                                } else {
                                    d(p0Var3);
                                    throw new InterruptedException();
                                }
                            } while (nanos >= 1000);
                            d(p0Var3);
                        } else {
                            long j10 = j7;
                            p0Var2 = this.f5811i;
                            if (p0Var2 == p0Var) {
                                break;
                            }
                            j7 = j10;
                        }
                    }
                }
                Object obj3 = this.f5809d;
                Objects.requireNonNull(obj3);
                return e(obj3);
            }
            j5 = 0;
            while (nanos > j5) {
                Object obj4 = this.f5809d;
                if ((obj4 != null) & g(obj4)) {
                    return e(obj4);
                }
                if (!Thread.interrupted()) {
                    nanos = nanoTime - System.nanoTime();
                } else {
                    throw new InterruptedException();
                }
            }
            String b1Var = toString();
            String obj5 = timeUnit.toString();
            Locale locale = Locale.ROOT;
            String lowerCase = obj5.toLowerCase(locale);
            String str = "Waited " + j + " " + timeUnit.toString().toLowerCase(locale);
            if (nanos + 1000 < j5) {
                String concat = str.concat(" (plus ");
                long j11 = -nanos;
                long convert = timeUnit.convert(j11, TimeUnit.NANOSECONDS);
                long nanos2 = j11 - timeUnit.toNanos(convert);
                boolean z5 = convert == j5 || nanos2 > 1000;
                if (convert > j5) {
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
            throw new TimeoutException(k0.d.l(str, " for ", b1Var));
        }
        throw new InterruptedException();
    }
}
