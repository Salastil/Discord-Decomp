package bg;

import java.util.ListIterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class l extends h0 implements ListIterator {

    /* renamed from: d, reason: collision with root package name */
    public final int f2962d;

    /* renamed from: e, reason: collision with root package name */
    public int f2963e;

    /* renamed from: i, reason: collision with root package name */
    public final p f2964i;

    public l(p pVar, int i5) {
        int size = pVar.size();
        if (i5 < 0 || i5 > size) {
            throw new IndexOutOfBoundsException(b.n(i5, size, "index"));
        }
        this.f2962d = size;
        this.f2963e = i5;
        this.f2964i = pVar;
    }

    public final Object a(int i5) {
        return this.f2964i.get(i5);
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final boolean hasNext() {
        return this.f2963e < this.f2962d;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f2963e > 0;
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f2963e;
        this.f2963e = i5 + 1;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f2963e;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        if (!hasPrevious()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f2963e - 1;
        this.f2963e = i5;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f2963e - 1;
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException();
    }
}
