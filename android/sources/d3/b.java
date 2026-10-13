package d3;

import android.os.Bundle;
import androidx.activity.ComponentActivity;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.d1;
import androidx.lifecycle.j;
import androidx.lifecycle.k;
import androidx.lifecycle.n;
import androidx.lifecycle.t;
import androidx.lifecycle.t0;
import androidx.lifecycle.z0;
import androidx.savedstate.SavedStateRegistry;
import en.g;
import en.h;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class b implements t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7401d = 3;

    /* renamed from: e, reason: collision with root package name */
    public final Object f7402e;

    public b(Lifecycle screenLifecycle, h appearanceEventEmitter) {
        Intrinsics.checkNotNullParameter(screenLifecycle, "screenLifecycle");
        Intrinsics.checkNotNullParameter(appearanceEventEmitter, "appearanceEventEmitter");
        this.f7402e = appearanceEventEmitter;
        screenLifecycle.a(this);
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, n event) {
        switch (this.f7401d) {
            case 0:
                e owner = (e) this.f7402e;
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                if (event != n.ON_CREATE) {
                    throw new AssertionError("Next event must be ON_CREATE");
                }
                source.getLifecycle().c(this);
                Bundle source2 = owner.getSavedStateRegistry().a("androidx.savedstate.Restarter");
                if (source2 == null) {
                    return;
                }
                Intrinsics.checkNotNullParameter(source2, "source");
                Intrinsics.checkNotNullParameter("classes_to_restore", "key");
                ArrayList<String> stringArrayList = source2.getStringArrayList("classes_to_restore");
                if (stringArrayList == null) {
                    throw new IllegalStateException("SavedState with restored state for the component \"androidx.savedstate.Restarter\" must contain list of strings by the key \"classes_to_restore\"");
                }
                for (String str : stringArrayList) {
                    try {
                        Class<? extends U> asSubclass = Class.forName(str, false, b.class.getClassLoader()).asSubclass(c.class);
                        Intrinsics.checkNotNull(asSubclass);
                        try {
                            Constructor declaredConstructor = asSubclass.getDeclaredConstructor(null);
                            declaredConstructor.setAccessible(true);
                            try {
                                Object newInstance = declaredConstructor.newInstance(null);
                                Intrinsics.checkNotNull(newInstance);
                                ((j) ((c) newInstance)).getClass();
                                Intrinsics.checkNotNullParameter(owner, "owner");
                                if (!(owner instanceof d1)) {
                                    throw new IllegalStateException(("Internal error: OnRecreation should be registered only on components that implement ViewModelStoreOwner. Received owner: " + owner).toString());
                                }
                                ViewModelStore viewModelStore = ((d1) owner).getViewModelStore();
                                SavedStateRegistry savedStateRegistry = owner.getSavedStateRegistry();
                                viewModelStore.getClass();
                                LinkedHashMap linkedHashMap = viewModelStore.a;
                                Iterator it = new HashSet(linkedHashMap.keySet()).iterator();
                                while (it.hasNext()) {
                                    String key = (String) it.next();
                                    Intrinsics.checkNotNullParameter(key, "key");
                                    z0 z0Var = (z0) linkedHashMap.get(key);
                                    if (z0Var != null) {
                                        k.a(z0Var, savedStateRegistry, owner.getLifecycle());
                                    }
                                }
                                if (!new HashSet(linkedHashMap.keySet()).isEmpty()) {
                                    savedStateRegistry.d();
                                }
                            } catch (Exception e9) {
                                throw new RuntimeException(a3.e.k("Failed to instantiate ", str), e9);
                            }
                        } catch (NoSuchMethodException e10) {
                            throw new IllegalStateException("Class " + asSubclass.getSimpleName() + " must have default constructor in order to be automatically recreated", e10);
                        }
                    } catch (ClassNotFoundException e11) {
                        throw new RuntimeException(s4.h.f("Class ", str, " wasn't found"), e11);
                    }
                }
                return;
            case 1:
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                new HashMap();
                androidx.lifecycle.h[] hVarArr = (androidx.lifecycle.h[]) this.f7402e;
                if (hVarArr.length > 0) {
                    androidx.lifecycle.h hVar = hVarArr[0];
                    throw null;
                }
                if (hVarArr.length <= 0) {
                    return;
                }
                androidx.lifecycle.h hVar2 = hVarArr[0];
                throw null;
            case 2:
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                if (event != n.ON_CREATE) {
                    throw new IllegalStateException(("Next event must be ON_CREATE, it was " + event).toString());
                }
                source.getLifecycle().c(this);
                ((t0) this.f7402e).b();
                return;
            case 3:
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                ComponentActivity componentActivity = (ComponentActivity) this.f7402e;
                ComponentActivity.access$ensureViewModelStore(componentActivity);
                componentActivity.getLifecycle().c(this);
                return;
            default:
                tm.b bVar = (tm.b) this.f7402e;
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                switch (g.a[event.ordinal()]) {
                    case 1:
                        bVar.c();
                        return;
                    case 2:
                        bVar.b();
                        return;
                    case 3:
                        bVar.d();
                        return;
                    case 4:
                        bVar.a();
                        return;
                    case 5:
                        source.getLifecycle().c(this);
                        return;
                    case 6:
                    case 7:
                        return;
                    default:
                        throw new fo.n();
                }
        }
    }

    public b(androidx.lifecycle.h[] generatedAdapters) {
        Intrinsics.checkNotNullParameter(generatedAdapters, "generatedAdapters");
        this.f7402e = generatedAdapters;
    }

    public b(e owner) {
        Intrinsics.checkNotNullParameter(owner, "owner");
        this.f7402e = owner;
    }

    public b(t0 provider) {
        Intrinsics.checkNotNullParameter(provider, "provider");
        this.f7402e = provider;
    }

    public b(ComponentActivity componentActivity) {
        this.f7402e = componentActivity;
    }
}
