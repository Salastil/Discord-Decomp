package go;

import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j extends a {

    /* renamed from: d, reason: collision with root package name */
    public final i f9415d;

    public j(i backing) {
        Intrinsics.checkNotNullParameter(backing, "backing");
        this.f9415d = backing;
    }

    @Override // kotlin.collections.m
    public final int a() {
        return this.f9415d.F;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean add(Object obj) {
        Map.Entry element = (Map.Entry) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        throw new UnsupportedOperationException();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        throw new UnsupportedOperationException();
    }

    @Override // go.a
    public final boolean b(Map.Entry element) {
        Intrinsics.checkNotNullParameter(element, "element");
        return this.f9415d.f(element);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final void clear() {
        this.f9415d.clear();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean containsAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        return this.f9415d.e(elements);
    }

    @Override // go.a
    public final boolean d(Map.Entry entry) {
        Intrinsics.checkNotNullParameter(entry, "element");
        i iVar = this.f9415d;
        iVar.getClass();
        Intrinsics.checkNotNullParameter(entry, "entry");
        iVar.c();
        int h6 = iVar.h(entry.getKey());
        if (h6 < 0) {
            return false;
        }
        Object[] objArr = iVar.f9409e;
        Intrinsics.checkNotNull(objArr);
        if (!Intrinsics.areEqual(objArr[h6], entry.getValue())) {
            return false;
        }
        iVar.l(h6);
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean isEmpty() {
        return this.f9415d.isEmpty();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        i map = this.f9415d;
        map.getClass();
        Intrinsics.checkNotNullParameter(map, "map");
        return new g(map, 0);
    }

    @Override // java.util.AbstractSet, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean removeAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9415d.c();
        return super.removeAll(elements);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean retainAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9415d.c();
        return super.retainAll(elements);
    }
}
