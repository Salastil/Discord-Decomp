package androidx.lifecycle;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class x0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final LifecycleRegistry f2236d;

    /* renamed from: e, reason: collision with root package name */
    public final n f2237e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2238i;

    public x0(LifecycleRegistry registry, n event) {
        Intrinsics.checkNotNullParameter(registry, "registry");
        Intrinsics.checkNotNullParameter(event, "event");
        this.f2236d = registry;
        this.f2237e = event;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f2238i) {
            return;
        }
        this.f2236d.f(this.f2237e);
        this.f2238i = true;
    }
}
