package di;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class l extends j {

    /* renamed from: x, reason: collision with root package name */
    public static final Object[] f7593x;

    /* renamed from: y, reason: collision with root package name */
    public static final l f7594y;

    /* renamed from: v, reason: collision with root package name */
    public final transient Object[] f7595v;

    /* renamed from: w, reason: collision with root package name */
    public final transient Object[] f7596w;

    static {
        Object[] objArr = new Object[0];
        f7593x = objArr;
        f7594y = new l(objArr, objArr);
    }

    public l(Object[] objArr, Object[] objArr2) {
        this.f7595v = objArr;
        this.f7596w = objArr2;
    }

    @Override // di.f
    public final int a(Object[] objArr) {
        System.arraycopy(this.f7595v, 0, objArr, 0, 0);
        return 0;
    }

    @Override // di.f
    public final int b() {
        return 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj == null) {
            return false;
        }
        int length = this.f7596w.length;
        return false;
    }

    @Override // di.f
    public final int d() {
        return 0;
    }

    @Override // di.f
    public final Object[] e() {
        return this.f7595v;
    }

    @Override // java.util.Collection, java.util.Set
    public final int hashCode() {
        return 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        k kVar = this.f7590e;
        if (kVar == null) {
            g gVar = i.f7588e;
            kVar = k.f7591v;
            this.f7590e = kVar;
        }
        return kVar.listIterator(0);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return 0;
    }
}
