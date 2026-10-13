package bs;

import java.lang.annotation.Annotation;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public abstract class h1 {
    public static final SerialDescriptor[] a = new SerialDescriptor[0];

    /* renamed from: b, reason: collision with root package name */
    public static final KSerializer[] f3190b = new KSerializer[0];

    /* renamed from: c, reason: collision with root package name */
    public static final Object f3191c = new Object();

    public static final k0 a(String name, KSerializer primitiveSerializer) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(primitiveSerializer, "primitiveSerializer");
        return new k0(name, new l0(primitiveSerializer));
    }

    public static final Set b(SerialDescriptor serialDescriptor) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        if (serialDescriptor instanceof l) {
            return ((l) serialDescriptor).c();
        }
        HashSet hashSet = new HashSet(serialDescriptor.f());
        int f2 = serialDescriptor.f();
        for (int i5 = 0; i5 < f2; i5++) {
            hashSet.add(serialDescriptor.g(i5));
        }
        return hashSet;
    }

    public static final SerialDescriptor[] c(List list) {
        SerialDescriptor[] serialDescriptorArr;
        if (list == null || list.isEmpty()) {
            list = null;
        }
        return (list == null || (serialDescriptorArr = (SerialDescriptor[]) list.toArray(new SerialDescriptor[0])) == null) ? a : serialDescriptorArr;
    }

    /* JADX WARN: Code restructure failed: missing block: B:124:0x0105, code lost:
    
        if (r13 == false) goto L51;
     */
    /* JADX WARN: Code restructure failed: missing block: B:129:0x00ba, code lost:
    
        if (r12 == false) goto L35;
     */
    /* JADX WARN: Removed duplicated region for block: B:103:0x018e A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0117 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0118  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x01a9 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:71:0x01aa  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0176 A[Catch: NoSuchFieldException -> 0x01a6, TryCatch #3 {NoSuchFieldException -> 0x01a6, blocks: (B:82:0x0168, B:84:0x0176, B:93:0x0193, B:95:0x0199, B:96:0x019f, B:98:0x01a3, B:89:0x018b), top: B:81:0x0168 }] */
    /* JADX WARN: Removed duplicated region for block: B:98:0x01a3 A[Catch: NoSuchFieldException -> 0x01a6, TRY_LEAVE, TryCatch #3 {NoSuchFieldException -> 0x01a6, blocks: (B:82:0x0168, B:84:0x0176, B:93:0x0193, B:95:0x0199, B:96:0x019f, B:98:0x01a3, B:89:0x018b), top: B:81:0x0168 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final KSerializer d(Class cls, KSerializer... args) {
        Object obj;
        KSerializer kSerializer;
        Class<?> cls2;
        boolean z5;
        Object obj2;
        Field declaredField;
        KSerializer kSerializer2;
        int length;
        int i5;
        Object obj3;
        Field field;
        xr.e eVar;
        Intrinsics.checkNotNullParameter(cls, "<this>");
        Intrinsics.checkNotNullParameter(args, "args");
        if (cls.isEnum() && cls.getAnnotation(xr.e.class) == null && cls.getAnnotation(xr.b.class) == null) {
            Object[] enumConstants = cls.getEnumConstants();
            String canonicalName = cls.getCanonicalName();
            Intrinsics.checkNotNullExpressionValue(canonicalName, "getCanonicalName(...)");
            Intrinsics.checkNotNull(enumConstants, "null cannot be cast to non-null type kotlin.Array<out kotlin.Enum<*>>");
            return new d0(canonicalName, (Enum[]) enumConstants);
        }
        KSerializer[] kSerializerArr = (KSerializer[]) Arrays.copyOf(args, args.length);
        try {
            Field declaredField2 = cls.getDeclaredField("Companion");
            declaredField2.setAccessible(true);
            obj = declaredField2.get(null);
        } catch (Throwable unused) {
            obj = null;
        }
        KSerializer g6 = obj == null ? null : g(obj, (KSerializer[]) Arrays.copyOf(kSerializerArr, kSerializerArr.length));
        if (g6 != null) {
            return g6;
        }
        String canonicalName2 = cls.getCanonicalName();
        if (canonicalName2 != null && !kotlin.text.x.o(canonicalName2, "java.", false) && !kotlin.text.x.o(canonicalName2, "kotlin.", false)) {
            Field[] declaredFields = cls.getDeclaredFields();
            Intrinsics.checkNotNullExpressionValue(declaredFields, "getDeclaredFields(...)");
            int length2 = declaredFields.length;
            Field field2 = null;
            int i6 = 0;
            boolean z6 = false;
            while (true) {
                if (i6 < length2) {
                    Field field3 = declaredFields[i6];
                    if (Intrinsics.areEqual(field3.getName(), "INSTANCE") && Intrinsics.areEqual(field3.getType(), cls) && Modifier.isStatic(field3.getModifiers())) {
                        if (z6) {
                            break;
                        }
                        z6 = true;
                        field2 = field3;
                    }
                    i6++;
                }
            }
            field2 = null;
            if (field2 != null) {
                Object obj4 = field2.get(null);
                Method[] methods = cls.getMethods();
                Intrinsics.checkNotNullExpressionValue(methods, "getMethods(...)");
                int length3 = methods.length;
                Method method = null;
                int i10 = 0;
                boolean z7 = false;
                while (true) {
                    if (i10 < length3) {
                        Method method2 = methods[i10];
                        if (Intrinsics.areEqual(method2.getName(), "serializer")) {
                            Class<?>[] parameterTypes = method2.getParameterTypes();
                            Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
                            if (parameterTypes.length == 0 && Intrinsics.areEqual(method2.getReturnType(), KSerializer.class)) {
                                if (z7) {
                                    break;
                                }
                                method = method2;
                                z7 = true;
                            }
                        }
                        i10++;
                    }
                }
                method = null;
                if (method != null) {
                    Object invoke = method.invoke(obj4, null);
                    if (invoke instanceof KSerializer) {
                        kSerializer = (KSerializer) invoke;
                        if (kSerializer == null) {
                            return kSerializer;
                        }
                        KSerializer[] kSerializerArr2 = (KSerializer[]) Arrays.copyOf(args, args.length);
                        Class<?>[] declaredClasses = cls.getDeclaredClasses();
                        Intrinsics.checkNotNullExpressionValue(declaredClasses, "getDeclaredClasses(...)");
                        int length4 = declaredClasses.length;
                        int i11 = 0;
                        while (true) {
                            if (i11 >= length4) {
                                cls2 = null;
                                break;
                            }
                            cls2 = declaredClasses[i11];
                            if (cls2.getAnnotation(z0.class) != null) {
                                break;
                            }
                            i11++;
                        }
                        if (cls2 == null) {
                            obj2 = null;
                            z5 = true;
                        } else {
                            String simpleName = cls2.getSimpleName();
                            Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
                            try {
                                declaredField = cls.getDeclaredField(simpleName);
                                z5 = true;
                            } catch (Throwable unused2) {
                                z5 = true;
                            }
                            try {
                                declaredField.setAccessible(true);
                                obj2 = declaredField.get(null);
                            } catch (Throwable unused3) {
                                obj2 = null;
                                if (obj2 != null) {
                                }
                                try {
                                    Class<?>[] declaredClasses2 = cls.getDeclaredClasses();
                                    Intrinsics.checkNotNullExpressionValue(declaredClasses2, "getDeclaredClasses(...)");
                                    length = declaredClasses2.length;
                                    Class<?> cls3 = null;
                                    i5 = 0;
                                    boolean z8 = false;
                                    while (true) {
                                        if (i5 >= length) {
                                        }
                                        i5++;
                                    }
                                    cls3 = null;
                                    if (cls3 != null) {
                                    }
                                    if (obj3 instanceof KSerializer) {
                                    }
                                } catch (NoSuchFieldException unused4) {
                                }
                                kSerializer2 = null;
                                if (kSerializer2 == null) {
                                }
                            }
                        }
                        if (obj2 != null || (kSerializer2 = g(obj2, (KSerializer[]) Arrays.copyOf(kSerializerArr2, kSerializerArr2.length))) == null) {
                            Class<?>[] declaredClasses22 = cls.getDeclaredClasses();
                            Intrinsics.checkNotNullExpressionValue(declaredClasses22, "getDeclaredClasses(...)");
                            length = declaredClasses22.length;
                            Class<?> cls32 = null;
                            i5 = 0;
                            boolean z82 = false;
                            while (true) {
                                if (i5 >= length) {
                                    Class<?> cls4 = declaredClasses22[i5];
                                    if (Intrinsics.areEqual(cls4.getSimpleName(), "$serializer")) {
                                        if (z82) {
                                            break;
                                        }
                                        z82 = z5;
                                        cls32 = cls4;
                                    }
                                    i5++;
                                } else if (!z82) {
                                }
                            }
                            cls32 = null;
                            obj3 = (cls32 != null || (field = cls32.getField("INSTANCE")) == null) ? null : field.get(null);
                            if (obj3 instanceof KSerializer) {
                                kSerializer2 = (KSerializer) obj3;
                            }
                            kSerializer2 = null;
                        }
                        if (kSerializer2 == null) {
                            return kSerializer2;
                        }
                        if (cls.getAnnotation(xr.b.class) == null && ((eVar = (xr.e) cls.getAnnotation(xr.e.class)) == null || !Intrinsics.areEqual(Reflection.getOrCreateKotlinClass(eVar.with()), Reflection.getOrCreateKotlinClass(xr.c.class)))) {
                            return null;
                        }
                        Intrinsics.checkNotNullParameter(cls, "<this>");
                        return new xr.c(Reflection.getOrCreateKotlinClass(cls));
                    }
                }
            }
        }
        kSerializer = null;
        if (kSerializer == null) {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r13v3 */
    /* JADX WARN: Type inference failed for: r13v4, types: [int] */
    /* JADX WARN: Type inference failed for: r13v7 */
    public static final d0 e(String serialName, Enum[] values, String[] strArr, Annotation[][] entryAnnotations) {
        String[] names = strArr;
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(values, "values");
        Intrinsics.checkNotNullParameter(names, "names");
        Intrinsics.checkNotNullParameter(entryAnnotations, "entryAnnotations");
        b0 descriptor = new b0(serialName, values.length);
        int length = values.length;
        boolean z5 = false;
        int i5 = 0;
        int i6 = 0;
        while (i5 < length) {
            Enum r11 = values[i5];
            int i10 = i6 + 1;
            String str = (String) kotlin.collections.x.v(i6, names);
            if (str == null) {
                str = r11.name();
            }
            descriptor.k(str, z5);
            Annotation[] annotationArr = (Annotation[]) kotlin.collections.x.v(i6, entryAnnotations);
            if (annotationArr != null) {
                int length2 = annotationArr.length;
                for (?? r13 = z5; r13 < length2; r13++) {
                    Annotation annotation = annotationArr[r13];
                    Intrinsics.checkNotNullParameter(annotation, "annotation");
                    int i11 = descriptor.f3204d;
                    List[] listArr = descriptor.f3206f;
                    List list = listArr[i11];
                    if (list == null) {
                        list = new ArrayList(1);
                        listArr[descriptor.f3204d] = list;
                    }
                    list.add(annotation);
                }
            }
            i5++;
            names = strArr;
            i6 = i10;
            z5 = false;
        }
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(values, "values");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        d0 d0Var = new d0(serialName, values);
        d0Var.f3174c = descriptor;
        return d0Var;
    }

    public static final int f(SerialDescriptor serialDescriptor, SerialDescriptor[] typeParams) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        Intrinsics.checkNotNullParameter(typeParams, "typeParams");
        int hashCode = (serialDescriptor.a().hashCode() * 31) + Arrays.hashCode(typeParams);
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        int f2 = serialDescriptor.f();
        int i5 = 1;
        while (true) {
            int i6 = 0;
            if (!(f2 > 0)) {
                break;
            }
            int i10 = f2 - 1;
            int i11 = i5 * 31;
            String a10 = serialDescriptor.i(serialDescriptor.f() - f2).a();
            if (a10 != null) {
                i6 = a10.hashCode();
            }
            i5 = i11 + i6;
            f2 = i10;
        }
        int f10 = serialDescriptor.f();
        int i12 = 1;
        while (true) {
            if (!(f10 > 0)) {
                return (((hashCode * 31) + i5) * 31) + i12;
            }
            int i13 = f10 - 1;
            int i14 = i12 * 31;
            d9.a b10 = serialDescriptor.i(serialDescriptor.f() - f10).b();
            i12 = i14 + (b10 != null ? b10.hashCode() : 0);
            f10 = i13;
        }
    }

    public static final KSerializer g(Object obj, KSerializer... kSerializerArr) {
        Class[] clsArr;
        try {
            if (kSerializerArr.length == 0) {
                clsArr = new Class[0];
            } else {
                int length = kSerializerArr.length;
                Class[] clsArr2 = new Class[length];
                for (int i5 = 0; i5 < length; i5++) {
                    clsArr2[i5] = KSerializer.class;
                }
                clsArr = clsArr2;
            }
            Object invoke = obj.getClass().getDeclaredMethod("serializer", (Class[]) Arrays.copyOf(clsArr, clsArr.length)).invoke(obj, Arrays.copyOf(kSerializerArr, kSerializerArr.length));
            if (invoke instanceof KSerializer) {
                return (KSerializer) invoke;
            }
            return null;
        } catch (NoSuchMethodException unused) {
            return null;
        } catch (InvocationTargetException e9) {
            Throwable cause = e9.getCause();
            if (cause == null) {
                throw e9;
            }
            String message = cause.getMessage();
            if (message == null) {
                message = e9.getMessage();
            }
            throw new InvocationTargetException(cause, message);
        }
    }

    public static final boolean h(KClass kClass) {
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        return com.facebook.imagepipeline.nativecode.c.z(kClass).isInterface();
    }

    public static final KClass i(KType kType) {
        Intrinsics.checkNotNullParameter(kType, "<this>");
        zo.c classifier = kType.getClassifier();
        if (classifier instanceof KClass) {
            return (KClass) classifier;
        }
        if (!(classifier instanceof zo.t)) {
            throw new IllegalArgumentException("Only KClass supported as classifier, got " + classifier);
        }
        throw new IllegalArgumentException("Captured type parameter " + classifier + " from generic non-reified function. Such functionality cannot be supported because " + classifier + " is erased, either specify serializer explicitly or make calling function inline with reified " + classifier + '.');
    }

    public static final String j(KClass kClass) {
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        String className = kClass.getSimpleName();
        if (className == null) {
            className = "<local class name not available>";
        }
        Intrinsics.checkNotNullParameter(className, "className");
        return "Serializer for class '" + className + "' is not found.\nPlease ensure that class is marked as '@Serializable' and that the serialization compiler plugin is applied.\n";
    }

    public static final void k(int[] seenArray, int[] goldenMaskArray, SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(seenArray, "seenArray");
        Intrinsics.checkNotNullParameter(goldenMaskArray, "goldenMaskArray");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        ArrayList arrayList = new ArrayList();
        int length = goldenMaskArray.length;
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = goldenMaskArray[i5] & (~seenArray[i5]);
            if (i6 != 0) {
                for (int i10 = 0; i10 < 32; i10++) {
                    if ((i6 & 1) != 0) {
                        arrayList.add(descriptor.g((i5 * 32) + i10));
                    }
                    i6 >>>= 1;
                }
            }
        }
        throw new xr.a(descriptor.a(), arrayList);
    }

    public static final void l(int i5, int i6, SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        ArrayList arrayList = new ArrayList();
        int i10 = (~i5) & i6;
        for (int i11 = 0; i11 < 32; i11++) {
            if ((i10 & 1) != 0) {
                arrayList.add(descriptor.g(i11));
            }
            i10 >>>= 1;
        }
        throw new xr.a(descriptor.a(), arrayList);
    }

    public static final void m(String str, KClass baseClass) {
        String sb2;
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        String str2 = "in the polymorphic scope of '" + baseClass.getSimpleName() + '\'';
        if (str == null) {
            sb2 = k0.d.h('.', "Class discriminator was missing and no default serializers were registered ", str2);
        } else {
            StringBuilder t5 = a3.e.t("Serializer for subclass '", str, "' is not found ", str2, ".\nCheck if class with serial name '");
            a3.e.A(t5, str, "' exists and serializer is registered in a corresponding SerializersModule.\nTo be registered automatically, class '", str, "' has to be '@Serializable', and the base class '");
            t5.append(baseClass.getSimpleName());
            t5.append("' has to be sealed and '@Serializable'.");
            sb2 = t5.toString();
        }
        throw new xr.f(sb2);
    }
}
