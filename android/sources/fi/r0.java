package fi;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class r0 extends e0 {

    /* renamed from: w, reason: collision with root package name */
    public static final r0 f8704w = new r0(0, new Object[0]);

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f8705i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f8706v;

    public r0(int i5, Object[] objArr) {
        this.f8705i = objArr;
        this.f8706v = i5;
    }

    @Override // fi.e0, fi.z
    public final int b(int i5, Object[] objArr) {
        Object[] objArr2 = this.f8705i;
        int i6 = this.f8706v;
        System.arraycopy(objArr2, 0, objArr, i5, i6);
        return i5 + i6;
    }

    @Override // fi.z
    public final Object[] d() {
        return this.f8705i;
    }

    @Override // fi.z
    public final int e() {
        return this.f8706v;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        ys.d.r(i5, this.f8706v);
        Object obj = this.f8705i[i5];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // fi.z
    public final int h() {
        return 0;
    }

    @Override // fi.z
    public final boolean i() {
        return false;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f8706v;
    }
}
