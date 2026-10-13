package o9;

import android.util.SparseArray;
import com.facebook.common.references.CloseableReference;
import com.google.firebase.messaging.r;
import da.c;
import ha.e;
import ha.h;
import kotlin.jvm.internal.Intrinsics;
import oa.g;
import oa.j;

/* loaded from: classes3.dex */
public final class b implements n9.b {

    /* renamed from: d, reason: collision with root package name */
    public final r f15796d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f15797e;

    /* renamed from: i, reason: collision with root package name */
    public final SparseArray f15798i;

    /* renamed from: v, reason: collision with root package name */
    public s8.b f15799v;

    public b(r animatedFrameCache, boolean z5) {
        Intrinsics.checkNotNullParameter(animatedFrameCache, "animatedFrameCache");
        this.f15796d = animatedFrameCache;
        this.f15797e = z5;
        this.f15798i = new SparseArray();
    }

    public final synchronized void a(int i5) {
        CloseableReference closeableReference = (CloseableReference) this.f15798i.get(i5);
        if (closeableReference != null) {
            this.f15798i.delete(i5);
            closeableReference.close();
            p8.a.o(b.class, "removePreparedReference(%d) removed. Pending frames: %s", Integer.valueOf(i5), this.f15798i);
        }
    }

    @Override // n9.b
    public final synchronized void clear() {
        try {
            CloseableReference.l(this.f15799v);
            this.f15799v = null;
            int size = this.f15798i.size();
            for (int i5 = 0; i5 < size; i5++) {
                CloseableReference.l((CloseableReference) this.f15798i.valueAt(i5));
            }
            this.f15798i.clear();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // n9.b
    public final synchronized boolean contains(int i5) {
        boolean containsKey;
        r rVar = this.f15796d;
        e eVar = (e) rVar.f6260i;
        c cVar = new c((a) rVar.f6259e, i5);
        h hVar = (h) eVar;
        synchronized (hVar) {
            ha.c cVar2 = hVar.f9606e;
            synchronized (cVar2) {
                containsKey = cVar2.f9599b.containsKey(cVar);
            }
        }
        return containsKey;
    }

    @Override // n9.b
    public final synchronized CloseableReference g() {
        return j8.b.g(CloseableReference.g(this.f15799v));
    }

    @Override // n9.b
    public final synchronized CloseableReference i() {
        if (!this.f15797e) {
            return null;
        }
        return j8.b.g(this.f15796d.d());
    }

    @Override // n9.b
    public final synchronized CloseableReference j(int i5) {
        r rVar;
        rVar = this.f15796d;
        return j8.b.g(((h) ((e) rVar.f6260i)).get(new c((a) rVar.f6259e, i5)));
    }

    @Override // n9.b
    public final synchronized void k(int i5, CloseableReference bitmapReference) {
        s8.b bVar;
        Intrinsics.checkNotNullParameter(bitmapReference, "bitmapReference");
        try {
            j jVar = j.f15814d;
            int i6 = g.F;
            g gVar = new g(bitmapReference, jVar, 0, 0);
            Intrinsics.checkNotNullExpressionValue(gVar, "of(...)");
            bVar = CloseableReference.A(gVar);
            if (bVar == null) {
                CloseableReference.l(bVar);
                return;
            }
            try {
                r rVar = this.f15796d;
                s8.b a = ((h) ((e) rVar.f6260i)).a(new c((a) rVar.f6259e, i5), bVar, (u4.b) rVar.f6261v);
                if (CloseableReference.t(a)) {
                    CloseableReference.l((CloseableReference) this.f15798i.get(i5));
                    this.f15798i.put(i5, a);
                    p8.a.o(b.class, "cachePreparedFrame(%d) cached. Pending frames: %s", Integer.valueOf(i5), this.f15798i);
                }
                bVar.close();
            } catch (Throwable th2) {
                th = th2;
                CloseableReference.l(bVar);
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            bVar = null;
        }
    }

    @Override // n9.b
    public final synchronized void l(int i5, CloseableReference bitmapReference) {
        s8.b bVar;
        Intrinsics.checkNotNullParameter(bitmapReference, "bitmapReference");
        a(i5);
        try {
            j jVar = j.f15814d;
            int i6 = g.F;
            g gVar = new g(bitmapReference, jVar, 0, 0);
            Intrinsics.checkNotNullExpressionValue(gVar, "of(...)");
            bVar = CloseableReference.A(gVar);
            if (bVar != null) {
                try {
                    CloseableReference.l(this.f15799v);
                    r rVar = this.f15796d;
                    this.f15799v = ((h) ((e) rVar.f6260i)).a(new c((a) rVar.f6259e, i5), bVar, (u4.b) rVar.f6261v);
                } catch (Throwable th2) {
                    th = th2;
                    CloseableReference.l(bVar);
                    throw th;
                }
            }
            CloseableReference.l(bVar);
        } catch (Throwable th3) {
            th = th3;
            bVar = null;
        }
    }
}
