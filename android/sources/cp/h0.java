package cp;

import java.lang.reflect.Array;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.ClassBasedDeclarationContainer;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public abstract class h0 implements ClassBasedDeclarationContainer {

    /* renamed from: d, reason: collision with root package name */
    public static final Regex f6904d = new Regex("<v#(\\d+)>");

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v5, types: [java.util.List] */
    public static void a(ArrayList arrayList, ArrayList arrayList2, boolean z5) {
        Class cls;
        cls = DefaultConstructorMarker.class;
        boolean areEqual = Intrinsics.areEqual(CollectionsKt.S(arrayList2), cls);
        ArrayList arrayList3 = arrayList2;
        if (areEqual) {
            arrayList3 = arrayList2.subList(0, arrayList2.size() - 1);
        }
        arrayList.addAll(arrayList3);
        int size = (arrayList3.size() + 31) / 32;
        for (int i5 = 0; i5 < size; i5++) {
            Class TYPE = Integer.TYPE;
            Intrinsics.checkNotNullExpressionValue(TYPE, "TYPE");
            arrayList.add(TYPE);
        }
        cls = z5 ? DefaultConstructorMarker.class : Object.class;
        Intrinsics.checkNotNull(cls);
        arrayList.add(cls);
    }

    public static Method j(Class cls, String str, Class[] clsArr, Class cls2, boolean z5) {
        Class M;
        Method j;
        if (z5) {
            clsArr[0] = cls;
        }
        Method m5 = m(cls, str, clsArr, cls2);
        if (m5 != null) {
            return m5;
        }
        Class superclass = cls.getSuperclass();
        if (superclass != null && (j = j(superclass, str, clsArr, cls2, z5)) != null) {
            return j;
        }
        Iterator it = ArrayIteratorKt.iterator(cls.getInterfaces());
        while (it.hasNext()) {
            Class cls3 = (Class) it.next();
            Intrinsics.checkNotNull(cls3);
            Method j5 = j(cls3, str, clsArr, cls2, z5);
            if (j5 != null) {
                return j5;
            }
            if (z5 && (M = com.facebook.imagepipeline.nativecode.b.M(op.c.d(cls3), cls3.getName().concat("$DefaultImpls"))) != null) {
                clsArr[0] = cls3;
                Method m6 = m(M, str, clsArr, cls2);
                if (m6 != null) {
                    return m6;
                }
            }
        }
        return null;
    }

    public static Method m(Class cls, String str, Class[] clsArr, Class cls2) {
        try {
            Method declaredMethod = cls.getDeclaredMethod(str, (Class[]) Arrays.copyOf(clsArr, clsArr.length));
            if (Intrinsics.areEqual(declaredMethod.getReturnType(), cls2)) {
                return declaredMethod;
            }
            Method[] declaredMethods = cls.getDeclaredMethods();
            Intrinsics.checkNotNullExpressionValue(declaredMethods, "getDeclaredMethods(...)");
            for (Method method : declaredMethods) {
                if (Intrinsics.areEqual(method.getName(), str) && Intrinsics.areEqual(method.getReturnType(), cls2) && Arrays.equals(method.getParameterTypes(), clsArr)) {
                    return method;
                }
            }
            return null;
        } catch (NoSuchMethodException unused) {
            return null;
        }
    }

    public final Method b(String name, String desc, boolean z5) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        if (Intrinsics.areEqual(name, "<init>")) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        if (z5) {
            arrayList.add(getJClass());
        }
        e4.e k = k(desc, true);
        a(arrayList, (ArrayList) k.f7943e, false);
        Class h6 = h();
        String k5 = k0.d.k(name, "$default");
        Class[] clsArr = (Class[]) arrayList.toArray(new Class[0]);
        Class cls = (Class) k.f7944i;
        Intrinsics.checkNotNull(cls);
        return j(h6, k5, clsArr, cls, z5);
    }

    public final Method c(String name, String desc) {
        Method j;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        if (Intrinsics.areEqual(name, "<init>")) {
            return null;
        }
        e4.e k = k(desc, true);
        Class[] clsArr = (Class[]) ((ArrayList) k.f7943e).toArray(new Class[0]);
        Class cls = (Class) k.f7944i;
        Intrinsics.checkNotNull(cls);
        Method j5 = j(h(), name, clsArr, cls, false);
        if (j5 != null) {
            return j5;
        }
        if (!h().isInterface() || (j = j(Object.class, name, clsArr, cls, false)) == null) {
            return null;
        }
        return j;
    }

    public abstract Collection d();

    public abstract Collection e(hq.e eVar);

    public abstract ip.m0 f(int i5);

    /* JADX WARN: Removed duplicated region for block: B:17:0x0068 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0020 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List g(rq.o scope, f0 belonginess) {
        r rVar;
        Intrinsics.checkNotNullParameter(scope, "scope");
        Intrinsics.checkNotNullParameter(belonginess, "belonginess");
        g0 g0Var = new g0(this);
        Collection<ip.l> I = m3.n.I(scope, null, 3);
        ArrayList arrayList = new ArrayList();
        for (ip.l lVar : I) {
            if (lVar instanceof ip.d) {
                ip.d member = (ip.d) lVar;
                if (!Intrinsics.areEqual(member.getVisibility(), ip.q.f12162h)) {
                    Intrinsics.checkNotNullParameter(member, "member");
                    ip.c b10 = member.b();
                    b10.getClass();
                    if ((b10 != ip.c.f12124e) == (belonginess == f0.f6897d)) {
                        rVar = (r) lVar.e0(g0Var, Unit.a);
                        if (rVar == null) {
                            arrayList.add(rVar);
                        }
                    }
                }
            }
            rVar = null;
            if (rVar == null) {
            }
        }
        return CollectionsKt.i0(arrayList);
    }

    public Class h() {
        Class<?> jClass = getJClass();
        List list = op.c.a;
        Intrinsics.checkNotNullParameter(jClass, "<this>");
        Class cls = (Class) op.c.f16154c.get(jClass);
        return cls == null ? getJClass() : cls;
    }

    public abstract Collection i(hq.e eVar);

    public final e4.e k(String str, boolean z5) {
        int I;
        ArrayList arrayList = new ArrayList();
        int i5 = 1;
        while (str.charAt(i5) != ')') {
            int i6 = i5;
            while (str.charAt(i6) == '[') {
                i6++;
            }
            char charAt = str.charAt(i6);
            if (StringsKt.E("VZCBSIFJD", charAt)) {
                I = i6 + 1;
            } else {
                if (charAt != 'L') {
                    throw new u1("Unknown type prefix in the method signature: ".concat(str));
                }
                I = StringsKt.I(str, ';', i5, 4) + 1;
            }
            arrayList.add(l(i5, I, str));
            i5 = I;
        }
        return new e4.e(arrayList, z5 ? l(i5 + 1, str.length(), str) : null);
    }

    public final Class l(int i5, int i6, String str) {
        char charAt = str.charAt(i5);
        if (charAt == 'F') {
            return Float.TYPE;
        }
        if (charAt == 'L') {
            ClassLoader d6 = op.c.d(getJClass());
            String substring = str.substring(i5 + 1, i6 - 1);
            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
            Class<?> loadClass = d6.loadClass(kotlin.text.x.m(substring, '/', '.'));
            Intrinsics.checkNotNullExpressionValue(loadClass, "loadClass(...)");
            return loadClass;
        }
        if (charAt == 'S') {
            return Short.TYPE;
        }
        if (charAt == 'V') {
            Class TYPE = Void.TYPE;
            Intrinsics.checkNotNullExpressionValue(TYPE, "TYPE");
            return TYPE;
        }
        if (charAt == 'I') {
            return Integer.TYPE;
        }
        if (charAt == 'J') {
            return Long.TYPE;
        }
        if (charAt == 'Z') {
            return Boolean.TYPE;
        }
        if (charAt == '[') {
            Class l6 = l(i5 + 1, i6, str);
            hq.c cVar = c2.a;
            Intrinsics.checkNotNullParameter(l6, "<this>");
            return Array.newInstance((Class<?>) l6, 0).getClass();
        }
        switch (charAt) {
            case 'B':
                return Byte.TYPE;
            case 'C':
                return Character.TYPE;
            case 'D':
                return Double.TYPE;
            default:
                throw new u1("Unknown type prefix in the method signature: ".concat(str));
        }
    }
}
