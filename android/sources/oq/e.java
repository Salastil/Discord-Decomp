package oq;

import cs.p;
import ip.a0;
import ip.f;
import ip.f0;
import ip.i;
import ip.j;
import ip.l;
import ip.l0;
import ip.m;
import ip.m0;
import ir.n;
import java.util.Collection;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.x;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.sequences.Sequence;
import kr.h;
import kr.o;
import kr.s;
import lp.c0;
import lp.g0;
import lp.r0;
import zq.g;

/* loaded from: classes3.dex */
public abstract class e {
    public static final /* synthetic */ int a = 0;

    static {
        Intrinsics.checkNotNullExpressionValue(hq.e.e("value"), "identifier(...)");
    }

    public static final boolean a(r0 r0Var) {
        Intrinsics.checkNotNullParameter(r0Var, "<this>");
        Boolean i5 = n.i(b0.c(r0Var), a.f16174e, c.f16178d);
        Intrinsics.checkNotNullExpressionValue(i5, "ifAny(...)");
        return i5.booleanValue();
    }

    public static ip.d b(ip.d dVar, Function1 predicate) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        return (ip.d) n.g(b0.c(dVar), new a(1), new d(new Ref.ObjectRef(), predicate));
    }

    public static final hq.c c(m mVar) {
        Intrinsics.checkNotNullParameter(mVar, "<this>");
        hq.d h6 = h(mVar);
        if (!h6.d()) {
            h6 = null;
        }
        if (h6 != null) {
            return h6.g();
        }
        return null;
    }

    public static final f d(jp.b bVar) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        i a10 = bVar.getType().r0().a();
        if (a10 instanceof f) {
            return (f) a10;
        }
        return null;
    }

    public static final fp.i e(l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        return j(lVar).g();
    }

    public static final hq.b f(i iVar) {
        l h6;
        hq.b f2;
        if (iVar == null || (h6 = iVar.h()) == null) {
            return null;
        }
        if (h6 instanceof f0) {
            hq.c cVar = ((c0) ((f0) h6)).f14132x;
            hq.e name = iVar.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            return new hq.b(cVar, name);
        }
        if (!(h6 instanceof j) || (f2 = f((i) h6)) == null) {
            return null;
        }
        hq.e name2 = iVar.getName();
        Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
        return f2.d(name2);
    }

    public static final hq.c g(l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        if (lVar == null) {
            kq.e.a(3);
            throw null;
        }
        hq.c h6 = kq.e.h(lVar);
        if (h6 == null) {
            h6 = kq.e.g(lVar.h()).a(lVar.getName()).g();
        }
        Intrinsics.checkNotNullExpressionValue(h6, "getFqNameSafe(...)");
        return h6;
    }

    public static final hq.d h(l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        hq.d g6 = kq.e.g(lVar);
        Intrinsics.checkNotNullExpressionValue(g6, "getFqName(...)");
        return g6;
    }

    public static final void i(a0 a0Var) {
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        if (a0Var.d0(g.a) != null) {
            throw new ClassCastException();
        }
    }

    public static final a0 j(l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        a0 d6 = kq.e.d(lVar);
        Intrinsics.checkNotNullExpressionValue(d6, "getContainingModule(...)");
        return d6;
    }

    public static final ip.d k(ip.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        if (!(dVar instanceof l0)) {
            return dVar;
        }
        m0 B0 = ((g0) ((l0) dVar)).B0();
        Intrinsics.checkNotNullExpressionValue(B0, "getCorrespondingProperty(...)");
        return B0;
    }

    public static final h l(ip.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        ip.d[] elements = {dVar};
        Intrinsics.checkNotNullParameter(elements, "elements");
        Sequence o6 = x.o(elements);
        Collection i5 = dVar.i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        h elements2 = s.l(CollectionsKt.C(i5), new b(1));
        Intrinsics.checkNotNullParameter(o6, "<this>");
        Intrinsics.checkNotNullParameter(elements2, "elements");
        Sequence[] elements3 = {o6, elements2};
        Intrinsics.checkNotNullParameter(elements3, "elements");
        Sequence o7 = x.o(elements3);
        Intrinsics.checkNotNullParameter(o7, "<this>");
        return o.b(o7, new p(29));
    }
}
