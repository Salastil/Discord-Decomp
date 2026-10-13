package androidx.savedstate;

import android.os.Bundle;
import androidx.lifecycle.j;
import d3.d;
import e3.a;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class SavedStateRegistry {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public d3.a f2495b;

    public SavedStateRegistry(a impl) {
        Intrinsics.checkNotNullParameter(impl, "impl");
        this.a = impl;
    }

    public final Bundle a(String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(key, "key");
        a aVar = this.a;
        if (!aVar.f7934g) {
            throw new IllegalStateException("You can 'consumeRestoredStateForKey' only after the corresponding component has moved to the 'CREATED' state");
        }
        Bundle source = aVar.f7933f;
        if (source == null) {
            return null;
        }
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(key, "key");
        Bundle r5 = source.containsKey(key) ? io.sentry.config.a.r(key, source) : null;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(key, "key");
        source.remove(key);
        Intrinsics.checkNotNullParameter(source, "source");
        if (source.isEmpty()) {
            aVar.f7933f = null;
        }
        return r5;
    }

    public final d b() {
        d dVar;
        Intrinsics.checkNotNullParameter("androidx.lifecycle.internal.SavedStateHandlesProvider", "key");
        a aVar = this.a;
        Intrinsics.checkNotNullParameter("androidx.lifecycle.internal.SavedStateHandlesProvider", "key");
        synchronized (aVar.f7930c) {
            Iterator it = aVar.f7931d.entrySet().iterator();
            do {
                dVar = null;
                if (!it.hasNext()) {
                    break;
                }
                Map.Entry entry = (Map.Entry) it.next();
                String str = (String) entry.getKey();
                d dVar2 = (d) entry.getValue();
                if (Intrinsics.areEqual(str, "androidx.lifecycle.internal.SavedStateHandlesProvider")) {
                    dVar = dVar2;
                }
            } while (dVar == null);
        }
        return dVar;
    }

    public final void c(String key, d provider) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(provider, "provider");
        a aVar = this.a;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(provider, "provider");
        synchronized (aVar.f7930c) {
            if (aVar.f7931d.containsKey(key)) {
                throw new IllegalArgumentException("SavedStateProvider with the given key is already registered");
            }
            aVar.f7931d.put(key, provider);
            Unit unit = Unit.a;
        }
    }

    public final void d() {
        Intrinsics.checkNotNullParameter(j.class, "clazz");
        if (!this.a.f7935h) {
            throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
        }
        d3.a aVar = this.f2495b;
        if (aVar == null) {
            aVar = new d3.a(this);
        }
        this.f2495b = aVar;
        try {
            j.class.getDeclaredConstructor(null);
            d3.a aVar2 = this.f2495b;
            if (aVar2 != null) {
                String className = j.class.getName();
                Intrinsics.checkNotNullExpressionValue(className, "getName(...)");
                Intrinsics.checkNotNullParameter(className, "className");
                ((LinkedHashSet) aVar2.f7400b).add(className);
            }
        } catch (NoSuchMethodException e9) {
            throw new IllegalArgumentException("Class " + j.class.getSimpleName() + " must have default constructor in order to be automatically recreated", e9);
        }
    }
}
