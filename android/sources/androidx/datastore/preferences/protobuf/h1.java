package androidx.datastore.preferences.protobuf;

import java.util.Iterator;

/* loaded from: classes.dex */
public final class h1 implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public Iterator f1761d;

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f1761d.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        return (String) this.f1761d.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
