package io.sentry;

import java.io.Serializable;
import java.util.AbstractCollection;
import java.util.Arrays;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Queue;

/* loaded from: classes3.dex */
public final class f extends AbstractCollection implements Queue, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final transient Object[] f11536d;

    /* renamed from: e, reason: collision with root package name */
    public transient int f11537e = 0;

    /* renamed from: i, reason: collision with root package name */
    public transient int f11538i = 0;

    /* renamed from: v, reason: collision with root package name */
    public transient boolean f11539v = false;

    /* renamed from: w, reason: collision with root package name */
    public final int f11540w;

    public f(int i5) {
        if (i5 <= 0) {
            throw new IllegalArgumentException("The size must be greater than 0");
        }
        Object[] objArr = new Object[i5];
        this.f11536d = objArr;
        this.f11540w = objArr.length;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Queue
    public final boolean add(Object obj) {
        if (obj == null) {
            throw new NullPointerException("Attempted to add null object to queue");
        }
        int size = size();
        int i5 = this.f11540w;
        if (size == i5) {
            remove();
        }
        int i6 = this.f11538i;
        int i10 = i6 + 1;
        this.f11538i = i10;
        this.f11536d[i6] = obj;
        if (i10 >= i5) {
            this.f11538i = 0;
        }
        if (this.f11538i == this.f11537e) {
            this.f11539v = true;
        }
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final void clear() {
        this.f11539v = false;
        this.f11537e = 0;
        this.f11538i = 0;
        Arrays.fill(this.f11536d, (Object) null);
    }

    @Override // java.util.Queue
    public final Object element() {
        if (isEmpty()) {
            throw new NoSuchElementException("queue is empty");
        }
        return peek();
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final boolean isEmpty() {
        return size() == 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        return new e(this);
    }

    @Override // java.util.Queue
    public final boolean offer(Object obj) {
        add(obj);
        return true;
    }

    @Override // java.util.Queue
    public final Object peek() {
        if (isEmpty()) {
            return null;
        }
        return this.f11536d[this.f11537e];
    }

    @Override // java.util.Queue
    public final Object poll() {
        if (isEmpty()) {
            return null;
        }
        return remove();
    }

    @Override // java.util.Queue
    public final Object remove() {
        if (isEmpty()) {
            throw new NoSuchElementException("queue is empty");
        }
        int i5 = this.f11537e;
        Object[] objArr = this.f11536d;
        Object obj = objArr[i5];
        if (obj != null) {
            int i6 = i5 + 1;
            this.f11537e = i6;
            objArr[i5] = null;
            if (i6 >= this.f11540w) {
                this.f11537e = 0;
            }
            this.f11539v = false;
        }
        return obj;
    }

    @Override // java.util.AbstractCollection, java.util.Collection
    public final int size() {
        int i5 = this.f11538i;
        int i6 = this.f11537e;
        int i10 = this.f11540w;
        if (i5 < i6) {
            return (i10 - i6) + i5;
        }
        if (i5 != i6) {
            return i5 - i6;
        }
        if (this.f11539v) {
            return i10;
        }
        return 0;
    }
}
