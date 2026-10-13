package androidx.savedstate;

import android.os.Bundle;
import androidx.lifecycle.Lifecycle;
import com.facebook.imagepipeline.nativecode.b;
import d3.d;
import d3.e;
import e3.a;
import java.util.Arrays;
import java.util.Map;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class SavedStateRegistryController {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final SavedStateRegistry f2496b;

    public SavedStateRegistryController(a aVar) {
        this.a = aVar;
        this.f2496b = new SavedStateRegistry(aVar);
    }

    public final void a(Bundle source) {
        a aVar = this.a;
        e eVar = aVar.a;
        if (!aVar.f7932e) {
            aVar.a();
        }
        if (eVar.getLifecycle().b().a(Lifecycle.State.f2140v)) {
            throw new IllegalStateException(("performRestore cannot be called when owner is " + eVar.getLifecycle().b()).toString());
        }
        if (aVar.f7934g) {
            throw new IllegalStateException("SavedStateRegistry was already restored.");
        }
        Bundle bundle = null;
        if (source != null) {
            Intrinsics.checkNotNullParameter(source, "source");
            Intrinsics.checkNotNullParameter("androidx.lifecycle.BundlableSavedStateRegistry.key", "key");
            if (source.containsKey("androidx.lifecycle.BundlableSavedStateRegistry.key")) {
                bundle = io.sentry.config.a.r("androidx.lifecycle.BundlableSavedStateRegistry.key", source);
            }
        }
        aVar.f7933f = bundle;
        aVar.f7934g = true;
    }

    public final void b(Bundle source) {
        Intrinsics.checkNotNullParameter(source, "outBundle");
        a aVar = this.a;
        Intrinsics.checkNotNullParameter(source, "outBundle");
        v0.d().getClass();
        Bundle value = b.c((Pair[]) Arrays.copyOf(new Pair[0], 0));
        Intrinsics.checkNotNullParameter(value, "source");
        Bundle from = aVar.f7933f;
        if (from != null) {
            Intrinsics.checkNotNullParameter(from, "from");
            value.putAll(from);
        }
        synchronized (aVar.f7930c) {
            try {
                for (Map.Entry entry : aVar.f7931d.entrySet()) {
                    String key = (String) entry.getKey();
                    Bundle value2 = ((d) entry.getValue()).a();
                    Intrinsics.checkNotNullParameter(key, "key");
                    Intrinsics.checkNotNullParameter(value2, "value");
                    value.putBundle(key, value2);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        Intrinsics.checkNotNullParameter(value, "source");
        if (value.isEmpty()) {
            return;
        }
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter("androidx.lifecycle.BundlableSavedStateRegistry.key", "key");
        Intrinsics.checkNotNullParameter(value, "value");
        source.putBundle("androidx.lifecycle.BundlableSavedStateRegistry.key", value);
    }
}
