package fi;

import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.RandomAccess;
import java.util.Set;

/* loaded from: classes3.dex */
public class a1 extends AbstractCollection implements Set {

    /* renamed from: d, reason: collision with root package name */
    public final Set f8636d;

    /* renamed from: e, reason: collision with root package name */
    public final ei.g f8637e;

    public a1(Set set, ei.g gVar) {
        this.f8636d = set;
        this.f8637e = gVar;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean add(Object obj) {
        if (this.f8637e.apply(obj)) {
            return this.f8636d.add(obj);
        }
        throw new IllegalArgumentException();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean addAll(Collection collection) {
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            if (!this.f8637e.apply(it.next())) {
                throw new IllegalArgumentException();
            }
        }
        return this.f8636d.addAll(collection);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final void clear() {
        Set set = this.f8636d;
        boolean z5 = set instanceof RandomAccess;
        ei.g gVar = this.f8637e;
        if (!z5 || !(set instanceof List)) {
            Iterator it = set.iterator();
            gVar.getClass();
            while (it.hasNext()) {
                if (gVar.apply(it.next())) {
                    it.remove();
                }
            }
            return;
        }
        List list = (List) set;
        gVar.getClass();
        int i5 = 0;
        for (int i6 = 0; i6 < list.size(); i6++) {
            Object obj = list.get(i6);
            if (!gVar.apply(obj)) {
                if (i6 > i5) {
                    try {
                        list.set(i5, obj);
                    } catch (IllegalArgumentException unused) {
                        p.o(list, gVar, i5, i6);
                        return;
                    } catch (UnsupportedOperationException unused2) {
                        p.o(list, gVar, i5, i6);
                        return;
                    }
                }
                i5++;
            }
        }
        list.subList(i5, list.size()).clear();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        boolean z5;
        Set set = this.f8636d;
        set.getClass();
        try {
            z5 = set.contains(obj);
        } catch (ClassCastException | NullPointerException unused) {
            z5 = false;
        }
        if (z5) {
            return this.f8637e.apply(obj);
        }
        return false;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean containsAll(Collection collection) {
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            if (!contains(it.next())) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        return p.f(this, obj);
    }

    @Override // java.util.Collection, java.util.Set
    public final int hashCode() {
        return p.j(this);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean isEmpty() {
        Iterator it = this.f8636d.iterator();
        ei.g gVar = this.f8637e;
        ys.d.s(gVar, "predicate");
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            }
            if (gVar.apply(it.next())) {
                break;
            }
            i5++;
        }
        return true ^ (i5 != -1);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        Iterator it = this.f8636d.iterator();
        it.getClass();
        ei.g gVar = this.f8637e;
        gVar.getClass();
        return new i0(it, gVar);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean remove(Object obj) {
        return contains(obj) && this.f8636d.remove(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean removeAll(Collection collection) {
        Iterator it = this.f8636d.iterator();
        boolean z5 = false;
        while (it.hasNext()) {
            Object next = it.next();
            if (this.f8637e.apply(next) && collection.contains(next)) {
                it.remove();
                z5 = true;
            }
        }
        return z5;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean retainAll(Collection collection) {
        Iterator it = this.f8636d.iterator();
        boolean z5 = false;
        while (it.hasNext()) {
            Object next = it.next();
            if (this.f8637e.apply(next) && !collection.contains(next)) {
                it.remove();
                z5 = true;
            }
        }
        return z5;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        Iterator it = this.f8636d.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            if (this.f8637e.apply(it.next())) {
                i5++;
            }
        }
        return i5;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final Object[] toArray() {
        i0 i0Var = (i0) iterator();
        ArrayList arrayList = new ArrayList();
        while (i0Var.hasNext()) {
            arrayList.add(i0Var.next());
        }
        return arrayList.toArray();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final Object[] toArray(Object[] objArr) {
        i0 i0Var = (i0) iterator();
        ArrayList arrayList = new ArrayList();
        while (i0Var.hasNext()) {
            arrayList.add(i0Var.next());
        }
        return arrayList.toArray(objArr);
    }
}
