package com.google.android.gms.internal.play_billing;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.List;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class w2 extends q1 implements RandomAccess {

    /* renamed from: v, reason: collision with root package name */
    public static final Object[] f5869v;

    /* renamed from: w, reason: collision with root package name */
    public static final w2 f5870w;

    /* renamed from: e, reason: collision with root package name */
    public Object[] f5871e;

    /* renamed from: i, reason: collision with root package name */
    public int f5872i;

    static {
        Object[] objArr = new Object[0];
        f5869v = objArr;
        f5870w = new w2(objArr, 0, false);
    }

    public w2(Object[] objArr, int i5, boolean z5) {
        super(z5);
        this.f5871e = objArr;
        this.f5872i = i5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        int i6;
        a();
        if (i5 < 0 || i5 > (i6 = this.f5872i)) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, this.f5872i, "Index:", ", Size:"));
        }
        int i10 = i5 + 1;
        Object[] objArr = this.f5871e;
        int length = objArr.length;
        if (i6 < length) {
            System.arraycopy(objArr, i5, objArr, i10, i6 - i5);
        } else {
            Object[] objArr2 = new Object[Math.max(((length * 3) / 2) + 1, 10)];
            System.arraycopy(this.f5871e, 0, objArr2, 0, i5);
            System.arraycopy(this.f5871e, i5, objArr2, i10, this.f5872i - i5);
            this.f5871e = objArr2;
        }
        this.f5871e[i5] = obj;
        this.f5872i++;
        ((AbstractList) this).modCount++;
    }

    public final void b(int i5) {
        if (i5 < 0 || i5 >= this.f5872i) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, this.f5872i, "Index:", ", Size:"));
        }
    }

    @Override // com.google.android.gms.internal.play_billing.q1, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof List)) {
            return false;
        }
        if (!(obj instanceof RandomAccess)) {
            return super.equals(obj);
        }
        List list = (List) obj;
        int i5 = this.f5872i;
        if (i5 != list.size()) {
            return false;
        }
        if (!(obj instanceof w2)) {
            for (int i6 = 0; i6 < i5; i6++) {
                if (!this.f5871e[i6].equals(list.get(i6))) {
                    return false;
                }
            }
            return true;
        }
        w2 w2Var = (w2) obj;
        for (int i10 = 0; i10 < i5; i10++) {
            if (!this.f5871e[i10].equals(w2Var.f5871e[i10])) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        b(i5);
        return this.f5871e[i5];
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int i5 = this.f5872i;
        int i6 = 1;
        for (int i10 = 0; i10 < i5; i10++) {
            i6 = (i6 * 31) + this.f5871e[i10].hashCode();
        }
        return i6;
    }

    @Override // com.google.android.gms.internal.play_billing.i2
    public final /* bridge */ /* synthetic */ i2 l(int i5) {
        if (i5 >= this.f5872i) {
            return new w2(i5 == 0 ? f5869v : Arrays.copyOf(this.f5871e, i5), this.f5872i, true);
        }
        throw new IllegalArgumentException();
    }

    @Override // com.google.android.gms.internal.play_billing.q1, java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        a();
        b(i5);
        Object[] objArr = this.f5871e;
        Object obj = objArr[i5];
        if (i5 < this.f5872i - 1) {
            System.arraycopy(objArr, i5 + 1, objArr, i5, (r2 - i5) - 1);
        }
        this.f5872i--;
        ((AbstractList) this).modCount++;
        return obj;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        a();
        b(i5);
        Object[] objArr = this.f5871e;
        Object obj2 = objArr[i5];
        objArr[i5] = obj;
        ((AbstractList) this).modCount++;
        return obj2;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f5872i;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        a();
        int i5 = this.f5872i;
        int length = this.f5871e.length;
        if (i5 == length) {
            this.f5871e = Arrays.copyOf(this.f5871e, Math.max(((length * 3) / 2) + 1, 10));
        }
        Object[] objArr = this.f5871e;
        int i6 = this.f5872i;
        this.f5872i = i6 + 1;
        objArr[i6] = obj;
        ((AbstractList) this).modCount++;
        return true;
    }
}
