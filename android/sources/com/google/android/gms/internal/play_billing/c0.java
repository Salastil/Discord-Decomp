package com.google.android.gms.internal.play_billing;

import java.io.Serializable;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.Objects;
import java.util.Set;

/* loaded from: classes3.dex */
public final class c0 implements Map, Serializable {

    /* renamed from: y, reason: collision with root package name */
    public static final c0 f5709y = new c0(null, new Object[0], 0);

    /* renamed from: d, reason: collision with root package name */
    public transient z f5710d;

    /* renamed from: e, reason: collision with root package name */
    public transient a0 f5711e;

    /* renamed from: i, reason: collision with root package name */
    public transient b0 f5712i;

    /* renamed from: v, reason: collision with root package name */
    public final transient Object f5713v;

    /* renamed from: w, reason: collision with root package name */
    public final transient Object[] f5714w;

    /* renamed from: x, reason: collision with root package name */
    public final transient int f5715x;

    public c0(Object obj, Object[] objArr, int i5) {
        this.f5713v = obj;
        this.f5714w = objArr;
        this.f5715x = i5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:16:0x019e  */
    /* JADX WARN: Type inference failed for: r16v11 */
    /* JADX WARN: Type inference failed for: r16v12 */
    /* JADX WARN: Type inference failed for: r16v13 */
    /* JADX WARN: Type inference failed for: r16v4 */
    /* JADX WARN: Type inference failed for: r4v6 */
    /* JADX WARN: Type inference failed for: r4v8, types: [java.lang.Object[]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static c0 a(int i5, Object[] objArr, a1.d dVar) {
        boolean z5;
        int i6;
        char c6;
        Object obj;
        char c8;
        short[] sArr;
        boolean z6;
        int i10;
        ?? r16;
        boolean z7;
        boolean z8;
        int i11 = i5;
        Object[] objArr2 = objArr;
        if (i11 == 0) {
            return f5709y;
        }
        Object obj2 = null;
        boolean z10 = false;
        int i12 = 1;
        if (i11 == 1) {
            Objects.requireNonNull(objArr2[0]);
            Objects.requireNonNull(objArr2[1]);
            return new c0(null, objArr2, 1);
        }
        a2.q(i11, objArr2.length >> 1);
        int j = v.j(i11);
        char c10 = 2;
        if (i11 == 1) {
            Objects.requireNonNull(objArr2[0]);
            Objects.requireNonNull(objArr2[1]);
            z8 = false;
            i11 = 1;
            i6 = 1;
        } else {
            int i13 = j - 1;
            if (j <= 128) {
                byte[] bArr = new byte[j];
                Arrays.fill(bArr, (byte) -1);
                int i14 = 0;
                int i15 = 0;
                while (i14 < i11) {
                    int i16 = i15 + i15;
                    int i17 = i14 + i14;
                    Object obj3 = objArr2[i17];
                    Objects.requireNonNull(obj3);
                    Object obj4 = objArr2[i17 ^ i12];
                    Objects.requireNonNull(obj4);
                    int a = a2.a(obj3.hashCode());
                    while (true) {
                        int i18 = a & i13;
                        z6 = z10;
                        i10 = i12;
                        int i19 = bArr[i18] & 255;
                        if (i19 == 255) {
                            bArr[i18] = (byte) i16;
                            if (i15 < i14) {
                                objArr2[i16] = obj3;
                                objArr2[i16 ^ 1] = obj4;
                            }
                            i15++;
                        } else {
                            if (obj3.equals(objArr2[i19])) {
                                int i20 = i19 ^ 1;
                                Object obj5 = objArr2[i20];
                                Objects.requireNonNull(obj5);
                                u uVar = new u(obj3, obj4, obj5);
                                objArr2[i20] = obj4;
                                obj2 = uVar;
                                break;
                            }
                            a = i18 + 1;
                            z10 = z6;
                            i12 = i10;
                        }
                    }
                    i14++;
                    z10 = z6;
                    i12 = i10;
                }
                z5 = z10;
                i6 = i12;
                if (i15 == i11) {
                    obj2 = bArr;
                    z8 = z5;
                } else {
                    sArr = new Object[3];
                    sArr[z5 ? 1 : 0] = bArr;
                    sArr[i6] = Integer.valueOf(i15);
                    sArr[2] = obj2;
                    obj2 = sArr;
                    z8 = z5;
                }
            } else {
                z5 = false;
                i6 = 1;
                if (j > 32768) {
                    int[] iArr = new int[j];
                    Arrays.fill(iArr, -1);
                    int i21 = 0;
                    int i22 = 0;
                    while (i21 < i11) {
                        int i23 = i22 + i22;
                        int i24 = i21 + i21;
                        Object obj6 = objArr2[i24];
                        Objects.requireNonNull(obj6);
                        Object obj7 = objArr2[i24 ^ 1];
                        Objects.requireNonNull(obj7);
                        int a10 = a2.a(obj6.hashCode());
                        while (true) {
                            int i25 = a10 & i13;
                            int i26 = iArr[i25];
                            if (i26 == -1) {
                                iArr[i25] = i23;
                                if (i22 < i21) {
                                    objArr2[i23] = obj6;
                                    objArr2[i23 ^ 1] = obj7;
                                }
                                i22++;
                                c8 = c10;
                            } else {
                                c8 = c10;
                                if (obj6.equals(objArr2[i26])) {
                                    int i27 = i26 ^ 1;
                                    Object obj8 = objArr2[i27];
                                    Objects.requireNonNull(obj8);
                                    u uVar2 = new u(obj6, obj7, obj8);
                                    objArr2[i27] = obj7;
                                    obj2 = uVar2;
                                    break;
                                }
                                a10 = i25 + 1;
                                c10 = c8;
                            }
                        }
                        i21++;
                        c10 = c8;
                    }
                    c6 = c10;
                    if (i22 == i11) {
                        obj = iArr;
                        r16 = z5;
                    } else {
                        Object[] objArr3 = new Object[3];
                        objArr3[0] = iArr;
                        objArr3[1] = Integer.valueOf(i22);
                        objArr3[c6] = obj2;
                        obj = objArr3;
                        r16 = z5;
                    }
                    z7 = obj instanceof Object[];
                    Object obj9 = obj;
                    if (z7) {
                        Object[] objArr4 = (Object[]) obj;
                        u uVar3 = (u) objArr4[c6];
                        if (dVar == null) {
                            throw uVar3.a();
                        }
                        dVar.f16v = uVar3;
                        Object obj10 = objArr4[r16];
                        int intValue = ((Integer) objArr4[i6]).intValue();
                        objArr2 = Arrays.copyOf(objArr2, intValue + intValue);
                        obj9 = obj10;
                        i11 = intValue;
                    }
                    return new c0(obj9, objArr2, i11);
                }
                sArr = new short[j];
                Arrays.fill(sArr, (short) -1);
                int i28 = 0;
                for (int i29 = 0; i29 < i11; i29++) {
                    int i30 = i28 + i28;
                    int i31 = i29 + i29;
                    Object obj11 = objArr2[i31];
                    Objects.requireNonNull(obj11);
                    Object obj12 = objArr2[i31 ^ 1];
                    Objects.requireNonNull(obj12);
                    int a11 = a2.a(obj11.hashCode());
                    while (true) {
                        int i32 = a11 & i13;
                        char c11 = (char) sArr[i32];
                        if (c11 == 65535) {
                            sArr[i32] = (short) i30;
                            if (i28 < i29) {
                                objArr2[i30] = obj11;
                                objArr2[i30 ^ 1] = obj12;
                            }
                            i28++;
                        } else {
                            if (obj11.equals(objArr2[c11])) {
                                int i33 = c11 ^ 1;
                                Object obj13 = objArr2[i33];
                                Objects.requireNonNull(obj13);
                                u uVar4 = new u(obj11, obj12, obj13);
                                objArr2[i33] = obj12;
                                obj2 = uVar4;
                                break;
                            }
                            a11 = i32 + 1;
                        }
                    }
                }
                if (i28 != i11) {
                    obj2 = new Object[]{sArr, Integer.valueOf(i28), obj2};
                    z8 = z5;
                }
                obj2 = sArr;
                z8 = z5;
            }
        }
        c6 = 2;
        obj = obj2;
        r16 = z8;
        z7 = obj instanceof Object[];
        Object obj92 = obj;
        if (z7) {
        }
        return new c0(obj92, objArr2, i11);
    }

    @Override // java.util.Map
    public final void clear() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final boolean containsKey(Object obj) {
        return get(obj) != null;
    }

    @Override // java.util.Map
    public final boolean containsValue(Object obj) {
        b0 b0Var = this.f5712i;
        if (b0Var == null) {
            b0Var = new b0(this.f5714w, 1, this.f5715x);
            this.f5712i = b0Var;
        }
        return b0Var.contains(obj);
    }

    @Override // java.util.Map
    public final Set entrySet() {
        z zVar = this.f5710d;
        if (zVar != null) {
            return zVar;
        }
        z zVar2 = new z(this, this.f5714w, this.f5715x);
        this.f5710d = zVar2;
        return zVar2;
    }

    @Override // java.util.Map
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Map) {
            return entrySet().equals(((Map) obj).entrySet());
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:5:0x009e A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x009f A[RETURN] */
    @Override // java.util.Map
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object get(Object obj) {
        Object obj2;
        if (obj != null) {
            int i5 = this.f5715x;
            Object[] objArr = this.f5714w;
            if (i5 == 1) {
                Object obj3 = objArr[0];
                Objects.requireNonNull(obj3);
                if (obj3.equals(obj)) {
                    obj2 = objArr[1];
                    Objects.requireNonNull(obj2);
                }
            } else {
                Object obj4 = this.f5713v;
                if (obj4 != null) {
                    if (obj4 instanceof byte[]) {
                        byte[] bArr = (byte[]) obj4;
                        int length = bArr.length - 1;
                        int a = a2.a(obj.hashCode());
                        while (true) {
                            int i6 = a & length;
                            int i10 = bArr[i6] & 255;
                            if (i10 == 255) {
                                break;
                            }
                            if (obj.equals(objArr[i10])) {
                                obj2 = objArr[i10 ^ 1];
                                break;
                            }
                            a = i6 + 1;
                        }
                    } else if (obj4 instanceof short[]) {
                        short[] sArr = (short[]) obj4;
                        int length2 = sArr.length - 1;
                        int a10 = a2.a(obj.hashCode());
                        while (true) {
                            int i11 = a10 & length2;
                            char c6 = (char) sArr[i11];
                            if (c6 == 65535) {
                                break;
                            }
                            if (obj.equals(objArr[c6])) {
                                obj2 = objArr[c6 ^ 1];
                                break;
                            }
                            a10 = i11 + 1;
                        }
                    } else {
                        int[] iArr = (int[]) obj4;
                        int length3 = iArr.length - 1;
                        int a11 = a2.a(obj.hashCode());
                        while (true) {
                            int i12 = a11 & length3;
                            int i13 = iArr[i12];
                            if (i13 == -1) {
                                break;
                            }
                            if (obj.equals(objArr[i13])) {
                                obj2 = objArr[i13 ^ 1];
                                break;
                            }
                            a11 = i12 + 1;
                        }
                    }
                }
            }
            if (obj2 != null) {
                return null;
            }
            return obj2;
        }
        obj2 = null;
        if (obj2 != null) {
        }
    }

    @Override // java.util.Map
    public final Object getOrDefault(Object obj, Object obj2) {
        Object obj3 = get(obj);
        return obj3 != null ? obj3 : obj2;
    }

    @Override // java.util.Map
    public final int hashCode() {
        z zVar = this.f5710d;
        if (zVar == null) {
            zVar = new z(this, this.f5714w, this.f5715x);
            this.f5710d = zVar;
        }
        Iterator it = zVar.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            Object next = it.next();
            i5 += next != null ? next.hashCode() : 0;
        }
        return i5;
    }

    @Override // java.util.Map
    public final boolean isEmpty() {
        return size() == 0;
    }

    @Override // java.util.Map
    public final Set keySet() {
        a0 a0Var = this.f5711e;
        if (a0Var != null) {
            return a0Var;
        }
        a0 a0Var2 = new a0(this, new b0(this.f5714w, 0, this.f5715x));
        this.f5711e = a0Var2;
        return a0Var2;
    }

    @Override // java.util.Map
    public final Object put(Object obj, Object obj2) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final void putAll(Map map) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final Object remove(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final int size() {
        return this.f5715x;
    }

    public final String toString() {
        int i5 = this.f5715x;
        if (i5 < 0) {
            throw new IllegalArgumentException(k0.d.i(i5, "size cannot be negative but was: "));
        }
        StringBuilder sb2 = new StringBuilder((int) Math.min(i5 * 8, 1073741824L));
        sb2.append('{');
        Iterator it = ((z) entrySet()).iterator();
        boolean z5 = true;
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            if (!z5) {
                sb2.append(", ");
            }
            sb2.append(entry.getKey());
            sb2.append('=');
            sb2.append(entry.getValue());
            z5 = false;
        }
        sb2.append('}');
        return sb2.toString();
    }

    @Override // java.util.Map
    public final Collection values() {
        b0 b0Var = this.f5712i;
        if (b0Var != null) {
            return b0Var;
        }
        b0 b0Var2 = new b0(this.f5714w, 1, this.f5715x);
        this.f5712i = b0Var2;
        return b0Var2;
    }
}
