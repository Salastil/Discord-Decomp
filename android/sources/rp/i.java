package rp;

import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import lp.l0;

/* loaded from: classes3.dex */
public final class i implements kq.f {
    @Override // kq.f
    public final int a(ip.b superDescriptor, ip.b subDescriptor, ip.f fVar) {
        Intrinsics.checkNotNullParameter(superDescriptor, "superDescriptor");
        Intrinsics.checkNotNullParameter(subDescriptor, "subDescriptor");
        if (!(subDescriptor instanceof tp.e)) {
            return 3;
        }
        tp.e eVar = (tp.e) subDescriptor;
        List typeParameters = eVar.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
        if (!typeParameters.isEmpty()) {
            return 3;
        }
        kq.m i5 = kq.n.i(superDescriptor, subDescriptor);
        if ((i5 != null ? i5.b() : null) != null) {
            return 3;
        }
        List P = eVar.P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        kr.t n6 = kr.s.n(CollectionsKt.C(P), d.f17439w);
        yq.y yVar = eVar.E;
        Intrinsics.checkNotNull(yVar);
        kr.h p3 = kr.s.p(n6, yVar);
        lp.u uVar = eVar.G;
        List elements = kotlin.collections.c0.h(uVar != null ? uVar.getType() : null);
        Intrinsics.checkNotNullParameter(p3, "<this>");
        Intrinsics.checkNotNullParameter(elements, "elements");
        Sequence[] elements2 = {p3, CollectionsKt.C(elements)};
        Intrinsics.checkNotNullParameter(elements2, "elements");
        Sequence o6 = kotlin.collections.x.o(elements2);
        Intrinsics.checkNotNullParameter(o6, "<this>");
        kr.d dVar = new kr.d(kr.o.b(o6, new cs.p(29)));
        while (dVar.hasNext()) {
            yq.y yVar2 = (yq.y) dVar.next();
            if (!yVar2.l0().isEmpty() && !(yVar2.w0() instanceof wp.h)) {
                return 3;
            }
        }
        ip.b bVar = (ip.b) superDescriptor.c(new wp.f().c());
        if (bVar == null) {
            return 3;
        }
        if (bVar instanceof l0) {
            l0 l0Var = (l0) bVar;
            List typeParameters2 = l0Var.getTypeParameters();
            Intrinsics.checkNotNullExpressionValue(typeParameters2, "getTypeParameters(...)");
            if (!typeParameters2.isEmpty()) {
                bVar = l0Var.m0().c(m0.f13512d).build();
                Intrinsics.checkNotNull(bVar);
            }
        }
        kq.l b10 = kq.n.f13633c.n(bVar, subDescriptor, false).b();
        Intrinsics.checkNotNullExpressionValue(b10, "getResult(...)");
        return h.a[b10.ordinal()] == 1 ? 1 : 3;
    }

    @Override // kq.f
    public final int b() {
        return 2;
    }
}
