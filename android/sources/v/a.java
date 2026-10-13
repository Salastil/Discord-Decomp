package v;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.CollectionToArray;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableList;

/* loaded from: classes.dex */
public final class a implements List, KMutableList {

    /* renamed from: d, reason: collision with root package name */
    public final d f19124d;

    public a(d dVar) {
        this.f19124d = dVar;
    }

    @Override // java.util.List
    public final void add(int i5, Object obj) {
        d dVar = this.f19124d;
        int i6 = dVar.f19132i + 1;
        if (dVar.f19130d.length < i6) {
            dVar.h(i6);
        }
        Object[] objArr = dVar.f19130d;
        int i10 = dVar.f19132i;
        if (i5 != i10) {
            System.arraycopy(objArr, i5, objArr, i5 + 1, i10 - i5);
        }
        objArr[i5] = obj;
        dVar.f19132i++;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean addAll(Collection collection) {
        d dVar = this.f19124d;
        return dVar.b(dVar.f19132i, collection);
    }

    @Override // java.util.List, java.util.Collection
    public final void clear() {
        this.f19124d.d();
    }

    @Override // java.util.List, java.util.Collection
    public final boolean contains(Object obj) {
        d dVar = this.f19124d;
        int i5 = dVar.f19132i - 1;
        if (i5 >= 0) {
            for (int i6 = 0; !Intrinsics.areEqual(dVar.f19130d[i6], obj); i6++) {
                if (i6 != i5) {
                }
            }
            return true;
        }
        return false;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean containsAll(Collection collection) {
        boolean z5;
        Iterator it = collection.iterator();
        loop0: while (true) {
            z5 = true;
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            d dVar = this.f19124d;
            int i5 = dVar.f19132i - 1;
            z5 = false;
            if (i5 < 0) {
                break;
            }
            for (int i6 = 0; !Intrinsics.areEqual(dVar.f19130d[i6], next); i6++) {
                if (i6 == i5) {
                    break loop0;
                }
            }
        }
        return z5;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        e.a(i5, this);
        return this.f19124d.f19130d[i5];
    }

    @Override // java.util.List
    public final int indexOf(Object obj) {
        d dVar = this.f19124d;
        Object[] objArr = dVar.f19130d;
        int i5 = dVar.f19132i;
        for (int i6 = 0; i6 < i5; i6++) {
            if (Intrinsics.areEqual(obj, objArr[i6])) {
                return i6;
            }
        }
        return -1;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean isEmpty() {
        return this.f19124d.f19132i == 0;
    }

    @Override // java.util.List, java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        return new c(this, 0);
    }

    @Override // java.util.List
    public final int lastIndexOf(Object obj) {
        d dVar = this.f19124d;
        Object[] objArr = dVar.f19130d;
        for (int i5 = dVar.f19132i - 1; i5 >= 0; i5--) {
            if (Intrinsics.areEqual(obj, objArr[i5])) {
                return i5;
            }
        }
        return -1;
    }

    @Override // java.util.List
    public final ListIterator listIterator() {
        return new c(this, 0);
    }

    @Override // java.util.List, java.util.Collection
    public final boolean remove(Object obj) {
        d dVar = this.f19124d;
        Object[] objArr = dVar.f19130d;
        int i5 = dVar.f19132i;
        int i6 = 0;
        while (true) {
            if (i6 >= i5) {
                i6 = -1;
                break;
            }
            if (Intrinsics.areEqual(obj, objArr[i6])) {
                break;
            }
            i6++;
        }
        if (i6 < 0) {
            return false;
        }
        dVar.e(i6);
        return true;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean removeAll(Collection collection) {
        if (!collection.isEmpty()) {
            d dVar = this.f19124d;
            int i5 = dVar.f19132i;
            for (Object obj : collection) {
                Object[] objArr = dVar.f19130d;
                int i6 = dVar.f19132i;
                int i10 = 0;
                while (true) {
                    if (i10 >= i6) {
                        i10 = -1;
                        break;
                    }
                    if (Intrinsics.areEqual(obj, objArr[i10])) {
                        break;
                    }
                    i10++;
                }
                if (i10 >= 0) {
                    dVar.e(i10);
                }
            }
            if (i5 != dVar.f19132i) {
                return true;
            }
        }
        return false;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean retainAll(Collection collection) {
        d dVar = this.f19124d;
        int i5 = dVar.f19132i;
        for (int i6 = i5 - 1; -1 < i6; i6--) {
            if (!collection.contains(dVar.f19130d[i6])) {
                dVar.e(i6);
            }
        }
        return i5 != dVar.f19132i;
    }

    @Override // java.util.List
    public final Object set(int i5, Object obj) {
        e.a(i5, this);
        Object[] objArr = this.f19124d.f19130d;
        Object obj2 = objArr[i5];
        objArr[i5] = obj;
        return obj2;
    }

    @Override // java.util.List, java.util.Collection
    public final int size() {
        return this.f19124d.f19132i;
    }

    @Override // java.util.List
    public final List subList(int i5, int i6) {
        e.b(this, i5, i6);
        return new b(this, i5, i6);
    }

    @Override // java.util.List, java.util.Collection
    public final Object[] toArray() {
        return CollectionToArray.toArray(this);
    }

    @Override // java.util.List
    public final ListIterator listIterator(int i5) {
        return new c(this, i5);
    }

    @Override // java.util.List, java.util.Collection
    public final Object[] toArray(Object[] objArr) {
        return CollectionToArray.toArray(this, objArr);
    }

    @Override // java.util.List
    public final boolean addAll(int i5, Collection collection) {
        return this.f19124d.b(i5, collection);
    }

    @Override // java.util.List
    public final Object remove(int i5) {
        e.a(i5, this);
        return this.f19124d.e(i5);
    }

    @Override // java.util.List, java.util.Collection
    public final boolean add(Object obj) {
        this.f19124d.a(obj);
        return true;
    }
}
