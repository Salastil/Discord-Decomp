package fi;

import java.io.Serializable;
import java.util.Arrays;
import java.util.Collection;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.SortedMap;

/* loaded from: classes3.dex */
public final class w0 implements Map, Serializable {

    /* renamed from: y, reason: collision with root package name */
    public static final w0 f8728y = new w0(null, new Object[0], 0);

    /* renamed from: d, reason: collision with root package name */
    public transient t0 f8729d;

    /* renamed from: e, reason: collision with root package name */
    public transient u0 f8730e;

    /* renamed from: i, reason: collision with root package name */
    public transient v0 f8731i;

    /* renamed from: v, reason: collision with root package name */
    public final transient Object f8732v;

    /* renamed from: w, reason: collision with root package name */
    public final transient Object[] f8733w;

    /* renamed from: x, reason: collision with root package name */
    public final transient int f8734x;

    public w0(Object obj, Object[] objArr, int i5) {
        this.f8732v = obj;
        this.f8733w = objArr;
        this.f8734x = i5;
    }

    public static w0 a(Map map) {
        if ((map instanceof w0) && !(map instanceof SortedMap)) {
            return (w0) map;
        }
        Set<Map.Entry> entrySet = map.entrySet();
        boolean z5 = entrySet instanceof Collection;
        a1.d dVar = new a1.d(z5 ? entrySet.size() : 4, 9);
        if (z5) {
            int size = entrySet.size() * 2;
            Object[] objArr = (Object[]) dVar.f15i;
            if (size > objArr.length) {
                dVar.f15i = Arrays.copyOf(objArr, y.d(objArr.length, size));
            }
        }
        for (Map.Entry entry : entrySet) {
            dVar.w(entry.getKey(), entry.getValue());
        }
        return dVar.b();
    }

    @Override // java.util.Map
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final h0 entrySet() {
        t0 t0Var = this.f8729d;
        if (t0Var != null) {
            return t0Var;
        }
        t0 t0Var2 = new t0(this, this.f8733w, this.f8734x);
        this.f8729d = t0Var2;
        return t0Var2;
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
        v0 v0Var = this.f8731i;
        if (v0Var == null) {
            v0Var = new v0(this.f8733w, 1, this.f8734x);
            this.f8731i = v0Var;
        }
        return v0Var.contains(obj);
    }

    @Override // java.util.Map
    public final boolean equals(Object obj) {
        return p.e(this, obj);
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
            Object[] objArr = this.f8733w;
            if (this.f8734x == 1) {
                Object obj3 = objArr[0];
                Objects.requireNonNull(obj3);
                if (obj3.equals(obj)) {
                    obj2 = objArr[1];
                    Objects.requireNonNull(obj2);
                }
            } else {
                Object obj4 = this.f8732v;
                if (obj4 != null) {
                    if (obj4 instanceof byte[]) {
                        byte[] bArr = (byte[]) obj4;
                        int length = bArr.length - 1;
                        int p3 = p.p(obj.hashCode());
                        while (true) {
                            int i5 = p3 & length;
                            int i6 = bArr[i5] & 255;
                            if (i6 == 255) {
                                break;
                            }
                            if (obj.equals(objArr[i6])) {
                                obj2 = objArr[i6 ^ 1];
                                break;
                            }
                            p3 = i5 + 1;
                        }
                    } else if (obj4 instanceof short[]) {
                        short[] sArr = (short[]) obj4;
                        int length2 = sArr.length - 1;
                        int p5 = p.p(obj.hashCode());
                        while (true) {
                            int i10 = p5 & length2;
                            int i11 = sArr[i10] & 65535;
                            if (i11 == 65535) {
                                break;
                            }
                            if (obj.equals(objArr[i11])) {
                                obj2 = objArr[i11 ^ 1];
                                break;
                            }
                            p5 = i10 + 1;
                        }
                    } else {
                        int[] iArr = (int[]) obj4;
                        int length3 = iArr.length - 1;
                        int p6 = p.p(obj.hashCode());
                        while (true) {
                            int i12 = p6 & length3;
                            int i13 = iArr[i12];
                            if (i13 == -1) {
                                break;
                            }
                            if (obj.equals(objArr[i13])) {
                                obj2 = objArr[i13 ^ 1];
                                break;
                            }
                            p6 = i12 + 1;
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
        return p.j(entrySet());
    }

    @Override // java.util.Map
    public final boolean isEmpty() {
        return size() == 0;
    }

    @Override // java.util.Map
    public final Set keySet() {
        u0 u0Var = this.f8730e;
        if (u0Var != null) {
            return u0Var;
        }
        u0 u0Var2 = new u0(this, new v0(this.f8733w, 0, this.f8734x));
        this.f8730e = u0Var2;
        return u0Var2;
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
        return this.f8734x;
    }

    public final String toString() {
        int i5 = this.f8734x;
        p.c(i5, "size");
        StringBuilder sb2 = new StringBuilder((int) Math.min(i5 * 8, 1073741824L));
        sb2.append('{');
        e1 it = ((t0) entrySet()).iterator();
        boolean z5 = true;
        while (true) {
            c0 c0Var = (c0) it;
            if (!c0Var.hasNext()) {
                sb2.append('}');
                return sb2.toString();
            }
            Map.Entry entry = (Map.Entry) c0Var.next();
            if (!z5) {
                sb2.append(", ");
            }
            sb2.append(entry.getKey());
            sb2.append('=');
            sb2.append(entry.getValue());
            z5 = false;
        }
    }

    @Override // java.util.Map
    public final Collection values() {
        v0 v0Var = this.f8731i;
        if (v0Var != null) {
            return v0Var;
        }
        v0 v0Var2 = new v0(this.f8733w, 1, this.f8734x);
        this.f8731i = v0Var2;
        return v0Var2;
    }
}
