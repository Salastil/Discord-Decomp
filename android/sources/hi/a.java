package hi;

import java.io.Serializable;
import java.util.AbstractList;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;
import ki.b;
import ys.d;

/* loaded from: classes3.dex */
public final class a extends AbstractList implements RandomAccess, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final int[] f10031d;

    /* renamed from: e, reason: collision with root package name */
    public final int f10032e;

    /* renamed from: i, reason: collision with root package name */
    public final int f10033i;

    public a(int i5, int i6, int[] iArr) {
        this.f10031d = iArr;
        this.f10032e = i5;
        this.f10033i = i6;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        return (obj instanceof Integer) && b.J(((Integer) obj).intValue(), this.f10032e, this.f10033i, this.f10031d) != -1;
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof a)) {
            return super.equals(obj);
        }
        a aVar = (a) obj;
        int size = size();
        if (aVar.size() != size) {
            return false;
        }
        for (int i5 = 0; i5 < size; i5++) {
            if (this.f10031d[this.f10032e + i5] != aVar.f10031d[aVar.f10032e + i5]) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        d.r(i5, size());
        return Integer.valueOf(this.f10031d[this.f10032e + i5]);
    }

    @Override // java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int i5 = 1;
        for (int i6 = this.f10032e; i6 < this.f10033i; i6++) {
            i5 = (i5 * 31) + this.f10031d[i6];
        }
        return i5;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int indexOf(Object obj) {
        if (!(obj instanceof Integer)) {
            return -1;
        }
        int intValue = ((Integer) obj).intValue();
        int i5 = this.f10033i;
        int i6 = this.f10032e;
        int J = b.J(intValue, i6, i5, this.f10031d);
        if (J >= 0) {
            return J - i6;
        }
        return -1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean isEmpty() {
        return false;
    }

    @Override // java.util.AbstractList, java.util.List
    public final int lastIndexOf(Object obj) {
        int i5;
        if (obj instanceof Integer) {
            int intValue = ((Integer) obj).intValue();
            int i6 = this.f10033i;
            while (true) {
                i6--;
                i5 = this.f10032e;
                if (i6 < i5) {
                    i6 = -1;
                    break;
                }
                if (this.f10031d[i6] == intValue) {
                    break;
                }
            }
            if (i6 >= 0) {
                return i6 - i5;
            }
        }
        return -1;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        Integer num = (Integer) obj;
        d.r(i5, size());
        int i6 = this.f10032e + i5;
        int[] iArr = this.f10031d;
        int i10 = iArr[i6];
        num.getClass();
        iArr[i6] = num.intValue();
        return Integer.valueOf(i10);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f10033i - this.f10032e;
    }

    @Override // java.util.AbstractList, java.util.List
    public final List subList(int i5, int i6) {
        d.u(i5, i6, size());
        if (i5 == i6) {
            return Collections.EMPTY_LIST;
        }
        int i10 = this.f10032e;
        return new a(i5 + i10, i10 + i6, this.f10031d);
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        StringBuilder sb2 = new StringBuilder(size() * 5);
        sb2.append('[');
        int[] iArr = this.f10031d;
        int i5 = this.f10032e;
        sb2.append(iArr[i5]);
        while (true) {
            i5++;
            if (i5 >= this.f10033i) {
                sb2.append(']');
                return sb2.toString();
            }
            sb2.append(", ");
            sb2.append(iArr[i5]);
        }
    }
}
