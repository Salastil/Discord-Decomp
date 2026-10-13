package di;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class k extends i {

    /* renamed from: v, reason: collision with root package name */
    public static final k f7591v = new k(new Object[0]);

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f7592i;

    public k(Object[] objArr) {
        this.f7592i = objArr;
    }

    @Override // di.i, di.f
    public final int a(Object[] objArr) {
        System.arraycopy(this.f7592i, 0, objArr, 0, 0);
        return 0;
    }

    @Override // di.f
    public final int b() {
        return 0;
    }

    @Override // di.f
    public final int d() {
        return 0;
    }

    @Override // di.f
    public final Object[] e() {
        return this.f7592i;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        w3.q.d(i5, 0);
        Object obj = this.f7592i[i5];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return 0;
    }
}
