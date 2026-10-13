package kotlin.collections;

import java.util.ListIterator;
import kotlin.jvm.internal.markers.KMutableListIterator;

/* loaded from: classes3.dex */
public final class w0 implements ListIterator, KMutableListIterator {

    /* renamed from: d, reason: collision with root package name */
    public final ListIterator f13525d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ x0 f13526e;

    public w0(x0 x0Var, int i5) {
        this.f13526e = x0Var;
        this.f13525d = x0Var.f13527d.listIterator(i0.w(i5, x0Var));
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        ListIterator listIterator = this.f13525d;
        listIterator.add(obj);
        listIterator.previous();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final boolean hasNext() {
        return this.f13525d.hasPrevious();
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f13525d.hasNext();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final Object next() {
        return this.f13525d.previous();
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return c0.f(this.f13526e) - this.f13525d.previousIndex();
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        return this.f13525d.next();
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return c0.f(this.f13526e) - this.f13525d.nextIndex();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final void remove() {
        this.f13525d.remove();
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        this.f13525d.set(obj);
    }
}
