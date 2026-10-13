package com.google.android.gms.internal.play_billing;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes3.dex */
public final class m3 extends a2 {

    /* renamed from: b, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f5769b;

    /* renamed from: c, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f5770c;

    /* renamed from: d, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f5771d;

    /* renamed from: e, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f5772e;

    /* renamed from: f, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f5773f;

    public m3(AtomicReferenceFieldUpdater atomicReferenceFieldUpdater, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater3, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater4, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater5) {
        this.f5769b = atomicReferenceFieldUpdater;
        this.f5770c = atomicReferenceFieldUpdater2;
        this.f5771d = atomicReferenceFieldUpdater3;
        this.f5772e = atomicReferenceFieldUpdater4;
        this.f5773f = atomicReferenceFieldUpdater5;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean B(w4 w4Var, v4 v4Var, v4 v4Var2) {
        return a2.k(this.f5771d, w4Var, v4Var, v4Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void i(v4 v4Var, v4 v4Var2) {
        this.f5770c.lazySet(v4Var, v4Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void r(v4 v4Var, Thread thread) {
        this.f5769b.lazySet(v4Var, thread);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean t(w4 w4Var, l2 l2Var, l2 l2Var2) {
        return a2.k(this.f5772e, w4Var, l2Var, l2Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean w(w4 w4Var, Object obj, Object obj2) {
        return a2.k(this.f5773f, w4Var, obj, obj2);
    }
}
