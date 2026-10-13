package qa;

import android.util.SparseArray;
import android.util.SparseIntArray;
import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Set;

/* loaded from: classes3.dex */
public abstract class b implements r8.d {
    public final c5.e E;
    public final x F;

    /* renamed from: d, reason: collision with root package name */
    public final Class f16689d = getClass();

    /* renamed from: e, reason: collision with root package name */
    public final r8.b f16690e;

    /* renamed from: i, reason: collision with root package name */
    public final w f16691i;

    /* renamed from: v, reason: collision with root package name */
    public final SparseArray f16692v;

    /* renamed from: w, reason: collision with root package name */
    public final Set f16693w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f16694x;

    /* renamed from: y, reason: collision with root package name */
    public final c5.e f16695y;

    public b(r8.b bVar, w wVar, x xVar) {
        bVar.getClass();
        this.f16690e = bVar;
        wVar.getClass();
        this.f16691i = wVar;
        xVar.getClass();
        this.F = xVar;
        SparseArray sparseArray = new SparseArray();
        this.f16692v = sparseArray;
        SparseIntArray sparseIntArray = new SparseIntArray(0);
        synchronized (this) {
            try {
                sparseArray.clear();
                SparseIntArray sparseIntArray2 = wVar.f16735c;
                if (sparseIntArray2 != null) {
                    for (int i5 = 0; i5 < sparseIntArray2.size(); i5++) {
                        int keyAt = sparseIntArray2.keyAt(i5);
                        int valueAt = sparseIntArray2.valueAt(i5);
                        int i6 = sparseIntArray.get(keyAt, 0);
                        SparseArray sparseArray2 = this.f16692v;
                        int g6 = g(keyAt);
                        this.f16691i.getClass();
                        sparseArray2.put(keyAt, new f(g6, valueAt, i6));
                    }
                    this.f16694x = false;
                } else {
                    this.f16694x = true;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f16693w = Collections.newSetFromMap(new IdentityHashMap());
        int i10 = 7;
        this.E = new c5.e(i10);
        this.f16695y = new c5.e(i10);
    }

    public abstract Object a(int i5);

    public final synchronized boolean b(int i5) {
        w wVar = this.f16691i;
        int i6 = wVar.a;
        int i10 = this.f16695y.f3329c;
        if (i5 > i6 - i10) {
            this.F.getClass();
            return false;
        }
        int i11 = wVar.f16734b;
        if (i5 > i11 - (i10 + this.E.f3329c)) {
            l(i11 - i5);
        }
        if (i5 <= i6 - (this.f16695y.f3329c + this.E.f3329c)) {
            return true;
        }
        this.F.getClass();
        return false;
    }

    public abstract void c(Object obj);

    public final synchronized f d(int i5) {
        try {
            f fVar = (f) this.f16692v.get(i5);
            if (fVar == null && this.f16694x) {
                if (p8.a.a.isLoggable(2)) {
                    p8.a.q("creating new bucket %s", Integer.valueOf(i5), this.f16689d);
                }
                int g6 = g(i5);
                this.f16691i.getClass();
                f fVar2 = new f(g6, Integer.MAX_VALUE, 0);
                this.f16692v.put(i5, fVar2);
                return fVar2;
            }
            return fVar;
        } finally {
        }
    }

    public abstract int e(int i5);

    public abstract int f(Object obj);

    public abstract int g(int i5);

    @Override // r8.d
    public final Object get(int i5) {
        boolean z5;
        Object obj;
        Object h6;
        synchronized (this) {
            try {
                if (i() && this.E.f3329c != 0) {
                    z5 = false;
                    o8.h.e(z5);
                }
                z5 = true;
                o8.h.e(z5);
            } finally {
            }
        }
        int e9 = e(i5);
        synchronized (this) {
            try {
                f d6 = d(e9);
                if (d6 != null && (h6 = h(d6)) != null) {
                    o8.h.e(this.f16693w.add(h6));
                    int f2 = f(h6);
                    int g6 = g(f2);
                    c5.e eVar = this.f16695y;
                    eVar.f3328b++;
                    eVar.f3329c += g6;
                    this.E.a(g6);
                    this.F.getClass();
                    k();
                    if (p8.a.a.isLoggable(2)) {
                        p8.a.o(this.f16689d, "get (reuse) (object, size) = (%x, %s)", Integer.valueOf(System.identityHashCode(h6)), Integer.valueOf(f2));
                    }
                    return h6;
                }
                int g10 = g(e9);
                if (!b(g10)) {
                    int i6 = this.f16691i.a;
                    int i10 = this.f16695y.f3329c;
                    int i11 = this.E.f3329c;
                    StringBuilder q5 = a3.e.q(i6, "Pool hard cap violation? Hard cap = ", i10, " Used size = ", " Free size = ");
                    q5.append(i11);
                    q5.append(" Request size = ");
                    q5.append(g10);
                    throw new ai.k(q5.toString());
                }
                c5.e eVar2 = this.f16695y;
                eVar2.f3328b++;
                eVar2.f3329c += g10;
                if (d6 != null) {
                    d6.f16704d++;
                }
                try {
                    obj = a(e9);
                } catch (Throwable th2) {
                    synchronized (this) {
                        this.f16695y.a(g10);
                        f d7 = d(e9);
                        if (d7 != null) {
                            o8.h.e(d7.f16704d > 0);
                            d7.f16704d--;
                        }
                        if (Error.class.isInstance(th2)) {
                            throw ((Throwable) Error.class.cast(th2));
                        }
                        if (RuntimeException.class.isInstance(th2)) {
                            throw ((Throwable) RuntimeException.class.cast(th2));
                        }
                        obj = null;
                    }
                }
                synchronized (this) {
                    try {
                        o8.h.e(this.f16693w.add(obj));
                        synchronized (this) {
                            if (i()) {
                                l(this.f16691i.f16734b);
                            }
                        }
                        return obj;
                    } finally {
                    }
                }
                this.F.getClass();
                k();
                if (p8.a.a.isLoggable(2)) {
                    p8.a.o(this.f16689d, "get (alloc) (object, size) = (%x, %s)", Integer.valueOf(System.identityHashCode(obj)), Integer.valueOf(e9));
                }
                return obj;
            } finally {
            }
        }
    }

    public synchronized Object h(f fVar) {
        Object a;
        a = fVar.a();
        if (a != null) {
            fVar.f16704d++;
        }
        return a;
    }

    public final synchronized boolean i() {
        boolean z5;
        z5 = this.f16695y.f3329c + this.E.f3329c > this.f16691i.f16734b;
        if (z5) {
            this.F.getClass();
        }
        return z5;
    }

    public boolean j(Object obj) {
        obj.getClass();
        return true;
    }

    public final void k() {
        if (p8.a.a.isLoggable(2)) {
            c5.e eVar = this.f16695y;
            Integer valueOf = Integer.valueOf(eVar.f3328b);
            Integer valueOf2 = Integer.valueOf(eVar.f3329c);
            c5.e eVar2 = this.E;
            Integer valueOf3 = Integer.valueOf(eVar2.f3328b);
            Integer valueOf4 = Integer.valueOf(eVar2.f3329c);
            if (p8.a.a.isLoggable(2)) {
                p8.a.a.v(this.f16689d.getSimpleName(), String.format(null, "Used = (%d, %d); Free = (%d, %d)", valueOf, valueOf2, valueOf3, valueOf4));
            }
        }
    }

    public final synchronized void l(int i5) {
        try {
            int i6 = this.f16695y.f3329c;
            int i10 = this.E.f3329c;
            int min = Math.min((i6 + i10) - i5, i10);
            if (min <= 0) {
                return;
            }
            if (p8.a.a.isLoggable(2)) {
                p8.a.p(this.f16689d, "trimToSize: TargetSize = %d; Initial Size = %d; Bytes to free = %d", Integer.valueOf(i5), Integer.valueOf(this.f16695y.f3329c + this.E.f3329c), Integer.valueOf(min));
            }
            k();
            for (int i11 = 0; i11 < this.f16692v.size() && min > 0; i11++) {
                f fVar = (f) this.f16692v.valueAt(i11);
                fVar.getClass();
                while (min > 0) {
                    Object a = fVar.a();
                    if (a == null) {
                        break;
                    }
                    c(a);
                    int i12 = fVar.a;
                    min -= i12;
                    this.E.a(i12);
                }
            }
            k();
            if (p8.a.a.isLoggable(2)) {
                p8.a.o(this.f16689d, "trimToSize: TargetSize = %d; Final Size = %d", Integer.valueOf(i5), Integer.valueOf(this.f16695y.f3329c + this.E.f3329c));
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:34:0x00af, code lost:
    
        if (r2.f16704d <= 0) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00b1, code lost:
    
        r5 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00b4, code lost:
    
        o8.h.e(r5);
        r2.f16704d--;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00b3, code lost:
    
        r5 = false;
     */
    @Override // s8.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void release(Object obj) {
        f fVar;
        obj.getClass();
        int f2 = f(obj);
        int g6 = g(f2);
        synchronized (this) {
            try {
                synchronized (this) {
                    fVar = (f) this.f16692v.get(f2);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (this.f16693w.remove(obj)) {
            if (fVar != null) {
                if (fVar.f16703c.size() + fVar.f16704d <= fVar.f16702b && !i() && j(obj)) {
                    int i5 = fVar.f16704d;
                    if (i5 > 0) {
                        fVar.f16704d = i5 - 1;
                        fVar.f16703c.add(obj);
                    } else {
                        p8.a.i("BUCKET", "Tried to release value %s from an empty bucket!", obj);
                    }
                    c5.e eVar = this.E;
                    eVar.f3328b++;
                    eVar.f3329c += g6;
                    this.f16695y.a(g6);
                    this.F.getClass();
                    if (p8.a.a.isLoggable(2)) {
                        p8.a.o(this.f16689d, "release (reuse) (object, size) = (%x, %s)", Integer.valueOf(System.identityHashCode(obj)), Integer.valueOf(f2));
                    }
                }
            }
            if (p8.a.a.isLoggable(2)) {
                p8.a.o(this.f16689d, "release (free) (object, size) = (%x, %s)", Integer.valueOf(System.identityHashCode(obj)), Integer.valueOf(f2));
            }
            c(obj);
            this.f16695y.a(g6);
            this.F.getClass();
        } else {
            p8.a.f(this.f16689d, "release (free, value unrecognized) (object, size) = (%x, %s)", Integer.valueOf(System.identityHashCode(obj)), Integer.valueOf(f2));
            c(obj);
            this.F.getClass();
        }
        k();
    }
}
