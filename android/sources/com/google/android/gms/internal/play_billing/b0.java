package com.google.android.gms.internal.play_billing;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class b0 extends t {

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f5701i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f5702v;

    /* renamed from: w, reason: collision with root package name */
    public final transient int f5703w;

    public b0(Object[] objArr, int i5, int i6) {
        this.f5701i = objArr;
        this.f5702v = i5;
        this.f5703w = i6;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        a2.h(i5, this.f5703w);
        Object obj = this.f5701i[i5 + i5 + this.f5702v];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final boolean h() {
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f5703w;
    }
}
