package androidx.lifecycle;

import android.app.Application;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class w0 {
    public static final List a = kotlin.collections.c0.g(Application.class, o0.class);

    /* renamed from: b, reason: collision with root package name */
    public static final List f2234b = kotlin.collections.b0.c(o0.class);

    public static final Constructor a(Class modelClass, List signature) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(signature, "signature");
        Iterator it = ArrayIteratorKt.iterator(modelClass.getConstructors());
        while (it.hasNext()) {
            Constructor constructor = (Constructor) it.next();
            Class<?>[] parameterTypes = constructor.getParameterTypes();
            Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
            List H = kotlin.collections.x.H(parameterTypes);
            if (Intrinsics.areEqual(signature, H)) {
                Intrinsics.checkNotNull(constructor, "null cannot be cast to non-null type java.lang.reflect.Constructor<T of androidx.lifecycle.SavedStateViewModelFactory_androidKt.findMatchingConstructor>");
                return constructor;
            }
            if (signature.size() == H.size() && H.containsAll(signature)) {
                throw new UnsupportedOperationException("Class " + modelClass.getSimpleName() + " must have parameters in the proper order: " + signature);
            }
        }
        return null;
    }

    public static final z0 b(Class modelClass, Constructor constructor, Object... params) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(params, "params");
        try {
            return (z0) constructor.newInstance(Arrays.copyOf(params, params.length));
        } catch (IllegalAccessException e9) {
            throw new RuntimeException(a3.e.i(modelClass, "Failed to access "), e9);
        } catch (InstantiationException e10) {
            throw new RuntimeException("A " + modelClass + " cannot be instantiated.", e10);
        } catch (InvocationTargetException e11) {
            throw new RuntimeException(a3.e.i(modelClass, "An exception happened in constructor of "), e11.getCause());
        }
    }
}
