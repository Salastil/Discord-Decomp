package androidx.lifecycle;

import android.os.Bundle;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.viewmodel.CreationExtras;
import java.util.Arrays;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes.dex */
public abstract class r0 {
    public static final io.sentry.hints.j a = new io.sentry.hints.j(2);

    /* renamed from: b, reason: collision with root package name */
    public static final j8.b f2220b = new j8.b(2, (byte) 0);

    /* renamed from: c, reason: collision with root package name */
    public static final j8.c f2221c = new j8.c();

    public static final o0 a(t2.c cVar) {
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        d3.e eVar = (d3.e) cVar.a(a);
        if (eVar == null) {
            throw new IllegalArgumentException("CreationExtras must have a value by `SAVED_STATE_REGISTRY_OWNER_KEY`");
        }
        d1 d1Var = (d1) cVar.a(f2220b);
        if (d1Var == null) {
            throw new IllegalArgumentException("CreationExtras must have a value by `VIEW_MODEL_STORE_OWNER_KEY`");
        }
        Bundle bundle = (Bundle) cVar.a(f2221c);
        String key = (String) cVar.a(c1.a);
        if (key == null) {
            throw new IllegalArgumentException("CreationExtras must have a value by `VIEW_MODEL_KEY`");
        }
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        d3.d b10 = eVar.getSavedStateRegistry().b();
        Bundle bundle2 = null;
        t0 t0Var = b10 instanceof t0 ? (t0) b10 : null;
        if (t0Var == null) {
            throw new IllegalStateException("enableSavedStateHandles() wasn't called prior to createSavedStateHandle() call");
        }
        u0 c6 = c(d1Var);
        o0 o0Var = (o0) c6.f2227b.get(key);
        if (o0Var != null) {
            return o0Var;
        }
        Intrinsics.checkNotNullParameter(key, "key");
        t0Var.b();
        Bundle source = t0Var.f2225c;
        if (source != null) {
            Intrinsics.checkNotNullParameter(source, "source");
            Intrinsics.checkNotNullParameter(key, "key");
            if (source.containsKey(key)) {
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(key, "key");
                Bundle source2 = source.getBundle(key);
                if (source2 == null) {
                    kotlin.collections.v0.d().getClass();
                    source2 = com.facebook.imagepipeline.nativecode.b.c((Pair[]) Arrays.copyOf(new Pair[0], 0));
                    Intrinsics.checkNotNullParameter(source2, "source");
                }
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(key, "key");
                source.remove(key);
                Intrinsics.checkNotNullParameter(source, "source");
                if (source.isEmpty()) {
                    t0Var.f2225c = null;
                }
                bundle2 = source2;
            }
        }
        o0 a10 = c1.a(bundle2, bundle);
        c6.f2227b.put(key, a10);
        return a10;
    }

    public static final void b(d3.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        Lifecycle.State b10 = eVar.getLifecycle().b();
        if (b10 != Lifecycle.State.f2138e && b10 != Lifecycle.State.f2139i) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (eVar.getSavedStateRegistry().b() == null) {
            t0 t0Var = new t0(eVar.getSavedStateRegistry(), (d1) eVar);
            eVar.getSavedStateRegistry().c("androidx.lifecycle.internal.SavedStateHandlesProvider", t0Var);
            eVar.getLifecycle().a(new d3.b(t0Var));
        }
    }

    public static final u0 c(d1 owner) {
        Intrinsics.checkNotNullParameter(owner, "<this>");
        q0 factory = new q0();
        Intrinsics.checkNotNullParameter(owner, "owner");
        CreationExtras defaultCreationExtras = owner instanceof i ? ((i) owner).getDefaultViewModelCreationExtras() : t2.a.f18168b;
        Intrinsics.checkNotNullParameter(owner, "owner");
        Intrinsics.checkNotNullParameter(factory, "factory");
        Intrinsics.checkNotNullParameter(defaultCreationExtras, "extras");
        ViewModelStore store = owner.getViewModelStore();
        Intrinsics.checkNotNullParameter(store, "store");
        Intrinsics.checkNotNullParameter(factory, "factory");
        Intrinsics.checkNotNullParameter(defaultCreationExtras, "defaultCreationExtras");
        com.google.firebase.messaging.r rVar = new com.google.firebase.messaging.r(store, factory, defaultCreationExtras);
        KClass modelClass = Reflection.getOrCreateKotlinClass(u0.class);
        Intrinsics.checkNotNullParameter("androidx.lifecycle.internal.SavedStateHandlesVM", "key");
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        return (u0) rVar.g("androidx.lifecycle.internal.SavedStateHandlesVM", modelClass);
    }
}
