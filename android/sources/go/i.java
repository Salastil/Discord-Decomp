package go;

import a5.k0;
import java.io.Serializable;
import java.util.Arrays;
import java.util.Collection;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableMap;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class i implements Map, Serializable, KMutableMap {

    @NotNull
    public static final f K = new f(null);
    public static final i L;
    public int E;
    public int F;
    public k G;
    public l H;
    public j I;
    public boolean J;

    /* renamed from: d, reason: collision with root package name */
    public Object[] f9408d;

    /* renamed from: e, reason: collision with root package name */
    public Object[] f9409e;

    /* renamed from: i, reason: collision with root package name */
    public int[] f9410i;

    /* renamed from: v, reason: collision with root package name */
    public int[] f9411v;

    /* renamed from: w, reason: collision with root package name */
    public int f9412w;

    /* renamed from: x, reason: collision with root package name */
    public int f9413x;

    /* renamed from: y, reason: collision with root package name */
    public int f9414y;

    static {
        i iVar = new i(0);
        iVar.J = true;
        L = iVar;
    }

    public i() {
        this(8);
    }

    public final int a(Object obj) {
        c();
        while (true) {
            int j = j(obj);
            int i5 = this.f9412w * 2;
            int length = this.f9411v.length / 2;
            if (i5 > length) {
                i5 = length;
            }
            int i6 = 0;
            while (true) {
                int[] iArr = this.f9411v;
                int i10 = iArr[j];
                if (i10 <= 0) {
                    int i11 = this.f9413x;
                    Object[] objArr = this.f9408d;
                    if (i11 < objArr.length) {
                        int i12 = i11 + 1;
                        this.f9413x = i12;
                        objArr[i11] = obj;
                        this.f9410i[i11] = j;
                        iArr[j] = i12;
                        this.F++;
                        this.E++;
                        if (i6 > this.f9412w) {
                            this.f9412w = i6;
                        }
                        return i11;
                    }
                    g(1);
                } else {
                    if (Intrinsics.areEqual(this.f9408d[i10 - 1], obj)) {
                        return -i10;
                    }
                    i6++;
                    if (i6 > i5) {
                        k(this.f9411v.length * 2);
                        break;
                    }
                    j = j == 0 ? this.f9411v.length - 1 : j - 1;
                }
            }
        }
    }

    public final i b() {
        c();
        this.J = true;
        if (this.F > 0) {
            return this;
        }
        i iVar = L;
        Intrinsics.checkNotNull(iVar, "null cannot be cast to non-null type kotlin.collections.Map<K of kotlin.collections.builders.MapBuilder, V of kotlin.collections.builders.MapBuilder>");
        return iVar;
    }

    public final void c() {
        if (this.J) {
            throw new UnsupportedOperationException();
        }
    }

    @Override // java.util.Map
    public final void clear() {
        c();
        int i5 = this.f9413x - 1;
        if (i5 >= 0) {
            int i6 = 0;
            while (true) {
                int[] iArr = this.f9410i;
                int i10 = iArr[i6];
                if (i10 >= 0) {
                    this.f9411v[i10] = 0;
                    iArr[i6] = -1;
                }
                if (i6 == i5) {
                    break;
                } else {
                    i6++;
                }
            }
        }
        k0.R(this.f9408d, 0, this.f9413x);
        Object[] objArr = this.f9409e;
        if (objArr != null) {
            k0.R(objArr, 0, this.f9413x);
        }
        this.F = 0;
        this.f9413x = 0;
        this.E++;
    }

    @Override // java.util.Map
    public final boolean containsKey(Object obj) {
        return h(obj) >= 0;
    }

    @Override // java.util.Map
    public final boolean containsValue(Object obj) {
        return i(obj) >= 0;
    }

    public final void d(boolean z5) {
        int i5;
        Object[] objArr = this.f9409e;
        int i6 = 0;
        int i10 = 0;
        while (true) {
            i5 = this.f9413x;
            if (i6 >= i5) {
                break;
            }
            int[] iArr = this.f9410i;
            int i11 = iArr[i6];
            if (i11 >= 0) {
                Object[] objArr2 = this.f9408d;
                objArr2[i10] = objArr2[i6];
                if (objArr != null) {
                    objArr[i10] = objArr[i6];
                }
                if (z5) {
                    iArr[i10] = i11;
                    this.f9411v[i11] = i10 + 1;
                }
                i10++;
            }
            i6++;
        }
        k0.R(this.f9408d, i10, i5);
        if (objArr != null) {
            k0.R(objArr, i10, this.f9413x);
        }
        this.f9413x = i10;
    }

    public final boolean e(Collection m5) {
        Intrinsics.checkNotNullParameter(m5, "m");
        for (Object obj : m5) {
            if (obj != null) {
                try {
                    if (!f((Map.Entry) obj)) {
                    }
                } catch (ClassCastException unused) {
                }
            }
            return false;
        }
        return true;
    }

    @Override // java.util.Map
    public final Set entrySet() {
        j jVar = this.I;
        if (jVar != null) {
            return jVar;
        }
        j jVar2 = new j(this);
        this.I = jVar2;
        return jVar2;
    }

    @Override // java.util.Map
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Map)) {
            return false;
        }
        Map map = (Map) obj;
        return this.F == map.size() && e(map.entrySet());
    }

    public final boolean f(Map.Entry entry) {
        Intrinsics.checkNotNullParameter(entry, "entry");
        int h6 = h(entry.getKey());
        if (h6 < 0) {
            return false;
        }
        Object[] objArr = this.f9409e;
        Intrinsics.checkNotNull(objArr);
        return Intrinsics.areEqual(objArr[h6], entry.getValue());
    }

    public final void g(int i5) {
        Object[] objArr;
        Object[] objArr2 = this.f9408d;
        int length = objArr2.length;
        int i6 = this.f9413x;
        int i10 = length - i6;
        int i11 = i6 - this.F;
        if (i10 < i5 && i10 + i11 >= i5 && i11 >= objArr2.length / 4) {
            d(true);
            return;
        }
        int i12 = i6 + i5;
        if (i12 < 0) {
            throw new OutOfMemoryError();
        }
        if (i12 > objArr2.length) {
            kotlin.collections.c cVar = kotlin.collections.f.f13497d;
            int length2 = objArr2.length;
            cVar.getClass();
            int e9 = kotlin.collections.c.e(length2, i12);
            Object[] objArr3 = this.f9408d;
            Intrinsics.checkNotNullParameter(objArr3, "<this>");
            Object[] copyOf = Arrays.copyOf(objArr3, e9);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f9408d = copyOf;
            Object[] objArr4 = this.f9409e;
            if (objArr4 != null) {
                Intrinsics.checkNotNullParameter(objArr4, "<this>");
                objArr = Arrays.copyOf(objArr4, e9);
                Intrinsics.checkNotNullExpressionValue(objArr, "copyOf(...)");
            } else {
                objArr = null;
            }
            this.f9409e = objArr;
            int[] copyOf2 = Arrays.copyOf(this.f9410i, e9);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f9410i = copyOf2;
            K.getClass();
            int highestOneBit = Integer.highestOneBit((e9 >= 1 ? e9 : 1) * 3);
            if (highestOneBit > this.f9411v.length) {
                k(highestOneBit);
            }
        }
    }

    @Override // java.util.Map
    public final Object get(Object obj) {
        int h6 = h(obj);
        if (h6 < 0) {
            return null;
        }
        Object[] objArr = this.f9409e;
        Intrinsics.checkNotNull(objArr);
        return objArr[h6];
    }

    public final int h(Object obj) {
        int j = j(obj);
        int i5 = this.f9412w;
        while (true) {
            int i6 = this.f9411v[j];
            if (i6 == 0) {
                return -1;
            }
            if (i6 > 0) {
                int i10 = i6 - 1;
                if (Intrinsics.areEqual(this.f9408d[i10], obj)) {
                    return i10;
                }
            }
            i5--;
            if (i5 < 0) {
                return -1;
            }
            j = j == 0 ? this.f9411v.length - 1 : j - 1;
        }
    }

    @Override // java.util.Map
    public final int hashCode() {
        Intrinsics.checkNotNullParameter(this, "map");
        g gVar = new g(this, 0);
        int i5 = 0;
        while (gVar.hasNext()) {
            int i6 = gVar.f1591d;
            i iVar = (i) gVar.f1594v;
            if (i6 >= iVar.f9413x) {
                throw new NoSuchElementException();
            }
            gVar.f1591d = i6 + 1;
            gVar.f1592e = i6;
            Object obj = iVar.f9408d[i6];
            int hashCode = obj != null ? obj.hashCode() : 0;
            Object[] objArr = iVar.f9409e;
            Intrinsics.checkNotNull(objArr);
            Object obj2 = objArr[gVar.f1592e];
            int hashCode2 = obj2 != null ? obj2.hashCode() : 0;
            gVar.e();
            i5 += hashCode ^ hashCode2;
        }
        return i5;
    }

    public final int i(Object obj) {
        int i5 = this.f9413x;
        while (true) {
            i5--;
            if (i5 < 0) {
                return -1;
            }
            if (this.f9410i[i5] >= 0) {
                Object[] objArr = this.f9409e;
                Intrinsics.checkNotNull(objArr);
                if (Intrinsics.areEqual(objArr[i5], obj)) {
                    return i5;
                }
            }
        }
    }

    @Override // java.util.Map
    public final boolean isEmpty() {
        return this.F == 0;
    }

    public final int j(Object obj) {
        return ((obj != null ? obj.hashCode() : 0) * (-1640531527)) >>> this.f9414y;
    }

    /* JADX WARN: Code restructure failed: missing block: B:26:0x0037, code lost:
    
        r3[r0] = r6;
        r5.f9410i[r2] = r0;
        r2 = r6;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void k(int i5) {
        this.E++;
        int i6 = 0;
        if (this.f9413x > this.F) {
            d(false);
        }
        this.f9411v = new int[i5];
        K.getClass();
        this.f9414y = Integer.numberOfLeadingZeros(i5) + 1;
        while (i6 < this.f9413x) {
            int i10 = i6 + 1;
            int j = j(this.f9408d[i6]);
            int i11 = this.f9412w;
            while (true) {
                int[] iArr = this.f9411v;
                if (iArr[j] == 0) {
                    break;
                }
                i11--;
                if (i11 < 0) {
                    throw new IllegalStateException("This cannot happen with fixed magic multiplier and grow-only hash array. Have object hashCodes changed?");
                }
                j = j == 0 ? iArr.length - 1 : j - 1;
            }
        }
    }

    @Override // java.util.Map
    public final Set keySet() {
        k kVar = this.G;
        if (kVar != null) {
            return kVar;
        }
        k kVar2 = new k(this);
        this.G = kVar2;
        return kVar2;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x006b A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:25:? A[LOOP:0: B:8:0x0027->B:25:?, LOOP_END, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l(int i5) {
        Object[] objArr = this.f9408d;
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        objArr[i5] = null;
        Object[] objArr2 = this.f9409e;
        if (objArr2 != null) {
            Intrinsics.checkNotNullParameter(objArr2, "<this>");
            objArr2[i5] = null;
        }
        int i6 = this.f9410i[i5];
        int i10 = this.f9412w * 2;
        int length = this.f9411v.length / 2;
        if (i10 > length) {
            i10 = length;
        }
        int i11 = i10;
        int i12 = 0;
        int i13 = i6;
        while (true) {
            i6 = i6 == 0 ? this.f9411v.length - 1 : i6 - 1;
            i12++;
            if (i12 > this.f9412w) {
                this.f9411v[i13] = 0;
                break;
            }
            int[] iArr = this.f9411v;
            int i14 = iArr[i6];
            if (i14 == 0) {
                iArr[i13] = 0;
                break;
            }
            if (i14 < 0) {
                iArr[i13] = -1;
            } else {
                int i15 = i14 - 1;
                int j = j(this.f9408d[i15]) - i6;
                int[] iArr2 = this.f9411v;
                if ((j & (iArr2.length - 1)) >= i12) {
                    iArr2[i13] = i14;
                    this.f9410i[i15] = i13;
                }
                i11--;
                if (i11 >= 0) {
                    this.f9411v[i13] = -1;
                    break;
                }
            }
            i13 = i6;
            i12 = 0;
            i11--;
            if (i11 >= 0) {
            }
        }
        this.f9410i[i5] = -1;
        this.F--;
        this.E++;
    }

    @Override // java.util.Map
    public final Object put(Object obj, Object obj2) {
        c();
        int a = a(obj);
        Object[] objArr = this.f9409e;
        if (objArr == null) {
            int length = this.f9408d.length;
            if (length < 0) {
                throw new IllegalArgumentException("capacity must be non-negative.");
            }
            objArr = new Object[length];
            this.f9409e = objArr;
        }
        if (a >= 0) {
            objArr[a] = obj2;
            return null;
        }
        int i5 = (-a) - 1;
        Object obj3 = objArr[i5];
        objArr[i5] = obj2;
        return obj3;
    }

    @Override // java.util.Map
    public final void putAll(Map from) {
        Intrinsics.checkNotNullParameter(from, "from");
        c();
        Set<Map.Entry> entrySet = from.entrySet();
        if (entrySet.isEmpty()) {
            return;
        }
        g(entrySet.size());
        for (Map.Entry entry : entrySet) {
            int a = a(entry.getKey());
            Object[] objArr = this.f9409e;
            if (objArr == null) {
                int length = this.f9408d.length;
                if (length < 0) {
                    throw new IllegalArgumentException("capacity must be non-negative.");
                }
                objArr = new Object[length];
                this.f9409e = objArr;
            }
            if (a >= 0) {
                objArr[a] = entry.getValue();
            } else {
                int i5 = (-a) - 1;
                if (!Intrinsics.areEqual(entry.getValue(), objArr[i5])) {
                    objArr[i5] = entry.getValue();
                }
            }
        }
    }

    @Override // java.util.Map
    public final Object remove(Object obj) {
        c();
        int h6 = h(obj);
        if (h6 < 0) {
            return null;
        }
        Object[] objArr = this.f9409e;
        Intrinsics.checkNotNull(objArr);
        Object obj2 = objArr[h6];
        l(h6);
        return obj2;
    }

    @Override // java.util.Map
    public final int size() {
        return this.F;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder((this.F * 3) + 2);
        sb2.append("{");
        Intrinsics.checkNotNullParameter(this, "map");
        int i5 = 0;
        g gVar = new g(this, 0);
        while (gVar.hasNext()) {
            if (i5 > 0) {
                sb2.append(", ");
            }
            Intrinsics.checkNotNullParameter(sb2, "sb");
            int i6 = gVar.f1591d;
            i iVar = (i) gVar.f1594v;
            if (i6 >= iVar.f9413x) {
                throw new NoSuchElementException();
            }
            gVar.f1591d = i6 + 1;
            gVar.f1592e = i6;
            Object obj = iVar.f9408d[i6];
            if (obj == iVar) {
                sb2.append("(this Map)");
            } else {
                sb2.append(obj);
            }
            sb2.append('=');
            Object[] objArr = iVar.f9409e;
            Intrinsics.checkNotNull(objArr);
            Object obj2 = objArr[gVar.f1592e];
            if (obj2 == iVar) {
                sb2.append("(this Map)");
            } else {
                sb2.append(obj2);
            }
            gVar.e();
            i5++;
        }
        sb2.append("}");
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    @Override // java.util.Map
    public final Collection values() {
        l lVar = this.H;
        if (lVar != null) {
            return lVar;
        }
        l lVar2 = new l(this);
        this.H = lVar2;
        return lVar2;
    }

    public i(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("capacity must be non-negative.");
        }
        Object[] objArr = new Object[i5];
        int[] iArr = new int[i5];
        K.getClass();
        int highestOneBit = Integer.highestOneBit((i5 < 1 ? 1 : i5) * 3);
        this.f9408d = objArr;
        this.f9409e = null;
        this.f9410i = iArr;
        this.f9411v = new int[highestOneBit];
        this.f9412w = 2;
        this.f9413x = 0;
        this.f9414y = Integer.numberOfLeadingZeros(highestOneBit) + 1;
    }
}
