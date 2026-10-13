package ii;

import com.discord.age_assurance.DigitalCredentialModule;
import com.google.common.util.concurrent.ListenableFuture;
import java.util.Locale;
import java.util.Objects;
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
public abstract class m extends ji.a implements ListenableFuture {

    /* renamed from: v, reason: collision with root package name */
    public static final boolean f10830v;

    /* renamed from: w, reason: collision with root package name */
    public static final Logger f10831w;

    /* renamed from: x, reason: collision with root package name */
    public static final com.facebook.imagepipeline.nativecode.b f10832x;

    /* renamed from: y, reason: collision with root package name */
    public static final Object f10833y;

    /* renamed from: d, reason: collision with root package name */
    public volatile Object f10834d;

    /* renamed from: e, reason: collision with root package name */
    public volatile c f10835e;

    /* renamed from: i, reason: collision with root package name */
    public volatile l f10836i;

    static {
        boolean z5;
        Throwable th2;
        com.facebook.imagepipeline.nativecode.b eVar;
        try {
            z5 = Boolean.parseBoolean(System.getProperty("guava.concurrent.generate_cancellation_cause", "false"));
        } catch (SecurityException unused) {
            z5 = false;
        }
        f10830v = z5;
        f10831w = Logger.getLogger(m.class.getName());
        int i5 = 9;
        Throwable th3 = null;
        try {
            eVar = new k(i5);
            th2 = null;
        } catch (Throwable th4) {
            th2 = th4;
            try {
                eVar = new d(AtomicReferenceFieldUpdater.newUpdater(l.class, Thread.class, "a"), AtomicReferenceFieldUpdater.newUpdater(l.class, l.class, "b"), AtomicReferenceFieldUpdater.newUpdater(m.class, l.class, "i"), AtomicReferenceFieldUpdater.newUpdater(m.class, c.class, "e"), AtomicReferenceFieldUpdater.newUpdater(m.class, Object.class, "d"));
            } catch (Throwable th5) {
                th3 = th5;
                eVar = new e(i5);
            }
        }
        f10832x = eVar;
        if (th3 != null) {
            Logger logger = f10831w;
            Level level = Level.SEVERE;
            logger.log(level, "UnsafeAtomicHelper is broken!", th2);
            logger.log(level, "SafeAtomicHelper is broken!", th3);
        }
        f10833y = new Object();
    }

    public static void e(m mVar) {
        for (l o6 = f10832x.o(mVar); o6 != null; o6 = o6.f10829b) {
            Thread thread = o6.a;
            if (thread != null) {
                o6.a = null;
                LockSupport.unpark(thread);
            }
        }
        c n6 = f10832x.n(mVar);
        c cVar = null;
        while (n6 != null) {
            c cVar2 = n6.f10819c;
            n6.f10819c = cVar;
            cVar = n6;
            n6 = cVar2;
        }
        while (cVar != null) {
            c cVar3 = cVar.f10819c;
            Runnable runnable = cVar.a;
            Objects.requireNonNull(runnable);
            Executor executor = cVar.f10818b;
            Objects.requireNonNull(executor);
            f(runnable, executor);
            cVar = cVar3;
        }
    }

    public static void f(Runnable runnable, Executor executor) {
        try {
            executor.execute(runnable);
        } catch (RuntimeException e9) {
            Level level = Level.SEVERE;
            String valueOf = String.valueOf(runnable);
            String valueOf2 = String.valueOf(executor);
            StringBuilder sb2 = new StringBuilder(valueOf2.length() + valueOf.length() + 57);
            sb2.append("RuntimeException while executing runnable ");
            sb2.append(valueOf);
            sb2.append(" with executor ");
            sb2.append(valueOf2);
            f10831w.log(level, sb2.toString(), (Throwable) e9);
        }
    }

    public static Object g(Object obj) {
        if (obj instanceof a) {
            Throwable th2 = ((a) obj).a;
            CancellationException cancellationException = new CancellationException("Task was cancelled.");
            cancellationException.initCause(th2);
            throw cancellationException;
        }
        if (obj instanceof b) {
            throw new ExecutionException(((b) obj).a);
        }
        if (obj == f10833y) {
            return null;
        }
        return obj;
    }

    public static Object h(m mVar) {
        Object obj;
        boolean z5 = false;
        while (true) {
            try {
                obj = mVar.get();
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
    public void a(Runnable runnable, Executor executor) {
        c cVar;
        c cVar2 = c.f10817d;
        ys.d.s(executor, "Executor was null.");
        if (!isDone() && (cVar = this.f10835e) != cVar2) {
            c cVar3 = new c(runnable, executor);
            do {
                cVar3.f10819c = cVar;
                if (f10832x.d(this, cVar, cVar3)) {
                    return;
                } else {
                    cVar = this.f10835e;
                }
            } while (cVar != cVar2);
        }
        f(runnable, executor);
    }

    public final void c(StringBuilder sb2) {
        try {
            Object h6 = h(this);
            sb2.append("SUCCESS, result=[");
            d(sb2, h6);
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
    public boolean cancel(boolean z5) {
        a aVar;
        Object obj = this.f10834d;
        if (obj != null) {
            return false;
        }
        if (f10830v) {
            aVar = new a(new CancellationException("Future.cancel() was called."), z5);
        } else {
            aVar = z5 ? a.f10815b : a.f10816c;
            Objects.requireNonNull(aVar);
        }
        if (!f10832x.e(this, obj, aVar)) {
            return false;
        }
        e(this);
        return true;
    }

    public final void d(StringBuilder sb2, Object obj) {
        if (obj == null) {
            sb2.append("null");
        } else {
            if (obj == this) {
                sb2.append("this future");
                return;
            }
            sb2.append(obj.getClass().getName());
            sb2.append("@");
            sb2.append(Integer.toHexString(System.identityHashCode(obj)));
        }
    }

    @Override // java.util.concurrent.Future
    public Object get(long j, TimeUnit timeUnit) {
        long j5;
        l lVar = l.f10828c;
        long nanos = timeUnit.toNanos(j);
        if (Thread.interrupted()) {
            throw new InterruptedException();
        }
        Object obj = this.f10834d;
        if (obj != null) {
            return g(obj);
        }
        long j7 = 0;
        long nanoTime = nanos > 0 ? System.nanoTime() + nanos : 0L;
        if (nanos >= 1000) {
            l lVar2 = this.f10836i;
            if (lVar2 != lVar) {
                l lVar3 = new l();
                while (true) {
                    com.facebook.imagepipeline.nativecode.b bVar = f10832x;
                    bVar.C(lVar3, lVar2);
                    if (bVar.f(this, lVar2, lVar3)) {
                        j5 = j7;
                        do {
                            LockSupport.parkNanos(this, Math.min(nanos, 2147483647999999999L));
                            if (Thread.interrupted()) {
                                j(lVar3);
                                throw new InterruptedException();
                            }
                            Object obj2 = this.f10834d;
                            if (obj2 != null) {
                                return g(obj2);
                            }
                            nanos = nanoTime - System.nanoTime();
                        } while (nanos >= 1000);
                        j(lVar3);
                    } else {
                        long j10 = j7;
                        lVar2 = this.f10836i;
                        if (lVar2 == lVar) {
                            break;
                        }
                        j7 = j10;
                    }
                }
            }
            Object obj3 = this.f10834d;
            Objects.requireNonNull(obj3);
            return g(obj3);
        }
        j5 = 0;
        while (nanos > j5) {
            Object obj4 = this.f10834d;
            if (obj4 != null) {
                return g(obj4);
            }
            if (Thread.interrupted()) {
                throw new InterruptedException();
            }
            nanos = nanoTime - System.nanoTime();
        }
        String mVar = toString();
        String obj5 = timeUnit.toString();
        Locale locale = Locale.ROOT;
        String lowerCase = obj5.toLowerCase(locale);
        String lowerCase2 = timeUnit.toString().toLowerCase(locale);
        StringBuilder sb2 = new StringBuilder(String.valueOf(lowerCase2).length() + 28);
        sb2.append("Waited ");
        sb2.append(j);
        sb2.append(" ");
        sb2.append(lowerCase2);
        String sb3 = sb2.toString();
        if (nanos + 1000 < j5) {
            String concat = String.valueOf(sb3).concat(" (plus ");
            long j11 = -nanos;
            long convert = timeUnit.convert(j11, TimeUnit.NANOSECONDS);
            long nanos2 = j11 - timeUnit.toNanos(convert);
            boolean z5 = convert == j5 || nanos2 > 1000;
            if (convert > j5) {
                String valueOf = String.valueOf(concat);
                StringBuilder sb4 = new StringBuilder(String.valueOf(lowerCase).length() + valueOf.length() + 21);
                sb4.append(valueOf);
                sb4.append(convert);
                sb4.append(" ");
                sb4.append(lowerCase);
                String sb5 = sb4.toString();
                if (z5) {
                    sb5 = String.valueOf(sb5).concat(",");
                }
                concat = String.valueOf(sb5).concat(" ");
            }
            if (z5) {
                String valueOf2 = String.valueOf(concat);
                StringBuilder sb6 = new StringBuilder(valueOf2.length() + 33);
                sb6.append(valueOf2);
                sb6.append(nanos2);
                sb6.append(" nanoseconds ");
                concat = sb6.toString();
            }
            sb3 = String.valueOf(concat).concat("delay)");
        }
        if (isDone()) {
            throw new TimeoutException(String.valueOf(sb3).concat(" but future completed as timeout expired"));
        }
        StringBuilder sb7 = new StringBuilder(String.valueOf(mVar).length() + String.valueOf(sb3).length() + 5);
        sb7.append(sb3);
        sb7.append(" for ");
        sb7.append(mVar);
        throw new TimeoutException(sb7.toString());
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final String i() {
        if (!(this instanceof ScheduledFuture)) {
            return null;
        }
        long delay = ((ScheduledFuture) this).getDelay(TimeUnit.MILLISECONDS);
        StringBuilder sb2 = new StringBuilder(41);
        sb2.append("remaining delay=[");
        sb2.append(delay);
        sb2.append(" ms]");
        return sb2.toString();
    }

    public boolean isCancelled() {
        return this.f10834d instanceof a;
    }

    @Override // java.util.concurrent.Future
    public boolean isDone() {
        return this.f10834d != null;
    }

    public final void j(l lVar) {
        lVar.a = null;
        while (true) {
            l lVar2 = this.f10836i;
            if (lVar2 == l.f10828c) {
                return;
            }
            l lVar3 = null;
            while (lVar2 != null) {
                l lVar4 = lVar2.f10829b;
                if (lVar2.a != null) {
                    lVar3 = lVar2;
                } else if (lVar3 != null) {
                    lVar3.f10829b = lVar4;
                    if (lVar3.a == null) {
                        break;
                    }
                } else if (!f10832x.f(this, lVar2, lVar4)) {
                    break;
                }
                lVar2 = lVar4;
            }
            return;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x006e, code lost:
    
        if (r3.isEmpty() != false) goto L17;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String toString() {
        String sb2;
        StringBuilder sb3 = new StringBuilder();
        if (getClass().getName().startsWith("com.google.common.util.concurrent.")) {
            sb3.append(getClass().getSimpleName());
        } else {
            sb3.append(getClass().getName());
        }
        sb3.append('@');
        sb3.append(Integer.toHexString(System.identityHashCode(this)));
        sb3.append("[status=");
        if (isCancelled()) {
            sb3.append(DigitalCredentialModule.CODE_CANCELLED);
        } else if (isDone()) {
            c(sb3);
        } else {
            int length = sb3.length();
            sb3.append("PENDING");
            try {
                sb2 = i();
                int i5 = ei.f.a;
                if (sb2 != null) {
                }
                sb2 = null;
            } catch (RuntimeException | StackOverflowError e9) {
                String valueOf = String.valueOf(e9.getClass());
                StringBuilder sb4 = new StringBuilder(valueOf.length() + 38);
                sb4.append("Exception thrown from implementation: ");
                sb4.append(valueOf);
                sb2 = sb4.toString();
            }
            if (sb2 != null) {
                sb3.append(", info=[");
                sb3.append(sb2);
                sb3.append("]");
            }
            if (isDone()) {
                sb3.delete(length, sb3.length());
                c(sb3);
            }
        }
        sb3.append("]");
        return sb3.toString();
    }

    @Override // java.util.concurrent.Future
    public Object get() {
        Object obj;
        l lVar = l.f10828c;
        if (!Thread.interrupted()) {
            Object obj2 = this.f10834d;
            if (obj2 != null) {
                return g(obj2);
            }
            l lVar2 = this.f10836i;
            if (lVar2 != lVar) {
                l lVar3 = new l();
                do {
                    com.facebook.imagepipeline.nativecode.b bVar = f10832x;
                    bVar.C(lVar3, lVar2);
                    if (bVar.f(this, lVar2, lVar3)) {
                        do {
                            LockSupport.park(this);
                            if (!Thread.interrupted()) {
                                obj = this.f10834d;
                            } else {
                                j(lVar3);
                                throw new InterruptedException();
                            }
                        } while (obj == null);
                        return g(obj);
                    }
                    lVar2 = this.f10836i;
                } while (lVar2 != lVar);
            }
            Object obj3 = this.f10834d;
            Objects.requireNonNull(obj3);
            return g(obj3);
        }
        throw new InterruptedException();
    }
}
