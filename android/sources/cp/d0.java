package cp;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.PropertyReference1Impl;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes3.dex */
public final class d0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6891d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f6892e;

    public /* synthetic */ d0(int i5, Object obj) {
        this.f6891d = i5;
        this.f6892e = obj;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:205:0x059e  */
    /* JADX WARN: Removed duplicated region for block: B:208:0x05a1 A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r12v6, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r15v7, types: [bq.b, java.lang.Object, lp.h, lp.t] */
    /* JADX WARN: Type inference failed for: r16v0, types: [ip.b, ip.v, lp.o0, lp.t] */
    /* JADX WARN: Type inference failed for: r17v1 */
    /* JADX WARN: Type inference failed for: r17v2, types: [lp.u] */
    /* JADX WARN: Type inference failed for: r17v3 */
    /* JADX WARN: Type inference failed for: r25v2, types: [java.lang.Throwable] */
    /* JADX WARN: Type inference failed for: r25v6, types: [java.lang.Throwable] */
    /* JADX WARN: Type inference failed for: r2v68, types: [java.lang.Object, java.util.Map] */
    /* JADX WARN: Type inference failed for: r5v32, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r5v33 */
    /* JADX WARN: Type inference failed for: r5v34, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r6v23, types: [yq.w0] */
    /* JADX WARN: Type inference failed for: r6v26 */
    /* JADX WARN: Type inference failed for: r6v49 */
    @Override // kotlin.jvm.functions.Function0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke() {
        lp.h c6;
        Map map;
        kotlin.collections.m0 m0Var;
        Collection collection;
        mq.i iVar;
        jp.m mVar;
        mq.b bVar;
        int i5 = this.f6891d;
        int i6 = 10;
        int i10 = 0;
        Object obj = this.f6892e;
        switch (i5) {
            case 0:
                return v1.a(((h0) obj).getJClass());
            case 1:
                return new k0((l0) obj);
            case 2:
                return new m0((n0) obj);
            case 3:
                return new o0((p0) obj);
            case 4:
                List upperBounds = ((s1) obj).f6957d.getUpperBounds();
                Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(upperBounds, 10));
                Iterator it = upperBounds.iterator();
                while (it.hasNext()) {
                    arrayList.add(new r1((yq.y) it.next(), null));
                }
                return arrayList;
            case 5:
                for (Map.Entry entry : ((Map) obj).entrySet()) {
                    String str = (String) entry.getKey();
                    Object value = entry.getValue();
                    i10 += (value instanceof boolean[] ? Arrays.hashCode((boolean[]) value) : value instanceof char[] ? Arrays.hashCode((char[]) value) : value instanceof byte[] ? Arrays.hashCode((byte[]) value) : value instanceof short[] ? Arrays.hashCode((short[]) value) : value instanceof int[] ? Arrays.hashCode((int[]) value) : value instanceof float[] ? Arrays.hashCode((float[]) value) : value instanceof long[] ? Arrays.hashCode((long[]) value) : value instanceof double[] ? Arrays.hashCode((double[]) value) : value instanceof Object[] ? Arrays.hashCode((Object[]) value) : value.hashCode()) ^ (str.hashCode() * 127);
                }
                return Integer.valueOf(i10);
            case 6:
                hp.j jVar = (hp.j) obj;
                fp.l lVar = jVar.f10171f;
                if (lVar == null) {
                    throw new AssertionError("JvmBuiltins instance has not been initialized properly");
                }
                hp.i iVar2 = (hp.i) lVar.invoke();
                jVar.f10171f = null;
                return iVar2;
            case 7:
                return (rq.o) ((ip.n0) obj).f12149b.invoke(zq.f.a);
            case 8:
                jp.j jVar2 = (jp.j) obj;
                return jVar2.a.j(jVar2.f13010b).k();
            case 9:
                jq.h hVar = (jq.h) obj;
                jq.d changeOptions = jq.d.L;
                Intrinsics.checkNotNullParameter(changeOptions, "changeOptions");
                Intrinsics.checkNotNull(hVar, "null cannot be cast to non-null type org.jetbrains.kotlin.renderer.DescriptorRendererImpl");
                jq.k kVar = hVar.f13052d;
                jq.k kVar2 = new jq.k();
                Iterator it2 = ArrayIteratorKt.iterator(jq.k.class.getDeclaredFields());
                while (it2.hasNext()) {
                    Field field = (Field) it2.next();
                    if ((field.getModifiers() & 8) == 0) {
                        field.setAccessible(true);
                        Object obj2 = field.get(kVar);
                        vo.c cVar = obj2 instanceof vo.c ? (vo.c) obj2 : null;
                        if (cVar != null) {
                            String name = field.getName();
                            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                            kotlin.text.x.o(name, "is", false);
                            KClass orCreateKotlinClass = Reflection.getOrCreateKotlinClass(jq.k.class);
                            String name2 = field.getName();
                            StringBuilder sb2 = new StringBuilder("get");
                            String name3 = field.getName();
                            Intrinsics.checkNotNullExpressionValue(name3, "getName(...)");
                            if (name3.length() > 0) {
                                char upperCase = Character.toUpperCase(name3.charAt(0));
                                String substring = name3.substring(1);
                                Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                                name3 = upperCase + substring;
                            }
                            sb2.append(name3);
                            field.set(kVar2, new an.b(cVar.getValue(kVar, new PropertyReference1Impl(orCreateKotlinClass, name2, sb2.toString())), kVar2));
                        }
                    }
                }
                changeOptions.invoke(kVar2);
                kVar2.a = true;
                jq.h hVar2 = new jq.h(kVar2);
                Intrinsics.checkNotNull(hVar2, "null cannot be cast to non-null type org.jetbrains.kotlin.renderer.DescriptorRendererImpl");
                return hVar2;
            case 10:
                lp.e typeAliasDescriptor = (lp.e) obj;
                wq.t tVar = (wq.t) typeAliasDescriptor;
                ip.f B0 = tVar.B0();
                if (B0 == null) {
                    return kotlin.collections.m0.f13512d;
                }
                Collection<??> q5 = B0.q();
                Intrinsics.checkNotNullExpressionValue(q5, "getConstructors(...)");
                ArrayList arrayList2 = new ArrayList();
                for (?? constructor : q5) {
                    lp.e0 e0Var = lp.o0.f14167e0;
                    xq.o storageManager = typeAliasDescriptor.f14135x;
                    Intrinsics.checkNotNull(constructor);
                    e0Var.getClass();
                    Intrinsics.checkNotNullParameter(storageManager, "storageManager");
                    Intrinsics.checkNotNullParameter(typeAliasDescriptor, "typeAliasDescriptor");
                    Intrinsics.checkNotNullParameter(constructor, "constructor");
                    ?? d6 = tVar.B0() == null ? r5 : yq.w0.d(tVar.C0());
                    if (d6 != 0 && (c6 = constructor.c(d6)) != null) {
                        jp.h annotations = constructor.getAnnotations();
                        ip.c b10 = constructor.b();
                        Intrinsics.checkNotNullExpressionValue(b10, "getKind(...)");
                        ip.o0 d7 = typeAliasDescriptor.d();
                        Intrinsics.checkNotNullExpressionValue(d7, "getSource(...)");
                        yq.w0 w0Var = d6;
                        ?? o0Var = new lp.o0(storageManager, typeAliasDescriptor, c6, null, annotations, b10, d7);
                        List P = constructor.P();
                        if (P == null) {
                            ?? r25 = r5;
                            lp.t.v0(28);
                            throw r25;
                        }
                        ArrayList F0 = lp.t.F0(o0Var, P, w0Var, false, false, null);
                        if (F0 != null) {
                            yq.c0 l6 = yq.c.l(c6.E.w0());
                            yq.c0 k = tVar.k();
                            Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
                            yq.c0 F = yq.c.F(l6, k);
                            lp.u uVar = constructor.H;
                            jp.f fVar = jp.g.a;
                            ?? C = uVar != null ? m3.n.C(o0Var, w0Var.h(uVar.getType(), yq.c1.f21013i), fVar) : r5;
                            ip.f B02 = tVar.B0();
                            if (B02 != null) {
                                List a0 = constructor.a0();
                                Intrinsics.checkNotNullExpressionValue(a0, "getContextReceiverParameters(...)");
                                ?? arrayList3 = new ArrayList(kotlin.collections.d0.l(a0, i6));
                                int i11 = i10;
                                for (Object obj3 : a0) {
                                    int i12 = i11 + 1;
                                    if (i11 < 0) {
                                        ?? r252 = r5;
                                        kotlin.collections.c0.k();
                                        throw r252;
                                    }
                                    lp.u uVar2 = (lp.u) obj3;
                                    Map map2 = r5;
                                    yq.y h6 = w0Var.h(uVar2.getType(), yq.c1.f21013i);
                                    sq.d B03 = uVar2.B0();
                                    Intrinsics.checkNotNull(B03, "null cannot be cast to non-null type org.jetbrains.kotlin.resolve.scopes.receivers.ImplicitContextReceiver");
                                    arrayList3.add(new lp.u(B02, new sq.a(B02, h6, ((sq.a) B03).z0()), fVar, hq.f.a(i11)));
                                    i11 = i12;
                                    r5 = map2;
                                }
                                map = r5;
                                m0Var = arrayList3;
                            } else {
                                map = r5;
                                m0Var = kotlin.collections.m0.f13512d;
                            }
                            o0Var.G0(C, null, m0Var, typeAliasDescriptor.l(), F0, F, ip.z.f12180e, typeAliasDescriptor.f14136y);
                            r5 = o0Var;
                            if (r5 == null) {
                                arrayList2.add(r5);
                            }
                            r5 = map;
                            i6 = 10;
                            i10 = 0;
                        }
                    }
                    map = r5;
                    if (r5 == null) {
                    }
                    r5 = map;
                    i6 = 10;
                    i10 = 0;
                }
                return arrayList2;
            case 11:
                StringBuilder sb3 = new StringBuilder("Scope for type parameter ");
                bs.q qVar = (bs.q) obj;
                sb3.append(((hq.e) qVar.f3227e).b());
                return a5.k0.p(sb3.toString(), ((lp.g) qVar.f3228i).getUpperBounds());
            case 12:
                lp.p pVar = (lp.p) obj;
                HashSet hashSet = new HashSet();
                for (hq.e eVar : (Set) pVar.f14175e.F.invoke()) {
                    qp.c cVar2 = qp.c.f16942x;
                    hashSet.addAll(pVar.f(eVar, cVar2));
                    hashSet.addAll(pVar.c(eVar, cVar2));
                }
                return hashSet;
            case 13:
                return (List) obj;
            case 14:
                return (List) ((lp.q0) obj).J.getValue();
            case 15:
                yq.y b11 = ((yq.s0) obj).b();
                Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
                return b11;
            case 16:
                rp.w wVar = (rp.w) obj;
                go.e b12 = kotlin.collections.b0.b();
                b12.add(wVar.a.f17435d);
                rp.c0 c0Var = wVar.f17491b;
                if (c0Var != null) {
                    b12.add("under-migration:".concat(c0Var.f17435d));
                }
                wVar.f17492c.getClass();
                kotlin.collections.o0.f13515d.getClass();
                kotlin.collections.l0.f13511d.getClass();
                return (String[]) kotlin.collections.b0.a(b12).toArray(new String[0]);
            case 17:
                rq.h hVar3 = (rq.h) obj;
                List h7 = hVar3.h();
                ArrayList arrayList4 = new ArrayList(3);
                lp.b bVar2 = hVar3.f17545b;
                Collection b13 = bVar2.n().b();
                Intrinsics.checkNotNullExpressionValue(b13, "getSupertypes(...)");
                ArrayList arrayList5 = new ArrayList();
                Iterator it3 = b13.iterator();
                while (it3.hasNext()) {
                    kotlin.collections.h0.o(arrayList5, m3.n.I(((yq.y) it3.next()).N(), null, 3));
                }
                ArrayList arrayList6 = new ArrayList();
                Iterator it4 = arrayList5.iterator();
                while (it4.hasNext()) {
                    Object next = it4.next();
                    if (next instanceof ip.d) {
                        arrayList6.add(next);
                    }
                }
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                Iterator it5 = arrayList6.iterator();
                while (it5.hasNext()) {
                    Object next2 = it5.next();
                    hq.e name4 = ((ip.d) next2).getName();
                    Object obj4 = linkedHashMap.get(name4);
                    if (obj4 == null) {
                        obj4 = new ArrayList();
                        linkedHashMap.put(name4, obj4);
                    }
                    ((List) obj4).add(next2);
                }
                for (Map.Entry entry2 : linkedHashMap.entrySet()) {
                    Object key = entry2.getKey();
                    Intrinsics.checkNotNullExpressionValue(key, "component1(...)");
                    hq.e eVar2 = (hq.e) key;
                    List list = (List) entry2.getValue();
                    LinkedHashMap linkedHashMap2 = new LinkedHashMap();
                    for (Object obj5 : list) {
                        Boolean valueOf = Boolean.valueOf(((ip.d) obj5) instanceof ip.v);
                        Object obj6 = linkedHashMap2.get(valueOf);
                        if (obj6 == null) {
                            obj6 = new ArrayList();
                            linkedHashMap2.put(valueOf, obj6);
                        }
                        ((List) obj6).add(obj5);
                    }
                    for (Map.Entry entry3 : linkedHashMap2.entrySet()) {
                        boolean booleanValue = ((Boolean) entry3.getKey()).booleanValue();
                        List list2 = (List) entry3.getValue();
                        kq.n nVar = kq.n.f13633c;
                        if (booleanValue) {
                            collection = new ArrayList();
                            for (Object obj7 : h7) {
                                if (Intrinsics.areEqual(((lp.l) ((ip.v) obj7)).getName(), eVar2)) {
                                    collection.add(obj7);
                                }
                            }
                        } else {
                            collection = kotlin.collections.m0.f13512d;
                        }
                        nVar.h(eVar2, list2, collection, bVar2, new rq.g(arrayList4, hVar3));
                    }
                }
                return CollectionsKt.V(h7, ir.n.e(arrayList4));
            case 18:
                return ((yq.w0) obj).g().c();
            case 19:
                rq.t tVar2 = (rq.t) obj;
                return tVar2.i(m3.n.I(tVar2.f17565b, null, 3));
            case 20:
                Object obj8 = sp.e.a;
                yp.a aVar = ((sp.i) obj).f18079d;
                op.s sVar = aVar instanceof op.s ? (op.s) aVar : null;
                if (sVar == null || (mVar = (jp.m) sp.e.f18084b.get(hq.e.e(sVar.f16171b.name()).b())) == null) {
                    iVar = null;
                } else {
                    hq.c topLevelFqName = fp.o.f8902v;
                    Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
                    hq.b bVar3 = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
                    hq.e e9 = hq.e.e(mVar.name());
                    Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                    iVar = new mq.i(bVar3, e9);
                }
                r5 = iVar != null ? kotlin.collections.u0.b(new Pair(sp.c.f18081c, iVar)) : null;
                return r5 == null ? kotlin.collections.v0.d() : r5;
            case 21:
                yp.a aVar2 = ((sp.j) obj).f18079d;
                if (aVar2 instanceof op.g) {
                    Object obj9 = sp.e.a;
                    bVar = sp.e.a(((op.g) aVar2).a());
                } else if (aVar2 instanceof op.s) {
                    Object obj10 = sp.e.a;
                    bVar = sp.e.a(kotlin.collections.b0.c(aVar2));
                } else {
                    bVar = null;
                }
                r5 = bVar != null ? kotlin.collections.u0.b(new Pair(sp.c.f18080b, bVar)) : null;
                return r5 == null ? kotlin.collections.v0.d() : r5;
            case 22:
                Set keySet = ((LinkedHashMap) ((vq.c) obj).G.f6262w).keySet();
                ArrayList arrayList7 = new ArrayList();
                for (Object obj11 : keySet) {
                    hq.b bVar4 = (hq.b) obj11;
                    if (!bVar4.g() && !uq.h.f19014c.contains(bVar4)) {
                        arrayList7.add(obj11);
                    }
                }
                ArrayList arrayList8 = new ArrayList(kotlin.collections.d0.l(arrayList7, 10));
                Iterator it6 = arrayList7.iterator();
                while (it6.hasNext()) {
                    arrayList8.add(((hq.b) it6.next()).f());
                }
                return arrayList8;
            case 23:
                vp.d dVar = (vp.d) obj;
                vp.q qVar2 = dVar.f19477c;
                Collection values = ((Map) ys.d.O(qVar2.G, vp.q.K[0])).values();
                ArrayList arrayList9 = new ArrayList();
                Iterator it7 = values.iterator();
                while (it7.hasNext()) {
                    wq.q a = ((up.a) dVar.f19476b.f7952d).f18970d.a(qVar2, (np.b) it7.next());
                    if (a != null) {
                        arrayList9.add(a);
                    }
                }
                return (rq.o[]) ys.l.o(arrayList9).toArray(new rq.o[0]);
            case 24:
                HashSet hashSet2 = new HashSet();
                wq.i iVar3 = (wq.i) ((e4.i) obj).f7955v;
                vp.h hVar4 = iVar3.K;
                cc.k kVar3 = iVar3.I;
                cq.k kVar4 = iVar3.f20008w;
                Iterator it8 = hVar4.b().iterator();
                while (it8.hasNext()) {
                    for (ip.l lVar2 : m3.n.I(((yq.y) it8.next()).N(), null, 3)) {
                        if ((lVar2 instanceof lp.l0) || (lVar2 instanceof ip.m0)) {
                            hashSet2.add(((ip.d) lVar2).getName());
                        }
                    }
                }
                List list3 = kVar4.N;
                Intrinsics.checkNotNullExpressionValue(list3, "getFunctionList(...)");
                Iterator it9 = list3.iterator();
                while (it9.hasNext()) {
                    hashSet2.add(nt.a.u((eq.g) kVar3.f3399i, ((cq.a0) it9.next()).f7008x));
                }
                List list4 = kVar4.O;
                Intrinsics.checkNotNullExpressionValue(list4, "getPropertyList(...)");
                Iterator it10 = list4.iterator();
                while (it10.hasNext()) {
                    hashSet2.add(nt.a.u((eq.g) kVar3.f3399i, ((cq.i0) it10.next()).f7125x));
                }
                return kotlin.collections.e1.d(hashSet2, hashSet2);
            case 25:
                wq.p pVar2 = (wq.p) obj;
                Set n6 = pVar2.n();
                if (n6 == null) {
                    return null;
                }
                return kotlin.collections.e1.d(kotlin.collections.e1.d(pVar2.m(), pVar2.f20029c.f20020c.keySet()), n6);
            case 26:
                wq.u uVar3 = (wq.u) obj;
                cc.k kVar5 = uVar3.I;
                return CollectionsKt.i0(((uq.j) kVar5.f3398e).f19019e.n(uVar3.J, (eq.g) kVar5.f3399i));
            case 27:
                return new yq.h(((yq.i) obj).e());
            default:
                return yq.c.x((ip.s0) ((yq.h0) obj).f21039b);
        }
    }
}
