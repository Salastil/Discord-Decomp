package dp;

import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes3.dex */
public final class c implements g {
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f7642b;

    /* renamed from: c, reason: collision with root package name */
    public final a f7643c;

    /* renamed from: d, reason: collision with root package name */
    public final List f7644d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f7645e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f7646f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f7647g;

    public c(Class jClass, ArrayList parameterNames, a callMode, b origin, List methods) {
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        Intrinsics.checkNotNullParameter(parameterNames, "parameterNames");
        Intrinsics.checkNotNullParameter(callMode, "callMode");
        Intrinsics.checkNotNullParameter(origin, "origin");
        Intrinsics.checkNotNullParameter(methods, "methods");
        this.a = jClass;
        this.f7642b = parameterNames;
        this.f7643c = callMode;
        this.f7644d = methods;
        ArrayList arrayList = new ArrayList(d0.l(methods, 10));
        Iterator it = methods.iterator();
        while (it.hasNext()) {
            arrayList.add(((Method) it.next()).getGenericReturnType());
        }
        this.f7645e = arrayList;
        List list = this.f7644d;
        ArrayList arrayList2 = new ArrayList(d0.l(list, 10));
        Iterator it2 = list.iterator();
        while (it2.hasNext()) {
            Class<?> returnType = ((Method) it2.next()).getReturnType();
            Intrinsics.checkNotNull(returnType);
            List list2 = op.c.a;
            Intrinsics.checkNotNullParameter(returnType, "<this>");
            Class<?> cls = (Class) op.c.f16154c.get(returnType);
            if (cls != null) {
                returnType = cls;
            }
            arrayList2.add(returnType);
        }
        this.f7646f = arrayList2;
        List list3 = this.f7644d;
        ArrayList arrayList3 = new ArrayList(d0.l(list3, 10));
        Iterator it3 = list3.iterator();
        while (it3.hasNext()) {
            arrayList3.add(((Method) it3.next()).getDefaultValue());
        }
        this.f7647g = arrayList3;
        if (this.f7643c == a.f7633e && origin == b.f7635d) {
            ArrayList arrayList4 = this.f7642b;
            Intrinsics.checkNotNullParameter(arrayList4, "<this>");
            ArrayList arrayList5 = new ArrayList(d0.l(arrayList4, 10));
            boolean z5 = false;
            for (Object obj : arrayList4) {
                boolean z6 = true;
                if (!z5 && Intrinsics.areEqual(obj, "value")) {
                    z5 = true;
                    z6 = false;
                }
                if (z6) {
                    arrayList5.add(obj);
                }
            }
            if (!arrayList5.isEmpty()) {
                throw new UnsupportedOperationException("Positional call of a Java annotation constructor is allowed only if there are no parameters or one parameter named \"value\". This restriction exists because Java annotations (in contrast to Kotlin)do not impose any order on their arguments. Use KCallable#callBy instead.");
            }
        }
    }

    @Override // dp.g
    public final List a() {
        return this.f7645e;
    }

    @Override // dp.g
    public final /* bridge */ /* synthetic */ Member b() {
        return null;
    }

    @Override // dp.g
    public final boolean c() {
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x007f, code lost:
    
        if (r11.isInstance(r8) != false) goto L30;
     */
    @Override // dp.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object call(Object[] args) {
        KClass orCreateKotlinClass;
        String qualifiedName;
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        ArrayList arrayList = new ArrayList(args.length);
        int length = args.length;
        int i5 = 0;
        int i6 = 0;
        while (true) {
            ArrayList arrayList2 = this.f7642b;
            if (i5 >= length) {
                return zo.c0.r(this.a, v0.m(CollectionsKt.n0(arrayList2, arrayList)), this.f7644d);
            }
            Object obj = args[i5];
            int i10 = i6 + 1;
            ArrayList arrayList3 = this.f7646f;
            if (obj == null && this.f7643c == a.f7632d) {
                obj = this.f7647g.get(i6);
            } else {
                Class cls = (Class) arrayList3.get(i6);
                if (!(obj instanceof Class)) {
                    if (obj instanceof KClass) {
                        obj = com.facebook.imagepipeline.nativecode.c.z((KClass) obj);
                    } else if (obj instanceof Object[]) {
                        Object[] objArr = (Object[]) obj;
                        if (!(objArr instanceof Class[])) {
                            if (objArr instanceof KClass[]) {
                                Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Array<kotlin.reflect.KClass<*>>");
                                KClass[] kClassArr = (KClass[]) obj;
                                ArrayList arrayList4 = new ArrayList(kClassArr.length);
                                for (KClass kClass : kClassArr) {
                                    arrayList4.add(com.facebook.imagepipeline.nativecode.c.z(kClass));
                                }
                                obj = arrayList4.toArray(new Class[0]);
                            } else {
                                obj = objArr;
                            }
                        }
                    }
                }
                obj = null;
            }
            if (obj == null) {
                String str = (String) arrayList2.get(i6);
                Class cls2 = (Class) arrayList3.get(i6);
                if (Intrinsics.areEqual(cls2, Class.class)) {
                    orCreateKotlinClass = Reflection.getOrCreateKotlinClass(KClass.class);
                } else if (cls2.isArray() && Intrinsics.areEqual(cls2.getComponentType(), Class.class)) {
                    orCreateKotlinClass = Reflection.getOrCreateKotlinClass(KClass[].class);
                } else {
                    Intrinsics.checkNotNullParameter(cls2, "<this>");
                    orCreateKotlinClass = Reflection.getOrCreateKotlinClass(cls2);
                }
                if (Intrinsics.areEqual(orCreateKotlinClass.getQualifiedName(), Reflection.getOrCreateKotlinClass(Object[].class).getQualifiedName())) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(orCreateKotlinClass.getQualifiedName());
                    sb2.append('<');
                    Class<?> componentType = com.facebook.imagepipeline.nativecode.c.z(orCreateKotlinClass).getComponentType();
                    Intrinsics.checkNotNullExpressionValue(componentType, "getComponentType(...)");
                    sb2.append(com.facebook.imagepipeline.nativecode.c.C(componentType).getQualifiedName());
                    sb2.append('>');
                    qualifiedName = sb2.toString();
                } else {
                    qualifiedName = orCreateKotlinClass.getQualifiedName();
                }
                throw new IllegalArgumentException("Argument #" + i6 + ' ' + str + " is not of the required type " + qualifiedName);
            }
            arrayList.add(obj);
            i5++;
            i6 = i10;
        }
    }

    @Override // dp.g
    public final Type getReturnType() {
        return this.a;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ c(Class cls, ArrayList arrayList, a aVar) {
        this(cls, arrayList, aVar, r4, r5);
        b bVar = b.f7636e;
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(cls.getDeclaredMethod((String) it.next(), null));
        }
    }
}
