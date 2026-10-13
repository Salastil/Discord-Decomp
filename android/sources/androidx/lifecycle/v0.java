package androidx.lifecycle;

import android.app.Application;
import android.os.Bundle;
import androidx.lifecycle.Lifecycle;
import androidx.savedstate.SavedStateRegistry;
import java.lang.reflect.Constructor;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;

/* loaded from: classes.dex */
public final class v0 implements ViewModelProvider$Factory {
    public final Application a;

    /* renamed from: b, reason: collision with root package name */
    public final a1 f2229b;

    /* renamed from: c, reason: collision with root package name */
    public final Bundle f2230c;

    /* renamed from: d, reason: collision with root package name */
    public final Lifecycle f2231d;

    /* renamed from: e, reason: collision with root package name */
    public final SavedStateRegistry f2232e;

    public v0(Application application, d3.e owner, Bundle bundle) {
        a1 a1Var;
        Intrinsics.checkNotNullParameter(owner, "owner");
        this.f2232e = owner.getSavedStateRegistry();
        this.f2231d = owner.getLifecycle();
        this.f2230c = bundle;
        this.a = application;
        if (application != null) {
            Intrinsics.checkNotNullParameter(application, "application");
            if (a1.f2170c == null) {
                Intrinsics.checkNotNullParameter(application, "application");
                a1.f2170c = new a1(application);
            }
            a1Var = a1.f2170c;
            Intrinsics.checkNotNull(a1Var);
        } else {
            a1Var = new a1(null);
        }
        this.f2229b = a1Var;
    }

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public final z0 a(Class modelClass) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        String canonicalName = modelClass.getCanonicalName();
        if (canonicalName != null) {
            return d(modelClass, canonicalName);
        }
        throw new IllegalArgumentException("Local and anonymous classes can not be ViewModels");
    }

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public final z0 b(Class modelClass, t2.c extras) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(extras, "extras");
        String str = (String) extras.a(c1.a);
        if (str == null) {
            throw new IllegalStateException("VIEW_MODEL_KEY must always be provided by ViewModelProvider");
        }
        if (extras.a(r0.a) == null || extras.a(r0.f2220b) == null) {
            if (this.f2231d != null) {
                return d(modelClass, str);
            }
            throw new IllegalStateException("SAVED_STATE_REGISTRY_OWNER_KEY andVIEW_MODEL_STORE_OWNER_KEY must be provided in the creation extras tosuccessfully create a ViewModel.");
        }
        Application application = (Application) extras.a(a1.f2171d);
        boolean isAssignableFrom = a.class.isAssignableFrom(modelClass);
        Constructor a = (!isAssignableFrom || application == null) ? w0.a(modelClass, w0.f2234b) : w0.a(modelClass, w0.a);
        return a == null ? this.f2229b.b(modelClass, extras) : (!isAssignableFrom || application == null) ? w0.b(modelClass, a, r0.a(extras)) : w0.b(modelClass, a, application, r0.a(extras));
    }

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public final z0 c(KClass modelClass, t2.c extras) {
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(extras, "extras");
        return b(com.facebook.imagepipeline.nativecode.c.z(modelClass), extras);
    }

    public final z0 d(Class modelClass, String key) {
        z0 b10;
        AutoCloseable autoCloseable;
        Application application;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Lifecycle lifecycle = this.f2231d;
        if (lifecycle == null) {
            throw new UnsupportedOperationException("SavedStateViewModelFactory constructed with empty constructor supports only calls to create(modelClass: Class<T>, extras: CreationExtras).");
        }
        boolean isAssignableFrom = a.class.isAssignableFrom(modelClass);
        Constructor a = (!isAssignableFrom || this.a == null) ? w0.a(modelClass, w0.f2234b) : w0.a(modelClass, w0.a);
        if (a == null) {
            if (this.a != null) {
                return this.f2229b.a(modelClass);
            }
            if (b1.a == null) {
                b1.a = new b1();
            }
            b1 b1Var = b1.a;
            Intrinsics.checkNotNull(b1Var);
            return b1Var.a(modelClass);
        }
        SavedStateRegistry registry = this.f2232e;
        Intrinsics.checkNotNull(registry);
        Bundle bundle = this.f2230c;
        Intrinsics.checkNotNullParameter(registry, "registry");
        Intrinsics.checkNotNullParameter(lifecycle, "lifecycle");
        Intrinsics.checkNotNull(key);
        o0 a10 = c1.a(registry.a(key), bundle);
        p0 closeable = new p0(key, a10);
        closeable.f(lifecycle, registry);
        Lifecycle.State b11 = lifecycle.b();
        if (b11 == Lifecycle.State.f2138e || b11.a(Lifecycle.State.f2140v)) {
            registry.d();
        } else {
            lifecycle.a(new f(lifecycle, registry));
        }
        if (!isAssignableFrom || (application = this.a) == null) {
            b10 = w0.b(modelClass, a, a10);
        } else {
            Intrinsics.checkNotNull(application);
            b10 = w0.b(modelClass, a, application, a10);
        }
        b10.getClass();
        Intrinsics.checkNotNullParameter("androidx.lifecycle.savedstate.vm.tag", "key");
        Intrinsics.checkNotNullParameter(closeable, "closeable");
        u2.a aVar = b10.a;
        if (aVar == null) {
            return b10;
        }
        Intrinsics.checkNotNullParameter("androidx.lifecycle.savedstate.vm.tag", "key");
        Intrinsics.checkNotNullParameter(closeable, "closeable");
        if (aVar.f18792d) {
            u2.a.a(closeable);
            return b10;
        }
        synchronized (aVar.a) {
            autoCloseable = (AutoCloseable) aVar.f18790b.put("androidx.lifecycle.savedstate.vm.tag", closeable);
        }
        u2.a.a(autoCloseable);
        return b10;
    }
}
