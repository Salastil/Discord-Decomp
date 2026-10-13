package io.sentry.android.core;

import androidx.lifecycle.DefaultLifecycleObserver;
import androidx.lifecycle.LifecycleOwner;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class d0 implements DefaultLifecycleObserver {

    /* renamed from: d, reason: collision with root package name */
    public final c0 f11114d = new c0(this);

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e0 f11115e;

    public d0(e0 e0Var) {
        this.f11115e = e0Var;
    }

    @Override // androidx.lifecycle.DefaultLifecycleObserver
    public final void onStart(LifecycleOwner lifecycleOwner) {
        this.f11115e.f11123v = Boolean.FALSE;
        Iterator it = this.f11114d.iterator();
        while (it.hasNext()) {
            ((b0) it.next()).c();
        }
    }

    @Override // androidx.lifecycle.DefaultLifecycleObserver
    public final void onStop(LifecycleOwner lifecycleOwner) {
        this.f11115e.f11123v = Boolean.TRUE;
        Iterator it = this.f11114d.iterator();
        while (it.hasNext()) {
            ((b0) it.next()).f();
        }
    }
}
