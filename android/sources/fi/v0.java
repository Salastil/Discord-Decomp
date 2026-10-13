package fi;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class v0 extends e0 {

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f8724i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f8725v;

    /* renamed from: w, reason: collision with root package name */
    public final transient int f8726w;

    public v0(Object[] objArr, int i5, int i6) {
        this.f8724i = objArr;
        this.f8725v = i5;
        this.f8726w = i6;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        ys.d.r(i5, this.f8726w);
        Object obj = this.f8724i[(i5 * 2) + this.f8725v];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // fi.z
    public final boolean i() {
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f8726w;
    }
}
