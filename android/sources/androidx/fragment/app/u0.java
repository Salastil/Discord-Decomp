package androidx.fragment.app;

import androidx.collection.SimpleArrayMap;

/* loaded from: classes.dex */
public final class u0 {

    /* renamed from: b, reason: collision with root package name */
    public static final SimpleArrayMap f2108b = new SimpleArrayMap(0);
    public final /* synthetic */ FragmentManager a;

    public u0(FragmentManager fragmentManager) {
        this.a = fragmentManager;
    }

    public static Class a(ClassLoader classLoader, String str) {
        SimpleArrayMap simpleArrayMap = f2108b;
        SimpleArrayMap simpleArrayMap2 = (SimpleArrayMap) simpleArrayMap.get(classLoader);
        if (simpleArrayMap2 == null) {
            simpleArrayMap2 = new SimpleArrayMap(0);
            simpleArrayMap.put(classLoader, simpleArrayMap2);
        }
        Class cls = (Class) simpleArrayMap2.get(str);
        if (cls != null) {
            return cls;
        }
        Class<?> cls2 = Class.forName(str, false, classLoader);
        simpleArrayMap2.put(str, cls2);
        return cls2;
    }

    public static Class b(ClassLoader classLoader, String str) {
        try {
            return a(classLoader, str);
        } catch (ClassCastException e9) {
            throw new ai.k(s4.h.f("Unable to instantiate fragment ", str, ": make sure class is a valid subclass of Fragment"), e9);
        } catch (ClassNotFoundException e10) {
            throw new ai.k(s4.h.f("Unable to instantiate fragment ", str, ": make sure class name exists"), e10);
        }
    }
}
