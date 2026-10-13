package com.google.android.gms.internal.play_billing;

import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class z extends v {

    /* renamed from: v, reason: collision with root package name */
    public final transient c0 f5892v;

    /* renamed from: w, reason: collision with root package name */
    public final transient Object[] f5893w;

    /* renamed from: x, reason: collision with root package name */
    public final transient int f5894x;

    public z(c0 c0Var, Object[] objArr, int i5) {
        this.f5892v = c0Var;
        this.f5893w = objArr;
        this.f5894x = i5;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int a(Object[] objArr) {
        return e().a(objArr);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj instanceof Map.Entry) {
            Map.Entry entry = (Map.Entry) obj;
            Object key = entry.getKey();
            Object value = entry.getValue();
            if (value != null && value.equals(this.f5892v.get(key))) {
                return true;
            }
        }
        return false;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return e().listIterator(0);
    }

    @Override // com.google.android.gms.internal.play_billing.v
    public final t k() {
        return new y(this);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f5894x;
    }
}
