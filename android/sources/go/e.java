package go;

import a5.k0;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;
import kotlin.collections.b0;
import kotlin.collections.u;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableList;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class e extends kotlin.collections.l implements List, RandomAccess, Serializable, KMutableList {

    /* renamed from: v, reason: collision with root package name */
    @NotNull
    private static final d f9399v = new d(null);

    /* renamed from: w, reason: collision with root package name */
    public static final e f9400w;

    /* renamed from: d, reason: collision with root package name */
    public Object[] f9401d;

    /* renamed from: e, reason: collision with root package name */
    public int f9402e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f9403i;

    static {
        e eVar = new e(0);
        eVar.f9403i = true;
        f9400w = eVar;
    }

    public e() {
        this(0, 1, null);
    }

    @Override // kotlin.collections.l
    public final int a() {
        return this.f9402e;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        i();
        int i5 = this.f9402e;
        ((AbstractList) this).modCount++;
        j(i5, 1);
        this.f9401d[i5] = obj;
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        i();
        int size = elements.size();
        e(this.f9402e, elements, size);
        return size > 0;
    }

    @Override // kotlin.collections.l
    public final Object b(int i5) {
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.b(i5, i6);
        return k(i5);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        i();
        m(0, this.f9402e);
    }

    public final void e(int i5, Collection collection, int i6) {
        ((AbstractList) this).modCount++;
        j(i5, i6);
        Iterator it = collection.iterator();
        for (int i10 = 0; i10 < i6; i10++) {
            this.f9401d[i5 + i10] = it.next();
        }
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof List) {
            List list = (List) obj;
            Object[] objArr = this.f9401d;
            int i5 = this.f9402e;
            if (i5 == list.size()) {
                for (int i6 = 0; i6 < i5; i6++) {
                    if (Intrinsics.areEqual(objArr[i6], list.get(i6))) {
                    }
                }
                return true;
            }
        }
        return false;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.b(i5, i6);
        return this.f9401d[i5];
    }

    public final void h(int i5, Object obj) {
        ((AbstractList) this).modCount++;
        j(i5, 1);
        this.f9401d[i5] = obj;
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        Object[] objArr = this.f9401d;
        int i5 = this.f9402e;
        int i6 = 1;
        for (int i10 = 0; i10 < i5; i10++) {
            Object obj = objArr[i10];
            i6 = (i6 * 31) + (obj != null ? obj.hashCode() : 0);
        }
        return i6;
    }

    public final void i() {
        if (this.f9403i) {
            throw new UnsupportedOperationException();
        }
    }

    @Override // java.util.AbstractList, java.util.List
    public final int indexOf(Object obj) {
        for (int i5 = 0; i5 < this.f9402e; i5++) {
            if (Intrinsics.areEqual(this.f9401d[i5], obj)) {
                return i5;
            }
        }
        return -1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean isEmpty() {
        return this.f9402e == 0;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        return listIterator(0);
    }

    public final void j(int i5, int i6) {
        int i10 = this.f9402e + i6;
        if (i10 < 0) {
            throw new OutOfMemoryError();
        }
        Object[] objArr = this.f9401d;
        if (i10 > objArr.length) {
            kotlin.collections.c cVar = kotlin.collections.f.f13497d;
            int length = objArr.length;
            cVar.getClass();
            int e9 = kotlin.collections.c.e(length, i10);
            Object[] objArr2 = this.f9401d;
            Intrinsics.checkNotNullParameter(objArr2, "<this>");
            Object[] copyOf = Arrays.copyOf(objArr2, e9);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f9401d = copyOf;
        }
        Object[] objArr3 = this.f9401d;
        u.d(i5 + i6, i5, this.f9402e, objArr3, objArr3);
        this.f9402e += i6;
    }

    public final Object k(int i5) {
        ((AbstractList) this).modCount++;
        Object[] objArr = this.f9401d;
        Object obj = objArr[i5];
        u.d(i5, i5 + 1, this.f9402e, objArr, objArr);
        Object[] objArr2 = this.f9401d;
        int i6 = this.f9402e - 1;
        Intrinsics.checkNotNullParameter(objArr2, "<this>");
        objArr2[i6] = null;
        this.f9402e--;
        return obj;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int lastIndexOf(Object obj) {
        for (int i5 = this.f9402e - 1; i5 >= 0; i5--) {
            if (Intrinsics.areEqual(this.f9401d[i5], obj)) {
                return i5;
            }
        }
        return -1;
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator() {
        return listIterator(0);
    }

    public final void m(int i5, int i6) {
        if (i6 > 0) {
            ((AbstractList) this).modCount++;
        }
        Object[] objArr = this.f9401d;
        u.d(i5, i5 + i6, this.f9402e, objArr, objArr);
        Object[] objArr2 = this.f9401d;
        int i10 = this.f9402e;
        k0.R(objArr2, i10 - i6, i10);
        this.f9402e -= i6;
    }

    public final int n(int i5, int i6, Collection collection, boolean z5) {
        int i10 = 0;
        int i11 = 0;
        while (i10 < i6) {
            int i12 = i5 + i10;
            if (collection.contains(this.f9401d[i12]) == z5) {
                Object[] objArr = this.f9401d;
                i10++;
                objArr[i11 + i5] = objArr[i12];
                i11++;
            } else {
                i10++;
            }
        }
        int i13 = i6 - i11;
        Object[] objArr2 = this.f9401d;
        u.d(i5 + i11, i6 + i5, this.f9402e, objArr2, objArr2);
        Object[] objArr3 = this.f9401d;
        int i14 = this.f9402e;
        k0.R(objArr3, i14 - i13, i14);
        if (i13 > 0) {
            ((AbstractList) this).modCount++;
        }
        this.f9402e -= i13;
        return i13;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        i();
        int indexOf = indexOf(obj);
        if (indexOf >= 0) {
            b(indexOf);
        }
        return indexOf >= 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean removeAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        i();
        return n(0, this.f9402e, elements, false) > 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean retainAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        i();
        return n(0, this.f9402e, elements, true) > 0;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.b(i5, i6);
        Object[] objArr = this.f9401d;
        Object obj2 = objArr[i5];
        objArr[i5] = obj;
        return obj2;
    }

    @Override // java.util.AbstractList, java.util.List
    public final List subList(int i5, int i6) {
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i10 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.d(i5, i6, i10);
        return new c(this.f9401d, i5, i6 - i5, null, this);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray(Object[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        int length = array.length;
        int i5 = this.f9402e;
        if (length < i5) {
            Object[] copyOfRange = Arrays.copyOfRange(this.f9401d, 0, i5, array.getClass());
            Intrinsics.checkNotNullExpressionValue(copyOfRange, "copyOfRange(...)");
            return copyOfRange;
        }
        u.d(0, 0, i5, this.f9401d, array);
        b0.d(this.f9402e, array);
        return array;
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        return k0.e(this.f9401d, 0, this.f9402e, this);
    }

    public /* synthetic */ e(int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this((i6 & 1) != 0 ? 10 : i5);
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator(int i5) {
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.c(i5, i6);
        return new b(this, i5);
    }

    public e(int i5) {
        if (i5 >= 0) {
            this.f9401d = new Object[i5];
            return;
        }
        throw new IllegalArgumentException("capacity must be non-negative.");
    }

    @Override // java.util.AbstractList, java.util.List
    public final boolean addAll(int i5, Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.c(i5, i6);
        int size = elements.size();
        e(i5, elements, size);
        return size > 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray() {
        return u.j(this.f9401d, 0, this.f9402e);
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9402e;
        cVar.getClass();
        kotlin.collections.c.c(i5, i6);
        ((AbstractList) this).modCount++;
        j(i5, 1);
        this.f9401d[i5] = obj;
    }
}
