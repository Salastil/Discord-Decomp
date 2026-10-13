package go;

import java.util.Collection;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends kotlin.collections.k {

    /* renamed from: d, reason: collision with root package name */
    public final i f9417d;

    public l(i backing) {
        Intrinsics.checkNotNullParameter(backing, "backing");
        this.f9417d = backing;
    }

    @Override // kotlin.collections.k
    public final int a() {
        return this.f9417d.F;
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        throw new UnsupportedOperationException();
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final void clear() {
        this.f9417d.clear();
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean contains(Object obj) {
        return this.f9417d.containsValue(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean isEmpty() {
        return this.f9417d.isEmpty();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        i map = this.f9417d;
        map.getClass();
        Intrinsics.checkNotNullParameter(map, "map");
        return new g(map, 2);
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean remove(Object obj) {
        i iVar = this.f9417d;
        iVar.c();
        int i5 = iVar.i(obj);
        if (i5 < 0) {
            return false;
        }
        iVar.l(i5);
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean removeAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9417d.c();
        return super.removeAll(elements);
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean retainAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9417d.c();
        return super.retainAll(elements);
    }
}
