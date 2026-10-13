package kotlin.collections;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public abstract class b implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public int f13487d;

    /* renamed from: e, reason: collision with root package name */
    public Object f13488e;

    public abstract void a();

    @Override // java.util.Iterator
    public final boolean hasNext() {
        int i5 = this.f13487d;
        if (i5 == 0) {
            this.f13487d = 3;
            a();
            return this.f13487d == 1;
        }
        if (i5 == 1) {
            return true;
        }
        if (i5 == 2) {
            return false;
        }
        throw new IllegalArgumentException("hasNext called when the iterator is in the FAILED state.");
    }

    @Override // java.util.Iterator
    public final Object next() {
        int i5 = this.f13487d;
        if (i5 == 1) {
            this.f13487d = 0;
            return this.f13488e;
        }
        if (i5 != 2) {
            this.f13487d = 3;
            a();
            if (this.f13487d == 1) {
                this.f13487d = 0;
                return this.f13488e;
            }
        }
        throw new NoSuchElementException();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
