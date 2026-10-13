package com.google.android.gms.internal.play_billing;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class f2 extends q1 implements RandomAccess, h2 {

    /* renamed from: v, reason: collision with root package name */
    public static final int[] f5733v;

    /* renamed from: w, reason: collision with root package name */
    public static final f2 f5734w;

    /* renamed from: e, reason: collision with root package name */
    public int[] f5735e;

    /* renamed from: i, reason: collision with root package name */
    public int f5736i;

    static {
        int[] iArr = new int[0];
        f5733v = iArr;
        f5734w = new f2(iArr, 0, false);
    }

    public f2(int[] iArr, int i5, boolean z5) {
        super(z5);
        this.f5735e = iArr;
        this.f5736i = i5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        int i6;
        int intValue = ((Integer) obj).intValue();
        a();
        if (i5 < 0 || i5 > (i6 = this.f5736i)) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, this.f5736i, "Index:", ", Size:"));
        }
        int i10 = i5 + 1;
        int[] iArr = this.f5735e;
        int length = iArr.length;
        if (i6 < length) {
            System.arraycopy(iArr, i5, iArr, i10, i6 - i5);
        } else {
            int[] iArr2 = new int[Math.max(((length * 3) / 2) + 1, 10)];
            System.arraycopy(this.f5735e, 0, iArr2, 0, i5);
            System.arraycopy(this.f5735e, i5, iArr2, i10, this.f5736i - i5);
            this.f5735e = iArr2;
        }
        this.f5735e[i5] = intValue;
        this.f5736i++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.play_billing.q1, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection collection) {
        a();
        collection.getClass();
        if (!(collection instanceof f2)) {
            return super.addAll(collection);
        }
        f2 f2Var = (f2) collection;
        int i5 = f2Var.f5736i;
        if (i5 == 0) {
            return false;
        }
        int i6 = this.f5736i;
        if (Integer.MAX_VALUE - i6 < i5) {
            throw new OutOfMemoryError();
        }
        int i10 = i6 + i5;
        int[] iArr = this.f5735e;
        if (i10 > iArr.length) {
            this.f5735e = Arrays.copyOf(iArr, i10);
        }
        System.arraycopy(f2Var.f5735e, 0, this.f5735e, this.f5736i, f2Var.f5736i);
        this.f5736i = i10;
        ((AbstractList) this).modCount++;
        return true;
    }

    public final int b(int i5) {
        h(i5);
        return this.f5735e[i5];
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        return indexOf(obj) != -1;
    }

    @Override // com.google.android.gms.internal.play_billing.i2
    /* renamed from: d, reason: merged with bridge method [inline-methods] */
    public final f2 l(int i5) {
        if (i5 >= this.f5736i) {
            return new f2(i5 == 0 ? f5733v : Arrays.copyOf(this.f5735e, i5), this.f5736i, true);
        }
        throw new IllegalArgumentException();
    }

    public final void e(int i5) {
        a();
        int i6 = this.f5736i;
        int length = this.f5735e.length;
        if (i6 == length) {
            int[] iArr = new int[Math.max(((length * 3) / 2) + 1, 10)];
            System.arraycopy(this.f5735e, 0, iArr, 0, this.f5736i);
            this.f5735e = iArr;
        }
        int[] iArr2 = this.f5735e;
        int i10 = this.f5736i;
        this.f5736i = i10 + 1;
        iArr2[i10] = i5;
    }

    @Override // com.google.android.gms.internal.play_billing.q1, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof f2)) {
            return super.equals(obj);
        }
        f2 f2Var = (f2) obj;
        if (this.f5736i != f2Var.f5736i) {
            return false;
        }
        int[] iArr = f2Var.f5735e;
        for (int i5 = 0; i5 < this.f5736i; i5++) {
            if (this.f5735e[i5] != iArr[i5]) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i5) {
        h(i5);
        return Integer.valueOf(this.f5735e[i5]);
    }

    public final void h(int i5) {
        if (i5 < 0 || i5 >= this.f5736i) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, this.f5736i, "Index:", ", Size:"));
        }
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int i5 = 1;
        for (int i6 = 0; i6 < this.f5736i; i6++) {
            i5 = (i5 * 31) + this.f5735e[i6];
        }
        return i5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int indexOf(Object obj) {
        if (!(obj instanceof Integer)) {
            return -1;
        }
        int intValue = ((Integer) obj).intValue();
        int i5 = this.f5736i;
        for (int i6 = 0; i6 < i5; i6++) {
            if (this.f5735e[i6] == intValue) {
                return i6;
            }
        }
        return -1;
    }

    @Override // com.google.android.gms.internal.play_billing.q1, java.util.AbstractList, java.util.List
    public final /* bridge */ /* synthetic */ Object remove(int i5) {
        a();
        h(i5);
        int[] iArr = this.f5735e;
        int i6 = iArr[i5];
        if (i5 < this.f5736i - 1) {
            System.arraycopy(iArr, i5 + 1, iArr, i5, (r2 - i5) - 1);
        }
        this.f5736i--;
        ((AbstractList) this).modCount++;
        return Integer.valueOf(i6);
    }

    @Override // java.util.AbstractList
    public final void removeRange(int i5, int i6) {
        a();
        if (i6 < i5) {
            throw new IndexOutOfBoundsException("toIndex < fromIndex");
        }
        int[] iArr = this.f5735e;
        System.arraycopy(iArr, i6, iArr, i5, this.f5736i - i6);
        this.f5736i -= i6 - i5;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* bridge */ /* synthetic */ Object set(int i5, Object obj) {
        int intValue = ((Integer) obj).intValue();
        a();
        h(i5);
        int[] iArr = this.f5735e;
        int i6 = iArr[i5];
        iArr[i5] = intValue;
        return Integer.valueOf(i6);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f5736i;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* bridge */ /* synthetic */ boolean add(Object obj) {
        e(((Integer) obj).intValue());
        return true;
    }
}
