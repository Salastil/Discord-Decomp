package zq;

import ip.s0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import nr.y0;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.p0;
import yq.x;
import yq.y;

/* loaded from: classes3.dex */
public final class e {
    public static final e a = new e();

    /* JADX WARN: Multi-variable type inference failed */
    public static c0 b(c0 c0Var) {
        y b10;
        p0 r02 = c0Var.r0();
        s0 s0Var = null;
        if (r02 instanceof lq.c) {
            lq.c cVar = (lq.c) r02;
            yq.s0 projection = cVar.a;
            yq.s0 s0Var2 = projection.a() == c1.f21014v ? projection : null;
            b1 w02 = (s0Var2 == null || (b10 = s0Var2.b()) == null) ? null : b10.w0();
            if (cVar.f14207b == null) {
                Collection b11 = cVar.b();
                ArrayList supertypes = new ArrayList(d0.l(b11, 10));
                Iterator it = b11.iterator();
                while (it.hasNext()) {
                    supertypes.add(((y) it.next()).w0());
                }
                Intrinsics.checkNotNullParameter(projection, "projection");
                Intrinsics.checkNotNullParameter(supertypes, "supertypes");
                cVar.f14207b = new j(projection, new wq.e(1, supertypes), s0Var, 8);
            }
            cr.b bVar = cr.b.f7316d;
            j jVar = cVar.f14207b;
            Intrinsics.checkNotNull(jVar);
            return new h(bVar, jVar, w02, c0Var.q0(), c0Var.t0(), 32);
        }
        if (!(r02 instanceof x) || !c0Var.t0()) {
            return c0Var;
        }
        x xVar = (x) r02;
        LinkedHashSet linkedHashSet = xVar.f21078b;
        ArrayList typesToIntersect = new ArrayList(d0.l(linkedHashSet, 10));
        Iterator it2 = linkedHashSet.iterator();
        boolean z5 = false;
        while (it2.hasNext()) {
            typesToIntersect.add(com.facebook.imagepipeline.nativecode.c.S((y) it2.next()));
            z5 = true;
        }
        if (z5) {
            y yVar = xVar.a;
            b1 S = yVar != null ? com.facebook.imagepipeline.nativecode.c.S(yVar) : null;
            Intrinsics.checkNotNullParameter(typesToIntersect, "typesToIntersect");
            typesToIntersect.isEmpty();
            LinkedHashSet linkedHashSet2 = new LinkedHashSet(typesToIntersect);
            linkedHashSet2.hashCode();
            x xVar2 = new x(linkedHashSet2);
            xVar2.a = S;
            s0Var = xVar2;
        }
        if (s0Var != null) {
            xVar = s0Var;
        }
        return xVar.e();
    }

    public final b1 a(cr.d type) {
        b1 e9;
        Intrinsics.checkNotNullParameter(type, "type");
        if (!(type instanceof y)) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        b1 origin = ((y) type).w0();
        if (origin instanceof c0) {
            e9 = b((c0) origin);
        } else {
            if (!(origin instanceof yq.s)) {
                throw new fo.n();
            }
            yq.s sVar = (yq.s) origin;
            c0 c0Var = sVar.f21069i;
            c0 c0Var2 = sVar.f21068e;
            c0 b10 = b(c0Var2);
            c0 b11 = b(c0Var);
            e9 = (b10 == c0Var2 && b11 == c0Var) ? origin : yq.c.e(b10, b11);
        }
        y0 transform = new y0(1, this, e.class, "prepareType", "prepareType(Lorg/jetbrains/kotlin/types/model/KotlinTypeMarker;)Lorg/jetbrains/kotlin/types/UnwrappedType;", 0, 6);
        Intrinsics.checkNotNullParameter(e9, "<this>");
        Intrinsics.checkNotNullParameter(origin, "origin");
        Intrinsics.checkNotNullParameter(transform, "transform");
        y f2 = yq.c.f(origin);
        return yq.c.G(e9, f2 != null ? (y) transform.invoke(f2) : null);
    }
}
