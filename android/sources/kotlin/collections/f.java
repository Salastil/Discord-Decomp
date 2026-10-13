package kotlin.collections;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class f extends a implements List, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    @NotNull
    public static final c f13497d = new c(null);

    @Override // java.util.List
    public final void add(int i5, Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final boolean addAll(int i5, Collection collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof List)) {
            return false;
        }
        Collection other = (Collection) obj;
        f13497d.getClass();
        Intrinsics.checkNotNullParameter(this, "c");
        Intrinsics.checkNotNullParameter(other, "other");
        if (size() == other.size()) {
            Iterator it = other.iterator();
            Iterator<E> it2 = iterator();
            while (it2.hasNext()) {
                if (!Intrinsics.areEqual(it2.next(), it.next())) {
                }
            }
            return true;
        }
        return false;
    }

    public abstract Object get(int i5);

    @Override // java.util.Collection, java.util.List
    public final int hashCode() {
        f13497d.getClass();
        Intrinsics.checkNotNullParameter(this, "c");
        Iterator<E> it = iterator();
        int i5 = 1;
        while (it.hasNext()) {
            Object next = it.next();
            i5 = (i5 * 31) + (next != null ? next.hashCode() : 0);
        }
        return i5;
    }

    public int indexOf(Object obj) {
        Iterator it = iterator();
        int i5 = 0;
        while (it.hasNext()) {
            if (Intrinsics.areEqual(it.next(), obj)) {
                return i5;
            }
            i5++;
        }
        return -1;
    }

    @Override // java.util.Collection, java.lang.Iterable, java.util.List
    public Iterator iterator() {
        return new fo.z(this);
    }

    public int lastIndexOf(Object obj) {
        ListIterator listIterator = listIterator(size());
        while (listIterator.hasPrevious()) {
            if (Intrinsics.areEqual(listIterator.previous(), obj)) {
                return listIterator.nextIndex();
            }
        }
        return -1;
    }

    @Override // java.util.List
    public ListIterator listIterator() {
        return new d(this, 0);
    }

    @Override // java.util.List
    public final Object remove(int i5) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final Object set(int i5, Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final List subList(int i5, int i6) {
        return new e(this, i5, i6);
    }

    @Override // java.util.List
    public ListIterator listIterator(int i5) {
        return new d(this, i5);
    }
}
