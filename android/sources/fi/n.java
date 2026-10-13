package fi;

import java.io.Serializable;
import java.util.AbstractCollection;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class n extends AbstractCollection {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8685d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8686e;

    public /* synthetic */ n(int i5, Serializable serializable) {
        this.f8685d = i5;
        this.f8686e = serializable;
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final void clear() {
        switch (this.f8685d) {
            case 0:
                ((n0) this.f8686e).b();
                break;
            case 1:
                ((t) this.f8686e).clear();
                break;
            default:
                ((d) this.f8686e).clear();
                break;
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public boolean contains(Object obj) {
        switch (this.f8685d) {
            case 0:
                Iterator it = ((n) ((n0) this.f8686e).a().values()).iterator();
                while (it.hasNext()) {
                    if (((Collection) it.next()).contains(obj)) {
                        return true;
                    }
                }
                return false;
            case 1:
            default:
                return super.contains(obj);
            case 2:
                return ((d) this.f8686e).containsValue(obj);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public boolean isEmpty() {
        switch (this.f8685d) {
            case 2:
                return ((d) this.f8686e).isEmpty();
            default:
                return super.isEmpty();
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        switch (this.f8685d) {
            case 0:
                return new a((n0) this.f8686e);
            case 1:
                t tVar = (t) this.f8686e;
                Map b10 = tVar.b();
                return b10 != null ? b10.values().iterator() : new q(tVar, 2);
            default:
                return new l0(((d) this.f8686e).entrySet().iterator());
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public boolean remove(Object obj) {
        switch (this.f8685d) {
            case 2:
                d dVar = (d) this.f8686e;
                try {
                    return super.remove(obj);
                } catch (UnsupportedOperationException unused) {
                    for (Map.Entry entry : dVar.entrySet()) {
                        if (w3.q.j(obj, entry.getValue())) {
                            dVar.remove(entry.getKey());
                            return true;
                        }
                    }
                    return false;
                }
            default:
                return super.remove(obj);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public boolean removeAll(Collection collection) {
        switch (this.f8685d) {
            case 2:
                d dVar = (d) this.f8686e;
                try {
                    collection.getClass();
                    return super.removeAll(collection);
                } catch (UnsupportedOperationException unused) {
                    HashSet hashSet = new HashSet();
                    for (Map.Entry entry : dVar.entrySet()) {
                        if (collection.contains(entry.getValue())) {
                            hashSet.add(entry.getKey());
                        }
                    }
                    return dVar.keySet().removeAll(hashSet);
                }
            default:
                return super.removeAll(collection);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public boolean retainAll(Collection collection) {
        switch (this.f8685d) {
            case 2:
                d dVar = (d) this.f8686e;
                try {
                    collection.getClass();
                    return super.retainAll(collection);
                } catch (UnsupportedOperationException unused) {
                    HashSet hashSet = new HashSet();
                    for (Map.Entry entry : dVar.entrySet()) {
                        if (collection.contains(entry.getValue())) {
                            hashSet.add(entry.getKey());
                        }
                    }
                    return dVar.keySet().retainAll(hashSet);
                }
            default:
                return super.retainAll(collection);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final int size() {
        switch (this.f8685d) {
            case 0:
                return ((n0) this.f8686e).f8688w;
            case 1:
                return ((t) this.f8686e).size();
            default:
                return ((d) this.f8686e).f8648i.size();
        }
    }

    public n(d dVar) {
        this.f8685d = 2;
        this.f8686e = dVar;
    }
}
