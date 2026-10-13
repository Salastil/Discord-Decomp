package ij;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class w0 implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public Iterator f10931d;

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f10931d.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        return (String) this.f10931d.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
