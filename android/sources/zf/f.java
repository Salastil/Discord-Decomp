package zf;

import java.util.Objects;
import w3.q;

/* loaded from: classes3.dex */
public final class f extends e {

    /* renamed from: w, reason: collision with root package name */
    public static final f f21228w = new f(0, new Object[0]);

    /* renamed from: i, reason: collision with root package name */
    public final transient Object[] f21229i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f21230v;

    public f(int i5, Object[] objArr) {
        this.f21229i = objArr;
        this.f21230v = i5;
    }

    @Override // zf.a
    public final Object[] a() {
        return this.f21229i;
    }

    @Override // zf.a
    public final int b() {
        return 0;
    }

    @Override // zf.a
    public final int d() {
        return this.f21230v;
    }

    @Override // zf.e, zf.a
    public final int e(Object[] objArr) {
        Object[] objArr2 = this.f21229i;
        int i5 = this.f21230v;
        System.arraycopy(objArr2, 0, objArr, 0, i5);
        return i5;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        q.F(i5, this.f21230v);
        Object obj = this.f21229i[i5];
        Objects.requireNonNull(obj);
        return obj;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f21230v;
    }
}
