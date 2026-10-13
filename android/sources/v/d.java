package v;

import java.util.Collection;
import java.util.List;
import java.util.RandomAccess;
import kotlin.collections.c0;

/* loaded from: classes.dex */
public final class d implements RandomAccess {

    /* renamed from: d, reason: collision with root package name */
    public Object[] f19130d;

    /* renamed from: e, reason: collision with root package name */
    public a f19131e;

    /* renamed from: i, reason: collision with root package name */
    public int f19132i = 0;

    public d(Object[] objArr) {
        this.f19130d = objArr;
    }

    public final void a(Object obj) {
        int i5 = this.f19132i + 1;
        if (this.f19130d.length < i5) {
            h(i5);
        }
        Object[] objArr = this.f19130d;
        int i6 = this.f19132i;
        objArr[i6] = obj;
        this.f19132i = i6 + 1;
    }

    public final boolean b(int i5, Collection collection) {
        int i6 = 0;
        if (collection.isEmpty()) {
            return false;
        }
        int size = collection.size();
        int i10 = this.f19132i + size;
        if (this.f19130d.length < i10) {
            h(i10);
        }
        Object[] objArr = this.f19130d;
        int i11 = this.f19132i;
        if (i5 != i11) {
            System.arraycopy(objArr, i5, objArr, i5 + size, i11 - i5);
        }
        for (Object obj : collection) {
            int i12 = i6 + 1;
            if (i6 < 0) {
                c0.k();
                throw null;
            }
            objArr[i6 + i5] = obj;
            i6 = i12;
        }
        this.f19132i += size;
        return true;
    }

    public final List c() {
        a aVar = this.f19131e;
        if (aVar != null) {
            return aVar;
        }
        a aVar2 = new a(this);
        this.f19131e = aVar2;
        return aVar2;
    }

    public final void d() {
        Object[] objArr = this.f19130d;
        int i5 = this.f19132i;
        for (int i6 = 0; i6 < i5; i6++) {
            objArr[i6] = null;
        }
        this.f19132i = 0;
    }

    public final Object e(int i5) {
        Object[] objArr = this.f19130d;
        Object obj = objArr[i5];
        int i6 = this.f19132i;
        if (i5 != i6 - 1) {
            int i10 = i5 + 1;
            System.arraycopy(objArr, i10, objArr, i5, i6 - i10);
        }
        int i11 = this.f19132i - 1;
        this.f19132i = i11;
        objArr[i11] = null;
        return obj;
    }

    public final void f(int i5, int i6) {
        if (i6 > i5) {
            int i10 = this.f19132i;
            if (i6 < i10) {
                Object[] objArr = this.f19130d;
                System.arraycopy(objArr, i6, objArr, i5, i10 - i6);
            }
            int i11 = this.f19132i;
            int i12 = i11 - (i6 - i5);
            int i13 = i11 - 1;
            if (i12 <= i13) {
                int i14 = i12;
                while (true) {
                    this.f19130d[i14] = null;
                    if (i14 == i13) {
                        break;
                    } else {
                        i14++;
                    }
                }
            }
            this.f19132i = i12;
        }
    }

    public final void h(int i5) {
        Object[] objArr = this.f19130d;
        int length = objArr.length;
        Object[] objArr2 = new Object[Math.max(i5, length * 2)];
        System.arraycopy(objArr, 0, objArr2, 0, length);
        this.f19130d = objArr2;
    }
}
