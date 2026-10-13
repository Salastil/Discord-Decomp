package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import androidx.savedstate.SavedStateRegistry;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class k {
    public static final void a(z0 viewModel, SavedStateRegistry registry, Lifecycle lifecycle) {
        AutoCloseable autoCloseable;
        Intrinsics.checkNotNullParameter(viewModel, "viewModel");
        Intrinsics.checkNotNullParameter(registry, "registry");
        Intrinsics.checkNotNullParameter(lifecycle, "lifecycle");
        viewModel.getClass();
        Intrinsics.checkNotNullParameter("androidx.lifecycle.savedstate.vm.tag", "key");
        u2.a aVar = viewModel.a;
        if (aVar != null) {
            Intrinsics.checkNotNullParameter("androidx.lifecycle.savedstate.vm.tag", "key");
            synchronized (aVar.a) {
                autoCloseable = (AutoCloseable) aVar.f18790b.get("androidx.lifecycle.savedstate.vm.tag");
            }
        } else {
            autoCloseable = null;
        }
        p0 p0Var = (p0) autoCloseable;
        if (p0Var == null || p0Var.f2217i) {
            return;
        }
        p0Var.f(lifecycle, registry);
        Lifecycle.State b10 = lifecycle.b();
        if (b10 == Lifecycle.State.f2138e || b10.a(Lifecycle.State.f2140v)) {
            registry.d();
        } else {
            lifecycle.a(new f(lifecycle, registry));
        }
    }
}
