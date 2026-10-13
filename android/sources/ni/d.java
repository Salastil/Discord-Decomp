package ni;

import android.util.Log;
import com.google.firebase.components.ComponentRegistrar;
import java.lang.reflect.InvocationTargetException;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements yi.a {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f15486b;

    public /* synthetic */ d(int i5, Object obj) {
        this.a = i5;
        this.f15486b = obj;
    }

    @Override // yi.a
    public final Object get() {
        switch (this.a) {
            case 0:
                String str = (String) this.f15486b;
                try {
                    Class<?> cls = Class.forName(str);
                    if (ComponentRegistrar.class.isAssignableFrom(cls)) {
                        return (ComponentRegistrar) cls.getDeclaredConstructor(null).newInstance(null);
                    }
                    throw new l("Class " + str + " is not an instance of com.google.firebase.components.ComponentRegistrar");
                } catch (ClassNotFoundException unused) {
                    Log.w("ComponentDiscovery", "Class " + str + " is not an found.");
                    return null;
                } catch (IllegalAccessException e9) {
                    throw new l(s4.h.f("Could not instantiate ", str, "."), e9);
                } catch (InstantiationException e10) {
                    throw new l(s4.h.f("Could not instantiate ", str, "."), e10);
                } catch (NoSuchMethodException e11) {
                    throw new l(a3.e.k("Could not instantiate ", str), e11);
                } catch (InvocationTargetException e12) {
                    throw new l(a3.e.k("Could not instantiate ", str), e12);
                }
            case 1:
                return (ComponentRegistrar) this.f15486b;
            default:
                return new aj.c((ki.g) this.f15486b);
        }
    }
}
