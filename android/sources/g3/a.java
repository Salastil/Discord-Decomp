package g3;

import android.content.Context;
import e4.i;
import ip.f;
import ip.s0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import m3.n;
import rp.v;
import vp.f0;
import yq.c0;
import yq.s;
import yq.y;
import yq.z0;
import zp.g;
import zp.h;

/* loaded from: classes.dex */
public final class a {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f9086b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f9087c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f9088d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f9089e;

    public a(jp.a aVar, boolean z5, i containerContext, rp.a containerApplicabilityType, boolean z6) {
        Intrinsics.checkNotNullParameter(containerContext, "containerContext");
        Intrinsics.checkNotNullParameter(containerApplicabilityType, "containerApplicabilityType");
        this.f9087c = aVar;
        this.a = z5;
        this.f9088d = containerContext;
        this.f9089e = containerApplicabilityType;
        this.f9086b = z6;
    }

    public static void a(Object obj, ArrayList arrayList, aq.a aVar) {
        arrayList.add(obj);
        Iterable iterable = (Iterable) aVar.invoke(obj);
        if (iterable != null) {
            Iterator it = iterable.iterator();
            while (it.hasNext()) {
                a(it.next(), arrayList, aVar);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v11 */
    /* JADX WARN: Type inference failed for: r1v8, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r1v9, types: [java.lang.Iterable, java.util.Collection] */
    public static h b(s0 receiver) {
        ?? arrayList;
        g gVar;
        Intrinsics.checkNotNullParameter(receiver, "<this>");
        if (!(receiver instanceof f0)) {
            return null;
        }
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        List<cr.d> upperBounds = ((lp.g) receiver).getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
        if (upperBounds.isEmpty()) {
            return null;
        }
        Iterator it = upperBounds.iterator();
        while (it.hasNext()) {
            if (!n.d0((cr.d) it.next())) {
                if (!upperBounds.isEmpty()) {
                    Iterator it2 = upperBounds.iterator();
                    while (it2.hasNext()) {
                        if (d((cr.d) it2.next()) != null) {
                            arrayList = upperBounds;
                            break;
                        }
                    }
                }
                if (upperBounds.isEmpty()) {
                    return null;
                }
                for (cr.d dVar : upperBounds) {
                    Intrinsics.checkNotNullParameter(dVar, "<this>");
                    if (yq.c.f((y) dVar) != null) {
                        arrayList = new ArrayList();
                        for (cr.d dVar2 : upperBounds) {
                            Intrinsics.checkNotNullParameter(dVar2, "<this>");
                            y f2 = yq.c.f((y) dVar2);
                            if (f2 != null) {
                                arrayList.add(f2);
                            }
                        }
                        if (!arrayList.isEmpty()) {
                            Iterator it3 = arrayList.iterator();
                            while (it3.hasNext()) {
                                if (!n.j0((cr.d) it3.next())) {
                                    gVar = g.f21354i;
                                    break;
                                }
                            }
                        }
                        gVar = g.f21353e;
                        return new h(gVar, arrayList != upperBounds);
                    }
                }
                return null;
            }
        }
        return null;
    }

    public static hq.d c(c0 c0Var) {
        Intrinsics.checkNotNullParameter(c0Var, "<this>");
        if (c0Var == null) {
            z0.a(30);
            throw null;
        }
        ar.i iVar = z0.a;
        ip.i a = c0Var.r0().a();
        f fVar = a instanceof f ? (f) a : null;
        if (fVar != null) {
            return kq.e.g(fVar);
        }
        return null;
    }

    public static g d(cr.d dVar) {
        c0 l6;
        c0 l7;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        s k = n.k(dVar);
        if (k == null || (l6 = n.r0(k)) == null) {
            l6 = n.l(dVar);
            Intrinsics.checkNotNull(l6);
        }
        if (n.h0(l6)) {
            return g.f21353e;
        }
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        s k5 = n.k(dVar);
        if (k5 == null || (l7 = n.T0(k5)) == null) {
            l7 = n.l(dVar);
            Intrinsics.checkNotNull(l7);
        }
        if (n.h0(l7)) {
            return null;
        }
        return g.f21354i;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, kotlin.Lazy] */
    public ArrayList e(cr.d dVar) {
        i iVar = (i) this.f9088d;
        v vVar = (v) iVar.f7954i.getValue();
        rp.b bVar = ((up.a) iVar.f7952d).f18981q;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        zp.a aVar = new zp.a(dVar, bVar.b(vVar, ((y) dVar).getAnnotations()), null);
        aq.a aVar2 = new aq.a(26, this);
        ArrayList arrayList = new ArrayList(1);
        a(aVar, arrayList, aVar2);
        return arrayList;
    }

    public a(Context context, String str, a1.d callback, boolean z5, boolean z6) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.f9087c = context;
        this.f9088d = str;
        this.f9089e = callback;
        this.a = z5;
        this.f9086b = z6;
    }
}
