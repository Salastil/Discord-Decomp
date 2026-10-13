package kotlin.collections;

import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class y0 implements ListIterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final ListIterator f13528d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ z0 f13529e;

    public y0(z0 z0Var, int i5) {
        this.f13529e = z0Var;
        this.f13528d = ((List) z0Var.f13531i).listIterator(i0.w(i5, z0Var));
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final boolean hasNext() {
        return this.f13528d.hasPrevious();
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f13528d.hasNext();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final Object next() {
        return this.f13528d.previous();
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return c0.f(this.f13529e) - this.f13528d.previousIndex();
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        return this.f13528d.next();
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return c0.f(this.f13529e) - this.f13528d.nextIndex();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
