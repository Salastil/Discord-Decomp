package fi;

import java.util.Collection;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;

/* loaded from: classes3.dex */
public class c implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8639d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Iterator f8640e;

    /* renamed from: i, reason: collision with root package name */
    public Object f8641i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f8642v;

    public c(l lVar) {
        this.f8642v = lVar;
        Collection collection = lVar.f8677e;
        this.f8641i = collection;
        this.f8640e = collection instanceof List ? ((List) collection).listIterator() : collection.iterator();
    }

    public void a() {
        l lVar = (l) this.f8642v;
        lVar.b();
        if (lVar.f8677e != ((Collection) this.f8641i)) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f8639d) {
            case 0:
                break;
            case 1:
                break;
            default:
                a();
                break;
        }
        return this.f8640e.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f8639d) {
            case 0:
                Map.Entry entry = (Map.Entry) this.f8640e.next();
                this.f8641i = (Collection) entry.getValue();
                return ((d) this.f8642v).a(entry);
            case 1:
                Map.Entry entry2 = (Map.Entry) this.f8640e.next();
                this.f8641i = entry2;
                return entry2.getKey();
            default:
                a();
                return this.f8640e.next();
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f8639d) {
            case 0:
                if (!(((Collection) this.f8641i) != null)) {
                    throw new IllegalStateException("no calls to next() since the last call to remove()");
                }
                this.f8640e.remove();
                ((d) this.f8642v).f8649v.f8688w -= ((Collection) this.f8641i).size();
                ((Collection) this.f8641i).clear();
                this.f8641i = null;
                return;
            case 1:
                Map.Entry entry = (Map.Entry) this.f8641i;
                if (!(entry != null)) {
                    throw new IllegalStateException("no calls to next() since the last call to remove()");
                }
                Collection collection = (Collection) entry.getValue();
                this.f8640e.remove();
                ((e) this.f8642v).f8655e.f8688w -= collection.size();
                collection.clear();
                this.f8641i = null;
                return;
            default:
                this.f8640e.remove();
                l lVar = (l) this.f8642v;
                n0 n0Var = lVar.f8680w;
                n0Var.f8688w--;
                lVar.d();
                return;
        }
    }

    public c(l lVar, ListIterator listIterator) {
        this.f8642v = lVar;
        this.f8641i = lVar.f8677e;
        this.f8640e = listIterator;
    }

    public c(e eVar, Iterator it) {
        this.f8642v = eVar;
        this.f8640e = it;
    }

    public c(d dVar) {
        this.f8642v = dVar;
        this.f8640e = dVar.f8648i.entrySet().iterator();
    }
}
