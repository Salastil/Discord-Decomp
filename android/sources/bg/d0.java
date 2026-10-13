package bg;

import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Set;

/* loaded from: classes3.dex */
public final class d0 extends w {

    /* renamed from: y, reason: collision with root package name */
    public static final d0 f2942y;

    /* renamed from: x, reason: collision with root package name */
    public final transient p f2943x;

    static {
        l lVar = p.f2980e;
        f2942y = new d0(b0.f2933w, z.f3008e);
    }

    public d0(p pVar, Comparator comparator) {
        super(comparator);
        this.f2943x = pVar;
    }

    @Override // bg.k
    public final int a(Object[] objArr) {
        return this.f2943x.a(objArr);
    }

    @Override // bg.k
    public final int b() {
        return this.f2943x.b();
    }

    @Override // java.util.NavigableSet
    public final Object ceiling(Object obj) {
        int v5 = v(obj, true);
        p pVar = this.f2943x;
        if (v5 == pVar.size()) {
            return null;
        }
        return pVar.get(v5);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj != null) {
            try {
                if (Collections.binarySearch(this.f2943x, obj, this.f3001v) >= 0) {
                    return true;
                }
            } catch (ClassCastException unused) {
            }
        }
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean containsAll(Collection collection) {
        if (collection instanceof y) {
            collection = ((y) collection).zza();
        }
        Comparator comparator = this.f3001v;
        if (!b.i(comparator, collection) || collection.size() <= 1) {
            return super.containsAll(collection);
        }
        l listIterator = this.f2943x.listIterator(0);
        Iterator it = collection.iterator();
        if (listIterator.hasNext()) {
            Object next = it.next();
            Object next2 = listIterator.next();
            while (true) {
                try {
                    int compare = comparator.compare(next2, next);
                    if (compare >= 0) {
                        if (compare != 0) {
                            break;
                        }
                        if (!it.hasNext()) {
                            return true;
                        }
                        next = it.next();
                    } else {
                        if (!listIterator.hasNext()) {
                            break;
                        }
                        next2 = listIterator.next();
                    }
                } catch (ClassCastException | NullPointerException unused) {
                }
            }
        }
        return false;
    }

    @Override // bg.k
    public final int d() {
        return this.f2943x.d();
    }

    @Override // java.util.NavigableSet
    public final Iterator descendingIterator() {
        return this.f2943x.i().listIterator(0);
    }

    @Override // bg.k
    public final h0 e() {
        return this.f2943x.listIterator(0);
    }

    @Override // bg.r, java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof Set) {
            Set set = (Set) obj;
            p pVar = this.f2943x;
            if (pVar.size() == set.size()) {
                if (isEmpty()) {
                    return true;
                }
                Comparator comparator = this.f3001v;
                if (!b.i(comparator, set)) {
                    return containsAll(set);
                }
                Iterator it = set.iterator();
                try {
                    l listIterator = pVar.listIterator(0);
                    while (listIterator.hasNext()) {
                        Object next = listIterator.next();
                        Object next2 = it.next();
                        if (next2 != null && comparator.compare(next, next2) == 0) {
                        }
                    }
                    return true;
                } catch (ClassCastException | NoSuchElementException unused) {
                }
            }
        }
        return false;
    }

    @Override // bg.w, java.util.SortedSet
    public final Object first() {
        if (isEmpty()) {
            throw new NoSuchElementException();
        }
        return this.f2943x.get(0);
    }

    @Override // java.util.NavigableSet
    public final Object floor(Object obj) {
        int u5 = u(obj, true) - 1;
        if (u5 == -1) {
            return null;
        }
        return this.f2943x.get(u5);
    }

    @Override // bg.k
    public final Object[] h() {
        return this.f2943x.h();
    }

    @Override // java.util.NavigableSet
    public final Object higher(Object obj) {
        int v5 = v(obj, false);
        p pVar = this.f2943x;
        if (v5 == pVar.size()) {
            return null;
        }
        return pVar.get(v5);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set, java.util.NavigableSet
    public final /* synthetic */ Iterator iterator() {
        return this.f2943x.listIterator(0);
    }

    @Override // bg.r
    public final p k() {
        return this.f2943x;
    }

    @Override // bg.w, java.util.SortedSet
    public final Object last() {
        if (isEmpty()) {
            throw new NoSuchElementException();
        }
        return this.f2943x.get(r0.size() - 1);
    }

    @Override // java.util.NavigableSet
    public final Object lower(Object obj) {
        int u5 = u(obj, false) - 1;
        if (u5 == -1) {
            return null;
        }
        return this.f2943x.get(u5);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f2943x.size();
    }

    public final int u(Object obj, boolean z5) {
        obj.getClass();
        int binarySearch = Collections.binarySearch(this.f2943x, obj, this.f3001v);
        return binarySearch >= 0 ? z5 ? binarySearch + 1 : binarySearch : ~binarySearch;
    }

    public final int v(Object obj, boolean z5) {
        obj.getClass();
        int binarySearch = Collections.binarySearch(this.f2943x, obj, this.f3001v);
        return binarySearch >= 0 ? z5 ? binarySearch : binarySearch + 1 : ~binarySearch;
    }

    public final d0 w(int i5, int i6) {
        p pVar = this.f2943x;
        if (i5 == 0) {
            if (i6 == pVar.size()) {
                return this;
            }
            i5 = 0;
        }
        Comparator comparator = this.f3001v;
        return i5 < i6 ? new d0(pVar.subList(i5, i6), comparator) : w.s(comparator);
    }
}
