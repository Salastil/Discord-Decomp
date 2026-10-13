package kotlinx.coroutines;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import java.util.concurrent.locks.LockSupport;
import kotlin.collections.ArrayDeque;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import nr.a0;
import nr.h;
import nr.i0;
import nr.j;
import nr.l0;
import nr.n0;
import nr.o0;
import nr.o1;
import nr.p0;
import nr.x;
import nr.y;
import sr.p;
import sr.z;

/* loaded from: classes3.dex */
public abstract class b extends p0 implements a0 {
    private volatile /* synthetic */ Object _delayed$volatile;
    private volatile /* synthetic */ int _isCompleted$volatile;
    private volatile /* synthetic */ Object _queue$volatile;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f13600y = AtomicReferenceFieldUpdater.newUpdater(b.class, Object.class, "_queue$volatile");
    public static final /* synthetic */ AtomicReferenceFieldUpdater E = AtomicReferenceFieldUpdater.newUpdater(b.class, Object.class, "_delayed$volatile");
    public static final /* synthetic */ AtomicIntegerFieldUpdater F = AtomicIntegerFieldUpdater.newUpdater(b.class, "_isCompleted$volatile");

    public final void A0(long j, n0 n0Var) {
        int b10;
        Thread r02;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = E;
        if (F.get(this) == 1) {
            b10 = 1;
        } else {
            o0 o0Var = (o0) atomicReferenceFieldUpdater.get(this);
            if (o0Var == null) {
                o0 o0Var2 = new o0();
                o0Var2.f15641c = j;
                while (!atomicReferenceFieldUpdater.compareAndSet(this, null, o0Var2) && atomicReferenceFieldUpdater.get(this) == null) {
                }
                Object obj = atomicReferenceFieldUpdater.get(this);
                Intrinsics.checkNotNull(obj);
                o0Var = (o0) obj;
            }
            b10 = n0Var.b(j, o0Var, this);
        }
        if (b10 != 0) {
            if (b10 == 1) {
                v0(j, n0Var);
                return;
            } else {
                if (b10 != 2) {
                    throw new IllegalStateException("unexpected result");
                }
                return;
            }
        }
        o0 o0Var3 = (o0) atomicReferenceFieldUpdater.get(this);
        if (o0Var3 != null) {
            synchronized (o0Var3) {
                n0[] n0VarArr = o0Var3.a;
                r2 = n0VarArr != null ? n0VarArr[0] : null;
            }
        }
        if (r2 != n0Var || Thread.currentThread() == (r02 = r0())) {
            return;
        }
        LockSupport.unpark(r02);
    }

    public i0 Q(long j, Runnable runnable, CoroutineContext coroutineContext) {
        return y.a.Q(j, runnable, coroutineContext);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        w0(runnable);
    }

    @Override // nr.a0
    public final void q(long j, j jVar) {
        long j5 = j > 0 ? j >= 9223372036854L ? LongCompanionObject.MAX_VALUE : 1000000 * j : 0L;
        if (j5 < 4611686018427387903L) {
            long nanoTime = System.nanoTime();
            l0 l0Var = new l0(this, j5 + nanoTime, jVar);
            A0(nanoTime, l0Var);
            jVar.w(new h(2, l0Var));
        }
    }

    @Override // nr.p0
    public void shutdown() {
        n0 b10;
        o1.a.set(null);
        F.set(this, 1);
        a5.h hVar = x.f15677c;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f13600y;
        loop0: while (true) {
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (obj != null) {
                if (!(obj instanceof p)) {
                    if (obj != hVar) {
                        p pVar = new p(8, true);
                        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type java.lang.Runnable");
                        pVar.a((Runnable) obj);
                        while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, pVar)) {
                            if (atomicReferenceFieldUpdater.get(this) != obj) {
                                break;
                            }
                        }
                        break loop0;
                    }
                    break;
                }
                ((p) obj).b();
                break;
            }
            while (!atomicReferenceFieldUpdater.compareAndSet(this, null, hVar)) {
                if (atomicReferenceFieldUpdater.get(this) != null) {
                    break;
                }
            }
            break loop0;
        }
        while (t0() <= 0) {
        }
        long nanoTime = System.nanoTime();
        while (true) {
            o0 o0Var = (o0) E.get(this);
            if (o0Var == null) {
                return;
            }
            synchronized (o0Var) {
                b10 = z.f18132b.get(o0Var) > 0 ? o0Var.b(0) : null;
            }
            if (b10 == null) {
                return;
            } else {
                v0(nanoTime, b10);
            }
        }
    }

    @Override // nr.p0
    public final long t0() {
        Runnable runnable;
        n0 n0Var;
        a5.h hVar = x.f15677c;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f13600y;
        if (!u0()) {
            x0();
            loop0: while (true) {
                Object obj = atomicReferenceFieldUpdater.get(this);
                if (obj == null) {
                    break;
                }
                if (!(obj instanceof p)) {
                    if (obj != hVar) {
                        while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, null)) {
                            if (atomicReferenceFieldUpdater.get(this) != obj) {
                                break;
                            }
                        }
                        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type java.lang.Runnable");
                        runnable = (Runnable) obj;
                        break loop0;
                    }
                    break;
                }
                Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeTaskQueueCore<java.lang.Runnable>");
                p pVar = (p) obj;
                Object d6 = pVar.d();
                if (d6 != p.f18121g) {
                    runnable = (Runnable) d6;
                    break;
                }
                p c6 = pVar.c();
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, c6) && atomicReferenceFieldUpdater.get(this) == obj) {
                }
            }
            runnable = null;
            if (runnable != null) {
                runnable.run();
                return 0L;
            }
            ArrayDeque arrayDeque = this.f15649w;
            if (((arrayDeque == null || arrayDeque.isEmpty()) ? Long.MAX_VALUE : 0L) != 0) {
                Object obj2 = atomicReferenceFieldUpdater.get(this);
                if (obj2 != null) {
                    if (obj2 instanceof p) {
                        long j = p.f18120f.get((p) obj2);
                        if (((int) (1073741823 & j)) != ((int) ((j & 1152921503533105152L) >> 30))) {
                            return 0L;
                        }
                    } else if (obj2 == hVar) {
                        return LongCompanionObject.MAX_VALUE;
                    }
                }
                o0 o0Var = (o0) E.get(this);
                if (o0Var != null) {
                    synchronized (o0Var) {
                        n0[] n0VarArr = o0Var.a;
                        n0Var = n0VarArr != null ? n0VarArr[0] : null;
                    }
                    if (n0Var != null) {
                        long nanoTime = n0Var.f15639d - System.nanoTime();
                        if (nanoTime >= 0) {
                            return nanoTime;
                        }
                    }
                }
                return LongCompanionObject.MAX_VALUE;
            }
        }
        return 0L;
    }

    public void w0(Runnable runnable) {
        x0();
        if (!y0(runnable)) {
            a.G.w0(runnable);
            return;
        }
        Thread r02 = r0();
        if (Thread.currentThread() != r02) {
            LockSupport.unpark(r02);
        }
    }

    public final void x0() {
        n0 n0Var;
        o0 o0Var = (o0) E.get(this);
        if (o0Var == null || z.f18132b.get(o0Var) == 0) {
            return;
        }
        long nanoTime = System.nanoTime();
        do {
            synchronized (o0Var) {
                try {
                    n0[] n0VarArr = o0Var.a;
                    n0 n0Var2 = n0VarArr != null ? n0VarArr[0] : null;
                    if (n0Var2 != null) {
                        n0Var = ((nanoTime - n0Var2.f15639d) > 0L ? 1 : ((nanoTime - n0Var2.f15639d) == 0L ? 0 : -1)) >= 0 ? y0(n0Var2) : false ? o0Var.b(0) : null;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        } while (n0Var != null);
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x006c, code lost:
    
        return true;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean y0(Runnable runnable) {
        loop0: while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f13600y;
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (F.get(this) != 1) {
                if (obj != null) {
                    if (!(obj instanceof p)) {
                        if (obj != x.f15677c) {
                            p pVar = new p(8, true);
                            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type java.lang.Runnable");
                            pVar.a((Runnable) obj);
                            pVar.a(runnable);
                            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, pVar)) {
                                if (atomicReferenceFieldUpdater.get(this) != obj) {
                                    break;
                                }
                            }
                            break loop0;
                        }
                        return false;
                    }
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeTaskQueueCore<java.lang.Runnable>");
                    p pVar2 = (p) obj;
                    int a = pVar2.a(runnable);
                    if (a == 0) {
                        break;
                    }
                    if (a == 1) {
                        p c6 = pVar2.c();
                        while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, c6) && atomicReferenceFieldUpdater.get(this) == obj) {
                        }
                    } else if (a == 2) {
                        return false;
                    }
                } else {
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, null, runnable)) {
                        if (atomicReferenceFieldUpdater.get(this) != null) {
                            break;
                        }
                    }
                    break loop0;
                }
            } else {
                return false;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0024, code lost:
    
        if ((sr.z.f18132b.get(r0) == 0) == false) goto L29;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean z0() {
        ArrayDeque arrayDeque = this.f15649w;
        if (arrayDeque != null ? arrayDeque.isEmpty() : true) {
            o0 o0Var = (o0) E.get(this);
            if (o0Var != null) {
            }
            Object obj = f13600y.get(this);
            if (obj != null) {
                if (obj instanceof p) {
                    long j = p.f18120f.get((p) obj);
                    return ((int) (1073741823 & j)) == ((int) ((j & 1152921503533105152L) >> 30));
                }
                if (obj == x.f15677c) {
                }
            }
            return true;
        }
        return false;
    }
}
