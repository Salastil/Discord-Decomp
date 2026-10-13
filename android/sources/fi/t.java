package fi;

import java.io.Serializable;
import java.util.AbstractMap;
import java.util.Arrays;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Set;

/* loaded from: classes3.dex */
public final class t extends AbstractMap implements Serializable {
    public static final Object G = new Object();
    public transient r E;
    public transient n F;

    /* renamed from: d, reason: collision with root package name */
    public transient Object f8711d;

    /* renamed from: e, reason: collision with root package name */
    public transient int[] f8712e;

    /* renamed from: i, reason: collision with root package name */
    public transient Object[] f8713i;

    /* renamed from: v, reason: collision with root package name */
    public transient Object[] f8714v;

    /* renamed from: w, reason: collision with root package name */
    public transient int f8715w;

    /* renamed from: x, reason: collision with root package name */
    public transient int f8716x;

    /* renamed from: y, reason: collision with root package name */
    public transient r f8717y;

    public static t a() {
        t tVar = new t();
        tVar.f8715w = ki.b.e(8, 1);
        return tVar;
    }

    public final Map b() {
        Object obj = this.f8711d;
        if (obj instanceof Map) {
            return (Map) obj;
        }
        return null;
    }

    public final int c() {
        return (1 << (this.f8715w & 31)) - 1;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final void clear() {
        if (f()) {
            return;
        }
        this.f8715w += 32;
        Map b10 = b();
        if (b10 != null) {
            this.f8715w = ki.b.e(size(), 3);
            b10.clear();
            this.f8711d = null;
            this.f8716x = 0;
            return;
        }
        Arrays.fill(i(), 0, this.f8716x, (Object) null);
        Arrays.fill(j(), 0, this.f8716x, (Object) null);
        Object obj = this.f8711d;
        Objects.requireNonNull(obj);
        if (obj instanceof byte[]) {
            Arrays.fill((byte[]) obj, (byte) 0);
        } else if (obj instanceof short[]) {
            Arrays.fill((short[]) obj, (short) 0);
        } else {
            Arrays.fill((int[]) obj, 0);
        }
        Arrays.fill(h(), 0, this.f8716x, 0);
        this.f8716x = 0;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean containsKey(Object obj) {
        Map b10 = b();
        return b10 != null ? b10.containsKey(obj) : d(obj) != -1;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean containsValue(Object obj) {
        Map b10 = b();
        if (b10 != null) {
            return b10.containsValue(obj);
        }
        for (int i5 = 0; i5 < this.f8716x; i5++) {
            if (w3.q.j(obj, j()[i5])) {
                return true;
            }
        }
        return false;
    }

    public final int d(Object obj) {
        if (f()) {
            return -1;
        }
        int q5 = p.q(obj);
        int c6 = c();
        Object obj2 = this.f8711d;
        Objects.requireNonNull(obj2);
        int r5 = p.r(q5 & c6, obj2);
        if (r5 == 0) {
            return -1;
        }
        int i5 = ~c6;
        int i6 = q5 & i5;
        do {
            int i10 = r5 - 1;
            int i11 = h()[i10];
            if ((i11 & i5) == i6 && w3.q.j(obj, i()[i10])) {
                return i10;
            }
            r5 = i11 & c6;
        } while (r5 != 0);
        return -1;
    }

    public final void e(int i5, int i6) {
        Object obj = this.f8711d;
        Objects.requireNonNull(obj);
        int[] h6 = h();
        Object[] i10 = i();
        Object[] j = j();
        int size = size();
        int i11 = size - 1;
        if (i5 >= i11) {
            i10[i5] = null;
            j[i5] = null;
            h6[i5] = 0;
            return;
        }
        Object obj2 = i10[i11];
        i10[i5] = obj2;
        j[i5] = j[i11];
        i10[i11] = null;
        j[i11] = null;
        h6[i5] = h6[i11];
        h6[i11] = 0;
        int q5 = p.q(obj2) & i6;
        int r5 = p.r(q5, obj);
        if (r5 == size) {
            p.s(q5, i5 + 1, obj);
            return;
        }
        while (true) {
            int i12 = r5 - 1;
            int i13 = h6[i12];
            int i14 = i13 & i6;
            if (i14 == size) {
                h6[i12] = p.l(i13, i5 + 1, i6);
                return;
            }
            r5 = i14;
        }
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Set entrySet() {
        r rVar = this.E;
        if (rVar != null) {
            return rVar;
        }
        r rVar2 = new r(this, 0);
        this.E = rVar2;
        return rVar2;
    }

    public final boolean f() {
        return this.f8711d == null;
    }

    public final Object g(Object obj) {
        if (!f()) {
            int c6 = c();
            Object obj2 = this.f8711d;
            Objects.requireNonNull(obj2);
            int n6 = p.n(obj, null, c6, obj2, h(), i(), null);
            if (n6 != -1) {
                Object obj3 = j()[n6];
                e(n6, c6);
                this.f8716x--;
                this.f8715w += 32;
                return obj3;
            }
        }
        return G;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object get(Object obj) {
        Map b10 = b();
        if (b10 != null) {
            return b10.get(obj);
        }
        int d6 = d(obj);
        if (d6 == -1) {
            return null;
        }
        return j()[d6];
    }

    public final int[] h() {
        int[] iArr = this.f8712e;
        Objects.requireNonNull(iArr);
        return iArr;
    }

    public final Object[] i() {
        Object[] objArr = this.f8713i;
        Objects.requireNonNull(objArr);
        return objArr;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean isEmpty() {
        return size() == 0;
    }

    public final Object[] j() {
        Object[] objArr = this.f8714v;
        Objects.requireNonNull(objArr);
        return objArr;
    }

    public final int k(int i5, int i6, int i10, int i11) {
        Object d6 = p.d(i6);
        int i12 = i6 - 1;
        if (i11 != 0) {
            p.s(i10 & i12, i11 + 1, d6);
        }
        Object obj = this.f8711d;
        Objects.requireNonNull(obj);
        int[] h6 = h();
        for (int i13 = 0; i13 <= i5; i13++) {
            int r5 = p.r(i13, obj);
            while (r5 != 0) {
                int i14 = r5 - 1;
                int i15 = h6[i14];
                int i16 = ((~i5) & i15) | i13;
                int i17 = i16 & i12;
                int r7 = p.r(i17, d6);
                p.s(i17, r5, d6);
                h6[i14] = p.l(i16, r7, i12);
                r5 = i15 & i5;
            }
        }
        this.f8711d = d6;
        this.f8715w = p.l(this.f8715w, 32 - Integer.numberOfLeadingZeros(i12), 31);
        return i12;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Set keySet() {
        r rVar = this.f8717y;
        if (rVar != null) {
            return rVar;
        }
        r rVar2 = new r(this, 1);
        this.f8717y = rVar2;
        return rVar2;
    }

    /* JADX WARN: Removed duplicated region for block: B:53:0x00f1  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:50:0x0104 -> B:47:0x00ea). Please report as a decompilation issue!!! */
    @Override // java.util.AbstractMap, java.util.Map
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object put(Object obj, Object obj2) {
        int i5;
        int i6;
        int i10 = 32;
        int i11 = 1;
        if (f()) {
            if (!f()) {
                throw new IllegalStateException("Arrays already allocated");
            }
            int i12 = this.f8715w;
            int max = Math.max(i12 + 1, 2);
            int highestOneBit = Integer.highestOneBit(max);
            if (max > ((int) (1.0d * highestOneBit)) && (highestOneBit = highestOneBit << 1) <= 0) {
                highestOneBit = 1073741824;
            }
            int max2 = Math.max(4, highestOneBit);
            this.f8711d = p.d(max2);
            this.f8715w = p.l(this.f8715w, 32 - Integer.numberOfLeadingZeros(max2 - 1), 31);
            this.f8712e = new int[i12];
            this.f8713i = new Object[i12];
            this.f8714v = new Object[i12];
        }
        Map b10 = b();
        if (b10 != null) {
            return b10.put(obj, obj2);
        }
        int[] h6 = h();
        Object[] i13 = i();
        Object[] j = j();
        int i14 = this.f8716x;
        int i15 = i14 + 1;
        int q5 = p.q(obj);
        int c6 = c();
        int i16 = q5 & c6;
        Object obj3 = this.f8711d;
        Objects.requireNonNull(obj3);
        int r5 = p.r(i16, obj3);
        if (r5 == 0) {
            if (i15 > c6) {
                c6 = k(c6, (c6 + 1) * (c6 < 32 ? 4 : 2), q5, i14);
            } else {
                Object obj4 = this.f8711d;
                Objects.requireNonNull(obj4);
                p.s(i16, i15, obj4);
            }
            i5 = 1;
        } else {
            int i17 = ~c6;
            int i18 = q5 & i17;
            int i19 = 0;
            while (true) {
                int i20 = r5 - i11;
                i5 = i11;
                int i21 = h6[i20];
                int i22 = i10;
                if ((i21 & i17) == i18 && w3.q.j(obj, i13[i20])) {
                    Object obj5 = j[i20];
                    j[i20] = obj2;
                    return obj5;
                }
                int i23 = i21 & c6;
                int i24 = i19 + 1;
                if (i23 != 0) {
                    i19 = i24;
                    r5 = i23;
                    i11 = i5;
                    i10 = i22;
                } else {
                    if (i24 >= 9) {
                        LinkedHashMap linkedHashMap = new LinkedHashMap(c() + 1, 1.0f);
                        if (!isEmpty()) {
                            i6 = 0;
                            while (i6 >= 0) {
                                linkedHashMap.put(i()[i6], j()[i6]);
                                int i25 = i6 + 1;
                                if (i25 < this.f8716x) {
                                    i6 = i25;
                                }
                            }
                            this.f8711d = linkedHashMap;
                            this.f8712e = null;
                            this.f8713i = null;
                            this.f8714v = null;
                            this.f8715w += 32;
                            return linkedHashMap.put(obj, obj2);
                        }
                        i6 = -1;
                        while (i6 >= 0) {
                        }
                        this.f8711d = linkedHashMap;
                        this.f8712e = null;
                        this.f8713i = null;
                        this.f8714v = null;
                        this.f8715w += 32;
                        return linkedHashMap.put(obj, obj2);
                    }
                    if (i15 > c6) {
                        c6 = k(c6, (c6 + 1) * (c6 < i22 ? 4 : 2), q5, i14);
                    } else {
                        h6[i20] = p.l(i21, i15, c6);
                    }
                }
            }
        }
        int length = h().length;
        if (i15 > length) {
            int i26 = i5;
            int min = Math.min(1073741823, (Math.max(i26, length >>> 1) + length) | i26);
            if (min != length) {
                this.f8712e = Arrays.copyOf(h(), min);
                this.f8713i = Arrays.copyOf(i(), min);
                this.f8714v = Arrays.copyOf(j(), min);
            }
        }
        h()[i14] = p.l(q5, 0, c6);
        i()[i14] = obj;
        j()[i14] = obj2;
        this.f8716x = i15;
        this.f8715w += 32;
        return null;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object remove(Object obj) {
        Map b10 = b();
        if (b10 != null) {
            return b10.remove(obj);
        }
        Object g6 = g(obj);
        if (g6 == G) {
            return null;
        }
        return g6;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final int size() {
        Map b10 = b();
        return b10 != null ? b10.size() : this.f8716x;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Collection values() {
        n nVar = this.F;
        if (nVar != null) {
            return nVar;
        }
        n nVar2 = new n(1, this);
        this.F = nVar2;
        return nVar2;
    }
}
