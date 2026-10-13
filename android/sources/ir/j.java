package ir;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.markers.KMutableIterator;

/* loaded from: classes3.dex */
public final class j implements Iterator, KMutableIterator {

    /* renamed from: d, reason: collision with root package name */
    public final Object f12267d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f12268e = true;

    public j(Object obj) {
        this.f12267d = obj;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f12268e;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!this.f12268e) {
            throw new NoSuchElementException();
        }
        this.f12268e = false;
        return this.f12267d;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
