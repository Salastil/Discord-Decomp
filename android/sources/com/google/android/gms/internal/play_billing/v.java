package com.google.android.gms.internal.play_billing;

import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import java.util.Set;

/* loaded from: classes3.dex */
public abstract class v extends p implements Set {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f5852i = 0;

    /* renamed from: e, reason: collision with root package name */
    public transient t f5853e;

    public static int j(int i5) {
        int max = Math.max(i5, 2);
        if (max >= 751619276) {
            if (max < 1073741824) {
                return 1073741824;
            }
            throw new IllegalArgumentException("collection too large");
        }
        int highestOneBit = Integer.highestOneBit(max - 1);
        do {
            highestOneBit += highestOneBit;
        } while (highestOneBit * 0.7d < max);
        return highestOneBit;
    }

    public static v m(int i5, Object... objArr) {
        if (i5 == 0) {
            return d0.G;
        }
        if (i5 == 1) {
            Object obj = objArr[0];
            Objects.requireNonNull(obj);
            return new e0(obj);
        }
        int j = j(i5);
        Object[] objArr2 = new Object[j];
        int i6 = j - 1;
        int i10 = 0;
        int i11 = 0;
        for (int i12 = 0; i12 < i5; i12++) {
            Object obj2 = objArr[i12];
            if (obj2 == null) {
                throw new NullPointerException(k0.d.i(i12, "at index "));
            }
            int hashCode = obj2.hashCode();
            int a = a2.a(hashCode);
            while (true) {
                int i13 = a & i6;
                Object obj3 = objArr2[i13];
                if (obj3 == null) {
                    objArr[i11] = obj2;
                    objArr2[i13] = obj2;
                    i10 += hashCode;
                    i11++;
                    break;
                }
                if (!obj3.equals(obj2)) {
                    a++;
                }
            }
        }
        Arrays.fill(objArr, i11, i5, (Object) null);
        if (i11 == 1) {
            Object obj4 = objArr[0];
            Objects.requireNonNull(obj4);
            return new e0(obj4);
        }
        if (j(i11) < j / 2) {
            return m(i11, objArr);
        }
        int length = objArr.length;
        if (i11 < (length >> 1) + (length >> 2)) {
            objArr = Arrays.copyOf(objArr, i11);
        }
        return new d0(i10, i6, i11, objArr, objArr2);
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public t e() {
        t tVar = this.f5853e;
        if (tVar != null) {
            return tVar;
        }
        t k = k();
        this.f5853e = k;
        return k;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if ((obj instanceof v) && (this instanceof d0) && (((v) obj) instanceof d0) && hashCode() != obj.hashCode()) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (obj instanceof Set) {
            Set set = (Set) obj;
            try {
                if (size() == set.size()) {
                    return containsAll(set);
                }
            } catch (ClassCastException | NullPointerException unused) {
            }
        }
        return false;
    }

    @Override // java.util.Collection, java.util.Set
    public int hashCode() {
        Iterator it = iterator();
        int i5 = 0;
        while (it.hasNext()) {
            Object next = it.next();
            i5 += next != null ? next.hashCode() : 0;
        }
        return i5;
    }

    public t k() {
        Object[] array = toArray(p.f5799d);
        q qVar = t.f5834e;
        return t.k(array.length, array);
    }
}
