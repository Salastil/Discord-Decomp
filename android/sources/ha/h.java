package ha;

import android.os.SystemClock;
import com.facebook.common.internal.Supplier;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.cache.MemoryCacheParams;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class h implements e, i {

    /* renamed from: d, reason: collision with root package name */
    public final c f9605d;

    /* renamed from: e, reason: collision with root package name */
    public final c f9606e;

    /* renamed from: i, reason: collision with root package name */
    public final m f9607i;

    /* renamed from: v, reason: collision with root package name */
    public final Supplier f9608v;

    /* renamed from: w, reason: collision with root package name */
    public MemoryCacheParams f9609w;

    /* renamed from: x, reason: collision with root package name */
    public long f9610x;

    public h(m mVar, Supplier supplier) {
        new WeakHashMap();
        this.f9607i = mVar;
        this.f9605d = new c(new u4.b(this, mVar));
        this.f9606e = new c(new u4.b(this, mVar));
        this.f9608v = supplier;
        MemoryCacheParams memoryCacheParams = (MemoryCacheParams) supplier.get();
        o8.h.d(memoryCacheParams, "mMemoryCacheParamsSupplier returned null");
        this.f9609w = memoryCacheParams;
        this.f9610x = SystemClock.uptimeMillis();
    }

    public static void d(d dVar) {
        u4.b bVar;
        if (dVar == null || (bVar = dVar.f9604e) == null) {
            return;
        }
        bVar.m(dVar.a, false);
    }

    @Override // ha.i
    public final int G0(o8.f fVar) {
        ArrayList f2;
        ArrayList f10;
        synchronized (this) {
            f2 = this.f9605d.f(fVar);
            f10 = this.f9606e.f(fVar);
            b(f10);
        }
        Iterator it = f10.iterator();
        while (it.hasNext()) {
            CloseableReference.l(g((d) it.next()));
        }
        Iterator it2 = f2.iterator();
        while (it2.hasNext()) {
            d((d) it2.next());
        }
        e();
        c();
        return f10.size();
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x006e, code lost:
    
        if (r5 <= (r7.f9609w.a - r4)) goto L44;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final s8.b a(Object obj, CloseableReference closeableReference, u4.b bVar) {
        d dVar;
        boolean z5;
        s8.b bVar2;
        CloseableReference closeableReference2;
        obj.getClass();
        closeableReference.getClass();
        e();
        synchronized (this) {
            dVar = (d) this.f9605d.e(obj);
            d dVar2 = (d) this.f9606e.e(obj);
            z5 = true;
            bVar2 = null;
            if (dVar2 != null) {
                synchronized (this) {
                    o8.h.e(!dVar2.f9603d);
                    dVar2.f9603d = true;
                    closeableReference2 = g(dVar2);
                }
                CloseableReference.l(closeableReference2);
                d(dVar);
                c();
                return bVar2;
            }
            closeableReference2 = null;
            int c6 = this.f9607i.c(closeableReference.q());
            synchronized (this) {
                if (c6 <= this.f9609w.f4573e) {
                    synchronized (this) {
                        int a = this.f9606e.a() - this.f9605d.a();
                        if (a <= this.f9609w.f4570b - 1) {
                            synchronized (this) {
                                int c8 = this.f9606e.c() - this.f9605d.c();
                            }
                        }
                    }
                }
                z5 = false;
            }
        }
        if (z5) {
            d dVar3 = new d(obj, closeableReference, bVar, -1);
            this.f9606e.d(obj, dVar3);
            bVar2 = f(dVar3);
        }
        CloseableReference.l(closeableReference2);
        d(dVar);
        c();
        return bVar2;
    }

    public final synchronized void b(ArrayList arrayList) {
        if (arrayList != null) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                d dVar = (d) it.next();
                synchronized (this) {
                    dVar.getClass();
                    o8.h.e(!dVar.f9603d);
                    dVar.f9603d = true;
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x003f  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0059  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x006d A[ORIG_RETURN, RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c() {
        int i5;
        int i6;
        int a;
        int min;
        int i10;
        int i11;
        ArrayList h6;
        synchronized (this) {
            MemoryCacheParams memoryCacheParams = this.f9609w;
            i5 = memoryCacheParams.f4572d;
            i6 = memoryCacheParams.f4570b;
            synchronized (this) {
                a = this.f9606e.a() - this.f9605d.a();
            }
            h6 = h(min, Math.min(i10, i11 - (this.f9606e.c() - this.f9605d.c())));
            b(h6);
            if (h6 != null) {
                Iterator it = h6.iterator();
                while (it.hasNext()) {
                    CloseableReference.l(g((d) it.next()));
                }
            }
            if (h6 == null) {
                Iterator it2 = h6.iterator();
                while (it2.hasNext()) {
                    d((d) it2.next());
                }
                return;
            }
            return;
        }
        min = Math.min(i5, i6 - a);
        MemoryCacheParams memoryCacheParams2 = this.f9609w;
        i10 = memoryCacheParams2.f4571c;
        i11 = memoryCacheParams2.a;
        synchronized (this) {
            h6 = h(min, Math.min(i10, i11 - (this.f9606e.c() - this.f9605d.c())));
            b(h6);
        }
        if (h6 != null) {
        }
        if (h6 == null) {
        }
    }

    public final synchronized void e() {
        if (this.f9610x + this.f9609w.f4574f > SystemClock.uptimeMillis()) {
            return;
        }
        this.f9610x = SystemClock.uptimeMillis();
        MemoryCacheParams memoryCacheParams = (MemoryCacheParams) this.f9608v.get();
        o8.h.d(memoryCacheParams, "mMemoryCacheParamsSupplier returned null");
        this.f9609w = memoryCacheParams;
    }

    public final synchronized s8.b f(d dVar) {
        synchronized (this) {
            o8.h.e(!dVar.f9603d);
            dVar.f9602c++;
        }
        return CloseableReference.C(dVar.f9601b.q(), new e4.e(this, dVar), CloseableReference.f4407x);
        return CloseableReference.C(dVar.f9601b.q(), new e4.e(this, dVar), CloseableReference.f4407x);
    }

    public final synchronized CloseableReference g(d dVar) {
        dVar.getClass();
        return (dVar.f9603d && dVar.f9602c == 0) ? dVar.f9601b : null;
    }

    @Override // ha.i
    public final synchronized boolean g0(hc.m mVar) {
        return !this.f9606e.b(mVar).isEmpty();
    }

    @Override // ha.i
    public final CloseableReference get(Object obj) {
        d dVar;
        Object obj2;
        s8.b f2;
        obj.getClass();
        synchronized (this) {
            try {
                dVar = (d) this.f9605d.e(obj);
                c cVar = this.f9606e;
                synchronized (cVar) {
                    obj2 = cVar.f9599b.get(obj);
                }
                d dVar2 = (d) obj2;
                f2 = dVar2 != null ? f(dVar2) : null;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        d(dVar);
        e();
        c();
        return f2;
    }

    public final synchronized ArrayList h(int i5, int i6) {
        Object next;
        int max = Math.max(i5, 0);
        int max2 = Math.max(i6, 0);
        if (this.f9605d.a() <= max && this.f9605d.c() <= max2) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        while (true) {
            if (this.f9605d.a() <= max && this.f9605d.c() <= max2) {
                return arrayList;
            }
            c cVar = this.f9605d;
            synchronized (cVar) {
                next = cVar.f9599b.isEmpty() ? null : cVar.f9599b.keySet().iterator().next();
            }
            if (next == null) {
                throw new IllegalStateException(String.format("key is null, but exclusiveEntries count: %d, size: %d", Integer.valueOf(this.f9605d.a()), Integer.valueOf(this.f9605d.c())));
            }
            this.f9605d.e(next);
            arrayList.add((d) this.f9606e.e(next));
        }
    }

    @Override // ha.i
    public final CloseableReference q(Object obj, CloseableReference closeableReference) {
        return a(obj, closeableReference, null);
    }
}
