package v;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.CollectionToArray;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableList;

/* loaded from: classes.dex */
public final class b implements List, KMutableList {

    /* renamed from: d, reason: collision with root package name */
    public final Object f19125d;

    /* renamed from: e, reason: collision with root package name */
    public final int f19126e;

    /* renamed from: i, reason: collision with root package name */
    public int f19127i;

    public b(List list, int i5, int i6) {
        this.f19125d = list;
        this.f19126e = i5;
        this.f19127i = i6;
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List, java.util.Collection
    public final boolean add(Object obj) {
        int i5 = this.f19127i;
        this.f19127i = i5 + 1;
        this.f19125d.add(i5, obj);
        return true;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final boolean addAll(int i5, Collection collection) {
        this.f19125d.addAll(i5 + this.f19126e, collection);
        int size = collection.size();
        this.f19127i += size;
        return size > 0;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List, java.util.Collection
    public final void clear() {
        int i5 = this.f19127i - 1;
        int i6 = this.f19126e;
        if (i6 <= i5) {
            while (true) {
                this.f19125d.remove(i5);
                if (i5 == i6) {
                    break;
                } else {
                    i5--;
                }
            }
        }
        this.f19127i = i6;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List, java.util.Collection
    public final boolean contains(Object obj) {
        int i5 = this.f19127i;
        for (int i6 = this.f19126e; i6 < i5; i6++) {
            if (Intrinsics.areEqual(this.f19125d.get(i6), obj)) {
                return true;
            }
        }
        return false;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean containsAll(Collection collection) {
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            if (!contains(it.next())) {
                return false;
            }
        }
        return true;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final Object get(int i5) {
        e.a(i5, this);
        return this.f19125d.get(i5 + this.f19126e);
    }

    /* JADX WARN: Type inference failed for: r3v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final int indexOf(Object obj) {
        int i5 = this.f19127i;
        int i6 = this.f19126e;
        for (int i10 = i6; i10 < i5; i10++) {
            if (Intrinsics.areEqual(this.f19125d.get(i10), obj)) {
                return i10 - i6;
            }
        }
        return -1;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean isEmpty() {
        return this.f19127i == this.f19126e;
    }

    @Override // java.util.List, java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        return new c(this, 0);
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final int lastIndexOf(Object obj) {
        int i5 = this.f19127i - 1;
        int i6 = this.f19126e;
        if (i6 > i5) {
            return -1;
        }
        while (!Intrinsics.areEqual(this.f19125d.get(i5), obj)) {
            if (i5 == i6) {
                return -1;
            }
            i5--;
        }
        return i5 - i6;
    }

    @Override // java.util.List
    public final ListIterator listIterator() {
        return new c(this, 0);
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List, java.util.Collection
    public final boolean remove(Object obj) {
        int i5 = this.f19127i;
        for (int i6 = this.f19126e; i6 < i5; i6++) {
            ?? r22 = this.f19125d;
            if (Intrinsics.areEqual(r22.get(i6), obj)) {
                r22.remove(i6);
                this.f19127i--;
                return true;
            }
        }
        return false;
    }

    @Override // java.util.List, java.util.Collection
    public final boolean removeAll(Collection collection) {
        int i5 = this.f19127i;
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            remove(it.next());
        }
        return i5 != this.f19127i;
    }

    /* JADX WARN: Type inference failed for: r3v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List, java.util.Collection
    public final boolean retainAll(Collection collection) {
        int i5 = this.f19127i;
        int i6 = i5 - 1;
        int i10 = this.f19126e;
        if (i10 <= i6) {
            while (true) {
                ?? r32 = this.f19125d;
                if (!collection.contains(r32.get(i6))) {
                    r32.remove(i6);
                    this.f19127i--;
                }
                if (i6 == i10) {
                    break;
                }
                i6--;
            }
        }
        return i5 != this.f19127i;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final Object set(int i5, Object obj) {
        e.a(i5, this);
        return this.f19125d.set(i5 + this.f19126e, obj);
    }

    @Override // java.util.List, java.util.Collection
    public final int size() {
        return this.f19127i - this.f19126e;
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

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final void add(int i5, Object obj) {
        this.f19125d.add(i5 + this.f19126e, obj);
        this.f19127i++;
    }

    @Override // java.util.List
    public final ListIterator listIterator(int i5) {
        return new c(this, i5);
    }

    @Override // java.util.List, java.util.Collection
    public final Object[] toArray(Object[] objArr) {
        return CollectionToArray.toArray(this, objArr);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List, java.util.Collection
    public final boolean addAll(Collection collection) {
        this.f19125d.addAll(this.f19127i, collection);
        int size = collection.size();
        this.f19127i += size;
        return size > 0;
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.List
    public final Object remove(int i5) {
        e.a(i5, this);
        this.f19127i--;
        return this.f19125d.remove(i5 + this.f19126e);
    }
}
