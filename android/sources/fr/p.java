package fr;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class p implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public boolean f9030d = true;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ q f9031e;

    public p(q qVar) {
        this.f9031e = qVar;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f9030d;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!this.f9030d) {
            throw new NoSuchElementException();
        }
        this.f9030d = false;
        return this.f9031e.f9032d;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
