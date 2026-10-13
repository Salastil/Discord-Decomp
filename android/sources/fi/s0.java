package fi;

import java.util.AbstractMap;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class s0 extends e0 {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ t0 f8710i;

    public s0(t0 t0Var) {
        this.f8710i = t0Var;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        t0 t0Var = this.f8710i;
        ys.d.r(i5, t0Var.f8720x);
        Object[] objArr = t0Var.f8719w;
        int i6 = i5 * 2;
        Object obj = objArr[i6];
        Objects.requireNonNull(obj);
        Object obj2 = objArr[i6 + 1];
        Objects.requireNonNull(obj2);
        return new AbstractMap.SimpleImmutableEntry(obj, obj2);
    }

    @Override // fi.z
    public final boolean i() {
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f8710i.f8720x;
    }
}
