package wq;

import cq.s0;
import ip.b0;
import ip.f0;
import ip.o0;
import ip.w;
import ip.z;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;
import nr.y0;

/* loaded from: classes3.dex */
public final class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19999d;

    /* renamed from: e, reason: collision with root package name */
    public final i f20000e;

    public /* synthetic */ d(i iVar, int i5) {
        this.f19999d = i5;
        this.f20000e = iVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v47, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r2v48, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r2v52, types: [java.util.ArrayList] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Object obj;
        ip.p pVar;
        Object obj2;
        cr.e eVar;
        ?? r22;
        int i5 = this.f19999d;
        i sealedClass = this.f20000e;
        switch (i5) {
            case 0:
                i iVar = this.f20000e;
                ip.g gVar = iVar.H;
                if (!gVar.a()) {
                    List list = iVar.f20008w.M;
                    Intrinsics.checkNotNullExpressionValue(list, "getConstructorList(...)");
                    Iterator it = list.iterator();
                    while (true) {
                        if (it.hasNext()) {
                            obj = it.next();
                            if (!eq.e.f8203n.g(((cq.n) obj).f7182v).booleanValue()) {
                            }
                        } else {
                            obj = null;
                        }
                    }
                    cq.n nVar = (cq.n) obj;
                    if (nVar != null) {
                        return ((uq.t) iVar.I.G).d(nVar, true);
                    }
                    return null;
                }
                kq.d dVar = new kq.d(iVar, null, jp.g.a, true, ip.c.f12123d, o0.f12151g);
                List list2 = Collections.EMPTY_LIST;
                int i6 = kq.e.a;
                if (gVar == ip.g.f12140i || gVar.a()) {
                    pVar = ip.q.a;
                    if (pVar == null) {
                        kq.e.a(49);
                        throw null;
                    }
                } else if (kq.e.q(iVar)) {
                    pVar = ip.q.a;
                    if (pVar == null) {
                        kq.e.a(51);
                        throw null;
                    }
                } else if (kq.e.k(iVar)) {
                    pVar = ip.q.j;
                    if (pVar == null) {
                        kq.e.a(52);
                        throw null;
                    }
                } else {
                    pVar = ip.q.f12159e;
                    if (pVar == null) {
                        kq.e.a(53);
                        throw null;
                    }
                }
                dVar.P0(list2, pVar);
                dVar.E = iVar.k();
                return dVar;
            case 1:
                cc.k kVar = sealedClass.I;
                List list3 = sealedClass.f20008w.M;
                Intrinsics.checkNotNullExpressionValue(list3, "getConstructorList(...)");
                ArrayList arrayList = new ArrayList();
                for (Object obj3 : list3) {
                    if (s4.h.m(eq.e.f8203n, ((cq.n) obj3).f7182v, "get(...)")) {
                        arrayList.add(obj3);
                    }
                }
                ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
                Iterator it2 = arrayList.iterator();
                while (it2.hasNext()) {
                    cq.n nVar2 = (cq.n) it2.next();
                    uq.t tVar = (uq.t) kVar.G;
                    Intrinsics.checkNotNull(nVar2);
                    arrayList2.add(tVar.d(nVar2, false));
                }
                return CollectionsKt.V(CollectionsKt.V(arrayList2, c0.h(sealedClass.G())), ((uq.j) kVar.f3398e).f19026n.a(sealedClass));
            case 2:
                cq.k kVar2 = sealedClass.f20008w;
                if ((kVar2.f7146i & 4) != 4) {
                    return null;
                }
                ip.i a = sealedClass.l0().a(nt.a.u((eq.g) sealedClass.I.f3399i, kVar2.f7149x), qp.c.f16943y);
                if (a instanceof ip.f) {
                    return (ip.f) a;
                }
                return null;
            case 3:
                z zVar = sealedClass.F;
                z zVar2 = z.f12181i;
                if (zVar != zVar2) {
                    return m0.f13512d;
                }
                List<Integer> list4 = sealedClass.f20008w.R;
                Intrinsics.checkNotNull(list4);
                if (list4.isEmpty()) {
                    Intrinsics.checkNotNullParameter(sealedClass, "sealedClass");
                    if (zVar != zVar2) {
                        return m0.f13512d;
                    }
                    LinkedHashSet linkedHashSet = new LinkedHashSet();
                    ip.l lVar = sealedClass.N;
                    if (lVar instanceof f0) {
                        zo.c0.n(sealedClass, linkedHashSet, ((f0) lVar).N(), false);
                    }
                    rq.o h0 = sealedClass.h0();
                    Intrinsics.checkNotNullExpressionValue(h0, "getUnsubstitutedInnerClassesScope(...)");
                    zo.c0.n(sealedClass, linkedHashSet, h0, true);
                    return CollectionsKt.e0(linkedHashSet, new kq.h(1));
                }
                ArrayList arrayList3 = new ArrayList();
                for (Integer num : list4) {
                    cc.k kVar3 = sealedClass.I;
                    uq.j jVar = (uq.j) kVar3.f3398e;
                    eq.g gVar2 = (eq.g) kVar3.f3399i;
                    Intrinsics.checkNotNull(num);
                    ip.f b10 = jVar.b(nt.a.r(gVar2, num.intValue()));
                    if (b10 != null) {
                        arrayList3.add(b10);
                    }
                }
                return arrayList3;
            case 4:
                if (!sealedClass.isInline() && !sealedClass.isValue()) {
                    return null;
                }
                cq.k kVar4 = sealedClass.f20008w;
                cc.k kVar5 = sealedClass.I;
                eq.g nameResolver = (eq.g) kVar5.f3399i;
                a4.i typeTable = (a4.i) kVar5.f3401w;
                h typeDeserializer = new h(1, (uq.c0) kVar5.F, uq.c0.class, "simpleType", "simpleType(Lorg/jetbrains/kotlin/metadata/ProtoBuf$Type;Z)Lorg/jetbrains/kotlin/types/SimpleType;", 0);
                y0 typeOfPublicProperty = new y0(sealedClass);
                Intrinsics.checkNotNullParameter(kVar4, "<this>");
                Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
                Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                Intrinsics.checkNotNullParameter(typeDeserializer, "typeDeserializer");
                Intrinsics.checkNotNullParameter(typeOfPublicProperty, "typeOfPublicProperty");
                if (kVar4.W.size() > 0) {
                    Intrinsics.checkNotNullParameter(kVar4, "<this>");
                    Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
                    Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                    List<Integer> list5 = kVar4.W;
                    Intrinsics.checkNotNullExpressionValue(list5, "getMultiFieldValueClassUnderlyingNameList(...)");
                    ArrayList arrayList4 = new ArrayList(d0.l(list5, 10));
                    for (Integer num2 : list5) {
                        Intrinsics.checkNotNull(num2);
                        arrayList4.add(nt.a.u(nameResolver, num2.intValue()));
                    }
                    Pair pair = new Pair(Integer.valueOf(kVar4.Z.size()), Integer.valueOf(kVar4.Y.size()));
                    if (Intrinsics.areEqual(pair, new Pair(Integer.valueOf(arrayList4.size()), 0))) {
                        List<Integer> list6 = kVar4.Z;
                        Intrinsics.checkNotNullExpressionValue(list6, "getMultiFieldValueClassUnderlyingTypeIdList(...)");
                        r22 = new ArrayList(d0.l(list6, 10));
                        for (Integer num3 : list6) {
                            Intrinsics.checkNotNull(num3);
                            r22.add(typeTable.b(num3.intValue()));
                        }
                    } else {
                        if (!Intrinsics.areEqual(pair, new Pair(0, Integer.valueOf(arrayList4.size())))) {
                            throw new IllegalStateException(("class " + nt.a.u(nameResolver, kVar4.f7148w) + " has illegal multi-field value class representation").toString());
                        }
                        r22 = kVar4.Y;
                    }
                    ArrayList arrayList5 = new ArrayList(d0.l(r22, 10));
                    Iterator it3 = r22.iterator();
                    while (it3.hasNext()) {
                        arrayList5.add(typeDeserializer.invoke(it3.next()));
                    }
                    obj2 = new b0(CollectionsKt.n0(arrayList4, arrayList5));
                } else if ((kVar4.f7146i & 8) == 8) {
                    hq.e u5 = nt.a.u(nameResolver, kVar4.T);
                    Intrinsics.checkNotNullParameter(kVar4, "<this>");
                    Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                    int i10 = kVar4.f7146i;
                    s0 b11 = (i10 & 16) == 16 ? kVar4.U : (i10 & 32) == 32 ? typeTable.b(kVar4.V) : null;
                    if ((b11 == null || (eVar = (cr.e) typeDeserializer.invoke(b11)) == null) && (eVar = (cr.e) typeOfPublicProperty.invoke(u5)) == null) {
                        throw new IllegalStateException(("cannot determine underlying type for value class " + nt.a.u(nameResolver, kVar4.f7148w) + " with property " + u5).toString());
                    }
                    obj2 = new w(u5, eVar);
                } else {
                    obj2 = null;
                }
                if (obj2 != null) {
                    return obj2;
                }
                if (sealedClass.f20009x.a(1, 5, 1)) {
                    return null;
                }
                lp.h G = sealedClass.G();
                if (G == null) {
                    throw new IllegalStateException(("Inline class has no primary constructor: " + sealedClass).toString());
                }
                List P = G.P();
                Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                hq.e name = ((r0) CollectionsKt.K(P)).getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                yq.c0 q02 = sealedClass.q0(name);
                if (q02 != null) {
                    return new w(name, q02);
                }
                throw new IllegalStateException(("Value class has no underlying property: " + sealedClass).toString());
            case 5:
                return CollectionsKt.i0(((uq.j) sealedClass.I.f3398e).f19019e.B(sealedClass.T));
            default:
                return ta.a.m(sealedClass);
        }
    }
}
