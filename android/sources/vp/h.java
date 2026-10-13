package vp;

import ip.p0;
import ip.s0;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;
import kotlin.ranges.IntRange;
import yq.c1;
import yq.h0;
import yq.k0;
import yq.x0;

/* loaded from: classes3.dex */
public final class h extends yq.b {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f19494c = 0;

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f19495d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ lp.b f19496e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h(j jVar) {
        super(((up.a) r0.f7952d).a);
        this.f19496e = jVar;
        e4.i iVar = jVar.G;
        xq.o oVar = ((up.a) iVar.f7952d).a;
        g gVar = new g(jVar, 2);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        this.f19495d = new xq.i(lVar, gVar);
    }

    @Override // yq.b, yq.p0
    public final ip.i a() {
        switch (this.f19494c) {
            case 0:
                return (j) this.f19496e;
            default:
                return (wq.i) this.f19496e;
        }
    }

    @Override // yq.p0
    public final boolean c() {
        switch (this.f19494c) {
        }
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:64:0x0213, code lost:
    
        if (r6 == null) goto L100;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:104:0x03ba  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x03bf  */
    /* JADX WARN: Removed duplicated region for block: B:108:0x0374  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x02e9  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0361  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0381  */
    /* JADX WARN: Type inference failed for: r2v17 */
    /* JADX WARN: Type inference failed for: r2v18, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r2v28, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r2v29 */
    /* JADX WARN: Type inference failed for: r2v30 */
    @Override // yq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Collection e() {
        Class cls;
        Collection<op.p> collection;
        String str;
        hq.i iVar;
        hq.c cVar;
        hq.c topLevelClassFqName;
        ArrayList arrayList;
        yq.c0 s2;
        String b10;
        hq.c a;
        int i5 = this.f19494c;
        lp.b bVar = this.f19496e;
        switch (i5) {
            case 0:
                j jVar = (j) bVar;
                e4.i context = jVar.G;
                Class cls2 = jVar.E.a;
                cls = Object.class;
                if (Intrinsics.areEqual(cls2, cls)) {
                    collection = m0.f13512d;
                } else {
                    SpreadBuilder spreadBuilder = new SpreadBuilder(2);
                    Type genericSuperclass = cls2.getGenericSuperclass();
                    spreadBuilder.add(genericSuperclass != null ? genericSuperclass : Object.class);
                    spreadBuilder.addSpread(cls2.getGenericInterfaces());
                    List g6 = kotlin.collections.c0.g(spreadBuilder.toArray(new Type[spreadBuilder.size()]));
                    ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(g6, 10));
                    Iterator it = g6.iterator();
                    while (it.hasNext()) {
                        arrayList2.add(new op.p((Type) it.next()));
                    }
                    collection = arrayList2;
                }
                ArrayList arrayList3 = new ArrayList(collection.size());
                ArrayList arrayList4 = new ArrayList(0);
                up.c cVar2 = jVar.R;
                hq.c PURELY_IMPLEMENTS_ANNOTATION = rp.y.f17505n;
                Intrinsics.checkNotNullExpressionValue(PURELY_IMPLEMENTS_ANNOTATION, "PURELY_IMPLEMENTS_ANNOTATION");
                jp.b Q = cVar2.Q(PURELY_IMPLEMENTS_ANNOTATION);
                if (Q != null) {
                    Object a0 = CollectionsKt.a0(Q.b().values());
                    mq.x xVar = a0 instanceof mq.x ? (mq.x) a0 : null;
                    if (xVar != null && (str = (String) xVar.a) != null) {
                        hq.i iVar2 = hq.i.f10238d;
                        int i6 = 0;
                        while (true) {
                            if (i6 < str.length()) {
                                char charAt = str.charAt(i6);
                                int ordinal = iVar2.ordinal();
                                if (ordinal != 0) {
                                    if (ordinal != 1) {
                                        if (ordinal != 2) {
                                            throw new fo.n();
                                        }
                                    } else if (charAt == '.') {
                                        iVar = hq.i.f10240i;
                                        iVar2 = iVar;
                                        i6++;
                                    } else if (Character.isJavaIdentifierPart(charAt)) {
                                        i6++;
                                    }
                                }
                                if (Character.isJavaIdentifierStart(charAt)) {
                                    iVar = hq.i.f10239e;
                                    iVar2 = iVar;
                                    i6++;
                                }
                            } else {
                                cVar = iVar2 != hq.i.f10240i ? new hq.c(str) : null;
                            }
                        }
                    }
                }
                if (cVar == null || cVar.a.c() || !cVar.c(fp.p.k)) {
                    cVar = null;
                }
                if (cVar == null) {
                    LinkedHashMap linkedHashMap = rp.j.a;
                    hq.c classFqName = oq.e.g(jVar);
                    Intrinsics.checkNotNullParameter(classFqName, "classFqName");
                    topLevelClassFqName = (hq.c) rp.j.f17469b.get(classFqName);
                    break;
                } else {
                    topLevelClassFqName = cVar;
                }
                hq.d dVar = topLevelClassFqName.a;
                ip.a0 a0Var = ((up.a) context.f7952d).f18979o;
                qp.c location = qp.c.E;
                int i10 = oq.e.a;
                Intrinsics.checkNotNullParameter(a0Var, "<this>");
                Intrinsics.checkNotNullParameter(topLevelClassFqName, "topLevelClassFqName");
                Intrinsics.checkNotNullParameter(location, "location");
                dVar.c();
                ip.i a10 = ((lp.w) a0Var.D(topLevelClassFqName.b())).E.a(dVar.f(), location);
                ip.f fVar = a10 instanceof ip.f ? (ip.f) a10 : null;
                if (fVar != null) {
                    int size = fVar.n().getParameters().size();
                    List parameters = jVar.M.getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                    int size2 = parameters.size();
                    if (size2 == size) {
                        arrayList = new ArrayList(kotlin.collections.d0.l(parameters, 10));
                        Iterator it2 = parameters.iterator();
                        while (it2.hasNext()) {
                            arrayList.add(new h0(((s0) it2.next()).k(), c1.f21013i));
                        }
                    } else if (size2 == 1 && size > 1 && cVar == null) {
                        h0 h0Var = new h0(((s0) CollectionsKt.Z(parameters)).k(), c1.f21013i);
                        IntRange intRange = new IntRange(1, size, 1);
                        ArrayList arrayList5 = new ArrayList(kotlin.collections.d0.l(intRange, 10));
                        Iterator it3 = intRange.iterator();
                        while (((yo.b) it3).f20994i) {
                            ((r0) it3).nextInt();
                            arrayList5.add(h0Var);
                        }
                        arrayList = arrayList5;
                    }
                    k0.f21045e.getClass();
                    s2 = yq.c.s(k0.f21046i, fVar, arrayList);
                    for (op.p pVar : collection) {
                        yq.y type = ((k2.r) context.f7955v).O(pVar, nf.e.D(x0.f21080d, false, null, 7));
                        zp.o oVar = ((up.a) context.f7952d).f18982r;
                        oVar.getClass();
                        Intrinsics.checkNotNullParameter(type, "type");
                        Intrinsics.checkNotNullParameter(context, "context");
                        yq.y a11 = oVar.a(new g3.a((jp.a) null, false, context, rp.a.f17422w, true), type, m0.f13512d, null, false);
                        if (a11 == null) {
                            a11 = type;
                        }
                        if (a11.r0().a() instanceof ip.e0) {
                            arrayList4.add(pVar);
                        }
                        if (!Intrinsics.areEqual(a11.r0(), s2 != null ? s2.r0() : null) && !fp.i.y(a11)) {
                            arrayList3.add(a11);
                        }
                    }
                    ip.f fVar2 = jVar.F;
                    ir.n.b(arrayList3, fVar2 == null ? nt.a.k(fVar2, jVar).c().j(fVar2.k(), c1.f21013i) : null);
                    ir.n.b(arrayList3, s2);
                    if (!arrayList4.isEmpty()) {
                        uq.m mVar = ((up.a) context.f7952d).f18972f;
                        ArrayList arrayList6 = new ArrayList(kotlin.collections.d0.l(arrayList4, 10));
                        Iterator it4 = arrayList4.iterator();
                        while (it4.hasNext()) {
                            yp.d dVar2 = (yp.d) it4.next();
                            Intrinsics.checkNotNull(dVar2, "null cannot be cast to non-null type org.jetbrains.kotlin.load.java.structure.JavaClassifierType");
                            arrayList6.add(((op.p) dVar2).a.toString());
                        }
                        mVar.a(jVar, arrayList6);
                    }
                    return arrayList3.isEmpty() ? CollectionsKt.i0(arrayList3) : kotlin.collections.b0.c(((up.a) context.f7952d).f18979o.g().e());
                }
                s2 = null;
                while (r1.hasNext()) {
                }
                ip.f fVar22 = jVar.F;
                ir.n.b(arrayList3, fVar22 == null ? nt.a.k(fVar22, jVar).c().j(fVar22.k(), c1.f21013i) : null);
                ir.n.b(arrayList3, s2);
                if (!arrayList4.isEmpty()) {
                }
                if (arrayList3.isEmpty()) {
                }
                break;
            default:
                wq.i iVar3 = (wq.i) bVar;
                cq.k kVar = iVar3.f20008w;
                cc.k kVar2 = iVar3.I;
                a4.i typeTable = (a4.i) kVar2.f3401w;
                Intrinsics.checkNotNullParameter(kVar, "<this>");
                Intrinsics.checkNotNullParameter(typeTable, "typeTable");
                List list = kVar.E;
                boolean isEmpty = list.isEmpty();
                ?? r22 = list;
                if (isEmpty) {
                    r22 = 0;
                }
                if (r22 == 0) {
                    List<Integer> list2 = kVar.F;
                    Intrinsics.checkNotNullExpressionValue(list2, "getSupertypeIdList(...)");
                    r22 = new ArrayList(kotlin.collections.d0.l(list2, 10));
                    for (Integer num : list2) {
                        Intrinsics.checkNotNull(num);
                        r22.add(typeTable.b(num.intValue()));
                    }
                }
                ArrayList arrayList7 = new ArrayList(kotlin.collections.d0.l(r22, 10));
                Iterator it5 = r22.iterator();
                while (it5.hasNext()) {
                    arrayList7.add(((uq.c0) kVar2.F).g((cq.s0) it5.next()));
                }
                ArrayList V = CollectionsKt.V(arrayList7, ((uq.j) kVar2.f3398e).f19026n.d(iVar3));
                ArrayList arrayList8 = new ArrayList();
                Iterator it6 = V.iterator();
                while (it6.hasNext()) {
                    ip.i a12 = ((yq.y) it6.next()).r0().a();
                    ip.e0 e0Var = a12 instanceof ip.e0 ? (ip.e0) a12 : null;
                    if (e0Var != null) {
                        arrayList8.add(e0Var);
                    }
                }
                if (!arrayList8.isEmpty()) {
                    uq.m mVar2 = ((uq.j) kVar2.f3398e).f19022h;
                    ArrayList arrayList9 = new ArrayList(kotlin.collections.d0.l(arrayList8, 10));
                    Iterator it7 = arrayList8.iterator();
                    while (it7.hasNext()) {
                        ip.e0 e0Var2 = (ip.e0) it7.next();
                        hq.b f2 = oq.e.f(e0Var2);
                        if (f2 == null || (a = f2.a()) == null || (b10 = a.a.a) == null) {
                            b10 = e0Var2.getName().b();
                            Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
                        }
                        arrayList9.add(b10);
                    }
                    mVar2.a(iVar3, arrayList9);
                }
                return CollectionsKt.i0(V);
        }
    }

    @Override // yq.p0
    public final List getParameters() {
        switch (this.f19494c) {
        }
        return (List) this.f19495d.invoke();
    }

    @Override // yq.i
    public final p0 i() {
        switch (this.f19494c) {
            case 0:
                return ((up.a) ((j) this.f19496e).G.f7952d).f18977m;
            default:
                return p0.f12154i;
        }
    }

    @Override // yq.b
    /* renamed from: o */
    public final ip.f a() {
        switch (this.f19494c) {
            case 0:
                return (j) this.f19496e;
            default:
                return (wq.i) this.f19496e;
        }
    }

    public final String toString() {
        switch (this.f19494c) {
            case 0:
                String b10 = ((j) this.f19496e).getName().b();
                Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
                return b10;
            default:
                String str = ((wq.i) this.f19496e).getName().f10209d;
                Intrinsics.checkNotNullExpressionValue(str, "toString(...)");
                return str;
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h(wq.i iVar) {
        super(((uq.j) r0.f3398e).a);
        this.f19496e = iVar;
        cc.k kVar = iVar.I;
        xq.l lVar = ((uq.j) kVar.f3398e).a;
        wq.d dVar = new wq.d(iVar, 6);
        lVar.getClass();
        this.f19495d = new xq.i(lVar, dVar);
    }
}
