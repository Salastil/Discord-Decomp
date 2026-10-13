package di;

import java.util.ListIterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class g extends m implements ListIterator {

    /* renamed from: e, reason: collision with root package name */
    public final int f7582e;

    /* renamed from: i, reason: collision with root package name */
    public int f7583i;

    /* renamed from: v, reason: collision with root package name */
    public final i f7584v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(i iVar, int i5) {
        super(0);
        int size = iVar.size();
        if (i5 < 0 || i5 > size) {
            throw new IndexOutOfBoundsException(w3.q.h(i5, size, "index"));
        }
        this.f7582e = size;
        this.f7583i = i5;
        this.f7584v = iVar;
    }

    public final Object a(int i5) {
        return this.f7584v.get(i5);
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final boolean hasNext() {
        return this.f7583i < this.f7582e;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f7583i > 0;
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f7583i;
        this.f7583i = i5 + 1;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f7583i;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        if (!hasPrevious()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f7583i - 1;
        this.f7583i = i5;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f7583i - 1;
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException();
    }
}
