package wq;

import cq.a0;
import cq.g1;
import cq.i0;
import cq.s0;
import cq.u0;
import java.io.ByteArrayInputStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import uq.c0;

/* loaded from: classes3.dex */
public final class m implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20014d;

    /* renamed from: e, reason: collision with root package name */
    public final o f20015e;

    public /* synthetic */ m(o oVar, int i5) {
        this.f20014d = i5;
        this.f20015e = oVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Collection<a0> collection;
        Collection<i0> collection2;
        cc.k b10;
        s0 b11;
        s0 b12;
        hq.e it = (hq.e) obj;
        switch (this.f20014d) {
            case 0:
                Intrinsics.checkNotNullParameter(it, "it");
                o oVar = this.f20015e;
                LinkedHashMap linkedHashMap = oVar.a;
                cq.a PARSER = a0.T;
                Intrinsics.checkNotNullExpressionValue(PARSER, "PARSER");
                p pVar = oVar.f20026i;
                byte[] bArr = (byte[]) linkedHashMap.get(it);
                if (bArr == null || (collection = kr.s.q(kr.o.d(new cp.u(PARSER, new ByteArrayInputStream(bArr), pVar, 2)))) == null) {
                    collection = m0.f13512d;
                }
                ArrayList arrayList = new ArrayList(collection.size());
                for (a0 a0Var : collection) {
                    uq.t tVar = (uq.t) pVar.f20028b.G;
                    Intrinsics.checkNotNull(a0Var);
                    s e9 = tVar.e(a0Var);
                    if (!pVar.r(e9)) {
                        e9 = null;
                    }
                    if (e9 != null) {
                        arrayList.add(e9);
                    }
                }
                pVar.j(it, arrayList);
                return ir.n.e(arrayList);
            case 1:
                Intrinsics.checkNotNullParameter(it, "it");
                o oVar2 = this.f20015e;
                LinkedHashMap linkedHashMap2 = oVar2.f20019b;
                cq.a PARSER2 = i0.T;
                Intrinsics.checkNotNullExpressionValue(PARSER2, "PARSER");
                p pVar2 = oVar2.f20026i;
                byte[] bArr2 = (byte[]) linkedHashMap2.get(it);
                if (bArr2 == null || (collection2 = kr.s.q(kr.o.d(new cp.u(PARSER2, new ByteArrayInputStream(bArr2), pVar2, 2)))) == null) {
                    collection2 = m0.f13512d;
                }
                ArrayList arrayList2 = new ArrayList(collection2.size());
                for (i0 i0Var : collection2) {
                    uq.t tVar2 = (uq.t) pVar2.f20028b.G;
                    Intrinsics.checkNotNull(i0Var);
                    arrayList2.add(tVar2.f(i0Var));
                }
                pVar2.k(it, arrayList2);
                return ir.n.e(arrayList2);
            default:
                Intrinsics.checkNotNullParameter(it, "it");
                o oVar3 = this.f20015e;
                cc.k kVar = oVar3.f20026i.f20028b;
                byte[] bArr3 = (byte[]) oVar3.f20020c.get(it);
                if (bArr3 != null) {
                    u0 proto = (u0) u0.N.b(new ByteArrayInputStream(bArr3), ((uq.j) kVar.f3398e).f19028p);
                    if (proto != null) {
                        uq.t tVar3 = (uq.t) kVar.G;
                        cc.k kVar2 = tVar3.a;
                        eq.g gVar = (eq.g) kVar2.f3399i;
                        a4.i typeTable = (a4.i) kVar2.f3401w;
                        Intrinsics.checkNotNullParameter(proto, "proto");
                        List<cq.h> list = proto.H;
                        Intrinsics.checkNotNullExpressionValue(list, "getAnnotationList(...)");
                        ArrayList annotations = new ArrayList(d0.l(list, 10));
                        for (cq.h hVar : list) {
                            e4.c cVar = tVar3.f19062b;
                            Intrinsics.checkNotNull(hVar);
                            annotations.add(cVar.N0(hVar, gVar));
                        }
                        Intrinsics.checkNotNullParameter(annotations, "annotations");
                        t tVar4 = new t(((uq.j) kVar2.f3398e).a, (ip.l) kVar2.f3400v, annotations.isEmpty() ? jp.g.a : new jp.i(annotations, 0), nt.a.u(gVar, proto.f7259w), ta.a.r((g1) eq.e.f8195d.g(proto.f7258v)), proto, (eq.g) kVar2.f3399i, typeTable, (eq.h) kVar2.f3402x, (k) kVar2.E);
                        List list2 = proto.f7260x;
                        Intrinsics.checkNotNullExpressionValue(list2, "getTypeParameterList(...)");
                        b10 = kVar2.b(tVar4, list2, (eq.g) kVar2.f3399i, (a4.i) kVar2.f3401w, (eq.h) kVar2.f3402x, (eq.a) kVar2.f3403y);
                        c0 c0Var = (c0) b10.F;
                        List b13 = c0Var.b();
                        Intrinsics.checkNotNullParameter(proto, "<this>");
                        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                        int i5 = proto.f7257i;
                        if ((i5 & 4) == 4) {
                            b11 = proto.f7261y;
                            Intrinsics.checkNotNullExpressionValue(b11, "getUnderlyingType(...)");
                        } else {
                            if ((i5 & 8) != 8) {
                                throw new IllegalStateException("No underlyingType in ProtoBuf.TypeAlias");
                            }
                            b11 = typeTable.b(proto.E);
                        }
                        yq.c0 d6 = c0Var.d(b11, false);
                        Intrinsics.checkNotNullParameter(proto, "<this>");
                        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                        int i6 = proto.f7257i;
                        if ((i6 & 16) == 16) {
                            b12 = proto.F;
                            Intrinsics.checkNotNullExpressionValue(b12, "getExpandedType(...)");
                        } else {
                            if ((i6 & 32) != 32) {
                                throw new IllegalStateException("No expandedType in ProtoBuf.TypeAlias");
                            }
                            b12 = typeTable.b(proto.G);
                        }
                        tVar4.E0(b13, d6, c0Var.d(b12, false));
                        return tVar4;
                    }
                }
                return null;
        }
    }
}
