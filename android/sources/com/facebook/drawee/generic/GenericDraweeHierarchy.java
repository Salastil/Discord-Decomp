package com.facebook.drawee.generic;

import android.content.res.Resources;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import com.facebook.drawee.drawable.ScalingUtils$ScaleType;
import com.facebook.drawee.drawable.d;
import com.facebook.drawee.drawable.e;
import com.facebook.drawee.drawable.g;
import com.facebook.drawee.drawable.j;
import com.facebook.drawee.drawable.m;
import com.facebook.drawee.drawable.o;
import com.facebook.drawee.interfaces.DraweeHierarchy;
import j9.a;
import j9.b;
import j9.c;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import o8.h;

/* loaded from: classes3.dex */
public final class GenericDraweeHierarchy implements DraweeHierarchy {
    public final ColorDrawable a;

    /* renamed from: b, reason: collision with root package name */
    public final Resources f4477b;

    /* renamed from: c, reason: collision with root package name */
    public b f4478c;

    /* renamed from: d, reason: collision with root package name */
    public final a f4479d;

    /* renamed from: e, reason: collision with root package name */
    public final d f4480e;

    /* renamed from: f, reason: collision with root package name */
    public final e f4481f;

    public GenericDraweeHierarchy(GenericDraweeHierarchyBuilder genericDraweeHierarchyBuilder) {
        int i5;
        ColorDrawable colorDrawable = new ColorDrawable(0);
        this.a = colorDrawable;
        ta.a.D();
        this.f4477b = genericDraweeHierarchyBuilder.a;
        this.f4478c = genericDraweeHierarchyBuilder.f4497q;
        e eVar = new e(colorDrawable);
        this.f4481f = eVar;
        List list = genericDraweeHierarchyBuilder.f4495o;
        int size = list != null ? list.size() : 1;
        int i6 = (size == 0 ? 1 : size) + (genericDraweeHierarchyBuilder.f4496p != null ? 1 : 0);
        Drawable[] drawableArr = new Drawable[i6 + 6];
        drawableArr[0] = b(genericDraweeHierarchyBuilder.f4494n, null);
        drawableArr[1] = b(genericDraweeHierarchyBuilder.f4486d, genericDraweeHierarchyBuilder.f4487e);
        ScalingUtils$ScaleType scalingUtils$ScaleType = genericDraweeHierarchyBuilder.f4492l;
        eVar.setColorFilter(genericDraweeHierarchyBuilder.f4493m);
        drawableArr[2] = c.e(eVar, scalingUtils$ScaleType);
        drawableArr[3] = b(genericDraweeHierarchyBuilder.j, genericDraweeHierarchyBuilder.k);
        drawableArr[4] = b(genericDraweeHierarchyBuilder.f4488f, genericDraweeHierarchyBuilder.f4489g);
        drawableArr[5] = b(genericDraweeHierarchyBuilder.f4490h, genericDraweeHierarchyBuilder.f4491i);
        if (i6 > 0) {
            List list2 = genericDraweeHierarchyBuilder.f4495o;
            if (list2 != null) {
                Iterator it = list2.iterator();
                i5 = 0;
                while (it.hasNext()) {
                    drawableArr[i5 + 6] = b((Drawable) it.next(), null);
                    i5++;
                }
            } else {
                i5 = 1;
            }
            StateListDrawable stateListDrawable = genericDraweeHierarchyBuilder.f4496p;
            if (stateListDrawable != null) {
                drawableArr[i5 + 6] = b(stateListDrawable, null);
            }
        }
        d dVar = new d(drawableArr);
        this.f4480e = dVar;
        dVar.I = genericDraweeHierarchyBuilder.f4484b;
        if (dVar.H == 1) {
            dVar.H = 0;
        }
        a aVar = new a(c.d(dVar, this.f4478c));
        aVar.f12429d = null;
        this.f4479d = aVar;
        aVar.mutate();
        i();
        ta.a.D();
    }

    @Override // com.facebook.drawee.interfaces.DraweeHierarchy
    public final a a() {
        return this.f4479d;
    }

    public final Drawable b(Drawable drawable, ScalingUtils$ScaleType scalingUtils$ScaleType) {
        return c.e(c.c(drawable, this.f4478c, this.f4477b), scalingUtils$ScaleType);
    }

    public final void c(int i5) {
        if (i5 >= 0) {
            d dVar = this.f4480e;
            dVar.H = 0;
            dVar.N[i5] = true;
            dVar.invalidateSelf();
        }
    }

    public final void d() {
        e(1);
        e(2);
        e(3);
        e(4);
        e(5);
    }

    public final void e(int i5) {
        if (i5 >= 0) {
            d dVar = this.f4480e;
            dVar.H = 0;
            dVar.N[i5] = false;
            dVar.invalidateSelf();
        }
    }

    public final ScalingUtils$ScaleType f() {
        if (g(2) instanceof m) {
            return h(2).f4464d;
        }
        return null;
    }

    public final com.facebook.drawee.drawable.c g(int i5) {
        d dVar = this.f4480e;
        com.facebook.drawee.drawable.c[] cVarArr = dVar.f4434v;
        if (!(i5 >= 0)) {
            throw new IllegalArgumentException();
        }
        if (!(i5 < cVarArr.length)) {
            throw new IllegalArgumentException();
        }
        if (cVarArr[i5] == null) {
            cVarArr[i5] = new com.facebook.drawee.drawable.a(dVar, i5);
        }
        com.facebook.drawee.drawable.c cVar = cVarArr[i5];
        cVar.getDrawable();
        return cVar.getDrawable() instanceof m ? (m) cVar.getDrawable() : cVar;
    }

    public final m h(int i5) {
        com.facebook.drawee.drawable.c g6 = g(i5);
        if (g6 instanceof m) {
            return (m) g6;
        }
        Drawable e9 = c.e(g6.setDrawable(c.a), o.f4476i);
        g6.setDrawable(e9);
        h.d(e9, "Parent has no child drawable!");
        return (m) e9;
    }

    public final void i() {
        d dVar = this.f4480e;
        if (dVar != null) {
            dVar.O++;
            dVar.H = 0;
            Arrays.fill(dVar.N, true);
            dVar.invalidateSelf();
            d();
            c(1);
            dVar.b();
            dVar.a();
        }
    }

    public final void j(ScalingUtils$ScaleType scaleType) {
        scaleType.getClass();
        m h6 = h(2);
        Intrinsics.checkNotNullParameter(scaleType, "scaleType");
        if (h.f(h6.f4464d, scaleType)) {
            return;
        }
        h6.f4464d = scaleType;
        h6.h();
        h6.invalidateSelf();
    }

    public final void k(Drawable drawable, int i5) {
        if (drawable == null) {
            this.f4480e.d(null, i5);
        } else {
            g(i5).setDrawable(c.c(drawable, this.f4478c, this.f4477b));
        }
    }

    public final void l(int i5) {
        d dVar = this.f4480e;
        dVar.I = i5;
        if (dVar.H == 1) {
            dVar.H = 0;
        }
    }

    public final void m(Drawable drawable, float f2, boolean z5) {
        Drawable c6 = c.c(drawable, this.f4478c, this.f4477b);
        c6.mutate();
        this.f4481f.setDrawable(c6);
        d dVar = this.f4480e;
        dVar.O++;
        d();
        c(2);
        o(f2);
        if (z5) {
            dVar.b();
        }
        dVar.a();
    }

    public final void n(Drawable drawable) {
        h.b("The given index does not correspond to an overlay image.", 6 < this.f4480e.f4433i.length);
        k(drawable, 6);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void o(float f2) {
        Drawable c6 = this.f4480e.c(3);
        if (c6 == 0) {
            return;
        }
        if (f2 >= 0.999f) {
            if (c6 instanceof Animatable) {
                ((Animatable) c6).stop();
            }
            e(3);
        } else {
            if (c6 instanceof Animatable) {
                ((Animatable) c6).start();
            }
            c(3);
        }
        c6.setLevel(Math.round(f2 * 10000.0f));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void p(b bVar) {
        this.f4478c = bVar;
        ColorDrawable colorDrawable = c.a;
        a aVar = this.f4479d;
        Drawable drawable = aVar.getDrawable();
        if (bVar == null || bVar.a != 1) {
            if (drawable instanceof j) {
                aVar.setDrawable(((j) drawable).setCurrent(colorDrawable));
                colorDrawable.setCallback(null);
            }
        } else if (drawable instanceof j) {
            j jVar = (j) drawable;
            c.b(jVar, bVar);
            jVar.F = bVar.f12433d;
            jVar.invalidateSelf();
        } else {
            aVar.setDrawable(c.d(aVar.setDrawable(colorDrawable), bVar));
        }
        for (int i5 = 0; i5 < this.f4480e.f4433i.length; i5++) {
            com.facebook.drawee.drawable.c g6 = g(i5);
            b bVar2 = this.f4478c;
            while (true) {
                Object drawable2 = g6.getDrawable();
                if (drawable2 == g6 || !(drawable2 instanceof com.facebook.drawee.drawable.c)) {
                    break;
                } else {
                    g6 = (com.facebook.drawee.drawable.c) drawable2;
                }
            }
            Drawable drawable3 = g6.getDrawable();
            if (bVar2 == null || bVar2.a != 2) {
                if (drawable3 instanceof g) {
                    g gVar = (g) drawable3;
                    gVar.a(false);
                    gVar.b();
                    gVar.setBorder(0, 0.0f);
                    gVar.e(0.0f);
                    gVar.f();
                    gVar.c(false);
                    int i6 = com.facebook.drawee.drawable.h.a0;
                    gVar.d();
                }
            } else if (drawable3 instanceof g) {
                c.b((g) drawable3, bVar2);
            } else if (drawable3 != 0) {
                g6.setDrawable(c.a);
                g6.setDrawable(c.a(drawable3, bVar2, this.f4477b));
            }
        }
    }
}
