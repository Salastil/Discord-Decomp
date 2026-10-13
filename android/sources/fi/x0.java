package fi;

/* loaded from: classes3.dex */
public final class x0 extends h0 {
    public static final Object[] F;
    public static final x0 G;
    public final transient int E;

    /* renamed from: v, reason: collision with root package name */
    public final transient Object[] f8737v;

    /* renamed from: w, reason: collision with root package name */
    public final transient int f8738w;

    /* renamed from: x, reason: collision with root package name */
    public final transient Object[] f8739x;

    /* renamed from: y, reason: collision with root package name */
    public final transient int f8740y;

    static {
        Object[] objArr = new Object[0];
        F = objArr;
        G = new x0(0, 0, 0, objArr, objArr);
    }

    public x0(int i5, int i6, int i10, Object[] objArr, Object[] objArr2) {
        this.f8737v = objArr;
        this.f8738w = i5;
        this.f8739x = objArr2;
        this.f8740y = i6;
        this.E = i10;
    }

    @Override // fi.z
    public final int b(int i5, Object[] objArr) {
        Object[] objArr2 = this.f8737v;
        int i6 = this.E;
        System.arraycopy(objArr2, 0, objArr, i5, i6);
        return i5 + i6;
    }

    @Override // fi.z, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj != null) {
            Object[] objArr = this.f8739x;
            if (objArr.length != 0) {
                int q5 = p.q(obj);
                while (true) {
                    int i5 = q5 & this.f8740y;
                    Object obj2 = objArr[i5];
                    if (obj2 == null) {
                        return false;
                    }
                    if (obj2.equals(obj)) {
                        return true;
                    }
                    q5 = i5 + 1;
                }
            }
        }
        return false;
    }

    @Override // fi.z
    public final Object[] d() {
        return this.f8737v;
    }

    @Override // fi.z
    public final int e() {
        return this.E;
    }

    @Override // fi.z
    public final int h() {
        return 0;
    }

    @Override // fi.h0, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f8738w;
    }

    @Override // fi.z
    public final boolean i() {
        return false;
    }

    @Override // fi.h0
    public final e0 n() {
        return e0.j(this.E, this.f8737v);
    }

    @Override // fi.h0
    /* renamed from: p */
    public final e1 iterator() {
        return a().listIterator(0);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.E;
    }
}
