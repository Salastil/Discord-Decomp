package iq;

import fi.l0;
import java.util.AbstractList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class d0 extends AbstractList implements RandomAccess, s {

    /* renamed from: d, reason: collision with root package name */
    public final r f12198d;

    public d0(r rVar) {
        this.f12198d = rVar;
    }

    @Override // iq.s
    public final void A(t tVar) {
        throw new UnsupportedOperationException();
    }

    @Override // iq.s
    public final d P(int i5) {
        return this.f12198d.P(i5);
    }

    @Override // iq.s
    public final List c() {
        return Collections.unmodifiableList(this.f12198d.f12238d);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        return (String) this.f12198d.get(i5);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        l0 l0Var = new l0();
        l0Var.f8683e = this.f12198d.iterator();
        return l0Var;
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator(int i5) {
        c0 c0Var = new c0();
        c0Var.f12196d = this.f12198d.listIterator(i5);
        return c0Var;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f12198d.size();
    }

    @Override // iq.s
    public final d0 f() {
        return this;
    }
}
