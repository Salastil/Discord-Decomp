package s;

import java.lang.reflect.Array;
import java.util.Collection;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableCollection;
import kotlin.jvm.internal.markers.KMutableSet;

/* loaded from: classes.dex */
public final class f implements Collection, Set, KMutableCollection, KMutableSet {

    /* renamed from: d, reason: collision with root package name */
    public int[] f17674d = t.a.a;

    /* renamed from: e, reason: collision with root package name */
    public Object[] f17675e = t.a.f18150c;

    /* renamed from: i, reason: collision with root package name */
    public int f17676i;

    public f(int i5) {
        if (i5 > 0) {
            l.b(this, i5);
        }
    }

    public final Object a(int i5) {
        int i6 = this.f17676i;
        Object[] objArr = this.f17675e;
        Object obj = objArr[i5];
        if (i6 <= 1) {
            clear();
            return obj;
        }
        int i10 = i6 - 1;
        int[] iArr = this.f17674d;
        if (iArr.length <= 8 || i6 >= iArr.length / 3) {
            if (i5 < i10) {
                int i11 = i5 + 1;
                u.e(i5, i11, iArr, iArr, i6);
                Object[] objArr2 = this.f17675e;
                u.d(i5, i11, i6, objArr2, objArr2);
            }
            this.f17675e[i10] = null;
        } else {
            l.b(this, i6 > 8 ? i6 + (i6 >> 1) : 8);
            if (i5 > 0) {
                u.h(iArr, this.f17674d, i5, 6);
                u.g(0, i5, 6, objArr, this.f17675e);
            }
            if (i5 < i10) {
                int i12 = i5 + 1;
                u.e(i5, i12, iArr, this.f17674d, i6);
                u.d(i5, i12, i6, objArr, this.f17675e);
            }
        }
        if (i6 != this.f17676i) {
            throw new ConcurrentModificationException();
        }
        this.f17676i = i10;
        return obj;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean add(Object obj) {
        int i5;
        int c6;
        int i6 = this.f17676i;
        if (obj == null) {
            Intrinsics.checkNotNullParameter(this, "<this>");
            c6 = l.c(this, null, 0);
            i5 = 0;
        } else {
            int hashCode = obj.hashCode();
            i5 = hashCode;
            c6 = l.c(this, obj, hashCode);
        }
        if (c6 >= 0) {
            return false;
        }
        int i10 = ~c6;
        int[] iArr = this.f17674d;
        if (i6 >= iArr.length) {
            int i11 = 8;
            if (i6 >= 8) {
                i11 = (i6 >> 1) + i6;
            } else if (i6 < 4) {
                i11 = 4;
            }
            Object[] objArr = this.f17675e;
            l.b(this, i11);
            if (i6 != this.f17676i) {
                throw new ConcurrentModificationException();
            }
            int[] iArr2 = this.f17674d;
            if (iArr2.length != 0) {
                u.h(iArr, iArr2, iArr.length, 6);
                u.g(0, objArr.length, 6, objArr, this.f17675e);
            }
        }
        if (i10 < i6) {
            int[] iArr3 = this.f17674d;
            int i12 = i10 + 1;
            u.e(i12, i10, iArr3, iArr3, i6);
            Object[] objArr2 = this.f17675e;
            u.d(i12, i10, i6, objArr2, objArr2);
        }
        int i13 = this.f17676i;
        if (i6 == i13) {
            int[] iArr4 = this.f17674d;
            if (i10 < iArr4.length) {
                iArr4[i10] = i5;
                this.f17675e[i10] = obj;
                this.f17676i = i13 + 1;
                return true;
            }
        }
        throw new ConcurrentModificationException();
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        int size = elements.size() + this.f17676i;
        int i5 = this.f17676i;
        int[] iArr = this.f17674d;
        boolean z5 = false;
        if (iArr.length < size) {
            Object[] objArr = this.f17675e;
            l.b(this, size);
            int i6 = this.f17676i;
            if (i6 > 0) {
                u.h(iArr, this.f17674d, i6, 6);
                u.g(0, this.f17676i, 6, objArr, this.f17675e);
            }
        }
        if (this.f17676i != i5) {
            throw new ConcurrentModificationException();
        }
        Iterator it = elements.iterator();
        while (it.hasNext()) {
            z5 |= add(it.next());
        }
        return z5;
    }

    @Override // java.util.Collection, java.util.Set
    public final void clear() {
        if (this.f17676i != 0) {
            int[] iArr = t.a.a;
            Intrinsics.checkNotNullParameter(iArr, "<set-?>");
            this.f17674d = iArr;
            Object[] objArr = t.a.f18150c;
            Intrinsics.checkNotNullParameter(objArr, "<set-?>");
            this.f17675e = objArr;
            this.f17676i = 0;
        }
        if (this.f17676i != 0) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        int c6;
        if (obj == null) {
            Intrinsics.checkNotNullParameter(this, "<this>");
            c6 = l.c(this, null, 0);
        } else {
            c6 = l.c(this, obj, obj.hashCode());
        }
        return c6 >= 0;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean containsAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        Iterator it = elements.iterator();
        while (it.hasNext()) {
            if (!contains(it.next())) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Set) || this.f17676i != ((Set) obj).size()) {
            return false;
        }
        try {
            int i5 = this.f17676i;
            for (int i6 = 0; i6 < i5; i6++) {
                if (!((Set) obj).contains(this.f17675e[i6])) {
                    return false;
                }
            }
            return true;
        } catch (ClassCastException | NullPointerException unused) {
            return false;
        }
    }

    @Override // java.util.Collection, java.util.Set
    public final int hashCode() {
        int[] iArr = this.f17674d;
        int i5 = this.f17676i;
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            i6 += iArr[i10];
        }
        return i6;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean isEmpty() {
        return this.f17676i <= 0;
    }

    @Override // java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        return new a(this);
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean remove(Object obj) {
        int c6;
        if (obj == null) {
            Intrinsics.checkNotNullParameter(this, "<this>");
            c6 = l.c(this, null, 0);
        } else {
            c6 = l.c(this, obj, obj.hashCode());
        }
        if (c6 < 0) {
            return false;
        }
        a(c6);
        return true;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean removeAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        Iterator it = elements.iterator();
        boolean z5 = false;
        while (it.hasNext()) {
            z5 |= remove(it.next());
        }
        return z5;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean retainAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        boolean z5 = false;
        for (int i5 = this.f17676i - 1; -1 < i5; i5--) {
            if (!CollectionsKt.E(elements, this.f17675e[i5])) {
                a(i5);
                z5 = true;
            }
        }
        return z5;
    }

    @Override // java.util.Collection, java.util.Set
    public final int size() {
        return this.f17676i;
    }

    @Override // java.util.Collection, java.util.Set
    public final Object[] toArray() {
        return u.j(this.f17675e, 0, this.f17676i);
    }

    public final String toString() {
        if (isEmpty()) {
            return "{}";
        }
        StringBuilder sb2 = new StringBuilder(this.f17676i * 14);
        sb2.append('{');
        int i5 = this.f17676i;
        for (int i6 = 0; i6 < i5; i6++) {
            if (i6 > 0) {
                sb2.append(", ");
            }
            Object obj = this.f17675e[i6];
            if (obj != this) {
                sb2.append(obj);
            } else {
                sb2.append("(this Set)");
            }
        }
        sb2.append('}');
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    @Override // java.util.Collection, java.util.Set
    public final Object[] toArray(Object[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        int i5 = this.f17676i;
        if (array.length < i5) {
            array = (Object[]) Array.newInstance(array.getClass().getComponentType(), i5);
        } else if (array.length > i5) {
            array[i5] = null;
        }
        u.d(0, 0, this.f17676i, this.f17675e, array);
        Intrinsics.checkNotNull(array);
        return array;
    }
}
