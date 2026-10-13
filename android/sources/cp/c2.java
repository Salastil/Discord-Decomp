package cp;

import java.lang.annotation.Annotation;
import java.lang.reflect.Array;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReference;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.PropertyReference;
import kotlin.jvm.internal.RepeatableContainer;
import kotlin.reflect.KCallable;

/* loaded from: classes3.dex */
public abstract class c2 {
    public static final hq.c a = new hq.c("kotlin.jvm.JvmStatic");

    public static final r a(Object obj) {
        r rVar = obj instanceof r ? (r) obj : null;
        if (rVar != null) {
            return rVar;
        }
        j0 b10 = b(obj);
        return b10 != null ? b10 : c(obj);
    }

    public static final j0 b(Object obj) {
        j0 j0Var = obj instanceof j0 ? (j0) obj : null;
        if (j0Var != null) {
            return j0Var;
        }
        FunctionReference functionReference = obj instanceof FunctionReference ? (FunctionReference) obj : null;
        KCallable compute = functionReference != null ? functionReference.compute() : null;
        if (compute instanceof j0) {
            return (j0) compute;
        }
        return null;
    }

    public static final o1 c(Object obj) {
        o1 o1Var = obj instanceof o1 ? (o1) obj : null;
        if (o1Var != null) {
            return o1Var;
        }
        PropertyReference propertyReference = obj instanceof PropertyReference ? (PropertyReference) obj : null;
        KCallable compute = propertyReference != null ? propertyReference.compute() : null;
        if (compute instanceof o1) {
            return (o1) compute;
        }
        return null;
    }

    public static final ArrayList d(jp.a aVar) {
        List c6;
        Intrinsics.checkNotNullParameter(aVar, "<this>");
        jp.h annotations = aVar.getAnnotations();
        ArrayList arrayList = new ArrayList();
        Iterator it = annotations.iterator();
        while (true) {
            Annotation annotation = null;
            if (!it.hasNext()) {
                break;
            }
            jp.b bVar = (jp.b) it.next();
            ip.o0 d6 = bVar.d();
            if (d6 instanceof np.a) {
                annotation = ((np.a) d6).f15582d;
            } else if (d6 instanceof np.f) {
                op.r rVar = ((np.f) d6).f15587d;
                op.d dVar = rVar instanceof op.d ? (op.d) rVar : null;
                if (dVar != null) {
                    annotation = dVar.a;
                }
            } else {
                annotation = j(bVar);
            }
            if (annotation != null) {
                arrayList.add(annotation);
            }
        }
        if (!arrayList.isEmpty()) {
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                if (Intrinsics.areEqual(com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u((Annotation) it2.next())).getSimpleName(), "Container")) {
                    ArrayList arrayList2 = new ArrayList();
                    Iterator it3 = arrayList.iterator();
                    while (it3.hasNext()) {
                        Annotation annotation2 = (Annotation) it3.next();
                        Class z5 = com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation2));
                        if (!Intrinsics.areEqual(z5.getSimpleName(), "Container") || z5.getAnnotation(RepeatableContainer.class) == null) {
                            c6 = kotlin.collections.b0.c(annotation2);
                        } else {
                            Object invoke = z5.getDeclaredMethod("value", null).invoke(annotation2, null);
                            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<out kotlin.Annotation>");
                            c6 = kotlin.collections.u.b((Annotation[]) invoke);
                        }
                        kotlin.collections.h0.o(arrayList2, c6);
                    }
                    return arrayList2;
                }
            }
        }
        return arrayList;
    }

    public static final Object e(Type type) {
        Intrinsics.checkNotNullParameter(type, "type");
        if (!(type instanceof Class)) {
            return null;
        }
        Class cls = (Class) type;
        if (!cls.isPrimitive()) {
            return null;
        }
        if (Intrinsics.areEqual(cls, Boolean.TYPE)) {
            return Boolean.FALSE;
        }
        if (Intrinsics.areEqual(cls, Character.TYPE)) {
            return (char) 0;
        }
        if (Intrinsics.areEqual(cls, Byte.TYPE)) {
            return (byte) 0;
        }
        if (Intrinsics.areEqual(cls, Short.TYPE)) {
            return (short) 0;
        }
        if (Intrinsics.areEqual(cls, Integer.TYPE)) {
            return 0;
        }
        if (Intrinsics.areEqual(cls, Float.TYPE)) {
            return Float.valueOf(0.0f);
        }
        if (Intrinsics.areEqual(cls, Long.TYPE)) {
            return 0L;
        }
        if (Intrinsics.areEqual(cls, Double.TYPE)) {
            return Double.valueOf(0.0d);
        }
        if (Intrinsics.areEqual(cls, Void.TYPE)) {
            throw new IllegalStateException("Parameter with void type is illegal");
        }
        throw new UnsupportedOperationException("Unknown primitive: " + type);
    }

    public static final ip.b f(Class moduleAnchor, iq.k proto, eq.g nameResolver, a4.i typeTable, eq.a metadataVersion, Function2 createDescriptor) {
        List list;
        Intrinsics.checkNotNullParameter(moduleAnchor, "moduleAnchor");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(createDescriptor, "createDescriptor");
        np.e a10 = v1.a(moduleAnchor);
        if (proto instanceof cq.a0) {
            list = ((cq.a0) proto).F;
        } else {
            if (!(proto instanceof cq.i0)) {
                throw new IllegalStateException(("Unsupported message: " + proto).toString());
            }
            list = ((cq.i0) proto).F;
        }
        List list2 = list;
        uq.j jVar = a10.a;
        ip.a0 a0Var = jVar.f19016b;
        eq.h hVar = eq.h.f8219b;
        Intrinsics.checkNotNull(list2);
        return (ip.b) createDescriptor.invoke(new uq.t(new cc.k(jVar, nameResolver, a0Var, typeTable, hVar, metadataVersion, null, null, list2)), proto);
    }

    public static final lp.u g(ip.b bVar) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        if (bVar.T() == null) {
            return null;
        }
        ip.l h6 = bVar.h();
        Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
        return ((ip.f) h6).u0();
    }

    public static final boolean h(r1 r1Var) {
        Intrinsics.checkNotNullParameter(r1Var, "<this>");
        yq.y yVar = r1Var.f6947d;
        return yVar != null && kq.g.h(yVar);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    public static final Class i(ClassLoader classLoader, hq.b bVar, int i5) {
        String str = hp.d.a;
        hq.b f2 = hp.d.f(bVar.a().a);
        if (f2 != null) {
            bVar = f2;
        }
        String str2 = bVar.a.a.a;
        String str3 = bVar.f10201b.a.a;
        if (Intrinsics.areEqual(str2, "kotlin")) {
            switch (str3.hashCode()) {
                case -901856463:
                    if (str3.equals("BooleanArray")) {
                        return boolean[].class;
                    }
                    break;
                case -763279523:
                    if (str3.equals("ShortArray")) {
                        return short[].class;
                    }
                    break;
                case -755911549:
                    if (str3.equals("CharArray")) {
                        return char[].class;
                    }
                    break;
                case -74930671:
                    if (str3.equals("ByteArray")) {
                        return byte[].class;
                    }
                    break;
                case 22374632:
                    if (str3.equals("DoubleArray")) {
                        return double[].class;
                    }
                    break;
                case 63537721:
                    if (str3.equals("Array")) {
                        return Object[].class;
                    }
                    break;
                case 601811914:
                    if (str3.equals("IntArray")) {
                        return int[].class;
                    }
                    break;
                case 948852093:
                    if (str3.equals("FloatArray")) {
                        return float[].class;
                    }
                    break;
                case 2104330525:
                    if (str3.equals("LongArray")) {
                        return long[].class;
                    }
                    break;
            }
        }
        StringBuilder sb2 = new StringBuilder();
        if (i5 > 0) {
            for (int i6 = 0; i6 < i5; i6++) {
                sb2.append("[");
            }
            sb2.append("L");
        }
        if (str2.length() > 0) {
            sb2.append(str2.concat("."));
        }
        sb2.append(kotlin.text.x.m(str3, '.', '$'));
        if (i5 > 0) {
            sb2.append(";");
        }
        return com.facebook.imagepipeline.nativecode.b.M(classLoader, sb2.toString());
    }

    public static final Annotation j(jp.b bVar) {
        ip.f d6 = oq.e.d(bVar);
        Class k = d6 != null ? k(d6) : null;
        if (k == null) {
            k = null;
        }
        if (k == null) {
            return null;
        }
        Set<Map.Entry> entrySet = bVar.b().entrySet();
        ArrayList arrayList = new ArrayList();
        for (Map.Entry entry : entrySet) {
            hq.e eVar = (hq.e) entry.getKey();
            mq.g gVar = (mq.g) entry.getValue();
            ClassLoader classLoader = k.getClassLoader();
            Intrinsics.checkNotNullExpressionValue(classLoader, "getClassLoader(...)");
            Object l6 = l(gVar, classLoader);
            Pair pair = l6 != null ? new Pair(eVar.b(), l6) : null;
            if (pair != null) {
                arrayList.add(pair);
            }
        }
        Map m5 = kotlin.collections.v0.m(arrayList);
        Set keySet = m5.keySet();
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(keySet, 10));
        Iterator it = keySet.iterator();
        while (it.hasNext()) {
            arrayList2.add(k.getDeclaredMethod((String) it.next(), null));
        }
        return (Annotation) zo.c0.r(k, m5, arrayList2);
    }

    public static final Class k(ip.f fVar) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        ip.o0 d6 = fVar.d();
        Intrinsics.checkNotNullExpressionValue(d6, "getSource(...)");
        if (d6 instanceof aq.p) {
            np.b bVar = ((aq.p) d6).f2650d;
            Intrinsics.checkNotNull(bVar, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.runtime.components.ReflectKotlinClass");
            return bVar.a;
        }
        if (d6 instanceof np.f) {
            op.r rVar = ((np.f) d6).f15587d;
            Intrinsics.checkNotNull(rVar, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.runtime.structure.ReflectJavaClass");
            return ((op.n) rVar).a;
        }
        hq.b f2 = oq.e.f(fVar);
        if (f2 == null) {
            return null;
        }
        return i(op.c.d(fVar.getClass()), f2, 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final Object l(mq.g gVar, ClassLoader classLoader) {
        yq.y yVar;
        Class i5;
        if (gVar instanceof mq.a) {
            return j((jp.b) ((mq.a) gVar).a);
        }
        int i6 = 0;
        if (gVar instanceof mq.b) {
            mq.b bVar = (mq.b) gVar;
            mq.y yVar2 = bVar instanceof mq.y ? (mq.y) bVar : null;
            if (yVar2 != null && (yVar = yVar2.f14582c) != null) {
                Object obj = bVar.a;
                Iterable iterable = (Iterable) obj;
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(iterable, 10));
                Iterator it = iterable.iterator();
                while (it.hasNext()) {
                    arrayList.add(l((mq.g) it.next(), classLoader));
                }
                hq.e eVar = fp.i.f8859e;
                ip.i a10 = yVar.r0().a();
                fp.k s2 = a10 == null ? null : fp.i.s(a10);
                switch (s2 == null ? -1 : b2.a[s2.ordinal()]) {
                    case -1:
                        if (!fp.i.z(yVar)) {
                            throw new IllegalStateException(("Not an array type: " + yVar).toString());
                        }
                        yq.y b10 = ((yq.s0) CollectionsKt.Z(yVar.l0())).b();
                        Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                        ip.i a11 = b10.r0().a();
                        ip.f fVar = a11 instanceof ip.f ? (ip.f) a11 : null;
                        if (fVar == null) {
                            throw new IllegalStateException(("Not a class type: " + b10).toString());
                        }
                        if (fp.i.H(b10)) {
                            int size = ((List) obj).size();
                            String[] strArr = new String[size];
                            while (i6 < size) {
                                Object obj2 = arrayList.get(i6);
                                Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.String");
                                strArr[i6] = obj2;
                                i6++;
                            }
                            return strArr;
                        }
                        if (fp.i.b(fVar, fp.o.Q)) {
                            int size2 = ((List) obj).size();
                            Class[] clsArr = new Class[size2];
                            while (i6 < size2) {
                                Object obj3 = arrayList.get(i6);
                                Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type java.lang.Class<*>");
                                clsArr[i6] = obj3;
                                i6++;
                            }
                            return clsArr;
                        }
                        hq.b f2 = oq.e.f(fVar);
                        if (f2 != null && (i5 = i(classLoader, f2, 0)) != null) {
                            Object newInstance = Array.newInstance((Class<?>) i5, ((List) obj).size());
                            Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type kotlin.Array<in kotlin.Any?>");
                            Object[] objArr = (Object[]) newInstance;
                            int size3 = arrayList.size();
                            while (i6 < size3) {
                                objArr[i6] = arrayList.get(i6);
                                i6++;
                            }
                            return objArr;
                        }
                        break;
                    case 0:
                    default:
                        throw new fo.n();
                    case 1:
                        int size4 = ((List) obj).size();
                        boolean[] zArr = new boolean[size4];
                        while (i6 < size4) {
                            Object obj4 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj4, "null cannot be cast to non-null type kotlin.Boolean");
                            zArr[i6] = ((Boolean) obj4).booleanValue();
                            i6++;
                        }
                        return zArr;
                    case 2:
                        int size5 = ((List) obj).size();
                        char[] cArr = new char[size5];
                        while (i6 < size5) {
                            Object obj5 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj5, "null cannot be cast to non-null type kotlin.Char");
                            cArr[i6] = ((Character) obj5).charValue();
                            i6++;
                        }
                        return cArr;
                    case 3:
                        int size6 = ((List) obj).size();
                        byte[] bArr = new byte[size6];
                        while (i6 < size6) {
                            Object obj6 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj6, "null cannot be cast to non-null type kotlin.Byte");
                            bArr[i6] = ((Byte) obj6).byteValue();
                            i6++;
                        }
                        return bArr;
                    case 4:
                        int size7 = ((List) obj).size();
                        short[] sArr = new short[size7];
                        while (i6 < size7) {
                            Object obj7 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj7, "null cannot be cast to non-null type kotlin.Short");
                            sArr[i6] = ((Short) obj7).shortValue();
                            i6++;
                        }
                        return sArr;
                    case 5:
                        int size8 = ((List) obj).size();
                        int[] iArr = new int[size8];
                        while (i6 < size8) {
                            Object obj8 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj8, "null cannot be cast to non-null type kotlin.Int");
                            iArr[i6] = ((Integer) obj8).intValue();
                            i6++;
                        }
                        return iArr;
                    case 6:
                        int size9 = ((List) obj).size();
                        float[] fArr = new float[size9];
                        while (i6 < size9) {
                            Object obj9 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj9, "null cannot be cast to non-null type kotlin.Float");
                            fArr[i6] = ((Float) obj9).floatValue();
                            i6++;
                        }
                        return fArr;
                    case 7:
                        int size10 = ((List) obj).size();
                        long[] jArr = new long[size10];
                        while (i6 < size10) {
                            Object obj10 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj10, "null cannot be cast to non-null type kotlin.Long");
                            jArr[i6] = ((Long) obj10).longValue();
                            i6++;
                        }
                        return jArr;
                    case 8:
                        int size11 = ((List) obj).size();
                        double[] dArr = new double[size11];
                        while (i6 < size11) {
                            Object obj11 = arrayList.get(i6);
                            Intrinsics.checkNotNull(obj11, "null cannot be cast to non-null type kotlin.Double");
                            dArr[i6] = ((Double) obj11).doubleValue();
                            i6++;
                        }
                        return dArr;
                }
            }
        } else if (gVar instanceof mq.i) {
            Pair pair = (Pair) ((mq.i) gVar).a;
            hq.b bVar2 = (hq.b) pair.f13474d;
            hq.e eVar2 = (hq.e) pair.f13475e;
            Class i10 = i(classLoader, bVar2, 0);
            if (i10 != null) {
                return Enum.valueOf(i10, eVar2.b());
            }
        } else {
            if (!(gVar instanceof mq.t)) {
                if ((gVar instanceof mq.j) || (gVar instanceof mq.v)) {
                    return null;
                }
                return gVar.b();
            }
            mq.s sVar = (mq.s) ((mq.t) gVar).a;
            if (sVar instanceof mq.r) {
                mq.f fVar2 = ((mq.r) sVar).a;
                return i(classLoader, fVar2.a, fVar2.f14575b);
            }
            if (!(sVar instanceof mq.q)) {
                throw new fo.n();
            }
            ip.i a12 = ((mq.q) sVar).a.r0().a();
            ip.f fVar3 = a12 instanceof ip.f ? (ip.f) a12 : null;
            if (fVar3 != null) {
                return k(fVar3);
            }
        }
        return null;
    }
}
