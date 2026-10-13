package androidx.lifecycle;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class x {
    public static final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f2235b = new HashMap();

    public static void a(Constructor constructor, u uVar) {
        try {
            Object newInstance = constructor.newInstance(uVar);
            Intrinsics.checkNotNull(newInstance);
            if (newInstance == null) {
            } else {
                throw new ClassCastException();
            }
        } catch (IllegalAccessException e9) {
            throw new RuntimeException(e9);
        } catch (InstantiationException e10) {
            throw new RuntimeException(e10);
        } catch (InvocationTargetException e11) {
            throw new RuntimeException(e11);
        }
    }

    public static final String b(String className) {
        Intrinsics.checkNotNullParameter(className, "className");
        return com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), kotlin.text.x.l(className, ".", "_", false), "_LifecycleAdapter");
    }

    public static int c(Class cls) {
        Constructor<?> constructor;
        boolean z5;
        HashMap hashMap = a;
        Integer num = (Integer) hashMap.get(cls);
        if (num != null) {
            return num.intValue();
        }
        int i5 = 1;
        if (cls.getCanonicalName() != null) {
            ArrayList arrayList = null;
            try {
                Package r32 = cls.getPackage();
                String canonicalName = cls.getCanonicalName();
                String name = r32 != null ? r32.getName() : "";
                Intrinsics.checkNotNull(name);
                if (name.length() != 0) {
                    Intrinsics.checkNotNull(canonicalName);
                    canonicalName = canonicalName.substring(name.length() + 1);
                    Intrinsics.checkNotNullExpressionValue(canonicalName, "substring(...)");
                }
                Intrinsics.checkNotNull(canonicalName);
                String b10 = b(canonicalName);
                if (name.length() != 0) {
                    b10 = name + '.' + b10;
                }
                Class<?> cls2 = Class.forName(b10);
                Intrinsics.checkNotNull(cls2, "null cannot be cast to non-null type java.lang.Class<out androidx.lifecycle.GeneratedAdapter>");
                constructor = cls2.getDeclaredConstructor(cls);
                if (!constructor.isAccessible()) {
                    constructor.setAccessible(true);
                }
            } catch (ClassNotFoundException unused) {
                constructor = null;
            } catch (NoSuchMethodException e9) {
                throw new RuntimeException(e9);
            }
            HashMap hashMap2 = f2235b;
            if (constructor != null) {
                hashMap2.put(cls, kotlin.collections.b0.c(constructor));
            } else {
                d dVar = d.f2177c;
                HashMap hashMap3 = dVar.f2178b;
                Boolean bool = (Boolean) hashMap3.get(cls);
                if (bool != null) {
                    z5 = bool.booleanValue();
                } else {
                    try {
                        Method[] declaredMethods = cls.getDeclaredMethods();
                        int length = declaredMethods.length;
                        int i6 = 0;
                        while (true) {
                            if (i6 >= length) {
                                hashMap3.put(cls, Boolean.FALSE);
                                z5 = false;
                                break;
                            }
                            if (((b0) declaredMethods[i6].getAnnotation(b0.class)) != null) {
                                dVar.a(cls, declaredMethods);
                                z5 = true;
                                break;
                            }
                            i6++;
                        }
                    } catch (NoClassDefFoundError e10) {
                        throw new IllegalArgumentException("The observer class has some methods that use newer APIs which are not available in the current OS version. Lifecycles cannot access even other methods so you should make sure that your observer classes only access framework classes that are available in your min API level OR use lifecycle:compiler annotation processor.", e10);
                    }
                }
                if (!z5) {
                    Class superclass = cls.getSuperclass();
                    if (superclass != null && u.class.isAssignableFrom(superclass)) {
                        Intrinsics.checkNotNull(superclass);
                        if (c(superclass) != 1) {
                            Object obj = hashMap2.get(superclass);
                            Intrinsics.checkNotNull(obj);
                            arrayList = new ArrayList((Collection) obj);
                        }
                    }
                    Iterator it = ArrayIteratorKt.iterator(cls.getInterfaces());
                    while (true) {
                        if (it.hasNext()) {
                            Class cls3 = (Class) it.next();
                            if (cls3 != null && u.class.isAssignableFrom(cls3)) {
                                Intrinsics.checkNotNull(cls3);
                                if (c(cls3) == 1) {
                                    break;
                                }
                                if (arrayList == null) {
                                    arrayList = new ArrayList();
                                }
                                Object obj2 = hashMap2.get(cls3);
                                Intrinsics.checkNotNull(obj2);
                                arrayList.addAll((Collection) obj2);
                            }
                        } else if (arrayList != null) {
                            hashMap2.put(cls, arrayList);
                        }
                    }
                }
            }
            i5 = 2;
        }
        hashMap.put(cls, Integer.valueOf(i5));
        return i5;
    }
}
