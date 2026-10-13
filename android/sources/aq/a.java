package aq;

import ad.d0;
import androidx.appcompat.widget.b4;
import androidx.appcompat.widget.w;
import cq.f1;
import cq.y0;
import ip.f0;
import ip.o0;
import java.lang.annotation.Annotation;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.e1;
import kotlin.collections.u0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import lp.a0;
import lp.e0;
import lp.l0;
import lp.y;
import rp.h0;
import rp.v;
import wq.t;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.i0;
import yq.p0;
import yq.r0;
import yq.s0;
import yq.w0;
import yq.x;
import yq.z0;

/* loaded from: classes3.dex */
public final class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2616d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f2617e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f2616d = i5;
        this.f2617e = obj;
    }

    /* JADX WARN: Code restructure failed: missing block: B:122:0x0329, code lost:
    
        if (r2.equals("hashCode") == false) goto L134;
     */
    /* JADX WARN: Code restructure failed: missing block: B:123:0x0375, code lost:
    
        r1 = ((java.util.ArrayList) r1.g()).isEmpty();
     */
    /* JADX WARN: Code restructure failed: missing block: B:149:0x0373, code lost:
    
        if (r2.equals("toString") != false) goto L137;
     */
    /* JADX WARN: Code restructure failed: missing block: B:279:0x062f, code lost:
    
        if (r1 != false) goto L261;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:127:0x0386  */
    /* JADX WARN: Type inference failed for: r4v23, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r8v4 */
    /* JADX WARN: Type inference failed for: r8v5 */
    /* JADX WARN: Type inference failed for: r8v6, types: [java.lang.Object] */
    @Override // kotlin.jvm.functions.Function1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object obj) {
        boolean z5;
        boolean z6;
        boolean equals;
        Object next;
        f0 f0Var;
        eq.g gVar;
        eq.a aVar;
        cc.k a;
        boolean z7;
        boolean z8;
        boolean z10;
        hq.c c6;
        wp.a aVar2;
        s0 a10;
        zq.n nVar;
        p0 receiver;
        zp.a aVar3;
        cr.d receiver2;
        int i5 = this.f2616d;
        uq.j jVar = null;
        x xVar = null;
        int i6 = 1;
        Object obj2 = this.f2617e;
        switch (i5) {
            case 0:
                int i10 = 0;
                np.b kotlinClass = (np.b) obj;
                Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
                HashMap hashMap = new HashMap();
                HashMap hashMap2 = new HashMap();
                HashMap hashMap3 = new HashMap();
                io.sentry.internal.debugmeta.c memberVisitor = new io.sentry.internal.debugmeta.c((w) obj2, hashMap, hashMap2, 3);
                Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
                Intrinsics.checkNotNullParameter(memberVisitor, "visitor");
                Class klass = kotlinClass.a;
                Intrinsics.checkNotNullParameter(klass, "klass");
                Intrinsics.checkNotNullParameter(memberVisitor, "memberVisitor");
                Iterator it = ArrayIteratorKt.iterator(klass.getDeclaredMethods());
                while (true) {
                    String str = "toString(...)";
                    if (!it.hasNext()) {
                        Class cls = klass;
                        Iterator it2 = ArrayIteratorKt.iterator(cls.getDeclaredConstructors());
                        while (it2.hasNext()) {
                            Constructor constructor = (Constructor) it2.next();
                            hq.e eVar = hq.g.f10215e;
                            Intrinsics.checkNotNull(constructor);
                            Intrinsics.checkNotNullParameter(constructor, "constructor");
                            StringBuilder sb2 = new StringBuilder("(");
                            Iterator it3 = ArrayIteratorKt.iterator(constructor.getParameterTypes());
                            while (it3.hasNext()) {
                                Class cls2 = (Class) it3.next();
                                Intrinsics.checkNotNull(cls2);
                                sb2.append(op.c.b(cls2));
                            }
                            sb2.append(")V");
                            String sb3 = sb2.toString();
                            Intrinsics.checkNotNullExpressionValue(sb3, str);
                            com.google.firebase.messaging.r V = memberVisitor.V(eVar, sb3);
                            Iterator it4 = ArrayIteratorKt.iterator(constructor.getDeclaredAnnotations());
                            while (it4.hasNext()) {
                                Annotation annotation = (Annotation) it4.next();
                                Intrinsics.checkNotNull(annotation);
                                android.support.v4.media.session.b.v(V, annotation);
                            }
                            Annotation[][] parameterAnnotations = constructor.getParameterAnnotations();
                            Intrinsics.checkNotNull(parameterAnnotations);
                            if (parameterAnnotations.length != 0) {
                                int length = constructor.getParameterTypes().length - parameterAnnotations.length;
                                int length2 = parameterAnnotations.length;
                                for (int i11 = 0; i11 < length2; i11++) {
                                    Iterator it5 = ArrayIteratorKt.iterator(parameterAnnotations[i11]);
                                    while (it5.hasNext()) {
                                        Iterator it6 = it2;
                                        Annotation annotation2 = (Annotation) it5.next();
                                        int i12 = length;
                                        Class z11 = com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation2));
                                        Annotation[][] annotationArr = parameterAnnotations;
                                        int i13 = length2;
                                        hq.b a11 = op.c.a(z11);
                                        String str2 = str;
                                        Intrinsics.checkNotNull(annotation2);
                                        b4 n6 = V.n(i11 + i12, a11, new np.a(annotation2));
                                        if (n6 != null) {
                                            android.support.v4.media.session.b.w(n6, annotation2, z11);
                                        }
                                        it2 = it6;
                                        parameterAnnotations = annotationArr;
                                        length = i12;
                                        length2 = i13;
                                        str = str2;
                                    }
                                }
                            }
                            Iterator it7 = it2;
                            String str3 = str;
                            V.j();
                            it2 = it7;
                            str = str3;
                        }
                        Iterator it8 = ArrayIteratorKt.iterator(cls.getDeclaredFields());
                        while (it8.hasNext()) {
                            Field field = (Field) it8.next();
                            hq.e name = hq.e.e(field.getName());
                            Intrinsics.checkNotNullExpressionValue(name, "identifier(...)");
                            Intrinsics.checkNotNull(field);
                            Intrinsics.checkNotNullParameter(field, "field");
                            Class<?> type = field.getType();
                            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                            String desc = op.c.b(type);
                            Intrinsics.checkNotNullParameter(name, "name");
                            Intrinsics.checkNotNullParameter(desc, "desc");
                            String name2 = name.b();
                            Intrinsics.checkNotNullExpressionValue(name2, "asString(...)");
                            Intrinsics.checkNotNullParameter(name2, "name");
                            Intrinsics.checkNotNullParameter(desc, "desc");
                            q signature = new q(name2 + '#' + desc);
                            Intrinsics.checkNotNullParameter(signature, "signature");
                            ArrayList arrayList = new ArrayList();
                            Iterator it9 = ArrayIteratorKt.iterator(field.getDeclaredAnnotations());
                            while (it9.hasNext()) {
                                Annotation annotation3 = (Annotation) it9.next();
                                Intrinsics.checkNotNull(annotation3);
                                Class z12 = com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation3));
                                hq.b classId = op.c.a(z12);
                                np.a source = new np.a(annotation3);
                                Intrinsics.checkNotNullParameter(classId, "classId");
                                Intrinsics.checkNotNullParameter(source, "source");
                                b4 H = ((w) memberVisitor.f11622e).H(classId, source, arrayList);
                                if (H != null) {
                                    android.support.v4.media.session.b.w(H, annotation3, z12);
                                }
                            }
                            if (!arrayList.isEmpty()) {
                                ((HashMap) memberVisitor.f11623i).put(signature, arrayList);
                            }
                        }
                        return new d(hashMap, hashMap2, hashMap3);
                    }
                    Method method = (Method) it.next();
                    hq.e e9 = hq.e.e(method.getName());
                    Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                    Intrinsics.checkNotNull(method);
                    Intrinsics.checkNotNullParameter(method, "method");
                    StringBuilder sb4 = new StringBuilder("(");
                    Iterator it10 = ArrayIteratorKt.iterator(method.getParameterTypes());
                    while (it10.hasNext()) {
                        Class cls3 = (Class) it10.next();
                        Intrinsics.checkNotNull(cls3);
                        sb4.append(op.c.b(cls3));
                    }
                    sb4.append(")");
                    Class<?> returnType = method.getReturnType();
                    Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
                    sb4.append(op.c.b(returnType));
                    String sb5 = sb4.toString();
                    Intrinsics.checkNotNullExpressionValue(sb5, "toString(...)");
                    com.google.firebase.messaging.r V2 = memberVisitor.V(e9, sb5);
                    Iterator it11 = ArrayIteratorKt.iterator(method.getDeclaredAnnotations());
                    while (it11.hasNext()) {
                        Annotation annotation4 = (Annotation) it11.next();
                        Intrinsics.checkNotNull(annotation4);
                        android.support.v4.media.session.b.v(V2, annotation4);
                    }
                    Annotation[][] parameterAnnotations2 = method.getParameterAnnotations();
                    Intrinsics.checkNotNullExpressionValue(parameterAnnotations2, "getParameterAnnotations(...)");
                    Annotation[][] annotationArr2 = parameterAnnotations2;
                    int length3 = annotationArr2.length;
                    for (int i14 = i10; i14 < length3; i14++) {
                        Iterator it12 = ArrayIteratorKt.iterator(annotationArr2[i14]);
                        while (it12.hasNext()) {
                            Annotation annotation5 = (Annotation) it12.next();
                            Class z13 = com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation5));
                            hq.b a12 = op.c.a(z13);
                            Class cls4 = klass;
                            Intrinsics.checkNotNull(annotation5);
                            b4 n10 = V2.n(i14, a12, new np.a(annotation5));
                            if (n10 != null) {
                                android.support.v4.media.session.b.w(n10, annotation5, z13);
                            }
                            klass = cls4;
                        }
                    }
                    V2.j();
                    i10 = 0;
                }
            case 1:
                Intrinsics.checkNotNullParameter((String) obj, "it");
                return Integer.valueOf(((AtomicInteger) ((e4.r) obj2).f8001i).getAndIncrement());
            case 2:
                Pair pair = (Pair) obj;
                Intrinsics.checkNotNullParameter(pair, "<destruct>");
                String str4 = (String) pair.f13474d;
                String str5 = (String) pair.f13475e;
                List annotations = b0.c(jp.e.a(((hp.o) obj2).a.g(), s4.h.g("'", str4, "()' member of List is redundant in Kotlin and might be removed soon. Please use '", str5, "()' stdlib extension instead"), str5 + "()", "HIDDEN"));
                Intrinsics.checkNotNullParameter(annotations, "annotations");
                return annotations.isEmpty() ? jp.g.a : new jp.i(annotations, 0);
            case 3:
                return Boolean.valueOf(((ip.d) obj).h() == ((ip.l) obj2));
            case 4:
                Intrinsics.checkNotNull(obj);
                ((ir.k) obj2).add(obj);
                return Unit.a;
            case 5:
                lp.b descriptor = ((lp.a) obj2).f14122e;
                ((zq.f) obj).getClass();
                Intrinsics.checkNotNullParameter(descriptor, "descriptor");
                return (c0) descriptor.f14128e.invoke();
            case 6:
                lp.e eVar2 = (lp.e) obj2;
                b1 b1Var = (b1) obj;
                Intrinsics.checkNotNull(b1Var);
                if (!yq.c.j(b1Var)) {
                    ip.i a13 = b1Var.r0().a();
                    if ((a13 instanceof ip.s0) && !Intrinsics.areEqual(((ip.s0) a13).h(), eVar2)) {
                        z5 = true;
                        return Boolean.valueOf(z5);
                    }
                }
                z5 = false;
                return Boolean.valueOf(z5);
            case 7:
                ((zq.f) obj).getClass();
                Intrinsics.checkNotNullParameter((t) obj2, "descriptor");
                return null;
            case 8:
                c0 c0Var = (c0) obj;
                y yVar = (y) obj2;
                if (c0Var != null) {
                    return yVar.f14198e.a.f() ? c0Var : (c0) yVar.O().j(c0Var, c1.f21013i);
                }
                yVar.getClass();
                return c0Var;
            case 9:
                a0 module = (a0) obj2;
                hq.c fqName = (hq.c) obj;
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                lp.f0 f0Var2 = module.f14126y;
                xq.l storageManager = module.f14123v;
                ((e0) f0Var2).getClass();
                Intrinsics.checkNotNullParameter(module, "module");
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                Intrinsics.checkNotNullParameter(storageManager, "storageManager");
                return new lp.w(module, fqName, storageManager);
            case 10:
                ip.a0 it13 = (ip.a0) obj;
                Intrinsics.checkNotNullParameter(it13, "it");
                c0 r5 = it13.g().r((fp.k) obj2);
                Intrinsics.checkNotNullExpressionValue(r5, "getPrimitiveArrayKotlinType(...)");
                return r5;
            case 11:
                yq.y yVar2 = (yq.y) obj2;
                Intrinsics.checkNotNullParameter((ip.a0) obj, "it");
                return yVar2;
            case 12:
                op.n nVar2 = (op.n) obj2;
                Method method2 = (Method) obj;
                if (!method2.isSynthetic()) {
                    if (nVar2.a.isEnum()) {
                        Intrinsics.checkNotNull(method2);
                        String name3 = method2.getName();
                        if (Intrinsics.areEqual(name3, "values")) {
                            Class<?>[] parameterTypes = method2.getParameterTypes();
                            Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
                            if (parameterTypes.length == 0) {
                                equals = true;
                                break;
                            }
                            equals = false;
                            break;
                        } else {
                            if (Intrinsics.areEqual(name3, "valueOf")) {
                                equals = Arrays.equals(method2.getParameterTypes(), new Class[]{String.class});
                                break;
                            }
                            equals = false;
                        }
                        return Boolean.valueOf(z6);
                    }
                    z6 = true;
                    return Boolean.valueOf(z6);
                }
                z6 = false;
                return Boolean.valueOf(z6);
            case 13:
                Intrinsics.checkNotNullParameter((ip.d) obj, "it");
                return Boolean.valueOf(h0.f17468i.containsKey(ks.n.h((l0) obj2)));
            case 14:
                hq.c cVar = (hq.c) obj;
                Intrinsics.checkNotNull(cVar);
                Map values = (Map) ((e4.r) obj2).f8000e;
                Intrinsics.checkNotNullParameter(cVar, "<this>");
                Intrinsics.checkNotNullParameter(values, "values");
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                for (Map.Entry entry : values.entrySet()) {
                    hq.c packageName = (hq.c) entry.getKey();
                    if (!Intrinsics.areEqual(cVar, packageName)) {
                        Intrinsics.checkNotNullParameter(cVar, "<this>");
                        Intrinsics.checkNotNullParameter(packageName, "packageName");
                        Intrinsics.checkNotNullParameter(cVar, "<this>");
                        if (Intrinsics.areEqual(cVar.a.c() ? null : cVar.b(), packageName)) {
                        }
                    }
                    linkedHashMap.put(entry.getKey(), entry.getValue());
                }
                if (linkedHashMap.isEmpty()) {
                    linkedHashMap = null;
                }
                if (linkedHashMap == null) {
                    return null;
                }
                Iterator it14 = linkedHashMap.entrySet().iterator();
                if (it14.hasNext()) {
                    next = it14.next();
                    if (it14.hasNext()) {
                        int length4 = w3.q.E((hq.c) ((Map.Entry) next).getKey(), cVar).a.a.length();
                        do {
                            Object next2 = it14.next();
                            int length5 = w3.q.E((hq.c) ((Map.Entry) next2).getKey(), cVar).a.a.length();
                            if (length4 > length5) {
                                next = next2;
                                length4 = length5;
                            }
                        } while (it14.hasNext());
                    }
                } else {
                    next = null;
                }
                Map.Entry entry2 = (Map.Entry) next;
                if (entry2 != null) {
                    return entry2.getValue();
                }
                return null;
            case 15:
                ip.d dVar = (ip.d) obj;
                if (dVar == null) {
                    throw new IllegalArgumentException("Argument for @NotNull parameter 'descriptor' of kotlin/reflect/jvm/internal/impl/load/java/components/DescriptorResolverUtils$1$1.invoke must not be null");
                }
                ((sp.a) obj2).f18073b.c(dVar);
                return Unit.a;
            case 16:
                up.c cVar2 = (up.c) obj2;
                op.d annotation6 = (op.d) obj;
                Intrinsics.checkNotNullParameter(annotation6, "annotation");
                hq.e eVar3 = sp.c.a;
                return sp.c.b(cVar2.f18991d, annotation6, cVar2.f18993i);
            case 17:
                d0 typeParameterResolver = (d0) obj2;
                op.b0 typeParameter = (op.b0) obj;
                Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
                LinkedHashMap linkedHashMap2 = (LinkedHashMap) typeParameterResolver.f319v;
                ip.m mVar = (ip.m) typeParameterResolver.f318i;
                Integer num = (Integer) linkedHashMap2.get(typeParameter);
                if (num == null) {
                    return null;
                }
                int intValue = num.intValue();
                e4.i iVar = (e4.i) typeParameterResolver.f317e;
                Intrinsics.checkNotNullParameter(iVar, "<this>");
                Intrinsics.checkNotNullParameter(typeParameterResolver, "typeParameterResolver");
                return new vp.f0(ks.n.i(new e4.i((up.a) iVar.f7952d, typeParameterResolver, iVar.f7954i), mVar.getAnnotations()), typeParameter, typeParameterResolver.f316d + intValue, mVar);
            case 18:
                hp.q qVar = (hp.q) obj2;
                hq.c fqName2 = (hq.c) obj;
                Intrinsics.checkNotNullParameter(fqName2, "fqName");
                vq.c d6 = qVar.d(fqName2);
                if (d6 == null) {
                    return null;
                }
                uq.j jVar2 = qVar.f10192c;
                if (jVar2 != null) {
                    jVar = jVar2;
                } else {
                    Intrinsics.throwUninitializedPropertyAccessException("components");
                }
                d6.C0(jVar);
                return d6;
            case 19:
                uq.h hVar = (uq.h) obj2;
                uq.g key = (uq.g) obj;
                Intrinsics.checkNotNullParameter(key, "key");
                hq.b bVar = key.a;
                uq.j jVar3 = hVar.a;
                Iterator it15 = jVar3.k.iterator();
                while (it15.hasNext()) {
                    ip.f c8 = ((kp.c) it15.next()).c(bVar);
                    if (c8 != null) {
                        return c8;
                    }
                }
                if (uq.h.f19014c.contains(bVar)) {
                    return null;
                }
                uq.e eVar4 = key.f19013b;
                if (eVar4 == null && (eVar4 = jVar3.f19018d.b(bVar)) == null) {
                    return null;
                }
                eq.g gVar2 = eVar4.a;
                cq.k kVar = eVar4.f19010b;
                eq.a aVar4 = eVar4.f19011c;
                o0 o0Var = eVar4.f19012d;
                hq.b e10 = bVar.e();
                if (e10 != null) {
                    ip.f a14 = hVar.a(e10, null);
                    wq.i iVar2 = a14 instanceof wq.i ? (wq.i) a14 : null;
                    if (iVar2 == null) {
                        return null;
                    }
                    hq.e name4 = bVar.f();
                    Intrinsics.checkNotNullParameter(name4, "name");
                    if (!iVar2.l0().m().contains(name4)) {
                        return null;
                    }
                    a = iVar2.I;
                    gVar = gVar2;
                    aVar = aVar4;
                } else {
                    Iterator it16 = nt.a.C(jVar3.f19020f, bVar.a).iterator();
                    while (true) {
                        if (it16.hasNext()) {
                            f0Var = it16.next();
                            f0 f0Var3 = (f0) f0Var;
                            if (f0Var3 instanceof vq.c) {
                                hq.e name5 = bVar.f();
                                Intrinsics.checkNotNullParameter(name5, "name");
                                rq.o N = ((vq.c) f0Var3).N();
                                if (N == null || !((wq.p) N).m().contains(name5)) {
                                }
                            }
                        } else {
                            f0Var = 0;
                        }
                    }
                    f0 f0Var4 = f0Var;
                    if (f0Var4 == null) {
                        return null;
                    }
                    y0 y0Var = kVar.f7139b0;
                    Intrinsics.checkNotNullExpressionValue(y0Var, "getTypeTable(...)");
                    a4.i iVar3 = new a4.i(y0Var);
                    eq.h hVar2 = eq.h.f8219b;
                    f1 f1Var = kVar.f7141d0;
                    Intrinsics.checkNotNullExpressionValue(f1Var, "getVersionRequirementTable(...)");
                    gVar = gVar2;
                    aVar = aVar4;
                    a = jVar3.a(f0Var4, gVar, iVar3, m3.n.v(f1Var), aVar, null);
                }
                return new wq.i(a, kVar, gVar, aVar, o0Var);
            case 20:
                op.w m5 = (op.w) obj;
                Intrinsics.checkNotNullParameter(m5, "m");
                if (((Boolean) ((vp.a) obj2).f19456b.invoke(m5)).booleanValue()) {
                    Intrinsics.checkNotNullParameter(m5, "<this>");
                    Class<?> klass2 = ((Method) m5.b()).getDeclaringClass();
                    Intrinsics.checkNotNullExpressionValue(klass2, "getDeclaringClass(...)");
                    Intrinsics.checkNotNullParameter(klass2, "klass");
                    if (klass2.isInterface()) {
                        String b10 = m5.c().b();
                        int hashCode = b10.hashCode();
                        if (hashCode == -1776922004) {
                            break;
                        } else {
                            if (hashCode != -1295482945) {
                                if (hashCode == 147696667) {
                                    break;
                                }
                            } else if (b10.equals("equals")) {
                                op.c0 c0Var2 = (op.c0) CollectionsKt.b0(m5.g());
                                op.a0 a0Var = c0Var2 != null ? c0Var2.a : null;
                                op.p pVar = a0Var instanceof op.p ? (op.p) a0Var : null;
                                if (pVar != null) {
                                    op.r rVar = pVar.f16170b;
                                    if ((rVar instanceof op.n) && (c6 = ((op.n) rVar).c()) != null && Intrinsics.areEqual(c6.a.a, "java.lang.Object")) {
                                        z10 = true;
                                    }
                                }
                            }
                            z10 = false;
                        }
                        if (z10) {
                            z8 = true;
                            if (!z8) {
                                z7 = true;
                                return Boolean.valueOf(z7);
                            }
                        }
                    }
                    z8 = false;
                    if (!z8) {
                    }
                }
                z7 = false;
                return Boolean.valueOf(z7);
            case 21:
                vp.j jVar4 = (vp.j) obj2;
                Intrinsics.checkNotNullParameter((zq.f) obj, "it");
                return new vp.o(jVar4.G, jVar4, jVar4.E, jVar4.F != null, jVar4.N);
            case 22:
                rq.o it17 = (rq.o) obj;
                Intrinsics.checkNotNullParameter(it17, "it");
                return it17.c((hq.e) obj2, qp.c.f16941w);
            case 23:
                yq.y yVar3 = (yq.y) obj;
                Intrinsics.checkNotNull(yVar3);
                return ((Function1) obj2).invoke(yVar3).toString();
            case 24:
                x xVar2 = (x) obj2;
                zq.f kotlinTypeRefiner = (zq.f) obj;
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                LinkedHashSet linkedHashSet = xVar2.f21078b;
                ArrayList typesToIntersect = new ArrayList(kotlin.collections.d0.l(linkedHashSet, 10));
                Iterator it18 = linkedHashSet.iterator();
                boolean z14 = false;
                while (it18.hasNext()) {
                    typesToIntersect.add(((yq.y) it18.next()).y0(kotlinTypeRefiner));
                    z14 = true;
                }
                if (z14) {
                    yq.y yVar4 = xVar2.a;
                    yq.y y02 = yVar4 != null ? yVar4.y0(kotlinTypeRefiner) : null;
                    Intrinsics.checkNotNullParameter(typesToIntersect, "typesToIntersect");
                    typesToIntersect.isEmpty();
                    LinkedHashSet linkedHashSet2 = new LinkedHashSet(typesToIntersect);
                    linkedHashSet2.hashCode();
                    x xVar3 = new x(linkedHashSet2);
                    xVar3.a = y02;
                    xVar = xVar3;
                }
                if (xVar != null) {
                    xVar2 = xVar;
                }
                return xVar2.e();
            case 25:
                io.sentry.internal.debugmeta.c cVar3 = (io.sentry.internal.debugmeta.c) obj2;
                r0 r0Var = (r0) obj;
                ip.s0 typeParameter2 = r0Var.a;
                wp.a aVar5 = r0Var.f21067b;
                Set set = aVar5.f19977e;
                if (set != null && set.contains(typeParameter2.a())) {
                    return cVar3.J(aVar5);
                }
                c0 k = typeParameter2.k();
                Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
                Intrinsics.checkNotNullParameter(k, "<this>");
                LinkedHashSet<ip.s0> linkedHashSet3 = new LinkedHashSet();
                com.facebook.imagepipeline.nativecode.c.s(k, k, linkedHashSet3, set);
                int a15 = u0.a(kotlin.collections.d0.l(linkedHashSet3, 10));
                if (a15 < 16) {
                    a15 = 16;
                }
                LinkedHashMap map = new LinkedHashMap(a15);
                for (ip.s0 s0Var : linkedHashSet3) {
                    if (set == null || !set.contains(s0Var)) {
                        Intrinsics.checkNotNullParameter(typeParameter2, "typeParameter");
                        Set set2 = aVar5.f19977e;
                        Set e11 = set2 != null ? e1.e(set2, typeParameter2) : kotlin.collections.c1.b(typeParameter2);
                        wp.a aVar6 = aVar5;
                        aVar2 = aVar6;
                        a10 = wp.e.a(s0Var, aVar2, cVar3, cVar3.K(s0Var, wp.a.a(aVar6, null, false, e11, null, 47)));
                    } else {
                        s0 k5 = z0.k(s0Var, aVar5);
                        Intrinsics.checkNotNullExpressionValue(k5, "makeStarProjection(...)");
                        aVar2 = aVar5;
                        a10 = k5;
                    }
                    map.put(s0Var.n(), a10);
                    aVar5 = aVar2;
                }
                wp.a aVar7 = aVar5;
                Intrinsics.checkNotNullParameter(map, "map");
                w0 e12 = w0.e(new i0(i6, map));
                Intrinsics.checkNotNullExpressionValue(e12, "create(...)");
                List upperBounds = typeParameter2.getUpperBounds();
                Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
                go.n T = cVar3.T(e12, upperBounds, aVar7);
                if (T.f9420d.isEmpty()) {
                    return cVar3.J(aVar7);
                }
                if (T.f9420d.F == 1) {
                    return (yq.y) CollectionsKt.Y(T);
                }
                throw new IllegalArgumentException("Should only be one computed upper bound if no need to intersect all bounds");
            case 26:
                g3.a aVar8 = (g3.a) obj2;
                zp.a it19 = (zp.a) obj;
                Intrinsics.checkNotNullParameter(it19, "it");
                if (aVar8.f9086b && (receiver2 = it19.a) != null) {
                    Intrinsics.checkNotNullParameter(receiver2, "$receiver");
                    if (!(receiver2 instanceof yq.y)) {
                        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver2 + ", " + Reflection.getOrCreateKotlinClass(receiver2.getClass())).toString());
                    }
                    if (receiver2 instanceof wp.h) {
                        return null;
                    }
                }
                cr.d dVar2 = it19.a;
                v vVar = it19.f21342b;
                if (dVar2 == null || (receiver = (nVar = zq.n.f21398d).B0(dVar2)) == null) {
                    return null;
                }
                Intrinsics.checkNotNullParameter(receiver, "$receiver");
                if (!(receiver instanceof p0)) {
                    throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
                }
                List parameters = receiver.getParameters();
                Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                if (parameters == null) {
                    return null;
                }
                cr.d receiver3 = it19.a;
                Intrinsics.checkNotNullParameter(receiver3, "$receiver");
                if (!(receiver3 instanceof yq.y)) {
                    throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver3 + ", " + Reflection.getOrCreateKotlinClass(receiver3.getClass())).toString());
                }
                List l02 = ((yq.y) receiver3).l0();
                Iterator it20 = parameters.iterator();
                Iterator it21 = l02.iterator();
                ArrayList arrayList2 = new ArrayList(Math.min(kotlin.collections.d0.l(parameters, 10), kotlin.collections.d0.l(l02, 10)));
                while (it20.hasNext() && it21.hasNext()) {
                    ip.s0 s0Var2 = (ip.s0) it20.next();
                    b1 P = m3.n.P(nVar, (s0) it21.next());
                    if (P == null) {
                        aVar3 = new zp.a(null, vVar, s0Var2);
                    } else {
                        rp.b bVar2 = ((up.a) ((e4.i) aVar8.f9088d).f7952d).f18981q;
                        Intrinsics.checkNotNullParameter(P, "<this>");
                        aVar3 = new zp.a(P, bVar2.b(vVar, P.getAnnotations()), s0Var2);
                    }
                    arrayList2.add(aVar3);
                }
                return arrayList2;
            default:
                ip.d it22 = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it22, "it");
                yq.y type2 = ((lp.r0) it22.P().get(((lp.r0) obj2).f14177y)).getType();
                Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                return type2;
        }
    }
}
