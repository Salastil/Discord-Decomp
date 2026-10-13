package fi;

import java.util.ListIterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class c0 extends e1 implements ListIterator {

    /* renamed from: d, reason: collision with root package name */
    public final int f8643d;

    /* renamed from: e, reason: collision with root package name */
    public int f8644e;

    /* renamed from: i, reason: collision with root package name */
    public final e0 f8645i;

    public c0(e0 e0Var, int i5) {
        int size = e0Var.size();
        ys.d.t(i5, size);
        this.f8643d = size;
        this.f8644e = i5;
        this.f8645i = e0Var;
    }

    public final Object a(int i5) {
        return this.f8645i.get(i5);
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final boolean hasNext() {
        return this.f8644e < this.f8643d;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f8644e > 0;
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f8644e;
        this.f8644e = i5 + 1;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f8644e;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        if (!hasPrevious()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f8644e - 1;
        this.f8644e = i5;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f8644e - 1;
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException();
    }
}
