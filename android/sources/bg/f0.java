package bg;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class f0 extends r {

    /* renamed from: v, reason: collision with root package name */
    public final transient Object f2949v;

    public f0(Object obj) {
        this.f2949v = obj;
    }

    @Override // bg.k
    public final int a(Object[] objArr) {
        objArr[0] = this.f2949v;
        return 1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f2949v.equals(obj);
    }

    @Override // bg.k
    public final h0 e() {
        return new x(this.f2949v);
    }

    @Override // bg.r, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f2949v.hashCode();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return new x(this.f2949v);
    }

    @Override // bg.r
    public final p k() {
        Object[] objArr = {this.f2949v};
        for (int i5 = 0; i5 < 1; i5++) {
            l lVar = p.f2980e;
            if (objArr[i5] == null) {
                throw new NullPointerException(k0.d.i(i5, "at index "));
            }
        }
        return p.k(1, objArr);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return 1;
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        return s4.h.f("[", this.f2949v.toString(), "]");
    }
}
