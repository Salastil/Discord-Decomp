package iq;

import java.util.ListIterator;

/* loaded from: classes3.dex */
public final class c0 implements ListIterator {

    /* renamed from: d, reason: collision with root package name */
    public ListIterator f12196d;

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final boolean hasNext() {
        return this.f12196d.hasNext();
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f12196d.hasPrevious();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final Object next() {
        return (String) this.f12196d.next();
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f12196d.nextIndex();
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        return (String) this.f12196d.previous();
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f12196d.previousIndex();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException();
    }
}
