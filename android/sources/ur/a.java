package ur;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import java.util.concurrent.locks.LockSupport;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final class a extends Thread {
    public static final /* synthetic */ AtomicIntegerFieldUpdater F = AtomicIntegerFieldUpdater.newUpdater(a.class, "workerCtl$volatile");
    public final /* synthetic */ c E;

    /* renamed from: d, reason: collision with root package name */
    public final m f19073d;

    /* renamed from: e, reason: collision with root package name */
    public final Ref.ObjectRef f19074e;

    /* renamed from: i, reason: collision with root package name */
    public b f19075i;
    private volatile int indexInArray;
    private volatile Object nextParkedWorker;

    /* renamed from: v, reason: collision with root package name */
    public long f19076v;

    /* renamed from: w, reason: collision with root package name */
    public long f19077w;
    private volatile /* synthetic */ int workerCtl$volatile;

    /* renamed from: x, reason: collision with root package name */
    public int f19078x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f19079y;

    public a(c cVar, int i5) {
        this.E = cVar;
        setDaemon(true);
        setContextClassLoader(c.class.getClassLoader());
        this.f19073d = new m();
        this.f19074e = new Ref.ObjectRef();
        this.f19075i = b.f19083v;
        this.nextParkedWorker = c.H;
        int nanoTime = (int) System.nanoTime();
        this.f19078x = nanoTime == 0 ? 42 : nanoTime;
        f(i5);
    }

    public final i a(boolean z5) {
        i e9;
        i e10;
        long j;
        b bVar = this.f19075i;
        b bVar2 = b.f19080d;
        c cVar = this.E;
        i iVar = null;
        m mVar = this.f19073d;
        if (bVar != bVar2) {
            AtomicLongFieldUpdater atomicLongFieldUpdater = c.F;
            do {
                j = atomicLongFieldUpdater.get(cVar);
                if (((int) ((9223367638808264704L & j) >> 42)) == 0) {
                    mVar.getClass();
                    loop1: while (true) {
                        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = m.f19106b;
                        i iVar2 = (i) atomicReferenceFieldUpdater.get(mVar);
                        if (iVar2 != null && iVar2.f19098e) {
                            while (!atomicReferenceFieldUpdater.compareAndSet(mVar, iVar2, null)) {
                                if (atomicReferenceFieldUpdater.get(mVar) != iVar2) {
                                    break;
                                }
                            }
                            iVar = iVar2;
                            break loop1;
                        }
                    }
                    int i5 = m.f19108d.get(mVar);
                    int i6 = m.f19107c.get(mVar);
                    while (true) {
                        if (i5 == i6 || m.f19109e.get(mVar) == 0) {
                            break;
                        }
                        i6--;
                        i c6 = mVar.c(i6, true);
                        if (c6 != null) {
                            iVar = c6;
                            break;
                        }
                    }
                    if (iVar != null) {
                        return iVar;
                    }
                    i iVar3 = (i) cVar.f19091x.d();
                    return iVar3 == null ? i(1) : iVar3;
                }
            } while (!c.F.compareAndSet(cVar, j, j - 4398046511104L));
            this.f19075i = b.f19080d;
        }
        if (z5) {
            boolean z6 = d(cVar.f19086d * 2) == 0;
            if (z6 && (e10 = e()) != null) {
                return e10;
            }
            mVar.getClass();
            i iVar4 = (i) m.f19106b.getAndSet(mVar, null);
            if (iVar4 == null) {
                iVar4 = mVar.b();
            }
            if (iVar4 != null) {
                return iVar4;
            }
            if (!z6 && (e9 = e()) != null) {
                return e9;
            }
        } else {
            i e11 = e();
            if (e11 != null) {
                return e11;
            }
        }
        return i(3);
    }

    public final int b() {
        return this.indexInArray;
    }

    public final Object c() {
        return this.nextParkedWorker;
    }

    public final int d(int i5) {
        int i6 = this.f19078x;
        int i10 = i6 ^ (i6 << 13);
        int i11 = i10 ^ (i10 >> 17);
        int i12 = i11 ^ (i11 << 5);
        this.f19078x = i12;
        int i13 = i5 - 1;
        return (i13 & i5) == 0 ? i12 & i13 : (i12 & Integer.MAX_VALUE) % i5;
    }

    public final i e() {
        int d6 = d(2);
        c cVar = this.E;
        if (d6 == 0) {
            i iVar = (i) cVar.f19090w.d();
            return iVar != null ? iVar : (i) cVar.f19091x.d();
        }
        i iVar2 = (i) cVar.f19091x.d();
        return iVar2 != null ? iVar2 : (i) cVar.f19090w.d();
    }

    public final void f(int i5) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.E.f19089v);
        sb2.append("-worker-");
        sb2.append(i5 == 0 ? "TERMINATED" : String.valueOf(i5));
        setName(sb2.toString());
        this.indexInArray = i5;
    }

    public final void g(Object obj) {
        this.nextParkedWorker = obj;
    }

    public final boolean h(b bVar) {
        b bVar2 = this.f19075i;
        boolean z5 = bVar2 == b.f19080d;
        if (z5) {
            c.F.addAndGet(this.E, 4398046511104L);
        }
        if (bVar2 != bVar) {
            this.f19075i = bVar;
        }
        return z5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r14v1, types: [T, java.lang.Object, ur.i] */
    /* JADX WARN: Type inference failed for: r7v14, types: [ur.i] */
    /* JADX WARN: Type inference failed for: r7v4 */
    /* JADX WARN: Type inference failed for: r7v5, types: [ur.i] */
    public final i i(int i5) {
        long j;
        T t5;
        long j5;
        long j7;
        T t10;
        AtomicLongFieldUpdater atomicLongFieldUpdater = c.F;
        c cVar = this.E;
        int i6 = (int) (atomicLongFieldUpdater.get(cVar) & 2097151);
        Object obj = null;
        if (i6 < 2) {
            return null;
        }
        int d6 = d(i6);
        int i10 = 0;
        long j10 = LongCompanionObject.MAX_VALUE;
        while (i10 < i6) {
            d6++;
            if (d6 > i6) {
                d6 = 1;
            }
            a aVar = (a) cVar.f19092y.b(d6);
            if (aVar != null && aVar != this) {
                m mVar = aVar.f19073d;
                if (i5 == 3) {
                    t5 = mVar.b();
                    j = 0;
                } else {
                    mVar.getClass();
                    int i11 = m.f19108d.get(mVar);
                    int i12 = m.f19107c.get(mVar);
                    boolean z5 = i5 == 1;
                    while (true) {
                        if (i11 == i12) {
                            j = 0;
                            break;
                        }
                        j = 0;
                        if (!z5 || m.f19109e.get(mVar) != 0) {
                            int i13 = i11 + 1;
                            t5 = mVar.c(i11, z5);
                            if (t5 != 0) {
                                break;
                            }
                            i11 = i13;
                        } else {
                            break;
                        }
                    }
                    t5 = obj;
                }
                Ref.ObjectRef objectRef = this.f19074e;
                if (t5 != 0) {
                    objectRef.element = t5;
                    t10 = obj;
                    j7 = -1;
                    j5 = -1;
                } else {
                    while (true) {
                        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = m.f19106b;
                        ?? r14 = (i) atomicReferenceFieldUpdater.get(mVar);
                        if (r14 == 0) {
                            j5 = -1;
                            break;
                        }
                        j5 = -1;
                        if (((r14.f19098e ? 1 : 2) & i5) == 0) {
                            break;
                        }
                        k.f19104f.getClass();
                        m mVar2 = mVar;
                        long nanoTime = System.nanoTime() - r14.f19097d;
                        long j11 = k.f19100b;
                        if (nanoTime < j11) {
                            j7 = j11 - nanoTime;
                            t10 = 0;
                            break;
                        }
                        do {
                            t10 = 0;
                            if (atomicReferenceFieldUpdater.compareAndSet(mVar2, r14, null)) {
                                objectRef.element = r14;
                                j7 = -1;
                                break;
                            }
                        } while (atomicReferenceFieldUpdater.get(mVar2) == r14);
                        mVar = mVar2;
                        obj = null;
                    }
                    j7 = -2;
                    t10 = obj;
                }
                if (j7 == j5) {
                    i iVar = (i) objectRef.element;
                    objectRef.element = t10;
                    return iVar;
                }
                if (j7 > j) {
                    j10 = Math.min(j10, j7);
                }
            }
            i10++;
            obj = null;
        }
        if (j10 == LongCompanionObject.MAX_VALUE) {
            j10 = 0;
        }
        this.f19077w = j10;
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:80:0x0004, code lost:
    
        continue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0004, code lost:
    
        continue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0004, code lost:
    
        continue;
     */
    @Override // java.lang.Thread, java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        long j;
        loop0: while (true) {
            boolean z5 = false;
            while (c.G.get(this.E) != 1) {
                b bVar = this.f19075i;
                b bVar2 = b.f19084w;
                if (bVar == bVar2) {
                    break loop0;
                }
                i a = a(this.f19079y);
                if (a != null) {
                    this.f19077w = 0L;
                    c cVar = this.E;
                    this.f19076v = 0L;
                    if (this.f19075i == b.f19082i) {
                        this.f19075i = b.f19081e;
                    }
                    if (a.f19098e) {
                        if (h(b.f19081e) && !cVar.q() && !cVar.o(c.F.get(cVar))) {
                            cVar.q();
                        }
                        try {
                            a.run();
                        } catch (Throwable th2) {
                            Thread currentThread = Thread.currentThread();
                            currentThread.getUncaughtExceptionHandler().uncaughtException(currentThread, th2);
                        }
                        c.F.addAndGet(cVar, -2097152L);
                        if (this.f19075i != bVar2) {
                            this.f19075i = b.f19083v;
                        }
                    } else {
                        try {
                            a.run();
                        } catch (Throwable th3) {
                            Thread currentThread2 = Thread.currentThread();
                            currentThread2.getUncaughtExceptionHandler().uncaughtException(currentThread2, th3);
                        }
                    }
                } else {
                    this.f19079y = false;
                    if (this.f19077w == 0) {
                        Object obj = this.nextParkedWorker;
                        a5.h hVar = c.H;
                        if (obj != hVar) {
                            F.set(this, -1);
                            while (this.nextParkedWorker != c.H) {
                                AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = F;
                                if (atomicIntegerFieldUpdater.get(this) == -1) {
                                    c cVar2 = this.E;
                                    AtomicIntegerFieldUpdater atomicIntegerFieldUpdater2 = c.G;
                                    if (atomicIntegerFieldUpdater2.get(cVar2) == 1) {
                                        break;
                                    }
                                    b bVar3 = this.f19075i;
                                    b bVar4 = b.f19084w;
                                    if (bVar3 == bVar4) {
                                        break;
                                    }
                                    h(b.f19082i);
                                    Thread.interrupted();
                                    if (this.f19076v == 0) {
                                        j = 2097151;
                                        this.f19076v = System.nanoTime() + this.E.f19088i;
                                    } else {
                                        j = 2097151;
                                    }
                                    LockSupport.parkNanos(this.E.f19088i);
                                    if (System.nanoTime() - this.f19076v >= 0) {
                                        this.f19076v = 0L;
                                        c cVar3 = this.E;
                                        synchronized (cVar3.f19092y) {
                                            try {
                                                if (!(atomicIntegerFieldUpdater2.get(cVar3) == 1)) {
                                                    AtomicLongFieldUpdater atomicLongFieldUpdater = c.F;
                                                    if (((int) (atomicLongFieldUpdater.get(cVar3) & j)) > cVar3.f19086d) {
                                                        if (atomicIntegerFieldUpdater.compareAndSet(this, -1, 1)) {
                                                            int i5 = this.indexInArray;
                                                            f(0);
                                                            cVar3.l(this, i5, 0);
                                                            int andDecrement = (int) (atomicLongFieldUpdater.getAndDecrement(cVar3) & j);
                                                            if (andDecrement != i5) {
                                                                Object b10 = cVar3.f19092y.b(andDecrement);
                                                                Intrinsics.checkNotNull(b10);
                                                                a aVar = (a) b10;
                                                                cVar3.f19092y.c(i5, aVar);
                                                                aVar.f(i5);
                                                                cVar3.l(aVar, andDecrement, i5);
                                                            }
                                                            cVar3.f19092y.c(andDecrement, null);
                                                            Unit unit = Unit.a;
                                                            this.f19075i = bVar4;
                                                        }
                                                    }
                                                }
                                            } catch (Throwable th4) {
                                                throw th4;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            c cVar4 = this.E;
                            if (this.nextParkedWorker == hVar) {
                                AtomicLongFieldUpdater atomicLongFieldUpdater2 = c.E;
                                while (true) {
                                    long j5 = atomicLongFieldUpdater2.get(cVar4);
                                    int i6 = this.indexInArray;
                                    this.nextParkedWorker = cVar4.f19092y.b((int) (j5 & 2097151));
                                    c cVar5 = cVar4;
                                    if (c.E.compareAndSet(cVar5, j5, ((j5 + 2097152) & (-2097152)) | i6)) {
                                        break;
                                    } else {
                                        cVar4 = cVar5;
                                    }
                                }
                            }
                        }
                    } else if (z5) {
                        h(b.f19082i);
                        Thread.interrupted();
                        LockSupport.parkNanos(this.f19077w);
                        this.f19077w = 0L;
                    } else {
                        z5 = true;
                    }
                }
            }
            break loop0;
        }
        h(b.f19084w);
    }
}
