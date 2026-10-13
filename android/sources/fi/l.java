package fi;

import java.util.AbstractCollection;
import java.util.Collection;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public class l extends AbstractCollection implements List {

    /* renamed from: d, reason: collision with root package name */
    public final Object f8676d;

    /* renamed from: e, reason: collision with root package name */
    public Collection f8677e;

    /* renamed from: i, reason: collision with root package name */
    public final l f8678i;

    /* renamed from: v, reason: collision with root package name */
    public final Collection f8679v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ n0 f8680w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ n0 f8681x;

    public l(n0 n0Var, Object obj, List list, l lVar) {
        this.f8681x = n0Var;
        this.f8680w = n0Var;
        this.f8676d = obj;
        this.f8677e = list;
        this.f8678i = lVar;
        this.f8679v = lVar == null ? null : lVar.f8677e;
    }

    public final void a() {
        l lVar = this.f8678i;
        if (lVar != null) {
            lVar.a();
        } else {
            this.f8680w.f8687v.put(this.f8676d, this.f8677e);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        b();
        boolean isEmpty = this.f8677e.isEmpty();
        boolean add = this.f8677e.add(obj);
        if (add) {
            this.f8680w.f8688w++;
            if (isEmpty) {
                a();
            }
        }
        return add;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection collection) {
        if (collection.isEmpty()) {
            return false;
        }
        int size = size();
        boolean addAll = this.f8677e.addAll(collection);
        if (addAll) {
            this.f8680w.f8688w += this.f8677e.size() - size;
            if (size == 0) {
                a();
            }
        }
        return addAll;
    }

    public final void b() {
        Collection collection;
        l lVar = this.f8678i;
        if (lVar != null) {
            lVar.b();
            if (lVar.f8677e != this.f8679v) {
                throw new ConcurrentModificationException();
            }
        } else {
            if (!this.f8677e.isEmpty() || (collection = (Collection) this.f8680w.f8687v.get(this.f8676d)) == null) {
                return;
            }
            this.f8677e = collection;
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        int size = size();
        if (size == 0) {
            return;
        }
        this.f8677e.clear();
        this.f8680w.f8688w -= size;
        d();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        b();
        return this.f8677e.contains(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean containsAll(Collection collection) {
        b();
        return this.f8677e.containsAll(collection);
    }

    public final void d() {
        l lVar = this.f8678i;
        if (lVar != null) {
            lVar.d();
        } else if (this.f8677e.isEmpty()) {
            this.f8680w.f8687v.remove(this.f8676d);
        }
    }

    @Override // java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        b();
        return this.f8677e.equals(obj);
    }

    @Override // java.util.List
    public final Object get(int i5) {
        b();
        return ((List) this.f8677e).get(i5);
    }

    @Override // java.util.Collection, java.util.List
    public final int hashCode() {
        b();
        return this.f8677e.hashCode();
    }

    @Override // java.util.List
    public final int indexOf(Object obj) {
        b();
        return ((List) this.f8677e).indexOf(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        b();
        return new c(this);
    }

    @Override // java.util.List
    public final int lastIndexOf(Object obj) {
        b();
        return ((List) this.f8677e).lastIndexOf(obj);
    }

    @Override // java.util.List
    public final ListIterator listIterator() {
        b();
        return new k(this);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        b();
        boolean remove = this.f8677e.remove(obj);
        if (remove) {
            n0 n0Var = this.f8680w;
            n0Var.f8688w--;
            d();
        }
        return remove;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean removeAll(Collection collection) {
        if (collection.isEmpty()) {
            return false;
        }
        int size = size();
        boolean removeAll = this.f8677e.removeAll(collection);
        if (removeAll) {
            this.f8680w.f8688w += this.f8677e.size() - size;
            d();
        }
        return removeAll;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean retainAll(Collection collection) {
        collection.getClass();
        int size = size();
        boolean retainAll = this.f8677e.retainAll(collection);
        if (retainAll) {
            this.f8680w.f8688w += this.f8677e.size() - size;
            d();
        }
        return retainAll;
    }

    @Override // java.util.List
    public final Object set(int i5, Object obj) {
        b();
        return ((List) this.f8677e).set(i5, obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        b();
        return this.f8677e.size();
    }

    @Override // java.util.List
    public final List subList(int i5, int i6) {
        b();
        List subList = ((List) this.f8677e).subList(i5, i6);
        l lVar = this.f8678i;
        if (lVar == null) {
            lVar = this;
        }
        boolean z5 = subList instanceof RandomAccess;
        n0 n0Var = this.f8681x;
        Object obj = this.f8676d;
        return z5 ? new h(n0Var, obj, subList, lVar) : new l(n0Var, obj, subList, lVar);
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        b();
        return this.f8677e.toString();
    }

    @Override // java.util.List
    public final ListIterator listIterator(int i5) {
        b();
        return new k(this, i5);
    }

    @Override // java.util.List
    public final Object remove(int i5) {
        b();
        Object remove = ((List) this.f8677e).remove(i5);
        n0 n0Var = this.f8681x;
        n0Var.f8688w--;
        d();
        return remove;
    }

    @Override // java.util.List
    public final void add(int i5, Object obj) {
        b();
        boolean isEmpty = this.f8677e.isEmpty();
        ((List) this.f8677e).add(i5, obj);
        this.f8681x.f8688w++;
        if (isEmpty) {
            a();
        }
    }

    @Override // java.util.List
    public final boolean addAll(int i5, Collection collection) {
        if (collection.isEmpty()) {
            return false;
        }
        int size = size();
        boolean addAll = ((List) this.f8677e).addAll(i5, collection);
        if (addAll) {
            this.f8681x.f8688w += this.f8677e.size() - size;
            if (size == 0) {
                a();
            }
        }
        return addAll;
    }
}
