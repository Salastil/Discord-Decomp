package fi;

import java.util.Comparator;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.SortedSet;

/* loaded from: classes3.dex */
public final class b1 extends a1 implements SortedSet {
    @Override // java.util.SortedSet
    public final Comparator comparator() {
        return ((SortedSet) this.f8636d).comparator();
    }

    @Override // java.util.SortedSet
    public final Object first() {
        Iterator it = this.f8636d.iterator();
        it.getClass();
        ei.g gVar = this.f8637e;
        gVar.getClass();
        while (it.hasNext()) {
            Object next = it.next();
            if (gVar.apply(next)) {
                return next;
            }
        }
        throw new NoSuchElementException();
    }

    @Override // java.util.SortedSet
    public final SortedSet headSet(Object obj) {
        return new b1(((SortedSet) this.f8636d).headSet(obj), this.f8637e);
    }

    @Override // java.util.SortedSet
    public final Object last() {
        SortedSet sortedSet = (SortedSet) this.f8636d;
        while (true) {
            Object last = sortedSet.last();
            if (this.f8637e.apply(last)) {
                return last;
            }
            sortedSet = sortedSet.headSet(last);
        }
    }

    @Override // java.util.SortedSet
    public final SortedSet subSet(Object obj, Object obj2) {
        return new b1(((SortedSet) this.f8636d).subSet(obj, obj2), this.f8637e);
    }

    @Override // java.util.SortedSet
    public final SortedSet tailSet(Object obj) {
        return new b1(((SortedSet) this.f8636d).tailSet(obj), this.f8637e);
    }
}
