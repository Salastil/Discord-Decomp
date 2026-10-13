package kotlin.collections;

import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x0 extends l {

    /* renamed from: d, reason: collision with root package name */
    public final List f13527d;

    public x0(List delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f13527d = delegate;
    }

    @Override // kotlin.collections.l
    public final int a() {
        return this.f13527d.size();
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        this.f13527d.add(i0.w(i5, this), obj);
    }

    @Override // kotlin.collections.l
    public final Object b(int i5) {
        return this.f13527d.remove(i0.v(i5, this));
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        this.f13527d.clear();
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        return this.f13527d.get(i0.v(i5, this));
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        return new w0(this, 0);
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator() {
        return new w0(this, 0);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        return this.f13527d.set(i0.v(i5, this), obj);
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator(int i5) {
        return new w0(this, i5);
    }
}
