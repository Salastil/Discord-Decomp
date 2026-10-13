package androidx.lifecycle;

import android.app.Application;
import java.lang.reflect.InvocationTargetException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a1 extends b1 {

    /* renamed from: c, reason: collision with root package name */
    public static a1 f2170c;

    /* renamed from: d, reason: collision with root package name */
    public static final l8.a f2171d = new l8.a(2);

    /* renamed from: b, reason: collision with root package name */
    public final Application f2172b;

    public a1(Application application) {
        this.f2172b = application;
    }

    @Override // androidx.lifecycle.b1, androidx.lifecycle.ViewModelProvider$Factory
    public final z0 a(Class modelClass) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Application application = this.f2172b;
        if (application != null) {
            return d(modelClass, application);
        }
        throw new UnsupportedOperationException("AndroidViewModelFactory constructed with empty constructor works only with create(modelClass: Class<T>, extras: CreationExtras).");
    }

    @Override // androidx.lifecycle.b1, androidx.lifecycle.ViewModelProvider$Factory
    public final z0 b(Class modelClass, t2.c extras) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(extras, "extras");
        if (this.f2172b != null) {
            return a(modelClass);
        }
        Application application = (Application) extras.a(f2171d);
        if (application != null) {
            return d(modelClass, application);
        }
        if (a.class.isAssignableFrom(modelClass)) {
            throw new IllegalArgumentException("CreationExtras must have an application by `APPLICATION_KEY`");
        }
        return super.a(modelClass);
    }

    public final z0 d(Class cls, Application application) {
        if (!a.class.isAssignableFrom(cls)) {
            return super.a(cls);
        }
        try {
            z0 z0Var = (z0) cls.getConstructor(Application.class).newInstance(application);
            Intrinsics.checkNotNull(z0Var);
            return z0Var;
        } catch (IllegalAccessException e9) {
            throw new RuntimeException(a3.e.i(cls, "Cannot create an instance of "), e9);
        } catch (InstantiationException e10) {
            throw new RuntimeException(a3.e.i(cls, "Cannot create an instance of "), e10);
        } catch (NoSuchMethodException e11) {
            throw new RuntimeException(a3.e.i(cls, "Cannot create an instance of "), e11);
        } catch (InvocationTargetException e12) {
            throw new RuntimeException(a3.e.i(cls, "Cannot create an instance of "), e12);
        }
    }
}
