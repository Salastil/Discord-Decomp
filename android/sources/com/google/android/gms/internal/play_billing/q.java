package com.google.android.gms.internal.play_billing;

import java.util.ListIterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class q extends f0 implements ListIterator {

    /* renamed from: d, reason: collision with root package name */
    public final int f5802d;

    /* renamed from: e, reason: collision with root package name */
    public int f5803e;

    /* renamed from: i, reason: collision with root package name */
    public final t f5804i;

    public q(t tVar, int i5) {
        int size = tVar.size();
        a2.q(i5, size);
        this.f5802d = size;
        this.f5803e = i5;
        this.f5804i = tVar;
    }

    public final Object a(int i5) {
        return this.f5804i.get(i5);
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final boolean hasNext() {
        return this.f5803e < this.f5802d;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f5803e > 0;
    }

    @Override // java.util.Iterator, java.util.ListIterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f5803e;
        this.f5803e = i5 + 1;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f5803e;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        if (!hasPrevious()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f5803e - 1;
        this.f5803e = i5;
        return a(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f5803e - 1;
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException();
    }
}
