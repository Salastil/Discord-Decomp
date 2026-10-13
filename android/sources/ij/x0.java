package ij;

import java.util.AbstractList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class x0 extends AbstractList implements x, RandomAccess {

    /* renamed from: d, reason: collision with root package name */
    public final w f10932d;

    public x0(w wVar) {
        this.f10932d = wVar;
    }

    @Override // ij.x
    public final void C(g gVar) {
        throw new UnsupportedOperationException();
    }

    @Override // ij.x
    public final List c() {
        return Collections.unmodifiableList(this.f10932d.f10930e);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        return (String) this.f10932d.get(i5);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        w0 w0Var = new w0();
        w0Var.f10931d = this.f10932d.iterator();
        return w0Var;
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator(int i5) {
        v0 v0Var = new v0();
        v0Var.f10929d = this.f10932d.listIterator(i5);
        return v0Var;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f10932d.f10930e.size();
    }

    @Override // ij.x
    public final x f() {
        return this;
    }
}
