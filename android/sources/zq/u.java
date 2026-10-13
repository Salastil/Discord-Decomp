package zq;

import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.c0;
import yq.k0;
import yq.p0;
import yq.x;
import yq.y;

/* loaded from: classes3.dex */
public final class u {
    public static final u a = new u();

    public static ArrayList a(AbstractCollection abstractCollection, Function2 function2) {
        ArrayList arrayList = new ArrayList(abstractCollection);
        Iterator it = arrayList.iterator();
        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
        while (it.hasNext()) {
            c0 c0Var = (c0) it.next();
            if (!arrayList.isEmpty()) {
                Iterator it2 = arrayList.iterator();
                while (true) {
                    if (!it2.hasNext()) {
                        break;
                    }
                    c0 c0Var2 = (c0) it2.next();
                    if (c0Var2 != c0Var) {
                        Intrinsics.checkNotNull(c0Var2);
                        Intrinsics.checkNotNull(c0Var);
                        if (((Boolean) function2.invoke(c0Var2, c0Var)).booleanValue()) {
                            it.remove();
                            break;
                        }
                    }
                }
            }
        }
        return arrayList;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v4, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v5 */
    /* JADX WARN: Type inference failed for: r2v7, types: [fr.d, java.lang.Object, yq.k0] */
    /* JADX WARN: Type inference failed for: r2v8 */
    /* JADX WARN: Type inference failed for: r2v9, types: [yq.k0] */
    /* JADX WARN: Type inference failed for: r3v10 */
    /* JADX WARN: Type inference failed for: r3v11, types: [java.lang.Object, yq.c0, yq.y] */
    /* JADX WARN: Type inference failed for: r3v12 */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v16 */
    /* JADX WARN: Type inference failed for: r3v21, types: [yq.c0] */
    /* JADX WARN: Type inference failed for: r3v9, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r6v7, types: [java.util.LinkedHashSet, java.util.Set] */
    public final c0 b(ArrayList types) {
        c0 c0Var;
        c0 e9;
        Intrinsics.checkNotNullParameter(types, "types");
        types.size();
        ArrayList arrayList = new ArrayList();
        Iterator it = types.iterator();
        while (it.hasNext()) {
            c0 c0Var2 = (c0) it.next();
            if (c0Var2.r0() instanceof x) {
                Collection b10 = c0Var2.r0().b();
                Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
                Collection<y> collection = b10;
                ArrayList arrayList2 = new ArrayList(d0.l(collection, 10));
                for (y yVar : collection) {
                    Intrinsics.checkNotNull(yVar);
                    c0 E = yq.c.E(yVar);
                    if (c0Var2.t0()) {
                        E = E.x0(true);
                    }
                    arrayList2.add(E);
                }
                arrayList.addAll(arrayList2);
            } else {
                arrayList.add(c0Var2);
            }
        }
        t tVar = t.f21400d;
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            tVar = tVar.a((b1) it2.next());
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it3 = arrayList.iterator();
        while (it3.hasNext()) {
            c0 c0Var3 = (c0) it3.next();
            if (tVar == t.f21403v) {
                if (c0Var3 instanceof h) {
                    h hVar = (h) c0Var3;
                    Intrinsics.checkNotNullParameter(hVar, "<this>");
                    c0Var3 = new h(hVar.f21383e, hVar.f21384i, hVar.f21385v, hVar.f21386w, hVar.f21387x, true);
                }
                Intrinsics.checkNotNullParameter(c0Var3, "<this>");
                c0 m5 = yq.f.m(c0Var3, false);
                c0Var3 = (m5 == null && (m5 = yq.c.n(c0Var3)) == null) ? c0Var3.x0(false) : m5;
            }
            linkedHashSet.add(c0Var3);
        }
        ArrayList arrayList3 = new ArrayList(d0.l(types, 10));
        Iterator it4 = types.iterator();
        while (it4.hasNext()) {
            arrayList3.add(((c0) it4.next()).q0());
        }
        Iterator it5 = arrayList3.iterator();
        if (!it5.hasNext()) {
            throw new UnsupportedOperationException("Empty collection can't be reduced.");
        }
        ?? next = it5.next();
        while (true) {
            c0Var = null;
            if (!it5.hasNext()) {
                break;
            }
            k0 other = (k0) it5.next();
            next = (k0) next;
            next.getClass();
            e4.r rVar = k0.f21045e;
            Intrinsics.checkNotNullParameter(other, "other");
            if (!next.isEmpty() || !other.isEmpty()) {
                ArrayList arrayList4 = new ArrayList();
                Collection values = ((ConcurrentHashMap) rVar.f8000e).values();
                Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
                Iterator it6 = values.iterator();
                while (it6.hasNext()) {
                    int intValue = ((Number) it6.next()).intValue();
                    yq.j jVar = (yq.j) next.f9009d.get(intValue);
                    yq.j jVar2 = (yq.j) other.f9009d.get(intValue);
                    if (jVar != null) {
                        if (!Intrinsics.areEqual(jVar2, jVar)) {
                            jVar = null;
                        }
                        jVar2 = jVar;
                    } else if (jVar2 == null || !Intrinsics.areEqual(jVar, jVar2)) {
                        jVar2 = null;
                    }
                    ir.n.b(arrayList4, jVar2);
                }
                next = e4.r.g(arrayList4);
            }
        }
        k0 k0Var = (k0) next;
        if (linkedHashSet.size() == 1) {
            e9 = (c0) CollectionsKt.Y(linkedHashSet);
        } else {
            ArrayList types2 = a(linkedHashSet, new ds.o(2, this, u.class, "isStrictSupertype", "isStrictSupertype(Lorg/jetbrains/kotlin/types/KotlinType;Lorg/jetbrains/kotlin/types/KotlinType;)Z", 0, 7));
            types2.isEmpty();
            Intrinsics.checkNotNullParameter(types2, "types");
            mq.n[] nVarArr = mq.n.f14580d;
            if (!types2.isEmpty()) {
                Iterator it7 = types2.iterator();
                if (!it7.hasNext()) {
                    throw new UnsupportedOperationException("Empty collection can't be reduced.");
                }
                c0 next2 = it7.next();
                while (it7.hasNext()) {
                    c0 c0Var4 = (c0) it7.next();
                    next2 = next2;
                    if (next2 != 0 && c0Var4 != null) {
                        p0 r02 = next2.r0();
                        p0 r03 = c0Var4.r0();
                        boolean z5 = r02 instanceof mq.o;
                        if (z5 && (r03 instanceof mq.o)) {
                            LinkedHashSet linkedHashSet2 = ((mq.o) r02).a;
                            LinkedHashSet other2 = ((mq.o) r03).a;
                            Intrinsics.checkNotNullParameter(linkedHashSet2, "<this>");
                            Intrinsics.checkNotNullParameter(other2, "other");
                            LinkedHashSet k02 = CollectionsKt.k0(linkedHashSet2);
                            h0.o(k02, other2);
                            mq.o constructor = new mq.o(k02);
                            k0.f21045e.getClass();
                            k0 attributes = k0.f21046i;
                            Intrinsics.checkNotNullParameter(attributes, "attributes");
                            Intrinsics.checkNotNullParameter(constructor, "constructor");
                            next2 = yq.c.v(m0.f13512d, ar.l.a(ar.h.f2669i, true, "unknown integer literal type"), attributes, constructor, false);
                        } else if (z5) {
                            if (((mq.o) r02).a.contains(c0Var4)) {
                                next2 = c0Var4;
                            }
                        } else if ((r03 instanceof mq.o) && ((mq.o) r03).a.contains(next2)) {
                        }
                    }
                    next2 = 0;
                }
                c0Var = next2;
            }
            if (c0Var != null) {
                e9 = c0Var;
            } else {
                l.f21396b.getClass();
                ArrayList a10 = a(types2, new ds.o(k.f21395b));
                a10.isEmpty();
                e9 = a10.size() < 2 ? (c0) CollectionsKt.Y(a10) : new x(linkedHashSet).e();
            }
        }
        return e9.z0(k0Var);
    }
}
