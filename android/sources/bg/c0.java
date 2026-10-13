package bg;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class c0 extends r {
    public static final Object[] F;
    public static final c0 G;
    public final transient int E;

    /* renamed from: v, reason: collision with root package name */
    public final transient Object[] f2938v;

    /* renamed from: w, reason: collision with root package name */
    public final transient int f2939w;

    /* renamed from: x, reason: collision with root package name */
    public final transient Object[] f2940x;

    /* renamed from: y, reason: collision with root package name */
    public final transient int f2941y;

    static {
        Object[] objArr = new Object[0];
        F = objArr;
        G = new c0(0, 0, 0, objArr, objArr);
    }

    public c0(int i5, int i6, int i10, Object[] objArr, Object[] objArr2) {
        this.f2938v = objArr;
        this.f2939w = i5;
        this.f2940x = objArr2;
        this.f2941y = i6;
        this.E = i10;
    }

    @Override // bg.k
    public final int a(Object[] objArr) {
        Object[] objArr2 = this.f2938v;
        int i5 = this.E;
        System.arraycopy(objArr2, 0, objArr, 0, i5);
        return i5;
    }

    @Override // bg.k
    public final int b() {
        return this.E;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj == null) {
            return false;
        }
        Object[] objArr = this.f2940x;
        if (objArr.length == 0) {
            return false;
        }
        int rotateLeft = (int) (Integer.rotateLeft((int) (obj.hashCode() * (-862048943)), 15) * 461845907);
        while (true) {
            int i5 = rotateLeft & this.f2941y;
            Object obj2 = objArr[i5];
            if (obj2 == null) {
                return false;
            }
            if (obj2.equals(obj)) {
                return true;
            }
            rotateLeft = i5 + 1;
        }
    }

    @Override // bg.k
    public final int d() {
        return 0;
    }

    @Override // bg.k
    public final h0 e() {
        return k().listIterator(0);
    }

    @Override // bg.k
    public final Object[] h() {
        return this.f2938v;
    }

    @Override // bg.r, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f2939w;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return k().listIterator(0);
    }

    @Override // bg.r
    public final p m() {
        return p.k(this.E, this.f2938v);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.E;
    }
}
