package ir;

import java.util.Iterator;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableIterator;

/* loaded from: classes3.dex */
public final class i implements Iterator, KMutableIterator {

    /* renamed from: d, reason: collision with root package name */
    public final Iterator f12266d;

    public i(Object[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        this.f12266d = ArrayIteratorKt.iterator(array);
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f12266d.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        return this.f12266d.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
