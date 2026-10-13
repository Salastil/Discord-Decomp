package fi;

import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class a implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final Iterator f8629d;

    /* renamed from: e, reason: collision with root package name */
    public Object f8630e = null;

    /* renamed from: i, reason: collision with root package name */
    public Collection f8631i = null;

    /* renamed from: v, reason: collision with root package name */
    public Iterator f8632v = k0.f8674d;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ n0 f8633w;

    public a(n0 n0Var) {
        this.f8633w = n0Var;
        this.f8629d = n0Var.f8687v.entrySet().iterator();
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f8629d.hasNext() || this.f8632v.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!this.f8632v.hasNext()) {
            Map.Entry entry = (Map.Entry) this.f8629d.next();
            this.f8630e = entry.getKey();
            Collection collection = (Collection) entry.getValue();
            this.f8631i = collection;
            this.f8632v = collection.iterator();
        }
        return this.f8632v.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        this.f8632v.remove();
        Collection collection = this.f8631i;
        Objects.requireNonNull(collection);
        if (collection.isEmpty()) {
            this.f8629d.remove();
        }
        n0 n0Var = this.f8633w;
        n0Var.f8688w--;
    }
}
