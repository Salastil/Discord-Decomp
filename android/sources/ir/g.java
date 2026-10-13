package ir;

import java.util.AbstractList;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class g implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public boolean f12261d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12262e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f12263i;

    public g(h hVar) {
        int i5;
        this.f12263i = hVar;
        i5 = ((AbstractList) hVar).modCount;
        this.f12262e = i5;
    }

    public final void a() {
        int i5;
        int i6;
        h hVar = this.f12263i;
        i5 = ((AbstractList) hVar).modCount;
        int i10 = this.f12262e;
        if (i5 == i10) {
            return;
        }
        StringBuilder sb2 = new StringBuilder("ModCount: ");
        i6 = ((AbstractList) hVar).modCount;
        sb2.append(i6);
        sb2.append("; expected: ");
        sb2.append(i10);
        throw new ConcurrentModificationException(sb2.toString());
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return !this.f12261d;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f12261d) {
            throw new NoSuchElementException();
        }
        this.f12261d = true;
        a();
        return this.f12263i.f12265e;
    }

    @Override // java.util.Iterator
    public final void remove() {
        a();
        this.f12263i.clear();
    }
}
