package sr;

import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceArray;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes3.dex */
public final class p {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f18119e = AtomicReferenceFieldUpdater.newUpdater(p.class, Object.class, "_next$volatile");

    /* renamed from: f, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f18120f = AtomicLongFieldUpdater.newUpdater(p.class, "_state$volatile");

    /* renamed from: g, reason: collision with root package name */
    public static final a5.h f18121g = new a5.h("REMOVE_FROZEN");
    private volatile /* synthetic */ Object _next$volatile;
    private volatile /* synthetic */ long _state$volatile;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f18122b;

    /* renamed from: c, reason: collision with root package name */
    public final int f18123c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ AtomicReferenceArray f18124d;

    public p(int i5, boolean z5) {
        this.a = i5;
        this.f18122b = z5;
        int i6 = i5 - 1;
        this.f18123c = i6;
        this.f18124d = new AtomicReferenceArray(i5);
        if (i6 > 1073741823) {
            throw new IllegalStateException("Check failed.");
        }
        if ((i5 & i6) != 0) {
            throw new IllegalStateException("Check failed.");
        }
    }

    public final int a(Object obj) {
        while (true) {
            AtomicLongFieldUpdater atomicLongFieldUpdater = f18120f;
            long j = atomicLongFieldUpdater.get(this);
            if ((3458764513820540928L & j) != 0) {
                return (2305843009213693952L & j) != 0 ? 2 : 1;
            }
            int i5 = (int) (1073741823 & j);
            int i6 = (int) ((1152921503533105152L & j) >> 30);
            int i10 = this.f18123c;
            if (((i6 + 2) & i10) == (i5 & i10)) {
                return 1;
            }
            boolean z5 = this.f18122b;
            AtomicReferenceArray atomicReferenceArray = this.f18124d;
            if (z5 || atomicReferenceArray.get(i6 & i10) == null) {
                if (f18120f.compareAndSet(this, j, ((-1152921503533105153L) & j) | (((i6 + 1) & 1073741823) << 30))) {
                    atomicReferenceArray.set(i6 & i10, obj);
                    p pVar = this;
                    while ((atomicLongFieldUpdater.get(pVar) & 1152921504606846976L) != 0) {
                        pVar = pVar.c();
                        AtomicReferenceArray atomicReferenceArray2 = pVar.f18124d;
                        int i11 = pVar.f18123c & i6;
                        Object obj2 = atomicReferenceArray2.get(i11);
                        if ((obj2 instanceof o) && ((o) obj2).a == i6) {
                            atomicReferenceArray2.set(i11, obj);
                        } else {
                            pVar = null;
                        }
                        if (pVar == null) {
                            return 0;
                        }
                    }
                    return 0;
                }
            } else {
                int i12 = this.a;
                if (i12 < 1024 || ((i6 - i5) & 1073741823) > (i12 >> 1)) {
                    return 1;
                }
            }
        }
    }

    public final boolean b() {
        AtomicLongFieldUpdater atomicLongFieldUpdater;
        long j;
        do {
            atomicLongFieldUpdater = f18120f;
            j = atomicLongFieldUpdater.get(this);
            if ((j & 2305843009213693952L) != 0) {
                return true;
            }
            if ((1152921504606846976L & j) != 0) {
                return false;
            }
        } while (!atomicLongFieldUpdater.compareAndSet(this, j, 2305843009213693952L | j));
        return true;
    }

    public final p c() {
        AtomicLongFieldUpdater atomicLongFieldUpdater;
        long j;
        p pVar;
        while (true) {
            atomicLongFieldUpdater = f18120f;
            j = atomicLongFieldUpdater.get(this);
            if ((j & 1152921504606846976L) != 0) {
                pVar = this;
                break;
            }
            long j5 = 1152921504606846976L | j;
            pVar = this;
            if (atomicLongFieldUpdater.compareAndSet(pVar, j, j5)) {
                j = j5;
                break;
            }
        }
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f18119e;
            p pVar2 = (p) atomicReferenceFieldUpdater.get(this);
            if (pVar2 != null) {
                return pVar2;
            }
            p pVar3 = new p(pVar.a * 2, pVar.f18122b);
            int i5 = (int) (1073741823 & j);
            int i6 = (int) ((1152921503533105152L & j) >> 30);
            while (true) {
                int i10 = pVar.f18123c;
                int i11 = i5 & i10;
                if (i11 == (i10 & i6)) {
                    break;
                }
                Object obj = pVar.f18124d.get(i11);
                if (obj == null) {
                    obj = new o(i5);
                }
                pVar3.f18124d.set(pVar3.f18123c & i5, obj);
                i5++;
            }
            atomicLongFieldUpdater.set(pVar3, (-1152921504606846977L) & j);
            while (!atomicReferenceFieldUpdater.compareAndSet(this, null, pVar3) && atomicReferenceFieldUpdater.get(this) == null) {
            }
        }
    }

    public final Object d() {
        p pVar = this;
        while (true) {
            AtomicLongFieldUpdater atomicLongFieldUpdater = f18120f;
            long j = atomicLongFieldUpdater.get(pVar);
            if ((j & 1152921504606846976L) != 0) {
                return f18121g;
            }
            int i5 = (int) (j & 1073741823);
            int i6 = pVar.f18123c;
            int i10 = i5 & i6;
            if ((((int) ((1152921503533105152L & j) >> 30)) & i6) == i10) {
                break;
            }
            AtomicReferenceArray atomicReferenceArray = pVar.f18124d;
            Object obj = atomicReferenceArray.get(i10);
            boolean z5 = pVar.f18122b;
            if (obj == null) {
                if (z5) {
                    break;
                }
            } else {
                if (obj instanceof o) {
                    break;
                }
                long j5 = (i5 + 1) & 1073741823;
                if (f18120f.compareAndSet(pVar, j, (j & (-1073741824)) | j5)) {
                    atomicReferenceArray.set(i10, null);
                    return obj;
                }
                pVar = this;
                if (z5) {
                    while (true) {
                        long j7 = atomicLongFieldUpdater.get(pVar);
                        int i11 = (int) (j7 & 1073741823);
                        if ((j7 & 1152921504606846976L) != 0) {
                            pVar = pVar.c();
                        } else {
                            p pVar2 = pVar;
                            if (f18120f.compareAndSet(pVar2, j7, (j7 & (-1073741824)) | j5)) {
                                pVar2.f18124d.set(i11 & pVar2.f18123c, null);
                                pVar = null;
                            } else {
                                pVar = pVar2;
                            }
                        }
                        if (pVar == null) {
                            return obj;
                        }
                    }
                }
            }
        }
        return null;
    }
}
