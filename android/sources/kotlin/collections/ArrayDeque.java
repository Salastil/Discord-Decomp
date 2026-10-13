package kotlin.collections;

import java.lang.reflect.Array;
import java.util.AbstractList;
import java.util.Collection;
import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class ArrayDeque extends l {

    /* renamed from: v, reason: collision with root package name */
    @NotNull
    public static final q f13478v = new q(null);

    /* renamed from: w, reason: collision with root package name */
    public static final Object[] f13479w = new Object[0];

    /* renamed from: d, reason: collision with root package name */
    public int f13480d;

    /* renamed from: e, reason: collision with root package name */
    public Object[] f13481e = f13479w;

    /* renamed from: i, reason: collision with root package name */
    public int f13482i;

    @Override // kotlin.collections.l
    public final int a() {
        return this.f13482i;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        addLast(obj);
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        if (elements.isEmpty()) {
            return false;
        }
        m();
        e(elements.size() + a());
        d(k(a() + this.f13480d), elements);
        return true;
    }

    public final void addFirst(Object obj) {
        m();
        e(this.f13482i + 1);
        int i5 = this.f13480d;
        if (i5 == 0) {
            Object[] objArr = this.f13481e;
            Intrinsics.checkNotNullParameter(objArr, "<this>");
            i5 = objArr.length;
        }
        int i6 = i5 - 1;
        this.f13480d = i6;
        this.f13481e[i6] = obj;
        this.f13482i++;
    }

    public final void addLast(Object obj) {
        m();
        e(a() + 1);
        this.f13481e[k(a() + this.f13480d)] = obj;
        this.f13482i = a() + 1;
    }

    @Override // kotlin.collections.l
    public final Object b(int i5) {
        c cVar = f.f13497d;
        int i6 = this.f13482i;
        cVar.getClass();
        c.b(i5, i6);
        if (i5 == c0.f(this)) {
            return removeLast();
        }
        if (i5 == 0) {
            return removeFirst();
        }
        m();
        int k = k(this.f13480d + i5);
        Object[] objArr = this.f13481e;
        Object obj = objArr[k];
        if (i5 < (this.f13482i >> 1)) {
            int i10 = this.f13480d;
            if (k >= i10) {
                u.d(i10 + 1, i10, k, objArr, objArr);
            } else {
                u.d(1, 0, k, objArr, objArr);
                Object[] objArr2 = this.f13481e;
                objArr2[0] = objArr2[objArr2.length - 1];
                int i11 = this.f13480d;
                u.d(i11 + 1, i11, objArr2.length - 1, objArr2, objArr2);
            }
            Object[] objArr3 = this.f13481e;
            int i12 = this.f13480d;
            objArr3[i12] = null;
            this.f13480d = h(i12);
        } else {
            int k5 = k(c0.f(this) + this.f13480d);
            if (k <= k5) {
                Object[] objArr4 = this.f13481e;
                u.d(k, k + 1, k5 + 1, objArr4, objArr4);
            } else {
                Object[] objArr5 = this.f13481e;
                u.d(k, k + 1, objArr5.length, objArr5, objArr5);
                Object[] objArr6 = this.f13481e;
                objArr6[objArr6.length - 1] = objArr6[0];
                u.d(0, 1, k5 + 1, objArr6, objArr6);
            }
            this.f13481e[k5] = null;
        }
        this.f13482i--;
        return obj;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        if (!isEmpty()) {
            m();
            j(this.f13480d, k(a() + this.f13480d));
        }
        this.f13480d = 0;
        this.f13482i = 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        return indexOf(obj) != -1;
    }

    public final void d(int i5, Collection collection) {
        Iterator it = collection.iterator();
        int length = this.f13481e.length;
        while (i5 < length && it.hasNext()) {
            this.f13481e[i5] = it.next();
            i5++;
        }
        int i6 = this.f13480d;
        for (int i10 = 0; i10 < i6 && it.hasNext(); i10++) {
            this.f13481e[i10] = it.next();
        }
        this.f13482i = collection.size() + this.f13482i;
    }

    public final void e(int i5) {
        if (i5 < 0) {
            throw new IllegalStateException("Deque is too big.");
        }
        Object[] objArr = this.f13481e;
        if (i5 <= objArr.length) {
            return;
        }
        if (objArr == f13479w) {
            if (i5 < 10) {
                i5 = 10;
            }
            this.f13481e = new Object[i5];
            return;
        }
        c cVar = f.f13497d;
        int length = objArr.length;
        cVar.getClass();
        Object[] objArr2 = new Object[c.e(length, i5)];
        Object[] objArr3 = this.f13481e;
        u.d(0, this.f13480d, objArr3.length, objArr3, objArr2);
        Object[] objArr4 = this.f13481e;
        int length2 = objArr4.length;
        int i6 = this.f13480d;
        u.d(length2 - i6, 0, i6, objArr4, objArr2);
        this.f13480d = 0;
        this.f13481e = objArr2;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        c cVar = f.f13497d;
        int i6 = this.f13482i;
        cVar.getClass();
        c.b(i5, i6);
        return this.f13481e[k(this.f13480d + i5)];
    }

    public final int h(int i5) {
        Intrinsics.checkNotNullParameter(this.f13481e, "<this>");
        if (i5 == r0.length - 1) {
            return 0;
        }
        return i5 + 1;
    }

    public final int i(int i5) {
        return i5 < 0 ? i5 + this.f13481e.length : i5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int indexOf(Object obj) {
        int i5;
        int k = k(a() + this.f13480d);
        int i6 = this.f13480d;
        if (i6 < k) {
            while (i6 < k) {
                if (Intrinsics.areEqual(obj, this.f13481e[i6])) {
                    i5 = this.f13480d;
                } else {
                    i6++;
                }
            }
            return -1;
        }
        if (i6 < k) {
            return -1;
        }
        int length = this.f13481e.length;
        while (true) {
            if (i6 >= length) {
                for (int i10 = 0; i10 < k; i10++) {
                    if (Intrinsics.areEqual(obj, this.f13481e[i10])) {
                        i6 = i10 + this.f13481e.length;
                        i5 = this.f13480d;
                    }
                }
                return -1;
            }
            if (Intrinsics.areEqual(obj, this.f13481e[i6])) {
                i5 = this.f13480d;
                break;
            }
            i6++;
        }
        return i6 - i5;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean isEmpty() {
        return a() == 0;
    }

    public final void j(int i5, int i6) {
        if (i5 < i6) {
            u.k(this.f13481e, null, i5, i6);
            return;
        }
        Object[] objArr = this.f13481e;
        u.k(objArr, null, i5, objArr.length);
        u.k(this.f13481e, null, 0, i6);
    }

    public final int k(int i5) {
        Object[] objArr = this.f13481e;
        return i5 >= objArr.length ? i5 - objArr.length : i5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int lastIndexOf(Object obj) {
        int length;
        int i5;
        int k = k(this.f13482i + this.f13480d);
        int i6 = this.f13480d;
        if (i6 < k) {
            length = k - 1;
            if (i6 <= length) {
                while (!Intrinsics.areEqual(obj, this.f13481e[length])) {
                    if (length != i6) {
                        length--;
                    }
                }
                i5 = this.f13480d;
                return length - i5;
            }
            return -1;
        }
        if (i6 > k) {
            int i10 = k - 1;
            while (true) {
                if (-1 >= i10) {
                    Object[] objArr = this.f13481e;
                    Intrinsics.checkNotNullParameter(objArr, "<this>");
                    length = objArr.length - 1;
                    int i11 = this.f13480d;
                    if (i11 <= length) {
                        while (!Intrinsics.areEqual(obj, this.f13481e[length])) {
                            if (length != i11) {
                                length--;
                            }
                        }
                        i5 = this.f13480d;
                    }
                } else {
                    if (Intrinsics.areEqual(obj, this.f13481e[i10])) {
                        length = i10 + this.f13481e.length;
                        i5 = this.f13480d;
                        break;
                    }
                    i10--;
                }
            }
        }
        return -1;
    }

    public final void m() {
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        int indexOf = indexOf(obj);
        if (indexOf == -1) {
            return false;
        }
        b(indexOf);
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean removeAll(Collection elements) {
        int k;
        Intrinsics.checkNotNullParameter(elements, "elements");
        boolean z5 = false;
        z5 = false;
        z5 = false;
        if (!isEmpty() && this.f13481e.length != 0) {
            int k5 = k(a() + this.f13480d);
            int i5 = this.f13480d;
            if (i5 < k5) {
                k = i5;
                while (i5 < k5) {
                    Object obj = this.f13481e[i5];
                    if (elements.contains(obj)) {
                        z5 = true;
                    } else {
                        this.f13481e[k] = obj;
                        k++;
                    }
                    i5++;
                }
                u.k(this.f13481e, null, k, k5);
            } else {
                int length = this.f13481e.length;
                boolean z6 = false;
                int i6 = i5;
                while (i5 < length) {
                    Object[] objArr = this.f13481e;
                    Object obj2 = objArr[i5];
                    objArr[i5] = null;
                    if (elements.contains(obj2)) {
                        z6 = true;
                    } else {
                        this.f13481e[i6] = obj2;
                        i6++;
                    }
                    i5++;
                }
                k = k(i6);
                for (int i10 = 0; i10 < k5; i10++) {
                    Object[] objArr2 = this.f13481e;
                    Object obj3 = objArr2[i10];
                    objArr2[i10] = null;
                    if (elements.contains(obj3)) {
                        z6 = true;
                    } else {
                        this.f13481e[k] = obj3;
                        k = h(k);
                    }
                }
                z5 = z6;
            }
            if (z5) {
                m();
                this.f13482i = i(k - this.f13480d);
            }
        }
        return z5;
    }

    public final Object removeFirst() {
        if (isEmpty()) {
            throw new NoSuchElementException("ArrayDeque is empty.");
        }
        m();
        Object[] objArr = this.f13481e;
        int i5 = this.f13480d;
        Object obj = objArr[i5];
        objArr[i5] = null;
        this.f13480d = h(i5);
        this.f13482i = a() - 1;
        return obj;
    }

    public final Object removeLast() {
        if (isEmpty()) {
            throw new NoSuchElementException("ArrayDeque is empty.");
        }
        m();
        int k = k(c0.f(this) + this.f13480d);
        Object[] objArr = this.f13481e;
        Object obj = objArr[k];
        objArr[k] = null;
        this.f13482i = a() - 1;
        return obj;
    }

    @Override // java.util.AbstractList
    public final void removeRange(int i5, int i6) {
        c cVar = f.f13497d;
        int i10 = this.f13482i;
        cVar.getClass();
        c.d(i5, i6, i10);
        int i11 = i6 - i5;
        if (i11 == 0) {
            return;
        }
        if (i11 == this.f13482i) {
            clear();
            return;
        }
        if (i11 == 1) {
            b(i5);
            return;
        }
        m();
        if (i5 < this.f13482i - i6) {
            int k = k((i5 - 1) + this.f13480d);
            int k5 = k((i6 - 1) + this.f13480d);
            while (i5 > 0) {
                int i12 = k + 1;
                int min = Math.min(i5, Math.min(i12, k5 + 1));
                Object[] objArr = this.f13481e;
                int i13 = k5 - min;
                int i14 = k - min;
                u.d(i13 + 1, i14 + 1, i12, objArr, objArr);
                k = i(i14);
                k5 = i(i13);
                i5 -= min;
            }
            int k7 = k(this.f13480d + i11);
            j(this.f13480d, k7);
            this.f13480d = k7;
        } else {
            int k10 = k(this.f13480d + i6);
            int k11 = k(this.f13480d + i5);
            int i15 = this.f13482i;
            while (true) {
                i15 -= i6;
                if (i15 <= 0) {
                    break;
                }
                Object[] objArr2 = this.f13481e;
                i6 = Math.min(i15, Math.min(objArr2.length - k10, objArr2.length - k11));
                Object[] objArr3 = this.f13481e;
                int i16 = k10 + i6;
                u.d(k11, k10, i16, objArr3, objArr3);
                k10 = k(i16);
                k11 = k(k11 + i6);
            }
            int k12 = k(this.f13482i + this.f13480d);
            j(i(k12 - i11), k12);
        }
        this.f13482i -= i11;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean retainAll(Collection elements) {
        int k;
        Intrinsics.checkNotNullParameter(elements, "elements");
        boolean z5 = false;
        z5 = false;
        z5 = false;
        if (!isEmpty() && this.f13481e.length != 0) {
            int k5 = k(a() + this.f13480d);
            int i5 = this.f13480d;
            if (i5 < k5) {
                k = i5;
                while (i5 < k5) {
                    Object obj = this.f13481e[i5];
                    if (elements.contains(obj)) {
                        this.f13481e[k] = obj;
                        k++;
                    } else {
                        z5 = true;
                    }
                    i5++;
                }
                u.k(this.f13481e, null, k, k5);
            } else {
                int length = this.f13481e.length;
                boolean z6 = false;
                int i6 = i5;
                while (i5 < length) {
                    Object[] objArr = this.f13481e;
                    Object obj2 = objArr[i5];
                    objArr[i5] = null;
                    if (elements.contains(obj2)) {
                        this.f13481e[i6] = obj2;
                        i6++;
                    } else {
                        z6 = true;
                    }
                    i5++;
                }
                k = k(i6);
                for (int i10 = 0; i10 < k5; i10++) {
                    Object[] objArr2 = this.f13481e;
                    Object obj3 = objArr2[i10];
                    objArr2[i10] = null;
                    if (elements.contains(obj3)) {
                        this.f13481e[k] = obj3;
                        k = h(k);
                    } else {
                        z6 = true;
                    }
                }
                z5 = z6;
            }
            if (z5) {
                m();
                this.f13482i = i(k - this.f13480d);
            }
        }
        return z5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        c cVar = f.f13497d;
        int i6 = this.f13482i;
        cVar.getClass();
        c.b(i5, i6);
        int k = k(this.f13480d + i5);
        Object[] objArr = this.f13481e;
        Object obj2 = objArr[k];
        objArr[k] = obj;
        return obj2;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray() {
        return toArray(new Object[a()]);
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        int i6;
        c cVar = f.f13497d;
        int i10 = this.f13482i;
        cVar.getClass();
        c.c(i5, i10);
        if (i5 == this.f13482i) {
            addLast(obj);
            return;
        }
        if (i5 == 0) {
            addFirst(obj);
            return;
        }
        m();
        e(this.f13482i + 1);
        int k = k(this.f13480d + i5);
        int i11 = this.f13482i;
        if (i5 < ((i11 + 1) >> 1)) {
            if (k == 0) {
                Object[] objArr = this.f13481e;
                Intrinsics.checkNotNullParameter(objArr, "<this>");
                k = objArr.length;
            }
            int i12 = k - 1;
            int i13 = this.f13480d;
            if (i13 == 0) {
                Object[] objArr2 = this.f13481e;
                Intrinsics.checkNotNullParameter(objArr2, "<this>");
                i6 = objArr2.length - 1;
            } else {
                i6 = i13 - 1;
            }
            int i14 = this.f13480d;
            if (i12 >= i14) {
                Object[] objArr3 = this.f13481e;
                objArr3[i6] = objArr3[i14];
                u.d(i14, i14 + 1, i12 + 1, objArr3, objArr3);
            } else {
                Object[] objArr4 = this.f13481e;
                u.d(i14 - 1, i14, objArr4.length, objArr4, objArr4);
                Object[] objArr5 = this.f13481e;
                objArr5[objArr5.length - 1] = objArr5[0];
                u.d(0, 1, i12 + 1, objArr5, objArr5);
            }
            this.f13481e[i12] = obj;
            this.f13480d = i6;
        } else {
            int k5 = k(i11 + this.f13480d);
            if (k < k5) {
                Object[] objArr6 = this.f13481e;
                u.d(k + 1, k, k5, objArr6, objArr6);
            } else {
                Object[] objArr7 = this.f13481e;
                u.d(1, 0, k5, objArr7, objArr7);
                Object[] objArr8 = this.f13481e;
                objArr8[0] = objArr8[objArr8.length - 1];
                u.d(k + 1, k, objArr8.length - 1, objArr8, objArr8);
            }
            this.f13481e[k] = obj;
        }
        this.f13482i++;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray(Object[] reference) {
        Intrinsics.checkNotNullParameter(reference, "array");
        int length = reference.length;
        int i5 = this.f13482i;
        if (length < i5) {
            Intrinsics.checkNotNullParameter(reference, "reference");
            Object newInstance = Array.newInstance(reference.getClass().getComponentType(), i5);
            Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.arrayOfNulls>");
            reference = (Object[]) newInstance;
        }
        int k = k(this.f13482i + this.f13480d);
        int i6 = this.f13480d;
        if (i6 < k) {
            u.g(i6, k, 2, this.f13481e, reference);
        } else if (!isEmpty()) {
            Object[] objArr = this.f13481e;
            u.d(0, this.f13480d, objArr.length, objArr, reference);
            Object[] objArr2 = this.f13481e;
            u.d(objArr2.length - this.f13480d, 0, k, objArr2, reference);
        }
        b0.d(this.f13482i, reference);
        return reference;
    }

    @Override // java.util.AbstractList, java.util.List
    public final boolean addAll(int i5, Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        c cVar = f.f13497d;
        int i6 = this.f13482i;
        cVar.getClass();
        c.c(i5, i6);
        if (elements.isEmpty()) {
            return false;
        }
        if (i5 == this.f13482i) {
            return addAll(elements);
        }
        m();
        e(elements.size() + this.f13482i);
        int k = k(this.f13482i + this.f13480d);
        int k5 = k(this.f13480d + i5);
        int size = elements.size();
        if (i5 < ((this.f13482i + 1) >> 1)) {
            int i10 = this.f13480d;
            int i11 = i10 - size;
            if (k5 < i10) {
                Object[] objArr = this.f13481e;
                u.d(i11, i10, objArr.length, objArr, objArr);
                if (size >= k5) {
                    Object[] objArr2 = this.f13481e;
                    u.d(objArr2.length - size, 0, k5, objArr2, objArr2);
                } else {
                    Object[] objArr3 = this.f13481e;
                    u.d(objArr3.length - size, 0, size, objArr3, objArr3);
                    Object[] objArr4 = this.f13481e;
                    u.d(0, size, k5, objArr4, objArr4);
                }
            } else if (i11 >= 0) {
                Object[] objArr5 = this.f13481e;
                u.d(i11, i10, k5, objArr5, objArr5);
            } else {
                Object[] objArr6 = this.f13481e;
                i11 += objArr6.length;
                int i12 = k5 - i10;
                int length = objArr6.length - i11;
                if (length >= i12) {
                    u.d(i11, i10, k5, objArr6, objArr6);
                } else {
                    u.d(i11, i10, i10 + length, objArr6, objArr6);
                    Object[] objArr7 = this.f13481e;
                    u.d(0, this.f13480d + length, k5, objArr7, objArr7);
                }
            }
            this.f13480d = i11;
            d(i(k5 - size), elements);
            return true;
        }
        int i13 = k5 + size;
        if (k5 < k) {
            int i14 = size + k;
            Object[] objArr8 = this.f13481e;
            if (i14 <= objArr8.length) {
                u.d(i13, k5, k, objArr8, objArr8);
            } else if (i13 >= objArr8.length) {
                u.d(i13 - objArr8.length, k5, k, objArr8, objArr8);
            } else {
                int length2 = k - (i14 - objArr8.length);
                u.d(0, length2, k, objArr8, objArr8);
                Object[] objArr9 = this.f13481e;
                u.d(i13, k5, length2, objArr9, objArr9);
            }
        } else {
            Object[] objArr10 = this.f13481e;
            u.d(size, 0, k, objArr10, objArr10);
            Object[] objArr11 = this.f13481e;
            if (i13 >= objArr11.length) {
                u.d(i13 - objArr11.length, k5, objArr11.length, objArr11, objArr11);
            } else {
                u.d(0, objArr11.length - size, objArr11.length, objArr11, objArr11);
                Object[] objArr12 = this.f13481e;
                u.d(i13, k5, objArr12.length - size, objArr12, objArr12);
            }
        }
        d(k5, elements);
        return true;
    }
}
