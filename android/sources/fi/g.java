package fi;

import java.util.Iterator;
import java.util.NavigableMap;
import java.util.NavigableSet;
import java.util.SortedMap;
import java.util.SortedSet;

/* loaded from: classes3.dex */
public final class g extends j implements NavigableSet {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ n0 f8660v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(n0 n0Var, NavigableMap navigableMap) {
        super(n0Var, navigableMap);
        this.f8660v = n0Var;
    }

    @Override // fi.j
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final NavigableMap a() {
        return (NavigableMap) ((SortedMap) this.f8654d);
    }

    @Override // java.util.NavigableSet
    public final Object ceiling(Object obj) {
        return a().ceilingKey(obj);
    }

    @Override // java.util.NavigableSet
    public final Iterator descendingIterator() {
        return ((e) descendingSet()).iterator();
    }

    @Override // java.util.NavigableSet
    public final NavigableSet descendingSet() {
        return new g(this.f8660v, a().descendingMap());
    }

    @Override // java.util.NavigableSet
    public final Object floor(Object obj) {
        return a().floorKey(obj);
    }

    @Override // fi.j, java.util.SortedSet, java.util.NavigableSet
    public final SortedSet headSet(Object obj) {
        return headSet(obj, false);
    }

    @Override // java.util.NavigableSet
    public final Object higher(Object obj) {
        return a().higherKey(obj);
    }

    @Override // java.util.NavigableSet
    public final Object lower(Object obj) {
        return a().lowerKey(obj);
    }

    @Override // java.util.NavigableSet
    public final Object pollFirst() {
        c cVar = (c) iterator();
        if (!cVar.hasNext()) {
            return null;
        }
        Object next = cVar.next();
        cVar.remove();
        return next;
    }

    @Override // java.util.NavigableSet
    public final Object pollLast() {
        Iterator descendingIterator = descendingIterator();
        if (!descendingIterator.hasNext()) {
            return null;
        }
        Object next = descendingIterator.next();
        descendingIterator.remove();
        return next;
    }

    @Override // fi.j, java.util.SortedSet, java.util.NavigableSet
    public final SortedSet subSet(Object obj, Object obj2) {
        return subSet(obj, true, obj2, false);
    }

    @Override // fi.j, java.util.SortedSet, java.util.NavigableSet
    public final SortedSet tailSet(Object obj) {
        return tailSet(obj, true);
    }

    @Override // java.util.NavigableSet
    public final NavigableSet headSet(Object obj, boolean z5) {
        return new g(this.f8660v, a().headMap(obj, z5));
    }

    @Override // java.util.NavigableSet
    public final NavigableSet subSet(Object obj, boolean z5, Object obj2, boolean z6) {
        return new g(this.f8660v, a().subMap(obj, z5, obj2, z6));
    }

    @Override // java.util.NavigableSet
    public final NavigableSet tailSet(Object obj, boolean z5) {
        return new g(this.f8660v, a().tailMap(obj, z5));
    }
}
