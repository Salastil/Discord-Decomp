package ur;

import fo.n;
import java.io.Closeable;
import java.lang.Thread;
import java.util.ArrayList;
import java.util.concurrent.Executor;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import java.util.concurrent.locks.LockSupport;
import kotlin.jvm.internal.Intrinsics;
import nr.x;
import sr.s;

/* loaded from: classes3.dex */
public final class c implements Executor, Closeable {
    public static final /* synthetic */ AtomicLongFieldUpdater E = AtomicLongFieldUpdater.newUpdater(c.class, "parkedWorkersStack$volatile");
    public static final /* synthetic */ AtomicLongFieldUpdater F = AtomicLongFieldUpdater.newUpdater(c.class, "controlState$volatile");
    public static final /* synthetic */ AtomicIntegerFieldUpdater G = AtomicIntegerFieldUpdater.newUpdater(c.class, "_isTerminated$volatile");
    public static final a5.h H = new a5.h("NOT_IN_STACK");
    private volatile /* synthetic */ int _isTerminated$volatile;
    private volatile /* synthetic */ long controlState$volatile;

    /* renamed from: d, reason: collision with root package name */
    public final int f19086d;

    /* renamed from: e, reason: collision with root package name */
    public final int f19087e;

    /* renamed from: i, reason: collision with root package name */
    public final long f19088i;
    private volatile /* synthetic */ long parkedWorkersStack$volatile;

    /* renamed from: v, reason: collision with root package name */
    public final String f19089v;

    /* renamed from: w, reason: collision with root package name */
    public final f f19090w;

    /* renamed from: x, reason: collision with root package name */
    public final f f19091x;

    /* renamed from: y, reason: collision with root package name */
    public final s f19092y;

    public c(long j, String str, int i5, int i6) {
        this.f19086d = i5;
        this.f19087e = i6;
        this.f19088i = j;
        this.f19089v = str;
        if (i5 < 1) {
            throw new IllegalArgumentException(s4.h.e(i5, "Core pool size ", " should be at least 1").toString());
        }
        if (i6 < i5) {
            throw new IllegalArgumentException(a3.e.f(i6, i5, "Max pool size ", " should be greater than or equals to core pool size ").toString());
        }
        if (i6 > 2097150) {
            throw new IllegalArgumentException(s4.h.e(i6, "Max pool size ", " should not exceed maximal supported number of threads 2097150").toString());
        }
        if (j <= 0) {
            throw new IllegalArgumentException(a3.e.g(j, "Idle worker keep alive time ", " must be positive").toString());
        }
        this.f19090w = new f();
        this.f19091x = new f();
        this.f19092y = new s((i5 + 1) * 2);
        this.controlState$volatile = i5 << 42;
    }

    public static /* synthetic */ void i(c cVar, Runnable runnable, int i5) {
        cVar.f(runnable, false, (i5 & 4) == 0);
    }

    public final int c() {
        synchronized (this.f19092y) {
            try {
                if (G.get(this) == 1) {
                    return -1;
                }
                AtomicLongFieldUpdater atomicLongFieldUpdater = F;
                long j = atomicLongFieldUpdater.get(this);
                int i5 = (int) (j & 2097151);
                int i6 = i5 - ((int) ((j & 4398044413952L) >> 21));
                if (i6 < 0) {
                    i6 = 0;
                }
                if (i6 >= this.f19086d) {
                    return 0;
                }
                if (i5 >= this.f19087e) {
                    return 0;
                }
                int i10 = ((int) (atomicLongFieldUpdater.get(this) & 2097151)) + 1;
                if (i10 <= 0 || this.f19092y.b(i10) != null) {
                    throw new IllegalArgumentException("Failed requirement.");
                }
                a aVar = new a(this, i10);
                this.f19092y.c(i10, aVar);
                if (i10 != ((int) (2097151 & atomicLongFieldUpdater.incrementAndGet(this)))) {
                    throw new IllegalArgumentException("Failed requirement.");
                }
                int i11 = i6 + 1;
                aVar.start();
                return i11;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:39:0x0088, code lost:
    
        if (r1 == null) goto L39;
     */
    @Override // java.io.Closeable, java.lang.AutoCloseable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void close() {
        int i5;
        i iVar;
        if (G.compareAndSet(this, 0, 1)) {
            Thread currentThread = Thread.currentThread();
            a aVar = currentThread instanceof a ? (a) currentThread : null;
            if (aVar == null || !Intrinsics.areEqual(aVar.E, this)) {
                aVar = null;
            }
            synchronized (this.f19092y) {
                i5 = (int) (F.get(this) & 2097151);
            }
            if (1 <= i5) {
                int i6 = 1;
                while (true) {
                    Object b10 = this.f19092y.b(i6);
                    Intrinsics.checkNotNull(b10);
                    a aVar2 = (a) b10;
                    if (aVar2 != aVar) {
                        while (aVar2.getState() != Thread.State.TERMINATED) {
                            LockSupport.unpark(aVar2);
                            aVar2.join(10000L);
                        }
                        m mVar = aVar2.f19073d;
                        f fVar = this.f19091x;
                        mVar.getClass();
                        i iVar2 = (i) m.f19106b.getAndSet(mVar, null);
                        if (iVar2 != null) {
                            fVar.a(iVar2);
                        }
                        while (true) {
                            i b11 = mVar.b();
                            if (b11 == null) {
                                break;
                            } else {
                                fVar.a(b11);
                            }
                        }
                    }
                    if (i6 == i5) {
                        break;
                    } else {
                        i6++;
                    }
                }
            }
            this.f19091x.b();
            this.f19090w.b();
            while (true) {
                if (aVar != null) {
                    iVar = aVar.a(true);
                }
                iVar = (i) this.f19090w.d();
                if (iVar == null && (iVar = (i) this.f19091x.d()) == null) {
                    break;
                }
                try {
                    iVar.run();
                } catch (Throwable th2) {
                    Thread currentThread2 = Thread.currentThread();
                    currentThread2.getUncaughtExceptionHandler().uncaughtException(currentThread2, th2);
                }
            }
            if (aVar != null) {
                aVar.h(b.f19084w);
            }
            E.set(this, 0L);
            F.set(this, 0L);
        }
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        i(this, runnable, 6);
    }

    public final void f(Runnable runnable, boolean z5, boolean z6) {
        i jVar;
        b bVar;
        k.f19104f.getClass();
        long nanoTime = System.nanoTime();
        if (runnable instanceof i) {
            jVar = (i) runnable;
            jVar.f19097d = nanoTime;
            jVar.f19098e = z5;
        } else {
            jVar = new j(runnable, nanoTime, z5);
        }
        boolean z7 = jVar.f19098e;
        AtomicLongFieldUpdater atomicLongFieldUpdater = F;
        long addAndGet = z7 ? atomicLongFieldUpdater.addAndGet(this, 2097152L) : 0L;
        Thread currentThread = Thread.currentThread();
        a aVar = currentThread instanceof a ? (a) currentThread : null;
        if (aVar == null || !Intrinsics.areEqual(aVar.E, this)) {
            aVar = null;
        }
        if (aVar != null && (bVar = aVar.f19075i) != b.f19084w && (jVar.f19098e || bVar != b.f19081e)) {
            aVar.f19079y = true;
            m mVar = aVar.f19073d;
            if (z6) {
                jVar = mVar.a(jVar);
            } else {
                mVar.getClass();
                i iVar = (i) m.f19106b.getAndSet(mVar, jVar);
                jVar = iVar == null ? null : mVar.a(iVar);
            }
        }
        if (jVar != null) {
            if (!(jVar.f19098e ? this.f19091x.a(jVar) : this.f19090w.a(jVar))) {
                throw new RejectedExecutionException(com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), this.f19089v, " was terminated"));
            }
        }
        if (z7) {
            if (q() || o(addAndGet)) {
                return;
            }
            q();
            return;
        }
        if (q() || o(atomicLongFieldUpdater.get(this))) {
            return;
        }
        q();
    }

    public final void l(a aVar, int i5, int i6) {
        while (true) {
            long j = E.get(this);
            int i10 = (int) (2097151 & j);
            long j5 = (2097152 + j) & (-2097152);
            if (i10 == i5) {
                if (i6 == 0) {
                    Object c6 = aVar.c();
                    while (true) {
                        if (c6 == H) {
                            i10 = -1;
                            break;
                        }
                        if (c6 == null) {
                            i10 = 0;
                            break;
                        }
                        a aVar2 = (a) c6;
                        int b10 = aVar2.b();
                        if (b10 != 0) {
                            i10 = b10;
                            break;
                        }
                        c6 = aVar2.c();
                    }
                } else {
                    i10 = i6;
                }
            }
            if (i10 >= 0) {
                if (E.compareAndSet(this, j, i10 | j5)) {
                    return;
                }
            }
        }
    }

    public final boolean o(long j) {
        int i5 = ((int) (2097151 & j)) - ((int) ((j & 4398044413952L) >> 21));
        if (i5 < 0) {
            i5 = 0;
        }
        int i6 = this.f19086d;
        if (i5 < i6) {
            int c6 = c();
            if (c6 == 1 && i6 > 1) {
                c();
            }
            if (c6 > 0) {
                return true;
            }
        }
        return false;
    }

    public final boolean q() {
        a5.h hVar;
        int i5;
        while (true) {
            long j = E.get(this);
            a aVar = (a) this.f19092y.b((int) (2097151 & j));
            if (aVar == null) {
                aVar = null;
            } else {
                long j5 = (2097152 + j) & (-2097152);
                Object c6 = aVar.c();
                while (true) {
                    hVar = H;
                    if (c6 == hVar) {
                        i5 = -1;
                        break;
                    }
                    if (c6 == null) {
                        i5 = 0;
                        break;
                    }
                    a aVar2 = (a) c6;
                    i5 = aVar2.b();
                    if (i5 != 0) {
                        break;
                    }
                    c6 = aVar2.c();
                }
                if (i5 >= 0) {
                    if (E.compareAndSet(this, j, i5 | j5)) {
                        aVar.g(hVar);
                    } else {
                        continue;
                    }
                } else {
                    continue;
                }
            }
            if (aVar == null) {
                return false;
            }
            if (a.F.compareAndSet(aVar, -1, 0)) {
                LockSupport.unpark(aVar);
                return true;
            }
        }
    }

    public final String toString() {
        ArrayList arrayList = new ArrayList();
        s sVar = this.f19092y;
        int a = sVar.a();
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        int i12 = 0;
        for (int i13 = 1; i13 < a; i13++) {
            a aVar = (a) sVar.b(i13);
            if (aVar != null) {
                m mVar = aVar.f19073d;
                mVar.getClass();
                int i14 = m.f19106b.get(mVar) != null ? (m.f19107c.get(mVar) - m.f19108d.get(mVar)) + 1 : m.f19107c.get(mVar) - m.f19108d.get(mVar);
                int ordinal = aVar.f19075i.ordinal();
                if (ordinal == 0) {
                    i5++;
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(i14);
                    sb2.append('c');
                    arrayList.add(sb2.toString());
                } else if (ordinal == 1) {
                    i6++;
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append(i14);
                    sb3.append('b');
                    arrayList.add(sb3.toString());
                } else if (ordinal == 2) {
                    i10++;
                } else if (ordinal == 3) {
                    i11++;
                    if (i14 > 0) {
                        StringBuilder sb4 = new StringBuilder();
                        sb4.append(i14);
                        sb4.append('d');
                        arrayList.add(sb4.toString());
                    }
                } else {
                    if (ordinal != 4) {
                        throw new n();
                    }
                    i12++;
                }
            }
        }
        long j = F.get(this);
        StringBuilder sb5 = new StringBuilder();
        sb5.append(this.f19089v);
        sb5.append('@');
        sb5.append(x.o(this));
        sb5.append("[Pool Size {core = ");
        int i15 = this.f19086d;
        sb5.append(i15);
        sb5.append(", max = ");
        a3.e.y(sb5, this.f19087e, "}, Worker States {CPU = ", i5, ", blocking = ");
        a3.e.y(sb5, i6, ", parked = ", i10, ", dormant = ");
        a3.e.y(sb5, i11, ", terminated = ", i12, "}, running workers queues = ");
        sb5.append(arrayList);
        sb5.append(", global CPU queue size = ");
        sb5.append(this.f19090w.c());
        sb5.append(", global blocking queue size = ");
        sb5.append(this.f19091x.c());
        sb5.append(", Control State {created workers= ");
        sb5.append((int) (2097151 & j));
        sb5.append(", blocking tasks = ");
        sb5.append((int) ((4398044413952L & j) >> 21));
        sb5.append(", CPUs acquired = ");
        sb5.append(i15 - ((int) ((j & 9223367638808264704L) >> 42)));
        sb5.append("}]");
        return sb5.toString();
    }
}
