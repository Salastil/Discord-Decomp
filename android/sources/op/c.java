package op;

import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.functions.Function4;
import kotlin.jvm.functions.Function5;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.functions.Function8;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes3.dex */
public abstract class c {
    public static final List a;

    /* renamed from: b, reason: collision with root package name */
    public static final Map f16153b;

    /* renamed from: c, reason: collision with root package name */
    public static final Map f16154c;

    /* renamed from: d, reason: collision with root package name */
    public static final Map f16155d;

    static {
        int i5 = 0;
        List<KClass> g6 = kotlin.collections.c0.g(Reflection.getOrCreateKotlinClass(Boolean.TYPE), Reflection.getOrCreateKotlinClass(Byte.TYPE), Reflection.getOrCreateKotlinClass(Character.TYPE), Reflection.getOrCreateKotlinClass(Double.TYPE), Reflection.getOrCreateKotlinClass(Float.TYPE), Reflection.getOrCreateKotlinClass(Integer.TYPE), Reflection.getOrCreateKotlinClass(Long.TYPE), Reflection.getOrCreateKotlinClass(Short.TYPE));
        a = g6;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(g6, 10));
        for (KClass kClass : g6) {
            arrayList.add(new Pair(com.facebook.imagepipeline.nativecode.c.A(kClass), com.facebook.imagepipeline.nativecode.c.B(kClass)));
        }
        f16153b = v0.m(arrayList);
        List<KClass> list = a;
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
        for (KClass kClass2 : list) {
            arrayList2.add(new Pair(com.facebook.imagepipeline.nativecode.c.B(kClass2), com.facebook.imagepipeline.nativecode.c.A(kClass2)));
        }
        f16154c = v0.m(arrayList2);
        List g10 = kotlin.collections.c0.g(Function0.class, Function1.class, Function2.class, Function3.class, Function4.class, Function5.class, Function6.class, to.n.class, Function8.class, to.o.class, to.a.class, to.b.class, to.c.class, to.d.class, to.e.class, to.f.class, to.g.class, to.h.class, to.i.class, to.j.class, to.k.class, to.l.class, to.m.class);
        ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(g10, 10));
        for (Object obj : g10) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            arrayList3.add(new Pair((Class) obj, Integer.valueOf(i5)));
            i5 = i6;
        }
        f16155d = v0.m(arrayList3);
    }

    public static final hq.b a(Class cls) {
        Intrinsics.checkNotNullParameter(cls, "<this>");
        if (cls.isPrimitive()) {
            throw new IllegalArgumentException(a3.e.i(cls, "Can't compute ClassId for primitive type: "));
        }
        if (cls.isArray()) {
            throw new IllegalArgumentException(a3.e.i(cls, "Can't compute ClassId for array type: "));
        }
        if (cls.getEnclosingMethod() == null && cls.getEnclosingConstructor() == null) {
            String simpleName = cls.getSimpleName();
            Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
            if (simpleName.length() != 0) {
                Class<?> declaringClass = cls.getDeclaringClass();
                if (declaringClass != null) {
                    hq.b a10 = a(declaringClass);
                    hq.e e9 = hq.e.e(cls.getSimpleName());
                    Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                    return a10.d(e9);
                }
                String name = cls.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                hq.c topLevelFqName = new hq.c(name);
                Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
                return new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
            }
        }
        String name2 = cls.getName();
        Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
        hq.c cVar = new hq.c(name2);
        return new hq.b(cVar.b(), tn.g.C(cVar.a.f()), true);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    public static final String b(Class cls) {
        Intrinsics.checkNotNullParameter(cls, "<this>");
        if (!cls.isPrimitive()) {
            if (cls.isArray()) {
                String name = cls.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                return kotlin.text.x.m(name, '.', '/');
            }
            StringBuilder sb2 = new StringBuilder("L");
            String name2 = cls.getName();
            Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
            sb2.append(kotlin.text.x.m(name2, '.', '/'));
            sb2.append(';');
            return sb2.toString();
        }
        String name3 = cls.getName();
        switch (name3.hashCode()) {
            case -1325958191:
                if (name3.equals("double")) {
                    return "D";
                }
                break;
            case 104431:
                if (name3.equals("int")) {
                    return "I";
                }
                break;
            case 3039496:
                if (name3.equals("byte")) {
                    return "B";
                }
                break;
            case 3052374:
                if (name3.equals("char")) {
                    return "C";
                }
                break;
            case 3327612:
                if (name3.equals("long")) {
                    return "J";
                }
                break;
            case 3625364:
                if (name3.equals("void")) {
                    return "V";
                }
                break;
            case 64711720:
                if (name3.equals("boolean")) {
                    return "Z";
                }
                break;
            case 97526364:
                if (name3.equals("float")) {
                    return "F";
                }
                break;
            case 109413500:
                if (name3.equals("short")) {
                    return "S";
                }
                break;
        }
        throw new IllegalArgumentException(a3.e.i(cls, "Unsupported primitive type: "));
    }

    public static final List c(Type type) {
        Intrinsics.checkNotNullParameter(type, "<this>");
        if (!(type instanceof ParameterizedType)) {
            return m0.f13512d;
        }
        ParameterizedType parameterizedType = (ParameterizedType) type;
        if (parameterizedType.getOwnerType() != null) {
            return kr.s.q(kr.s.l(kr.o.c(b.f16148e, type), b.f16149i));
        }
        Type[] actualTypeArguments = parameterizedType.getActualTypeArguments();
        Intrinsics.checkNotNullExpressionValue(actualTypeArguments, "getActualTypeArguments(...)");
        return kotlin.collections.x.H(actualTypeArguments);
    }

    public static final ClassLoader d(Class cls) {
        Intrinsics.checkNotNullParameter(cls, "<this>");
        ClassLoader classLoader = cls.getClassLoader();
        if (classLoader != null) {
            return classLoader;
        }
        ClassLoader systemClassLoader = ClassLoader.getSystemClassLoader();
        Intrinsics.checkNotNullExpressionValue(systemClassLoader, "getSystemClassLoader(...)");
        return systemClassLoader;
    }

    public static final boolean e(Class cls) {
        Intrinsics.checkNotNullParameter(cls, "<this>");
        return Enum.class.isAssignableFrom(cls);
    }
}
