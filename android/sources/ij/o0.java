package ij;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class o0 extends c implements RandomAccess {

    /* renamed from: v, reason: collision with root package name */
    public static final o0 f10910v = new o0(new Object[0], 0, false);

    /* renamed from: e, reason: collision with root package name */
    public Object[] f10911e;

    /* renamed from: i, reason: collision with root package name */
    public int f10912i;

    public o0(Object[] objArr, int i5, boolean z5) {
        super(z5);
        this.f10911e = objArr;
        this.f10912i = i5;
    }

    @Override // ij.c, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        a();
        int i5 = this.f10912i;
        Object[] objArr = this.f10911e;
        if (i5 == objArr.length) {
            this.f10911e = Arrays.copyOf(objArr, ((i5 * 3) / 2) + 1);
        }
        Object[] objArr2 = this.f10911e;
        int i6 = this.f10912i;
        this.f10912i = i6 + 1;
        objArr2[i6] = obj;
        ((AbstractList) this).modCount++;
        return true;
    }

    public final void b(int i5) {
        if (i5 < 0 || i5 >= this.f10912i) {
            StringBuilder r5 = a3.e.r(i5, "Index:", ", Size:");
            r5.append(this.f10912i);
            throw new IndexOutOfBoundsException(r5.toString());
        }
    }

    @Override // ij.s
    public final s g(int i5) {
        if (i5 >= this.f10912i) {
            return new o0(Arrays.copyOf(this.f10911e, i5), this.f10912i, true);
        }
        throw new IllegalArgumentException();
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        b(i5);
        return this.f10911e[i5];
    }

    @Override // ij.c, java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        a();
        b(i5);
        Object[] objArr = this.f10911e;
        Object obj = objArr[i5];
        if (i5 < this.f10912i - 1) {
            System.arraycopy(objArr, i5 + 1, objArr, i5, (r2 - i5) - 1);
        }
        this.f10912i--;
        ((AbstractList) this).modCount++;
        return obj;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        a();
        b(i5);
        Object[] objArr = this.f10911e;
        Object obj2 = objArr[i5];
        objArr[i5] = obj;
        ((AbstractList) this).modCount++;
        return obj2;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f10912i;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        int i6;
        a();
        if (i5 >= 0 && i5 <= (i6 = this.f10912i)) {
            Object[] objArr = this.f10911e;
            if (i6 < objArr.length) {
                System.arraycopy(objArr, i5, objArr, i5 + 1, i6 - i5);
            } else {
                Object[] objArr2 = new Object[((i6 * 3) / 2) + 1];
                System.arraycopy(objArr, 0, objArr2, 0, i5);
                System.arraycopy(this.f10911e, i5, objArr2, i5 + 1, this.f10912i - i5);
                this.f10911e = objArr2;
            }
            this.f10911e[i5] = obj;
            this.f10912i++;
            ((AbstractList) this).modCount++;
            return;
        }
        StringBuilder r5 = a3.e.r(i5, "Index:", ", Size:");
        r5.append(this.f10912i);
        throw new IndexOutOfBoundsException(r5.toString());
    }
}
