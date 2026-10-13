package androidx.lifecycle;

import java.lang.reflect.Constructor;
import java.lang.reflect.Modifier;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;

/* loaded from: classes.dex */
public class b1 implements ViewModelProvider$Factory {
    public static b1 a;

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public z0 a(Class modelClass) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        try {
            Constructor declaredConstructor = modelClass.getDeclaredConstructor(null);
            if (!Modifier.isPublic(declaredConstructor.getModifiers())) {
                throw new RuntimeException(a3.e.i(modelClass, "Cannot create an instance of "));
            }
            try {
                Object newInstance = declaredConstructor.newInstance(null);
                Intrinsics.checkNotNull(newInstance);
                return (z0) newInstance;
            } catch (IllegalAccessException e9) {
                throw new RuntimeException(a3.e.i(modelClass, "Cannot create an instance of "), e9);
            } catch (InstantiationException e10) {
                throw new RuntimeException(a3.e.i(modelClass, "Cannot create an instance of "), e10);
            }
        } catch (NoSuchMethodException e11) {
            throw new RuntimeException(a3.e.i(modelClass, "Cannot create an instance of "), e11);
        }
    }

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public z0 b(Class modelClass, t2.c extras) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(extras, "extras");
        return a(modelClass);
    }

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public final z0 c(KClass modelClass, t2.c extras) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(extras, "extras");
        return b(com.facebook.imagepipeline.nativecode.c.z(modelClass), extras);
    }
}
