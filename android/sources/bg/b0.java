package bg;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class b0 extends p {

    /* renamed from: w, reason: collision with root package name */
    public static final b0 f2933w = new b0(0, new Object[0]);

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f2934i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f2935v;

    public b0(int i5, Object[] objArr) {
        this.f2934i = objArr;
        this.f2935v = i5;
    }

    @Override // bg.p, bg.k
    public final int a(Object[] objArr) {
        Object[] objArr2 = this.f2934i;
        int i5 = this.f2935v;
        System.arraycopy(objArr2, 0, objArr, 0, i5);
        return i5;
    }

    @Override // bg.k
    public final int b() {
        return this.f2935v;
    }

    @Override // bg.k
    public final int d() {
        return 0;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        b.e(i5, this.f2935v);
        Object obj = this.f2934i[i5];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // bg.k
    public final Object[] h() {
        return this.f2934i;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f2935v;
    }
}
