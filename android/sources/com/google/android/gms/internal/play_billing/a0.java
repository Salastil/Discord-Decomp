package com.google.android.gms.internal.play_billing;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class a0 extends v {

    /* renamed from: v, reason: collision with root package name */
    public final transient c0 f5685v;

    /* renamed from: w, reason: collision with root package name */
    public final transient b0 f5686w;

    public a0(c0 c0Var, b0 b0Var) {
        this.f5685v = c0Var;
        this.f5686w = b0Var;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int a(Object[] objArr) {
        return this.f5686w.a(objArr);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f5685v.get(obj) != null;
    }

    @Override // com.google.android.gms.internal.play_billing.v, com.google.android.gms.internal.play_billing.p
    public final t e() {
        return this.f5686w;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return this.f5686w.listIterator(0);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f5685v.f5715x;
    }
}
