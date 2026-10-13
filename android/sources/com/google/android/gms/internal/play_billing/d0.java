package com.google.android.gms.internal.play_billing;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class d0 extends v {
    public static final Object[] F;
    public static final d0 G;
    public final transient int E;

    /* renamed from: v, reason: collision with root package name */
    public final transient Object[] f5721v;

    /* renamed from: w, reason: collision with root package name */
    public final transient int f5722w;

    /* renamed from: x, reason: collision with root package name */
    public final transient Object[] f5723x;

    /* renamed from: y, reason: collision with root package name */
    public final transient int f5724y;

    static {
        Object[] objArr = new Object[0];
        F = objArr;
        G = new d0(0, 0, 0, objArr, objArr);
    }

    public d0(int i5, int i6, int i10, Object[] objArr, Object[] objArr2) {
        this.f5721v = objArr;
        this.f5722w = i5;
        this.f5723x = objArr2;
        this.f5724y = i6;
        this.E = i10;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int a(Object[] objArr) {
        Object[] objArr2 = this.f5721v;
        int i5 = this.E;
        System.arraycopy(objArr2, 0, objArr, 0, i5);
        return i5;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int b() {
        return this.E;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj != null) {
            Object[] objArr = this.f5723x;
            if (objArr.length != 0) {
                int a = a2.a(obj.hashCode());
                while (true) {
                    int i5 = a & this.f5724y;
                    Object obj2 = objArr[i5];
                    if (obj2 == null) {
                        return false;
                    }
                    if (obj2.equals(obj)) {
                        return true;
                    }
                    a = i5 + 1;
                }
            }
        }
        return false;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int d() {
        return 0;
    }

    @Override // com.google.android.gms.internal.play_billing.v, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f5722w;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final Object[] i() {
        return this.f5721v;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return e().listIterator(0);
    }

    @Override // com.google.android.gms.internal.play_billing.v
    public final t k() {
        return t.k(this.E, this.f5721v);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.E;
    }
}
