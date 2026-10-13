package vp;

import ip.m0;
import ip.p0;
import ip.v0;
import java.lang.reflect.Field;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import lp.i0;
import lp.l0;
import yq.x0;
import yq.z0;

/* loaded from: classes3.dex */
public final class y implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19536d;

    /* renamed from: e, reason: collision with root package name */
    public final a0 f19537e;

    public /* synthetic */ y(a0 a0Var, int i5) {
        this.f19536d = i5;
        this.f19537e = a0Var;
    }

    /* JADX WARN: Code restructure failed: missing block: B:78:0x0275, code lost:
    
        if (fp.t.a(r6) == false) goto L89;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:103:0x02e8  */
    /* JADX WARN: Removed duplicated region for block: B:105:0x020b  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0208  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x020e  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0229  */
    /* JADX WARN: Type inference failed for: r6v29, types: [T, lp.i0] */
    /* JADX WARN: Type inference failed for: r9v4, types: [T, java.lang.Object, lp.i0, tp.f] */
    @Override // kotlin.jvm.functions.Function1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object obj) {
        char c6;
        up.a aVar;
        ip.l lVar;
        np.f fVar;
        boolean z5;
        yp.d hVar;
        yq.y O;
        ip.f fVar2;
        v0 v0Var;
        int i5 = this.f19536d;
        a0 a0Var = this.f19537e;
        switch (i5) {
            case 0:
                hq.e name = (hq.e) obj;
                Intrinsics.checkNotNullParameter(name, "name");
                a0 a0Var2 = a0Var.f19463c;
                if (a0Var2 != null) {
                    return (Collection) a0Var2.f19466f.invoke(name);
                }
                ArrayList arrayList = new ArrayList();
                Iterator it = ((c) a0Var.f19465e.invoke()).d(name).iterator();
                while (it.hasNext()) {
                    tp.e t5 = a0Var.t((op.w) it.next());
                    if (a0Var.r(t5)) {
                        ((up.a) a0Var.f19462b.f7952d).f18973g.getClass();
                        arrayList.add(t5);
                    }
                }
                a0Var.j(name, arrayList);
                return arrayList;
            case 1:
                hq.e name2 = (hq.e) obj;
                Intrinsics.checkNotNullParameter(name2, "name");
                a0 a0Var3 = a0Var.f19463c;
                if (a0Var3 != null) {
                    return (m0) a0Var3.f19467g.invoke(name2);
                }
                op.t b10 = ((c) a0Var.f19465e.invoke()).b(name2);
                if (b10 != null) {
                    Field field = b10.a;
                    if (!field.isEnumConstant()) {
                        Ref.ObjectRef objectRef = new Ref.ObjectRef();
                        boolean z6 = !Modifier.isFinal(((Field) b10.b()).getModifiers());
                        e4.i iVar = a0Var.f19462b;
                        up.c y5 = nf.e.y(iVar, b10);
                        up.a aVar2 = (up.a) iVar.f7952d;
                        ip.l q5 = a0Var.q();
                        p0 p0Var = ip.z.f12179d;
                        ip.p y6 = ys.l.y(b10.e());
                        hq.e c8 = b10.c();
                        np.f b11 = aVar2.j.b(b10);
                        int i6 = 0;
                        if (Modifier.isFinal(((Field) b10.b()).getModifiers()) && Modifier.isStatic(((Field) b10.b()).getModifiers())) {
                            c6 = 1;
                            aVar = aVar2;
                            lVar = q5;
                            fVar = b11;
                            z5 = true;
                        } else {
                            c6 = 1;
                            aVar = aVar2;
                            lVar = q5;
                            fVar = b11;
                            z5 = false;
                        }
                        ?? J0 = tp.f.J0(lVar, y5, y6, z6, c8, fVar, z5);
                        Intrinsics.checkNotNullExpressionValue(J0, "create(...)");
                        objectRef.element = J0;
                        J0.F0(null, null, null, null);
                        k2.r rVar = (k2.r) iVar.f7955v;
                        Type type = field.getGenericType();
                        Intrinsics.checkNotNullExpressionValue(type, "getGenericType(...)");
                        Intrinsics.checkNotNullParameter(type, "type");
                        boolean z7 = type instanceof Class;
                        if (z7) {
                            Class cls = (Class) type;
                            if (cls.isPrimitive()) {
                                hVar = new op.y(cls);
                                O = rVar.O(hVar, nf.e.D(x0.f21081e, false, null, 7));
                                if ((!fp.i.G(O) || fp.i.H(O)) && Modifier.isFinal(((Field) b10.b()).getModifiers())) {
                                    Modifier.isStatic(((Field) b10.b()).getModifiers());
                                }
                                i0 i0Var = (i0) objectRef.element;
                                kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
                                i0Var.I0(O, m0Var, a0Var.p(), null, m0Var);
                                ip.l q6 = a0Var.q();
                                fVar2 = !(q6 instanceof ip.f) ? (ip.f) q6 : null;
                                if (fVar2 != null) {
                                    objectRef.element = ((pq.a) aVar.f18988x).h(fVar2, (i0) objectRef.element, iVar);
                                }
                                T t10 = objectRef.element;
                                v0Var = (v0) t10;
                                yq.y type2 = ((i0) t10).getType();
                                if (v0Var != null) {
                                    kq.e.a(65);
                                    throw null;
                                }
                                if (type2 == null) {
                                    kq.e.a(66);
                                    throw null;
                                }
                                int i10 = kq.e.a;
                                if (!v0Var.V() && !yq.c.j(type2)) {
                                    if (!z0.b(type2)) {
                                        fp.i e9 = oq.e.e(v0Var);
                                        if (!fp.i.G(type2)) {
                                            zq.m mVar = zq.d.a;
                                            if (!mVar.a(e9.v(), type2)) {
                                                if (!mVar.a(e9.k("Number").k(), type2)) {
                                                    if (!mVar.a(e9.e(), type2)) {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    ((i0) objectRef.element).G0(null, new x(a0Var, b10, objectRef, i6));
                                }
                                sp.h hVar2 = aVar.f18973g;
                                m0 m0Var2 = (m0) objectRef.element;
                                hVar2.getClass();
                                if (m0Var2 != null) {
                                    return (m0) objectRef.element;
                                }
                                Object[] objArr = new Object[3];
                                switch (6) {
                                    case 1:
                                        objArr[0] = "member";
                                        break;
                                    case 2:
                                    case 4:
                                    case 6:
                                    case 8:
                                        objArr[0] = "descriptor";
                                        break;
                                    case 3:
                                        objArr[0] = "element";
                                        break;
                                    case 5:
                                        objArr[0] = "field";
                                        break;
                                    case 7:
                                        objArr[0] = "javaClass";
                                        break;
                                    default:
                                        objArr[0] = "fqName";
                                        break;
                                }
                                objArr[c6] = "kotlin/reflect/jvm/internal/impl/load/java/components/JavaResolverCache$1";
                                switch (6) {
                                    case 1:
                                    case 2:
                                        objArr[2] = "recordMethod";
                                        break;
                                    case 3:
                                    case 4:
                                        objArr[2] = "recordConstructor";
                                        break;
                                    case 5:
                                    case 6:
                                        objArr[2] = "recordField";
                                        break;
                                    case 7:
                                    case 8:
                                        objArr[2] = "recordClass";
                                        break;
                                    default:
                                        objArr[2] = "getClassResolvedFromSource";
                                        break;
                                }
                                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
                            }
                        }
                        hVar = ((type instanceof GenericArrayType) || (z7 && ((Class) type).isArray())) ? new op.h(type) : type instanceof WildcardType ? new op.d0((WildcardType) type) : new op.p(type);
                        O = rVar.O(hVar, nf.e.D(x0.f21081e, false, null, 7));
                        if (!fp.i.G(O)) {
                        }
                        Modifier.isStatic(((Field) b10.b()).getModifiers());
                        i0 i0Var2 = (i0) objectRef.element;
                        kotlin.collections.m0 m0Var3 = kotlin.collections.m0.f13512d;
                        i0Var2.I0(O, m0Var3, a0Var.p(), null, m0Var3);
                        ip.l q62 = a0Var.q();
                        if (!(q62 instanceof ip.f)) {
                        }
                        if (fVar2 != null) {
                        }
                        T t102 = objectRef.element;
                        v0Var = (v0) t102;
                        yq.y type22 = ((i0) t102).getType();
                        if (v0Var != null) {
                        }
                    }
                }
                return null;
            case 2:
                hq.e name3 = (hq.e) obj;
                Intrinsics.checkNotNullParameter(name3, "name");
                LinkedHashSet linkedHashSet = new LinkedHashSet((Collection) a0Var.f19466f.invoke(name3));
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                for (Object obj2 : linkedHashSet) {
                    String g6 = ks.n.g((l0) obj2, 2);
                    Object obj3 = linkedHashMap.get(g6);
                    if (obj3 == null) {
                        obj3 = new ArrayList();
                        linkedHashMap.put(g6, obj3);
                    }
                    ((List) obj3).add(obj2);
                }
                for (List list : linkedHashMap.values()) {
                    if (list.size() != 1) {
                        Collection y10 = android.support.v4.media.session.b.y(list, m.f19504i);
                        linkedHashSet.removeAll(list);
                        linkedHashSet.addAll(y10);
                    }
                }
                a0Var.m(linkedHashSet, name3);
                e4.i iVar2 = a0Var.f19462b;
                return CollectionsKt.i0(((up.a) iVar2.f7952d).f18982r.c(iVar2, linkedHashSet));
            default:
                hq.e name4 = (hq.e) obj;
                Intrinsics.checkNotNullParameter(name4, "name");
                ArrayList arrayList2 = new ArrayList();
                ir.n.b(arrayList2, a0Var.f19467g.invoke(name4));
                a0Var.n(name4, arrayList2);
                ip.l q7 = a0Var.q();
                int i11 = kq.e.a;
                if (kq.e.n(q7, ip.g.f12142w)) {
                    return CollectionsKt.i0(arrayList2);
                }
                e4.i iVar3 = a0Var.f19462b;
                return CollectionsKt.i0(((up.a) iVar3.f7952d).f18982r.c(iVar3, arrayList2));
        }
    }
}
