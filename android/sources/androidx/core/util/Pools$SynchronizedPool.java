package androidx.core.util;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class Pools$SynchronizedPool extends Pools$SimplePool {

    /* renamed from: c, reason: collision with root package name */
    public final Object f1532c;

    public Pools$SynchronizedPool(int i5) {
        super(i5);
        this.f1532c = new Object();
    }

    @Override // androidx.core.util.Pools$SimplePool, k1.b
    public final Object acquire() {
        Object acquire;
        synchronized (this.f1532c) {
            acquire = super.acquire();
        }
        return acquire;
    }

    @Override // androidx.core.util.Pools$SimplePool, k1.b
    public final boolean release(Object instance) {
        boolean release;
        Intrinsics.checkNotNullParameter(instance, "instance");
        synchronized (this.f1532c) {
            release = super.release(instance);
        }
        return release;
    }
}
