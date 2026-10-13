package androidx.collection;

import java.util.Arrays;
import java.util.ConcurrentModificationException;
import java.util.Map;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import t.a;

/* loaded from: classes.dex */
public class SimpleArrayMap {

    /* renamed from: d, reason: collision with root package name */
    public int[] f1206d;

    /* renamed from: e, reason: collision with root package name */
    public Object[] f1207e;

    /* renamed from: i, reason: collision with root package name */
    public int f1208i;

    public SimpleArrayMap(int i5) {
        this.f1206d = i5 == 0 ? a.a : new int[i5];
        this.f1207e = i5 == 0 ? a.f18150c : new Object[i5 << 1];
    }

    public final int a(Object obj) {
        int i5 = this.f1208i * 2;
        Object[] objArr = this.f1207e;
        if (obj == null) {
            for (int i6 = 1; i6 < i5; i6 += 2) {
                if (objArr[i6] == null) {
                    return i6 >> 1;
                }
            }
            return -1;
        }
        for (int i10 = 1; i10 < i5; i10 += 2) {
            if (Intrinsics.areEqual(obj, objArr[i10])) {
                return i10 >> 1;
            }
        }
        return -1;
    }

    public final void b(int i5) {
        int i6 = this.f1208i;
        int[] iArr = this.f1206d;
        if (iArr.length < i5) {
            int[] copyOf = Arrays.copyOf(iArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f1206d = copyOf;
            Object[] copyOf2 = Arrays.copyOf(this.f1207e, i5 * 2);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f1207e = copyOf2;
        }
        if (this.f1208i != i6) {
            throw new ConcurrentModificationException();
        }
    }

    public final int c(int i5, Object obj) {
        int i6 = this.f1208i;
        if (i6 == 0) {
            return -1;
        }
        int a = a.a(i6, i5, this.f1206d);
        if (a < 0 || Intrinsics.areEqual(obj, this.f1207e[a << 1])) {
            return a;
        }
        int i10 = a + 1;
        while (i10 < i6 && this.f1206d[i10] == i5) {
            if (Intrinsics.areEqual(obj, this.f1207e[i10 << 1])) {
                return i10;
            }
            i10++;
        }
        for (int i11 = a - 1; i11 >= 0 && this.f1206d[i11] == i5; i11--) {
            if (Intrinsics.areEqual(obj, this.f1207e[i11 << 1])) {
                return i11;
            }
        }
        return ~i10;
    }

    public final void clear() {
        if (this.f1208i > 0) {
            this.f1206d = a.a;
            this.f1207e = a.f18150c;
            this.f1208i = 0;
        }
        if (this.f1208i > 0) {
            throw new ConcurrentModificationException();
        }
    }

    public boolean containsKey(Object obj) {
        return d(obj) >= 0;
    }

    public boolean containsValue(Object obj) {
        return a(obj) >= 0;
    }

    public final int d(Object obj) {
        return obj == null ? e() : c(obj.hashCode(), obj);
    }

    public final int e() {
        int i5 = this.f1208i;
        if (i5 == 0) {
            return -1;
        }
        int a = a.a(i5, 0, this.f1206d);
        if (a < 0 || this.f1207e[a << 1] == null) {
            return a;
        }
        int i6 = a + 1;
        while (i6 < i5 && this.f1206d[i6] == 0) {
            if (this.f1207e[i6 << 1] == null) {
                return i6;
            }
            i6++;
        }
        for (int i10 = a - 1; i10 >= 0 && this.f1206d[i10] == 0; i10--) {
            if (this.f1207e[i10 << 1] == null) {
                return i10;
            }
        }
        return ~i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        try {
            if (obj instanceof SimpleArrayMap) {
                int i5 = this.f1208i;
                if (i5 != ((SimpleArrayMap) obj).f1208i) {
                    return false;
                }
                SimpleArrayMap simpleArrayMap = (SimpleArrayMap) obj;
                for (int i6 = 0; i6 < i5; i6++) {
                    Object f2 = f(i6);
                    Object i10 = i(i6);
                    Object obj2 = simpleArrayMap.get(f2);
                    if (i10 == null) {
                        if (obj2 != null || !simpleArrayMap.containsKey(f2)) {
                            return false;
                        }
                    } else if (!Intrinsics.areEqual(i10, obj2)) {
                        return false;
                    }
                }
                return true;
            }
            if (!(obj instanceof Map) || this.f1208i != ((Map) obj).size()) {
                return false;
            }
            int i11 = this.f1208i;
            for (int i12 = 0; i12 < i11; i12++) {
                Object f10 = f(i12);
                Object i13 = i(i12);
                Object obj3 = ((Map) obj).get(f10);
                if (i13 == null) {
                    if (obj3 != null || !((Map) obj).containsKey(f10)) {
                        return false;
                    }
                } else if (!Intrinsics.areEqual(i13, obj3)) {
                    return false;
                }
            }
            return true;
        } catch (ClassCastException | NullPointerException unused) {
        }
        return false;
    }

    public final Object f(int i5) {
        boolean z5 = false;
        if (i5 >= 0 && i5 < this.f1208i) {
            z5 = true;
        }
        if (z5) {
            return this.f1207e[i5 << 1];
        }
        a.c("Expected index to be within 0..size()-1, but was " + i5);
        throw null;
    }

    public final Object g(int i5) {
        int i6;
        if (i5 < 0 || i5 >= (i6 = this.f1208i)) {
            a.c("Expected index to be within 0..size()-1, but was " + i5);
            throw null;
        }
        Object[] objArr = this.f1207e;
        int i10 = i5 << 1;
        Object obj = objArr[i10 + 1];
        if (i6 <= 1) {
            clear();
            return obj;
        }
        int i11 = i6 - 1;
        int[] iArr = this.f1206d;
        if (iArr.length <= 8 || i6 >= iArr.length / 3) {
            if (i5 < i11) {
                int i12 = i5 + 1;
                u.e(i5, i12, iArr, iArr, i6);
                Object[] objArr2 = this.f1207e;
                u.d(i10, i12 << 1, i6 << 1, objArr2, objArr2);
            }
            Object[] objArr3 = this.f1207e;
            int i13 = i11 << 1;
            objArr3[i13] = null;
            objArr3[i13 + 1] = null;
        } else {
            int i14 = i6 > 8 ? i6 + (i6 >> 1) : 8;
            int[] copyOf = Arrays.copyOf(iArr, i14);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f1206d = copyOf;
            Object[] copyOf2 = Arrays.copyOf(this.f1207e, i14 << 1);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f1207e = copyOf2;
            if (i6 != this.f1208i) {
                throw new ConcurrentModificationException();
            }
            if (i5 > 0) {
                u.e(0, 0, iArr, this.f1206d, i5);
                u.d(0, 0, i10, objArr, this.f1207e);
            }
            if (i5 < i11) {
                int i15 = i5 + 1;
                u.e(i5, i15, iArr, this.f1206d, i6);
                u.d(i10, i15 << 1, i6 << 1, objArr, this.f1207e);
            }
        }
        if (i6 != this.f1208i) {
            throw new ConcurrentModificationException();
        }
        this.f1208i = i11;
        return obj;
    }

    public Object get(Object obj) {
        int d6 = d(obj);
        if (d6 >= 0) {
            return this.f1207e[(d6 << 1) + 1];
        }
        return null;
    }

    public final Object getOrDefault(Object obj, Object obj2) {
        int d6 = d(obj);
        return d6 >= 0 ? this.f1207e[(d6 << 1) + 1] : obj2;
    }

    public final Object h(int i5, Object obj) {
        boolean z5 = false;
        if (i5 >= 0 && i5 < this.f1208i) {
            z5 = true;
        }
        if (!z5) {
            a.c("Expected index to be within 0..size()-1, but was " + i5);
            throw null;
        }
        int i6 = (i5 << 1) + 1;
        Object[] objArr = this.f1207e;
        Object obj2 = objArr[i6];
        objArr[i6] = obj;
        return obj2;
    }

    public final int hashCode() {
        int[] iArr = this.f1206d;
        Object[] objArr = this.f1207e;
        int i5 = this.f1208i;
        int i6 = 1;
        int i10 = 0;
        int i11 = 0;
        while (i10 < i5) {
            Object obj = objArr[i6];
            i11 += (obj != null ? obj.hashCode() : 0) ^ iArr[i10];
            i10++;
            i6 += 2;
        }
        return i11;
    }

    public final Object i(int i5) {
        boolean z5 = false;
        if (i5 >= 0 && i5 < this.f1208i) {
            z5 = true;
        }
        if (z5) {
            return this.f1207e[(i5 << 1) + 1];
        }
        a.c("Expected index to be within 0..size()-1, but was " + i5);
        throw null;
    }

    public final boolean isEmpty() {
        return this.f1208i <= 0;
    }

    public final Object put(Object obj, Object obj2) {
        int i5 = this.f1208i;
        int hashCode = obj != null ? obj.hashCode() : 0;
        int c6 = obj != null ? c(hashCode, obj) : e();
        if (c6 >= 0) {
            int i6 = (c6 << 1) + 1;
            Object[] objArr = this.f1207e;
            Object obj3 = objArr[i6];
            objArr[i6] = obj2;
            return obj3;
        }
        int i10 = ~c6;
        int[] iArr = this.f1206d;
        if (i5 >= iArr.length) {
            int i11 = 8;
            if (i5 >= 8) {
                i11 = (i5 >> 1) + i5;
            } else if (i5 < 4) {
                i11 = 4;
            }
            int[] copyOf = Arrays.copyOf(iArr, i11);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f1206d = copyOf;
            Object[] copyOf2 = Arrays.copyOf(this.f1207e, i11 << 1);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f1207e = copyOf2;
            if (i5 != this.f1208i) {
                throw new ConcurrentModificationException();
            }
        }
        if (i10 < i5) {
            int[] iArr2 = this.f1206d;
            int i12 = i10 + 1;
            u.e(i12, i10, iArr2, iArr2, i5);
            Object[] objArr2 = this.f1207e;
            u.d(i12 << 1, i10 << 1, this.f1208i << 1, objArr2, objArr2);
        }
        int i13 = this.f1208i;
        if (i5 == i13) {
            int[] iArr3 = this.f1206d;
            if (i10 < iArr3.length) {
                iArr3[i10] = hashCode;
                Object[] objArr3 = this.f1207e;
                int i14 = i10 << 1;
                objArr3[i14] = obj;
                objArr3[i14 + 1] = obj2;
                this.f1208i = i13 + 1;
                return null;
            }
        }
        throw new ConcurrentModificationException();
    }

    public final Object putIfAbsent(Object obj, Object obj2) {
        Object obj3 = get(obj);
        return obj3 == null ? put(obj, obj2) : obj3;
    }

    public Object remove(Object obj) {
        int d6 = d(obj);
        if (d6 >= 0) {
            return g(d6);
        }
        return null;
    }

    public final Object replace(Object obj, Object obj2) {
        int d6 = d(obj);
        if (d6 >= 0) {
            return h(d6, obj2);
        }
        return null;
    }

    public final int size() {
        return this.f1208i;
    }

    public final String toString() {
        if (isEmpty()) {
            return "{}";
        }
        StringBuilder sb2 = new StringBuilder(this.f1208i * 28);
        sb2.append('{');
        int i5 = this.f1208i;
        for (int i6 = 0; i6 < i5; i6++) {
            if (i6 > 0) {
                sb2.append(", ");
            }
            Object f2 = f(i6);
            if (f2 != sb2) {
                sb2.append(f2);
            } else {
                sb2.append("(this Map)");
            }
            sb2.append('=');
            Object i10 = i(i6);
            if (i10 != sb2) {
                sb2.append(i10);
            } else {
                sb2.append("(this Map)");
            }
        }
        sb2.append('}');
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public final boolean remove(Object obj, Object obj2) {
        int d6 = d(obj);
        if (d6 < 0 || !Intrinsics.areEqual(obj2, i(d6))) {
            return false;
        }
        g(d6);
        return true;
    }

    public final boolean replace(Object obj, Object obj2, Object obj3) {
        int d6 = d(obj);
        if (d6 < 0 || !Intrinsics.areEqual(obj2, i(d6))) {
            return false;
        }
        h(d6, obj3);
        return true;
    }
}
