package androidx.datastore.preferences.protobuf;

import java.util.AbstractList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;

/* loaded from: classes.dex */
public final class i1 extends AbstractList implements a0, RandomAccess {

    /* renamed from: d, reason: collision with root package name */
    public final z f1764d;

    public i1(z zVar) {
        this.f1764d = zVar;
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final Object R(int i5) {
        return this.f1764d.f1851e.get(i5);
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final List c() {
        return Collections.unmodifiableList(this.f1764d.f1851e);
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final a0 f() {
        return this;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        return (String) this.f1764d.get(i5);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        h1 h1Var = new h1();
        h1Var.f1761d = this.f1764d.iterator();
        return h1Var;
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator listIterator(int i5) {
        g1 g1Var = new g1();
        g1Var.f1756d = this.f1764d.listIterator(i5);
        return g1Var;
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final void q(f fVar) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1764d.size();
    }
}
