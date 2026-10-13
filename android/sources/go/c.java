package go;

import a5.k0;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;
import kotlin.collections.b0;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends kotlin.collections.l implements RandomAccess, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public Object[] f9394d;

    /* renamed from: e, reason: collision with root package name */
    public final int f9395e;

    /* renamed from: i, reason: collision with root package name */
    public int f9396i;

    /* renamed from: v, reason: collision with root package name */
    public final c f9397v;

    /* renamed from: w, reason: collision with root package name */
    public final e f9398w;

    public c(Object[] backing, int i5, int i6, c cVar, e root) {
        int i10;
        Intrinsics.checkNotNullParameter(backing, "backing");
        Intrinsics.checkNotNullParameter(root, "root");
        this.f9394d = backing;
        this.f9395e = i5;
        this.f9396i = i6;
        this.f9397v = cVar;
        this.f9398w = root;
        i10 = ((AbstractList) root).modCount;
        ((AbstractList) this).modCount = i10;
    }

    @Override // kotlin.collections.l
    public final int a() {
        i();
        return this.f9396i;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        j();
        i();
        h(this.f9395e + this.f9396i, obj);
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        j();
        i();
        int size = elements.size();
        e(this.f9395e + this.f9396i, elements, size);
        return size > 0;
    }

    @Override // kotlin.collections.l
    public final Object b(int i5) {
        j();
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.b(i5, i6);
        return k(this.f9395e + i5);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        j();
        i();
        m(this.f9395e, this.f9396i);
    }

    public final void e(int i5, Collection collection, int i6) {
        ((AbstractList) this).modCount++;
        e eVar = this.f9398w;
        c cVar = this.f9397v;
        if (cVar != null) {
            cVar.e(i5, collection, i6);
        } else {
            e eVar2 = e.f9400w;
            eVar.e(i5, collection, i6);
        }
        this.f9394d = eVar.f9401d;
        this.f9396i += i6;
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        i();
        if (obj == this) {
            return true;
        }
        if (obj instanceof List) {
            List list = (List) obj;
            Object[] objArr = this.f9394d;
            int i5 = this.f9396i;
            if (i5 == list.size()) {
                for (int i6 = 0; i6 < i5; i6++) {
                    if (Intrinsics.areEqual(objArr[this.f9395e + i6], list.get(i6))) {
                    }
                }
                return true;
            }
        }
        return false;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.b(i5, i6);
        return this.f9394d[this.f9395e + i5];
    }

    public final void h(int i5, Object obj) {
        ((AbstractList) this).modCount++;
        e eVar = this.f9398w;
        c cVar = this.f9397v;
        if (cVar != null) {
            cVar.h(i5, obj);
        } else {
            e eVar2 = e.f9400w;
            eVar.h(i5, obj);
        }
        this.f9394d = eVar.f9401d;
        this.f9396i++;
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        i();
        Object[] objArr = this.f9394d;
        int i5 = this.f9396i;
        int i6 = 1;
        for (int i10 = 0; i10 < i5; i10++) {
            Object obj = objArr[this.f9395e + i10];
            i6 = (i6 * 31) + (obj != null ? obj.hashCode() : 0);
        }
        return i6;
    }

    public final void i() {
        int i5;
        i5 = ((AbstractList) this.f9398w).modCount;
        if (i5 != ((AbstractList) this).modCount) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.AbstractList, java.util.List
    public final int indexOf(Object obj) {
        i();
        for (int i5 = 0; i5 < this.f9396i; i5++) {
            if (Intrinsics.areEqual(this.f9394d[this.f9395e + i5], obj)) {
                return i5;
            }
        }
        return -1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean isEmpty() {
        i();
        return this.f9396i == 0;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        return listIterator(0);
    }

    public final void j() {
        if (this.f9398w.f9403i) {
            throw new UnsupportedOperationException();
        }
    }

    public final Object k(int i5) {
        Object k;
        ((AbstractList) this).modCount++;
        c cVar = this.f9397v;
        if (cVar != null) {
            k = cVar.k(i5);
        } else {
            e eVar = e.f9400w;
            k = this.f9398w.k(i5);
        }
        this.f9396i--;
        return k;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int lastIndexOf(Object obj) {
        i();
        for (int i5 = this.f9396i - 1; i5 >= 0; i5--) {
            if (Intrinsics.areEqual(this.f9394d[this.f9395e + i5], obj)) {
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
        c cVar = this.f9397v;
        if (cVar != null) {
            cVar.m(i5, i6);
        } else {
            e eVar = e.f9400w;
            this.f9398w.m(i5, i6);
        }
        this.f9396i -= i6;
    }

    public final int n(int i5, int i6, Collection collection, boolean z5) {
        int n6;
        c cVar = this.f9397v;
        if (cVar != null) {
            n6 = cVar.n(i5, i6, collection, z5);
        } else {
            e eVar = e.f9400w;
            n6 = this.f9398w.n(i5, i6, collection, z5);
        }
        if (n6 > 0) {
            ((AbstractList) this).modCount++;
        }
        this.f9396i -= n6;
        return n6;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        j();
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
        j();
        i();
        return n(this.f9395e, this.f9396i, elements, false) > 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean retainAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        j();
        i();
        return n(this.f9395e, this.f9396i, elements, true) > 0;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        j();
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.b(i5, i6);
        Object[] objArr = this.f9394d;
        int i10 = this.f9395e + i5;
        Object obj2 = objArr[i10];
        objArr[i10] = obj;
        return obj2;
    }

    @Override // java.util.AbstractList, java.util.List
    public final List subList(int i5, int i6) {
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i10 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.d(i5, i6, i10);
        return new c(this.f9394d, this.f9395e + i5, i6 - i5, this, this.f9398w);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray(Object[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        i();
        int length = array.length;
        int i5 = this.f9396i;
        int i6 = this.f9395e;
        if (length < i5) {
            Object[] copyOfRange = Arrays.copyOfRange(this.f9394d, i6, i5 + i6, array.getClass());
            Intrinsics.checkNotNullExpressionValue(copyOfRange, "copyOfRange(...)");
            return copyOfRange;
        }
        u.d(0, i6, i5 + i6, this.f9394d, array);
        b0.d(this.f9396i, array);
        return array;
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        i();
        return k0.e(this.f9394d, this.f9395e, this.f9396i, this);
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator(int i5) {
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.c(i5, i6);
        return new b(this, i5);
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        j();
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.c(i5, i6);
        h(this.f9395e + i5, obj);
    }

    @Override // java.util.AbstractList, java.util.List
    public final boolean addAll(int i5, Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        j();
        i();
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int i6 = this.f9396i;
        cVar.getClass();
        kotlin.collections.c.c(i5, i6);
        int size = elements.size();
        e(this.f9395e + i5, elements, size);
        return size > 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray() {
        i();
        Object[] objArr = this.f9394d;
        int i5 = this.f9396i;
        int i6 = this.f9395e;
        return u.j(objArr, i6, i5 + i6);
    }
}
