package vp;

import a5.h0;
import ip.s0;
import java.lang.annotation.Annotation;
import java.lang.reflect.Constructor;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;
import yq.x0;

/* loaded from: classes3.dex */
public final class k implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19498d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final e4.i f19499e;

    /* renamed from: i, reason: collision with root package name */
    public final o f19500i;

    public k(e4.i iVar, o oVar) {
        this.f19499e = iVar;
        this.f19500i = oVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r13v6, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r2v10, types: [vp.o] */
    /* JADX WARN: Type inference failed for: r2v14, types: [vp.o] */
    /* JADX WARN: Type inference failed for: r2v30 */
    /* JADX WARN: Type inference failed for: r2v9 */
    /* JADX WARN: Type inference failed for: r3v10, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r3v11, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r3v12, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r4v9, types: [java.lang.Object, lp.h, lp.t, tp.b] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        o oVar;
        jp.f fVar;
        ?? r32;
        Object obj;
        ArrayList arrayList;
        ?? r22;
        Pair pair;
        List d6;
        switch (this.f19498d) {
            case 0:
                o oVar2 = this.f19500i;
                op.n nVar = oVar2.f19513o;
                e4.i iVar = oVar2.f19462b;
                ip.f fVar2 = oVar2.f19512n;
                Constructor<?>[] declaredConstructors = nVar.a.getDeclaredConstructors();
                Intrinsics.checkNotNullExpressionValue(declaredConstructors, "getDeclaredConstructors(...)");
                List<op.q> q5 = kr.s.q(kr.s.n(kr.s.j(kotlin.collections.x.o(declaredConstructors), op.i.f16164d), op.j.f16165d));
                ArrayList arrayList2 = new ArrayList(q5.size());
                for (op.q typeParameterOwner : q5) {
                    up.c y5 = nf.e.y(iVar, typeParameterOwner);
                    up.a aVar = (up.a) iVar.f7952d;
                    tp.b containingDeclaration = tp.b.S0(fVar2, y5, false, aVar.j.b(typeParameterOwner));
                    Intrinsics.checkNotNullExpressionValue(containingDeclaration, "createJavaConstructor(...)");
                    int size = fVar2.l().size();
                    Intrinsics.checkNotNullParameter(iVar, "<this>");
                    Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
                    Intrinsics.checkNotNullParameter(typeParameterOwner, "typeParameterOwner");
                    e4.i iVar2 = new e4.i(aVar, new ad.d0(iVar, containingDeclaration, typeParameterOwner, size), iVar.f7954i);
                    Constructor constructor = typeParameterOwner.a;
                    Type[] genericParameterTypes = constructor.getGenericParameterTypes();
                    Intrinsics.checkNotNull(genericParameterTypes);
                    if (genericParameterTypes.length == 0) {
                        d6 = m0.f13512d;
                    } else {
                        Class declaringClass = constructor.getDeclaringClass();
                        if (declaringClass.getDeclaringClass() != null && !Modifier.isStatic(declaringClass.getModifiers())) {
                            genericParameterTypes = (Type[]) kotlin.collections.u.j(genericParameterTypes, 1, genericParameterTypes.length);
                        }
                        Annotation[][] parameterAnnotations = constructor.getParameterAnnotations();
                        if (parameterAnnotations.length < genericParameterTypes.length) {
                            throw new IllegalStateException("Illegal generic signature: " + constructor);
                        }
                        if (parameterAnnotations.length > genericParameterTypes.length) {
                            Intrinsics.checkNotNull(parameterAnnotations);
                            parameterAnnotations = (Annotation[][]) kotlin.collections.u.j(parameterAnnotations, parameterAnnotations.length - genericParameterTypes.length, parameterAnnotations.length);
                        }
                        Intrinsics.checkNotNull(genericParameterTypes);
                        Intrinsics.checkNotNull(parameterAnnotations);
                        d6 = typeParameterOwner.d(genericParameterTypes, parameterAnnotations, constructor.isVarArgs());
                    }
                    h0 u5 = a0.u(iVar2, containingDeclaration, d6);
                    List l6 = fVar2.l();
                    Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
                    ArrayList typeParameters = typeParameterOwner.getTypeParameters();
                    ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(typeParameters, 10));
                    Iterator it = typeParameters.iterator();
                    while (it.hasNext()) {
                        s0 a = ((up.e) iVar2.f7953e).a((op.b0) it.next());
                        Intrinsics.checkNotNull(a);
                        arrayList3.add(a);
                    }
                    containingDeclaration.Q0((List) u5.f176i, ys.l.y(typeParameterOwner.e()), CollectionsKt.V(l6, arrayList3));
                    containingDeclaration.J0(false);
                    containingDeclaration.K0(u5.f175e);
                    containingDeclaration.L0(fVar2.k());
                    ((up.a) iVar2.f7952d).f18973g.getClass();
                    arrayList2.add(containingDeclaration);
                }
                boolean g6 = nVar.g();
                Class cls = nVar.a;
                e4.i iVar3 = this.f19499e;
                jp.f fVar3 = jp.g.a;
                if (g6) {
                    tp.b S0 = tp.b.S0(fVar2, fVar3, true, ((up.a) iVar.f7952d).j.b(nVar));
                    Intrinsics.checkNotNullExpressionValue(S0, "createJavaConstructor(...)");
                    ArrayList f2 = nVar.f();
                    ArrayList arrayList4 = new ArrayList(f2.size());
                    oVar = oVar2;
                    wp.a D = nf.e.D(x0.f21081e, false, null, 6);
                    int i5 = 0;
                    for (Iterator it2 = f2.iterator(); it2.hasNext(); it2 = it2) {
                        op.z zVar = (op.z) it2.next();
                        tp.b bVar = S0;
                        jp.f fVar4 = fVar3;
                        arrayList4.add(new r0(bVar, null, i5, fVar4, zVar.c(), ((k2.r) iVar.f7955v).O(zVar.f(), D), false, false, false, null, ((up.a) iVar.f7952d).j.b(zVar)));
                        fVar3 = fVar4;
                        i5++;
                        S0 = bVar;
                    }
                    lp.h hVar = S0;
                    fVar = fVar3;
                    hVar.K0(false);
                    ip.p PROTECTED_AND_PACKAGE = fVar2.getVisibility();
                    Intrinsics.checkNotNullExpressionValue(PROTECTED_AND_PACKAGE, "getVisibility(...)");
                    if (Intrinsics.areEqual(PROTECTED_AND_PACKAGE, rp.p.f17478b)) {
                        PROTECTED_AND_PACKAGE = rp.p.f17479c;
                        Intrinsics.checkNotNullExpressionValue(PROTECTED_AND_PACKAGE, "PROTECTED_AND_PACKAGE");
                    }
                    hVar.P0(arrayList4, PROTECTED_AND_PACKAGE);
                    hVar.J0(false);
                    hVar.L0(fVar2.k());
                    String g10 = ks.n.g(hVar, 2);
                    if (!arrayList2.isEmpty()) {
                        Iterator it3 = arrayList2.iterator();
                        while (it3.hasNext()) {
                            if (Intrinsics.areEqual(ks.n.g((lp.h) it3.next(), 2), g10)) {
                            }
                        }
                    }
                    arrayList2.add(hVar);
                    ((up.a) iVar3.f7952d).f18973g.getClass();
                } else {
                    oVar = oVar2;
                    fVar = fVar3;
                }
                ((pq.a) ((up.a) iVar3.f7952d).f18988x).a(fVar2, arrayList2, iVar3);
                zp.o oVar3 = ((up.a) iVar3.f7952d).f18982r;
                boolean isEmpty = arrayList2.isEmpty();
                Collection collection = arrayList2;
                if (isEmpty) {
                    boolean isAnnotation = cls.isAnnotation();
                    cls.isInterface();
                    if (isAnnotation) {
                        up.a aVar2 = (up.a) iVar.f7952d;
                        k2.r rVar = (k2.r) iVar.f7955v;
                        ?? S02 = tp.b.S0(fVar2, fVar, true, aVar2.j.b(nVar));
                        Intrinsics.checkNotNullExpressionValue(S02, "createJavaConstructor(...)");
                        if (isAnnotation) {
                            List d7 = nVar.d();
                            r32 = new ArrayList(d7.size());
                            wp.a D2 = nf.e.D(x0.f21081e, true, null, 6);
                            ArrayList arrayList5 = new ArrayList();
                            ArrayList arrayList6 = new ArrayList();
                            for (Object obj2 : d7) {
                                if (Intrinsics.areEqual(((op.w) obj2).c(), rp.y.f17495b)) {
                                    arrayList5.add(obj2);
                                } else {
                                    arrayList6.add(obj2);
                                }
                            }
                            arrayList5.size();
                            op.w wVar = (op.w) CollectionsKt.firstOrNull(arrayList5);
                            if (wVar != null) {
                                op.a0 f10 = wVar.f();
                                if (f10 instanceof op.h) {
                                    op.h hVar2 = (op.h) f10;
                                    pair = new Pair(rVar.N(hVar2, D2, true), rVar.O(hVar2.f16162b, D2));
                                } else {
                                    pair = new Pair(rVar.O(f10, D2), null);
                                }
                                yq.y yVar = (yq.y) pair.f13474d;
                                yq.y yVar2 = (yq.y) pair.f13475e;
                                arrayList = arrayList6;
                                ?? r23 = oVar;
                                r23.v(r32, S02, 0, wVar, yVar, yVar2);
                                r22 = r23;
                            } else {
                                arrayList = arrayList6;
                                r22 = oVar;
                            }
                            int i6 = wVar != null ? 1 : 0;
                            Iterator it4 = arrayList.iterator();
                            int i10 = 0;
                            while (it4.hasNext()) {
                                op.w wVar2 = (op.w) it4.next();
                                r22.v(r32, S02, i10 + i6, wVar2, rVar.O(wVar2.f(), D2), null);
                                i10++;
                            }
                        } else {
                            r32 = Collections.EMPTY_LIST;
                        }
                        S02.K0(false);
                        ip.p PROTECTED_AND_PACKAGE2 = fVar2.getVisibility();
                        Intrinsics.checkNotNullExpressionValue(PROTECTED_AND_PACKAGE2, "getVisibility(...)");
                        if (Intrinsics.areEqual(PROTECTED_AND_PACKAGE2, rp.p.f17478b)) {
                            PROTECTED_AND_PACKAGE2 = rp.p.f17479c;
                            Intrinsics.checkNotNullExpressionValue(PROTECTED_AND_PACKAGE2, "PROTECTED_AND_PACKAGE");
                        }
                        S02.P0(r32, PROTECTED_AND_PACKAGE2);
                        S02.J0(true);
                        S02.L0(fVar2.k());
                        ((up.a) iVar.f7952d).f18973g.getClass();
                        obj = S02;
                    } else {
                        obj = null;
                    }
                    collection = kotlin.collections.c0.h(obj);
                }
                return CollectionsKt.i0(oVar3.c(iVar3, collection));
            default:
                e4.i iVar4 = this.f19499e;
                return CollectionsKt.l0(((pq.a) ((up.a) iVar4.f7952d).f18988x).f(this.f19500i.f19512n, iVar4));
        }
    }

    public k(o oVar, e4.i iVar) {
        this.f19500i = oVar;
        this.f19499e = iVar;
    }
}
