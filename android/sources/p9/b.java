package p9;

import android.graphics.Bitmap;
import android.util.SparseArray;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final n9.a f16318d;

    /* renamed from: e, reason: collision with root package name */
    public final n9.b f16319e;

    /* renamed from: i, reason: collision with root package name */
    public final int f16320i;

    /* renamed from: v, reason: collision with root package name */
    public final int f16321v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ c f16322w;

    public b(c cVar, n9.a animationBackend, n9.b bitmapFrameCache, int i5, int i6) {
        Intrinsics.checkNotNullParameter(animationBackend, "animationBackend");
        Intrinsics.checkNotNullParameter(bitmapFrameCache, "bitmapFrameCache");
        this.f16322w = cVar;
        this.f16318d = animationBackend;
        this.f16319e = bitmapFrameCache;
        this.f16320i = i5;
        this.f16321v = i6;
    }

    public final boolean a(int i5, int i6) {
        CloseableReference i10;
        c cVar = this.f16322w;
        n9.a aVar = this.f16318d;
        int i11 = 2;
        try {
            if (i6 == 1) {
                i10 = this.f16319e.i();
            } else {
                if (i6 != 2) {
                    return false;
                }
                try {
                    i10 = ((PlatformBitmapFactory) cVar.f16323d).a(aVar.k, aVar.f14969l, (Bitmap.Config) cVar.f16325i);
                    i11 = -1;
                } catch (RuntimeException e9) {
                    cVar.getClass();
                    p8.a.s(c.class, "Failed to create frame bitmap", e9);
                    return false;
                }
            }
            CloseableReference closeableReference = i10;
            boolean b10 = b(i5, closeableReference, i6);
            CloseableReference.l(closeableReference);
            return (b10 || i11 == -1) ? b10 : a(i5, i11);
        } catch (Throwable th2) {
            CloseableReference.l(null);
            throw th2;
        }
    }

    public final boolean b(int i5, CloseableReference closeableReference, int i6) {
        if (!CloseableReference.t(closeableReference) || closeableReference == null) {
            return false;
        }
        s9.a aVar = (s9.a) this.f16322w.f16324e;
        Object q5 = closeableReference.q();
        Intrinsics.checkNotNullExpressionValue(q5, "get(...)");
        if (!aVar.m(i5, (Bitmap) q5)) {
            return false;
        }
        this.f16322w.getClass();
        p8.a.q("Frame %d ready.", Integer.valueOf(i5), c.class);
        synchronized (((SparseArray) this.f16322w.f16327w)) {
            this.f16319e.k(i5, closeableReference);
            Unit unit = Unit.a;
        }
        return true;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            if (this.f16319e.contains(this.f16320i)) {
                this.f16322w.getClass();
                p8.a.q("Frame %d is cached already.", Integer.valueOf(this.f16320i), c.class);
                c cVar = this.f16322w;
                synchronized (((SparseArray) cVar.f16327w)) {
                    ((SparseArray) cVar.f16327w).remove(this.f16321v);
                    Unit unit = Unit.a;
                }
                return;
            }
            if (a(this.f16320i, 1)) {
                this.f16322w.getClass();
                p8.a.q("Prepared frame %d.", Integer.valueOf(this.f16320i), c.class);
            } else {
                this.f16322w.getClass();
                p8.a.f(c.class, "Could not prepare frame %d.", Integer.valueOf(this.f16320i));
            }
            c cVar2 = this.f16322w;
            synchronized (((SparseArray) cVar2.f16327w)) {
                ((SparseArray) cVar2.f16327w).remove(this.f16321v);
                Unit unit2 = Unit.a;
            }
        } catch (Throwable th2) {
            c cVar3 = this.f16322w;
            synchronized (((SparseArray) cVar3.f16327w)) {
                ((SparseArray) cVar3.f16327w).remove(this.f16321v);
                Unit unit3 = Unit.a;
                throw th2;
            }
        }
    }
}
