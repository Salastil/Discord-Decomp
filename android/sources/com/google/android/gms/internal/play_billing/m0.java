package com.google.android.gms.internal.play_billing;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes3.dex */
public final class m0 extends a2 {

    /* renamed from: b, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f5764b = AtomicReferenceFieldUpdater.newUpdater(p0.class, Thread.class, "a");

    /* renamed from: c, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f5765c = AtomicReferenceFieldUpdater.newUpdater(p0.class, p0.class, "b");

    /* renamed from: d, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f5766d = AtomicReferenceFieldUpdater.newUpdater(q0.class, p0.class, "i");

    /* renamed from: e, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f5767e = AtomicReferenceFieldUpdater.newUpdater(q0.class, k0.class, "e");

    /* renamed from: f, reason: collision with root package name */
    public static final AtomicReferenceFieldUpdater f5768f = AtomicReferenceFieldUpdater.newUpdater(q0.class, Object.class, "d");

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean A(b1 b1Var, k0 k0Var, k0 k0Var2) {
        return a2.j(f5767e, b1Var, k0Var, k0Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean E(q0 q0Var, Object obj, Object obj2) {
        return a2.j(f5768f, q0Var, obj, obj2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean G(q0 q0Var, p0 p0Var, p0 p0Var2) {
        return a2.j(f5766d, q0Var, p0Var, p0Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final k0 e(b1 b1Var) {
        return (k0) f5767e.getAndSet(b1Var, k0.f5754d);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final p0 o(b1 b1Var) {
        return (p0) f5766d.getAndSet(b1Var, p0.f5800c);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void s(p0 p0Var, p0 p0Var2) {
        f5765c.lazySet(p0Var, p0Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void v(p0 p0Var, Thread thread) {
        f5764b.lazySet(p0Var, thread);
    }
}
