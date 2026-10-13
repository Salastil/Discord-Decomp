package fi;

import java.util.Collection;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public class e extends c1 {

    /* renamed from: d, reason: collision with root package name */
    public final Map f8654d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ n0 f8655e;

    public e(n0 n0Var, Map map) {
        this.f8655e = n0Var;
        map.getClass();
        this.f8654d = map;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final void clear() {
        Iterator it = iterator();
        while (true) {
            c cVar = (c) it;
            if (!cVar.hasNext()) {
                return;
            }
            cVar.next();
            cVar.remove();
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f8654d.containsKey(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean containsAll(Collection collection) {
        return this.f8654d.keySet().containsAll(collection);
    }

    @Override // java.util.AbstractSet, java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        return this == obj || this.f8654d.keySet().equals(obj);
    }

    @Override // java.util.AbstractSet, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f8654d.keySet().hashCode();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean isEmpty() {
        return this.f8654d.isEmpty();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        return new c(this, this.f8654d.entrySet().iterator());
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean remove(Object obj) {
        int i5;
        Collection collection = (Collection) this.f8654d.remove(obj);
        if (collection != null) {
            i5 = collection.size();
            collection.clear();
            this.f8655e.f8688w -= i5;
        } else {
            i5 = 0;
        }
        return i5 > 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f8654d.size();
    }
}
