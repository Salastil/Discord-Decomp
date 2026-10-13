package zf;

import di.m;
import java.util.ListIterator;
import java.util.NoSuchElementException;
import w3.q;

/* loaded from: classes3.dex */
public final class b extends m implements ListIterator {

    /* renamed from: e, reason: collision with root package name */
    public final int f21220e;

    /* renamed from: i, reason: collision with root package name */
    public int f21221i;

    /* renamed from: v, reason: collision with root package name */
    public final e f21222v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(e eVar, int i5) {
        super(1);
        int size = eVar.size();
        q.G(i5, size);
        this.f21220e = size;
        this.f21221i = i5;
        this.f21222v = eVar;
    }

    public final Object a(int i5) {
        return this.f21222v.get(i5);
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final boolean hasNext() {
        return this.f21221i < this.f21220e;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f21221i > 0;
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f21221i;
        this.f21221i = i5 + 1;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f21221i;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        if (!hasPrevious()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f21221i - 1;
        this.f21221i = i5;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f21221i - 1;
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException();
    }
}
