package fi;

import java.util.Iterator;
import java.util.ListIterator;

/* loaded from: classes3.dex */
public final class d0 extends e0 {

    /* renamed from: i, reason: collision with root package name */
    public final transient int f8650i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f8651v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ e0 f8652w;

    public d0(e0 e0Var, int i5, int i6) {
        this.f8652w = e0Var;
        this.f8650i = i5;
        this.f8651v = i6;
    }

    @Override // fi.z
    public final Object[] d() {
        return this.f8652w.d();
    }

    @Override // fi.z
    public final int e() {
        return this.f8652w.h() + this.f8650i + this.f8651v;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        ys.d.r(i5, this.f8651v);
        return this.f8652w.get(i5 + this.f8650i);
    }

    @Override // fi.z
    public final int h() {
        return this.f8652w.h() + this.f8650i;
    }

    @Override // fi.z
    public final boolean i() {
        return true;
    }

    @Override // fi.e0, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        return listIterator(0);
    }

    @Override // fi.e0, java.util.List
    public final ListIterator listIterator() {
        return listIterator(0);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f8651v;
    }

    @Override // fi.e0, java.util.List
    /* renamed from: u */
    public final e0 subList(int i5, int i6) {
        ys.d.u(i5, i6, this.f8651v);
        int i10 = this.f8650i;
        return this.f8652w.subList(i5 + i10, i6 + i10);
    }

    @Override // fi.e0, java.util.List
    public final /* bridge */ /* synthetic */ ListIterator listIterator(int i5) {
        return listIterator(i5);
    }
}
