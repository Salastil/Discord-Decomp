package kq;

import a5.k0;
import ip.o0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;
import op.t;
import vp.r;
import vp.s;
import vp.u;
import vp.v;
import yq.y;

/* loaded from: classes3.dex */
public final class k implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13623d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13624e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f13625i;

    public /* synthetic */ k(int i5, Object obj, Object obj2) {
        this.f13623d = i5;
        this.f13624e = obj;
        this.f13625i = obj2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x0064, code lost:
    
        if (((rp.a) r6.f9089e) != rp.a.f17423x) goto L20;
     */
    @Override // kotlin.jvm.functions.Function1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object extractNullability) {
        ve.i R;
        String str;
        Class M;
        np.b m5;
        zp.d dVar;
        int i5 = this.f13623d;
        boolean z5 = true;
        Object obj = this.f13625i;
        Object obj2 = this.f13624e;
        switch (i5) {
            case 0:
                ip.d second = (ip.d) extractNullability;
                ip.d first = (ip.d) obj;
                Intrinsics.checkNotNullParameter(first, "first");
                Intrinsics.checkNotNullParameter(second, "second");
                ((k0) obj2).o(first, second);
                return Unit.a;
            case 1:
                vp.o oVar = (vp.o) obj2;
                e4.i iVar = (e4.i) obj;
                hq.e name = (hq.e) extractNullability;
                Intrinsics.checkNotNullParameter(name, "name");
                xq.i iVar2 = oVar.f19516r;
                ip.f fVar = oVar.f19512n;
                int i6 = 2;
                if (((Set) iVar2.invoke()).contains(name)) {
                    gj.c cVar = ((up.a) iVar.f7952d).f18968b;
                    hq.b f2 = oq.e.f(fVar);
                    Intrinsics.checkNotNull(f2);
                    op.n D = cVar.D(new rp.l(f2.d(name), oVar.f19513o, 2));
                    if (D == null) {
                        return null;
                    }
                    vp.j classDescriptor = new vp.j(iVar, fVar, D, null);
                    ((up.a) iVar.f7952d).f18983s.getClass();
                    Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
                    return classDescriptor;
                }
                if (!((Set) oVar.f19517s.invoke()).contains(name)) {
                    t tVar = (t) ((Map) oVar.f19518t.invoke()).get(name);
                    if (tVar == null) {
                        return null;
                    }
                    up.a aVar = (up.a) iVar.f7952d;
                    xq.o oVar2 = aVar.a;
                    vp.l lVar = new vp.l(oVar, i6);
                    xq.l lVar2 = (xq.l) oVar2;
                    lVar2.getClass();
                    return lp.q.l0(aVar.a, oVar.f19512n, name, new xq.i(lVar2, lVar), nf.e.y(iVar, tVar), aVar.j.b(tVar));
                }
                go.e b10 = b0.b();
                ((pq.a) ((up.a) iVar.f7952d).f18988x).c(fVar, name, b10, iVar);
                go.e a = b0.a(b10);
                int a10 = a.a();
                if (a10 == 0) {
                    return null;
                }
                if (a10 == 1) {
                    return (ip.f) CollectionsKt.Z(a);
                }
                throw new IllegalStateException(("Multiple classes with same name are generated: " + a).toString());
            case 2:
                l0 l0Var = (l0) obj2;
                vp.o oVar3 = (vp.o) obj;
                hq.e accessorName = (hq.e) extractNullability;
                Intrinsics.checkNotNullParameter(accessorName, "accessorName");
                return Intrinsics.areEqual(l0Var.getName(), accessorName) ? b0.c(l0Var) : CollectionsKt.V(oVar3.N(accessorName), oVar3.O(accessorName));
            case 3:
                v vVar = (v) obj2;
                e4.i iVar3 = vVar.f19462b;
                e4.i iVar4 = (e4.i) obj;
                up.a aVar2 = (up.a) iVar4.f7952d;
                r request = (r) extractNullability;
                Intrinsics.checkNotNullParameter(request, "request");
                vp.q qVar = vVar.f19527o;
                hq.b bVar = new hq.b(qVar.f14132x, request.a);
                op.n javaClass = request.f19522b;
                if (javaClass != null) {
                    ha.l lVar3 = aVar2.f18969c;
                    ((up.a) iVar3.f7952d).f18970d.c().f19017c.getClass();
                    eq.f metadataVersion = eq.f.f8216g;
                    lVar3.getClass();
                    Intrinsics.checkNotNullParameter(javaClass, "javaClass");
                    Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
                    hq.c c6 = javaClass.c();
                    R = (c6 == null || (str = c6.a.a) == null || (M = com.facebook.imagepipeline.nativecode.b.M((ClassLoader) lVar3.f9613d, str)) == null || (m5 = com.facebook.imagepipeline.nativecode.c.m(M)) == null) ? null : new ve.i(m5);
                } else {
                    ha.l lVar4 = aVar2.f18969c;
                    ((up.a) iVar3.f7952d).f18970d.c().f19017c.getClass();
                    R = lVar4.R(bVar, eq.f.f8216g);
                }
                np.b kotlinClass = R != null ? (np.b) R.f19405d : null;
                hq.b a11 = kotlinClass != null ? op.c.a(kotlinClass.a) : null;
                if (a11 != null && (a11.g() || a11.f10202c)) {
                    return null;
                }
                com.facebook.imagepipeline.nativecode.b bVar2 = vp.t.f19524v;
                if (kotlinClass != null) {
                    if (((bq.a) kotlinClass.f15583b.f636d) == bq.a.f3138w) {
                        aq.f fVar2 = ((up.a) iVar3.f7952d).f18970d;
                        fVar2.getClass();
                        Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
                        uq.e g6 = fVar2.g(kotlinClass);
                        ip.f a12 = g6 == null ? null : fVar2.c().f19032t.a(op.c.a(kotlinClass.a), g6);
                        if (a12 != null) {
                            bVar2 = new s(a12);
                        }
                    } else {
                        bVar2 = u.f19525v;
                    }
                }
                if (bVar2 instanceof s) {
                    return ((s) bVar2).f19523v;
                }
                if (bVar2 instanceof u) {
                    return null;
                }
                if (!(bVar2 instanceof vp.t)) {
                    throw new fo.n();
                }
                if (javaClass == null) {
                    javaClass = aVar2.f18968b.D(new rp.l(bVar, null, 4));
                }
                yp.f[] fVarArr = yp.f.f21006d;
                hq.c c8 = javaClass != null ? javaClass.c() : null;
                if (c8 == null || c8.a.c() || !Intrinsics.areEqual(c8.b(), qVar.f14132x)) {
                    return null;
                }
                vp.j classDescriptor2 = new vp.j(iVar4, qVar, javaClass, null);
                aVar2.f18983s.getClass();
                Intrinsics.checkNotNullParameter(classDescriptor2, "classDescriptor");
                return classDescriptor2;
            case 4:
                e4.i iVar5 = (e4.i) obj2;
                wq.i iVar6 = (wq.i) obj;
                cc.k kVar = iVar6.I;
                hq.e name2 = (hq.e) extractNullability;
                Intrinsics.checkNotNullParameter(name2, "name");
                cq.v vVar2 = (cq.v) ((LinkedHashMap) iVar5.f7952d).get(name2);
                if (vVar2 != null) {
                    return lp.q.l0(((uq.j) kVar.f3398e).a, iVar6, name2, (xq.i) iVar5.f7954i, new wq.a(((uq.j) kVar.f3398e).a, new bs.q(17, iVar6, vVar2)), o0.f12151g);
                }
                return null;
            case 5:
                g3.a aVar3 = (g3.a) obj2;
                e4.i iVar7 = (e4.i) aVar3.f9088d;
                Intrinsics.checkNotNullParameter(extractNullability, "$this$extractNullability");
                cr.d dVar2 = ((zp.a) obj).a;
                jp.b annotation = (jp.b) extractNullability;
                Intrinsics.checkNotNullParameter(annotation, "<this>");
                if (annotation instanceof vp.f) {
                    ((up.a) iVar7.f7952d).f18984t.getClass();
                    if (!((vp.f) annotation).f19491g) {
                        break;
                    }
                    return Boolean.valueOf(z5);
                }
                if (dVar2 != null) {
                    hq.e eVar = fp.i.f8859e;
                    ip.i a13 = ((y) dVar2).r0().a();
                    if (a13 != null && fp.i.s(a13) != null) {
                        ((up.a) iVar7.f7952d).f18981q.getClass();
                        Intrinsics.checkNotNullParameter(annotation, "annotation");
                        Object c10 = rp.b.c(annotation, fp.o.f8900t);
                        if (c10 != null) {
                            ArrayList a14 = rp.b.a(c10, false);
                            if (!a14.isEmpty()) {
                                Iterator it = a14.iterator();
                                while (it.hasNext()) {
                                    if (Intrinsics.areEqual((String) it.next(), "TYPE")) {
                                        ((up.a) iVar7.f7952d).f18984t.getClass();
                                        return Boolean.valueOf(z5);
                                    }
                                }
                            }
                        }
                    }
                }
                z5 = false;
                return Boolean.valueOf(z5);
            default:
                zp.r rVar = (zp.r) obj2;
                zp.d[] dVarArr = (zp.d[]) obj;
                int intValue = ((Number) extractNullability).intValue();
                return (rVar == null || (dVar = (zp.d) rVar.a.get(Integer.valueOf(intValue))) == null) ? (intValue < 0 || intValue >= dVarArr.length) ? zp.d.f21344e : dVarArr[intValue] : dVar;
        }
    }
}
