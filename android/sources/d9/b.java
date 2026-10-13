package d9;

import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Supplier;
import com.facebook.common.references.CloseableReference;
import com.facebook.drawee.drawable.d;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.interfaces.DraweeHierarchy;
import com.facebook.imagepipeline.request.ImageRequest;
import e4.m;
import ha.i;
import ha.k;
import k2.r;
import m8.e;
import o8.h;
import th.t1;

/* loaded from: classes3.dex */
public final class b extends g9.c {
    public ImageRequest A;

    /* renamed from: u, reason: collision with root package name */
    public final m f7448u;

    /* renamed from: v, reason: collision with root package name */
    public final i f7449v;

    /* renamed from: w, reason: collision with root package name */
    public CacheKey f7450w;

    /* renamed from: x, reason: collision with root package name */
    public Supplier f7451x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f7452y;

    /* renamed from: z, reason: collision with root package name */
    public ImageRequest f7453z;

    public b(Resources resources, f9.b bVar, t1 t1Var, k kVar, e eVar, i iVar) {
        super(bVar, eVar);
        this.f7448u = new m(resources, t1Var, kVar, 17);
        this.f7449v = iVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static com.facebook.drawee.drawable.m p(Drawable drawable) {
        if (drawable == 0) {
            return null;
        }
        if (drawable instanceof com.facebook.drawee.drawable.m) {
            return (com.facebook.drawee.drawable.m) drawable;
        }
        if (drawable instanceof com.facebook.drawee.drawable.c) {
            return p(((com.facebook.drawee.drawable.c) drawable).getDrawable());
        }
        if (!(drawable instanceof d)) {
            return null;
        }
        d dVar = (d) drawable;
        int length = dVar.f4433i.length;
        for (int i5 = 0; i5 < length; i5++) {
            com.facebook.drawee.drawable.m p3 = p(dVar.c(i5));
            if (p3 != null) {
                return p3;
            }
        }
        return null;
    }

    @Override // g9.c
    public final Drawable b(Object obj) {
        CloseableReference closeableReference = (CloseableReference) obj;
        try {
            ta.a.D();
            h.e(CloseableReference.t(closeableReference));
            oa.c cVar = (oa.c) closeableReference.q();
            q(cVar);
            Drawable G = this.f7448u.G(cVar);
            if (G != null) {
                return G;
            }
            throw new UnsupportedOperationException("Unrecognized image class: " + cVar);
        } finally {
            ta.a.D();
        }
    }

    @Override // g9.c
    public final oa.i d(Object obj) {
        CloseableReference closeableReference = (CloseableReference) obj;
        h.e(CloseableReference.t(closeableReference));
        oa.a aVar = (oa.a) ((oa.c) closeableReference.q());
        if (aVar.f15802e == null) {
            int width = aVar.getWidth();
            int height = aVar.getHeight();
            aVar.j();
            aVar.G();
            aVar.f15802e = new oa.i(width, height, aVar.f15801d);
        }
        return aVar.f15802e;
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public final boolean isSameImageRequest(DraweeController draweeController) {
        CacheKey cacheKey = this.f7450w;
        if (cacheKey == null || !(draweeController instanceof b)) {
            return false;
        }
        return h.f(cacheKey, ((b) draweeController).f7450w);
    }

    public final void q(oa.c cVar) {
        com.facebook.drawee.drawable.m p3;
        if (this.f7452y) {
            if (this.f9129g == null) {
                h9.a aVar = new h9.a();
                a(new i9.a(aVar));
                this.f9129g = aVar;
                GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
                if (genericDraweeHierarchy != null) {
                    j9.a aVar2 = genericDraweeHierarchy.f4479d;
                    aVar2.f12429d = aVar;
                    aVar2.invalidateSelf();
                }
            }
            h9.a aVar3 = this.f9129g;
            if (aVar3 != null) {
                String str = this.f9130h;
                if (str == null) {
                    str = "none";
                }
                aVar3.a = str;
                aVar3.invalidateSelf();
                GenericDraweeHierarchy genericDraweeHierarchy2 = this.f9128f;
                aVar3.f9573e = (genericDraweeHierarchy2 == null || (p3 = p(genericDraweeHierarchy2.f4479d)) == null) ? null : p3.f4464d;
                Object obj = this.f9131i;
                String obj2 = obj != null ? obj.toString() : null;
                if (obj2 != null) {
                    aVar3.f9574f.put("cc", obj2);
                }
                if (cVar == null) {
                    aVar3.b();
                    return;
                }
                int width = cVar.getWidth();
                int height = cVar.getHeight();
                aVar3.f9570b = width;
                aVar3.f9571c = height;
                aVar3.invalidateSelf();
                aVar3.f9572d = cVar.j();
            }
        }
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public final void setHierarchy(DraweeHierarchy draweeHierarchy) {
        if (p8.a.a.isLoggable(2)) {
            p8.a.p(g9.c.f9123t, "controller %x %s: setHierarchy: %s", Integer.valueOf(System.identityHashCode(this)), this.f9130h, draweeHierarchy);
        }
        this.a.a(draweeHierarchy != null ? f9.c.f8477d : f9.c.f8478e);
        if (this.k) {
            this.f9124b.b(this);
            m();
        }
        GenericDraweeHierarchy genericDraweeHierarchy = this.f9128f;
        if (genericDraweeHierarchy != null) {
            j9.a aVar = genericDraweeHierarchy.f4479d;
            aVar.f12429d = null;
            aVar.invalidateSelf();
            this.f9128f = null;
        }
        if (draweeHierarchy != null) {
            if (!(draweeHierarchy instanceof GenericDraweeHierarchy)) {
                throw new IllegalArgumentException();
            }
            GenericDraweeHierarchy genericDraweeHierarchy2 = (GenericDraweeHierarchy) draweeHierarchy;
            this.f9128f = genericDraweeHierarchy2;
            h9.a aVar2 = this.f9129g;
            j9.a aVar3 = genericDraweeHierarchy2.f4479d;
            aVar3.f12429d = aVar2;
            aVar3.invalidateSelf();
        }
        q(null);
    }

    @Override // g9.c
    public final String toString() {
        r j = h.j(this);
        j.h(super.toString(), "super");
        j.h(this.f7451x, "dataSourceSupplier");
        return j.toString();
    }
}
