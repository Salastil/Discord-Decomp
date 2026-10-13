package v;

import java.util.List;
import java.util.ListIterator;
import kotlin.jvm.internal.markers.KMutableListIterator;

/* loaded from: classes.dex */
public final class c implements ListIterator, KMutableListIterator {

    /* renamed from: d, reason: collision with root package name */
    public final Object f19128d;

    /* renamed from: e, reason: collision with root package name */
    public int f19129e;

    public c(List list, int i5) {
        this.f19128d = list;
        this.f19129e = i5;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.ListIterator
    public final void add(Object obj) {
        this.f19128d.add(this.f19129e, obj);
        this.f19129e++;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.ListIterator, java.util.Iterator
    public final boolean hasNext() {
        return this.f19129e < this.f19128d.size();
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f19129e > 0;
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [java.lang.Object, java.util.List] */
    @Override // java.util.ListIterator, java.util.Iterator
    public final Object next() {
        int i5 = this.f19129e;
        this.f19129e = i5 + 1;
        return this.f19128d.get(i5);
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f19129e;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.ListIterator
    public final Object previous() {
        int i5 = this.f19129e - 1;
        this.f19129e = i5;
        return this.f19128d.get(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f19129e - 1;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.ListIterator, java.util.Iterator
    public final void remove() {
        int i5 = this.f19129e - 1;
        this.f19129e = i5;
        this.f19128d.remove(i5);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.List] */
    @Override // java.util.ListIterator
    public final void set(Object obj) {
        this.f19128d.set(this.f19129e, obj);
    }
}
