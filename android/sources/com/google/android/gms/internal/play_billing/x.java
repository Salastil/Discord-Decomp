package com.google.android.gms.internal.play_billing;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class x extends t {

    /* renamed from: w, reason: collision with root package name */
    public static final x f5880w = new x(0, new Object[0]);

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f5881i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f5882v;

    public x(int i5, Object[] objArr) {
        this.f5881i = objArr;
        this.f5882v = i5;
    }

    @Override // com.google.android.gms.internal.play_billing.t, com.google.android.gms.internal.play_billing.p
    public final int a(Object[] objArr) {
        Object[] objArr2 = this.f5881i;
        int i5 = this.f5882v;
        System.arraycopy(objArr2, 0, objArr, 0, i5);
        return i5;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int b() {
        return this.f5882v;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int d() {
        return 0;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        a2.h(i5, this.f5882v);
        Object obj = this.f5881i[i5];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final boolean h() {
        return false;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final Object[] i() {
        return this.f5881i;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f5882v;
    }
}
