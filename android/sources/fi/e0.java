package fi;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public abstract class e0 extends z implements List, RandomAccess {

    /* renamed from: e, reason: collision with root package name */
    public static final c0 f8656e = new c0(r0.f8704w, 0);

    public static r0 j(int i5, Object[] objArr) {
        return i5 == 0 ? r0.f8704w : new r0(i5, objArr);
    }

    public static e0 k(Collection collection) {
        if (!(collection instanceof z)) {
            Object[] array = collection.toArray();
            p.b(array.length, array);
            return j(array.length, array);
        }
        e0 a = ((z) collection).a();
        if (!a.i()) {
            return a;
        }
        Object[] array2 = a.toArray(z.f8744d);
        return j(array2.length, array2);
    }

    public static r0 m(Object[] objArr) {
        if (objArr.length == 0) {
            return r0.f8704w;
        }
        Object[] objArr2 = (Object[]) objArr.clone();
        p.b(objArr2.length, objArr2);
        return j(objArr2.length, objArr2);
    }

    public static r0 p(Long l6, Long l7, Long l10, Long l11, Long l12) {
        Object[] objArr = {l6, l7, l10, l11, l12};
        p.b(5, objArr);
        return j(5, objArr);
    }

    public static r0 s(Object obj) {
        Object[] objArr = {obj};
        p.b(1, objArr);
        return j(1, objArr);
    }

    @Override // java.util.List
    public final void add(int i5, Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.List
    public final boolean addAll(int i5, Collection collection) {
        throw new UnsupportedOperationException();
    }

    @Override // fi.z
    public int b(int i5, Object[] objArr) {
        int size = size();
        for (int i6 = 0; i6 < size; i6++) {
            objArr[i5 + i6] = get(i6);
        }
        return i5 + size;
    }

    @Override // fi.z, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return indexOf(obj) >= 0;
    }

    @Override // java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (obj != this) {
            if (obj instanceof List) {
                List list = (List) obj;
                int size = size();
                if (size == list.size()) {
                    if (!(list instanceof RandomAccess)) {
                        Iterator it = iterator();
                        Iterator it2 = list.iterator();
                        while (it.hasNext()) {
                            if (it2.hasNext() && w3.q.j(it.next(), it2.next())) {
                            }
                        }
                        return !it2.hasNext();
                    }
                    for (int i5 = 0; i5 < size; i5++) {
                        if (w3.q.j(get(i5), list.get(i5))) {
                        }
                    }
                }
            }
            return false;
        }
        return true;
    }

    @Override // java.util.Collection, java.util.List
    public final int hashCode() {
        int size = size();
        int i5 = 1;
        for (int i6 = 0; i6 < size; i6++) {
            i5 = ~(~(get(i6).hashCode() + (i5 * 31)));
        }
        return i5;
    }

    @Override // java.util.List
    public final int indexOf(Object obj) {
        if (obj == null) {
            return -1;
        }
        int size = size();
        for (int i5 = 0; i5 < size; i5++) {
            if (obj.equals(get(i5))) {
                return i5;
            }
        }
        return -1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public Iterator iterator() {
        return listIterator(0);
    }

    @Override // java.util.List
    public final int lastIndexOf(Object obj) {
        if (obj == null) {
            return -1;
        }
        for (int size = size() - 1; size >= 0; size--) {
            if (obj.equals(get(size))) {
                return size;
            }
        }
        return -1;
    }

    @Override // java.util.List
    /* renamed from: n, reason: merged with bridge method [inline-methods] */
    public final c0 listIterator(int i5) {
        ys.d.t(i5, size());
        return isEmpty() ? f8656e : new c0(this, i5);
    }

    @Override // java.util.List
    public final Object remove(int i5) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.List
    public final Object set(int i5, Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.List
    /* renamed from: u, reason: merged with bridge method [inline-methods] */
    public e0 subList(int i5, int i6) {
        ys.d.u(i5, i6, size());
        int i10 = i6 - i5;
        return i10 == size() ? this : i10 == 0 ? r0.f8704w : new d0(this, i5, i10);
    }

    public ListIterator listIterator() {
        return listIterator(0);
    }

    @Override // fi.z
    public final e0 a() {
        return this;
    }
}
