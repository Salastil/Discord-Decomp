package androidx.lifecycle;

import androidx.savedstate.SavedStateRegistry;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class p0 implements t, AutoCloseable {

    /* renamed from: d, reason: collision with root package name */
    public final String f2215d;

    /* renamed from: e, reason: collision with root package name */
    public final o0 f2216e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2217i;

    public p0(String key, o0 handle) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(handle, "handle");
        this.f2215d = key;
        this.f2216e = handle;
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, n event) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(event, "event");
        if (event == n.ON_DESTROY) {
            this.f2217i = false;
            source.getLifecycle().c(this);
        }
    }

    @Override // java.lang.AutoCloseable
    public final void close() {
    }

    public final void f(Lifecycle lifecycle, SavedStateRegistry registry) {
        Intrinsics.checkNotNullParameter(registry, "registry");
        Intrinsics.checkNotNullParameter(lifecycle, "lifecycle");
        if (this.f2217i) {
            throw new IllegalStateException("Already attached to lifecycleOwner");
        }
        this.f2217i = true;
        lifecycle.a(this);
        registry.c(this.f2215d, (e.c) this.f2216e.a.f16327w);
    }
}
