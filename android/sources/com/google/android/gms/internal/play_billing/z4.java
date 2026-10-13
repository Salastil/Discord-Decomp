package com.google.android.gms.internal.play_billing;

import java.lang.ref.WeakReference;
import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class z4 implements y0 {

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f5896d;

    /* renamed from: e, reason: collision with root package name */
    public final y4 f5897e = new y4(this);

    public z4(x4 x4Var) {
        this.f5896d = new WeakReference(x4Var);
    }

    @Override // com.google.android.gms.internal.play_billing.y0
    public final void b(Runnable runnable, Executor executor) {
        this.f5897e.b(runnable, executor);
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        x4 x4Var = (x4) this.f5896d.get();
        boolean cancel = this.f5897e.cancel(z5);
        if (!cancel || x4Var == null) {
            return cancel;
        }
        x4Var.a = null;
        x4Var.f5888b = null;
        x4Var.f5889c.i(null);
        return true;
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        return this.f5897e.get();
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return this.f5897e.f5877d instanceof d1;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return this.f5897e.isDone();
    }

    public final String toString() {
        return this.f5897e.toString();
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        return this.f5897e.get(j, timeUnit);
    }
}
