package com.google.android.gms.internal.play_billing;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class e0 extends v {

    /* renamed from: v, reason: collision with root package name */
    public final transient Object f5732v;

    public e0(Object obj) {
        this.f5732v = obj;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int a(Object[] objArr) {
        objArr[0] = this.f5732v;
        return 1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f5732v.equals(obj);
    }

    @Override // com.google.android.gms.internal.play_billing.v, com.google.android.gms.internal.play_billing.p
    public final t e() {
        Object[] objArr = {this.f5732v};
        for (int i5 = 0; i5 < 1; i5++) {
            q qVar = t.f5834e;
            if (objArr[i5] == null) {
                throw new NullPointerException(k0.d.i(i5, "at index "));
            }
        }
        return t.k(1, objArr);
    }

    @Override // com.google.android.gms.internal.play_billing.v, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f5732v.hashCode();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return new w(this.f5732v);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return 1;
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        return s4.h.f("[", this.f5732v.toString(), "]");
    }
}
