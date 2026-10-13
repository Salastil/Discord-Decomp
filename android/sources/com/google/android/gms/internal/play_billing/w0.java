package com.google.android.gms.internal.play_billing;

import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;
import java.util.logging.Level;

/* loaded from: classes3.dex */
public final class w0 implements y0 {

    /* renamed from: e, reason: collision with root package name */
    public static final x0 f5863e = new x0(w0.class);

    /* renamed from: d, reason: collision with root package name */
    public final Object f5864d;

    public w0(Object obj) {
        this.f5864d = obj;
    }

    @Override // com.google.android.gms.internal.play_billing.y0
    public final void b(Runnable runnable, Executor executor) {
        if (executor == null) {
            throw new NullPointerException("Executor was null.");
        }
        try {
            executor.execute(runnable);
        } catch (Exception e9) {
            f5863e.a().logp(Level.SEVERE, "com.google.common.util.concurrent.ImmediateFuture", "addListener", a3.e.l("RuntimeException while executing runnable ", runnable.toString(), " with executor ", String.valueOf(executor)), (Throwable) e9);
        }
    }

    @Override // java.util.concurrent.Future
    public final boolean cancel(boolean z5) {
        return false;
    }

    @Override // java.util.concurrent.Future
    public final Object get() {
        return this.f5864d;
    }

    @Override // java.util.concurrent.Future
    public final boolean isCancelled() {
        return false;
    }

    @Override // java.util.concurrent.Future
    public final boolean isDone() {
        return true;
    }

    public final String toString() {
        return super.toString() + "[status=SUCCESS, result=[" + this.f5864d.toString() + "]]";
    }

    @Override // java.util.concurrent.Future
    public final Object get(long j, TimeUnit timeUnit) {
        timeUnit.getClass();
        return this.f5864d;
    }
}
