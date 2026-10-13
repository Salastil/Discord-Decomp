package androidx.datastore.preferences.protobuf;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.RandomAccess;

/* loaded from: classes.dex */
public final class u0 extends b implements RandomAccess {

    /* renamed from: v, reason: collision with root package name */
    public static final u0 f1814v;

    /* renamed from: e, reason: collision with root package name */
    public Object[] f1815e;

    /* renamed from: i, reason: collision with root package name */
    public int f1816i;

    static {
        u0 u0Var = new u0(0, new Object[0]);
        f1814v = u0Var;
        u0Var.f1718d = false;
    }

    public u0(int i5, Object[] objArr) {
        this.f1815e = objArr;
        this.f1816i = i5;
    }

    @Override // androidx.datastore.preferences.protobuf.b, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        a();
        int i5 = this.f1816i;
        Object[] objArr = this.f1815e;
        if (i5 == objArr.length) {
            this.f1815e = Arrays.copyOf(objArr, ((i5 * 3) / 2) + 1);
        }
        Object[] objArr2 = this.f1815e;
        int i6 = this.f1816i;
        this.f1816i = i6 + 1;
        objArr2[i6] = obj;
        ((AbstractList) this).modCount++;
        return true;
    }

    public final void b(int i5) {
        if (i5 < 0 || i5 >= this.f1816i) {
            StringBuilder r5 = a3.e.r(i5, "Index:", ", Size:");
            r5.append(this.f1816i);
            throw new IndexOutOfBoundsException(r5.toString());
        }
    }

    @Override // androidx.datastore.preferences.protobuf.u
    public final u g(int i5) {
        if (i5 < this.f1816i) {
            throw new IllegalArgumentException();
        }
        return new u0(this.f1816i, Arrays.copyOf(this.f1815e, i5));
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        b(i5);
        return this.f1815e[i5];
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        a();
        b(i5);
        Object[] objArr = this.f1815e;
        Object obj = objArr[i5];
        if (i5 < this.f1816i - 1) {
            System.arraycopy(objArr, i5 + 1, objArr, i5, (r2 - i5) - 1);
        }
        this.f1816i--;
        ((AbstractList) this).modCount++;
        return obj;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        a();
        b(i5);
        Object[] objArr = this.f1815e;
        Object obj2 = objArr[i5];
        objArr[i5] = obj;
        ((AbstractList) this).modCount++;
        return obj2;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1816i;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        int i6;
        a();
        if (i5 >= 0 && i5 <= (i6 = this.f1816i)) {
            Object[] objArr = this.f1815e;
            if (i6 < objArr.length) {
                System.arraycopy(objArr, i5, objArr, i5 + 1, i6 - i5);
            } else {
                Object[] objArr2 = new Object[((i6 * 3) / 2) + 1];
                System.arraycopy(objArr, 0, objArr2, 0, i5);
                System.arraycopy(this.f1815e, i5, objArr2, i5 + 1, this.f1816i - i5);
                this.f1815e = objArr2;
            }
            this.f1815e[i5] = obj;
            this.f1816i++;
            ((AbstractList) this).modCount++;
            return;
        }
        StringBuilder r5 = a3.e.r(i5, "Index:", ", Size:");
        r5.append(this.f1816i);
        throw new IndexOutOfBoundsException(r5.toString());
    }
}
