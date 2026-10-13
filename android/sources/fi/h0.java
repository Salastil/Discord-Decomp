package fi;

import java.util.Arrays;
import java.util.Collection;
import java.util.Objects;
import java.util.Set;
import java.util.SortedSet;

/* loaded from: classes3.dex */
public abstract class h0 extends z implements Set {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f8661i = 0;

    /* renamed from: e, reason: collision with root package name */
    public transient e0 f8662e;

    public static int j(int i5) {
        int max = Math.max(i5, 2);
        if (max >= 751619276) {
            if (max < 1073741824) {
                return 1073741824;
            }
            throw new IllegalArgumentException("collection too large");
        }
        int highestOneBit = Integer.highestOneBit(max - 1) << 1;
        while (highestOneBit * 0.7d < max) {
            highestOneBit <<= 1;
        }
        return highestOneBit;
    }

    public static h0 k(int i5, Object... objArr) {
        if (i5 == 0) {
            return x0.G;
        }
        if (i5 == 1) {
            Object obj = objArr[0];
            Objects.requireNonNull(obj);
            return new d1(obj);
        }
        int j = j(i5);
        Object[] objArr2 = new Object[j];
        int i6 = j - 1;
        int i10 = 0;
        int i11 = 0;
        for (int i12 = 0; i12 < i5; i12++) {
            Object obj2 = objArr[i12];
            if (obj2 == null) {
                StringBuilder sb2 = new StringBuilder(20);
                sb2.append("at index ");
                sb2.append(i12);
                throw new NullPointerException(sb2.toString());
            }
            int hashCode = obj2.hashCode();
            int p3 = p.p(hashCode);
            while (true) {
                int i13 = p3 & i6;
                Object obj3 = objArr2[i13];
                if (obj3 == null) {
                    objArr[i11] = obj2;
                    objArr2[i13] = obj2;
                    i10 += hashCode;
                    i11++;
                    break;
                }
                if (obj3.equals(obj2)) {
                    break;
                }
                p3++;
            }
        }
        Arrays.fill(objArr, i11, i5, (Object) null);
        if (i11 == 1) {
            Object obj4 = objArr[0];
            Objects.requireNonNull(obj4);
            return new d1(obj4);
        }
        if (j(i11) < j / 2) {
            return k(i11, objArr);
        }
        int length = objArr.length;
        if (i11 < (length >> 1) + (length >> 2)) {
            objArr = Arrays.copyOf(objArr, i11);
        }
        return new x0(i10, i6, i11, objArr, objArr2);
    }

    public static h0 m(Collection collection) {
        if ((collection instanceof h0) && !(collection instanceof SortedSet)) {
            h0 h0Var = (h0) collection;
            if (!h0Var.i()) {
                return h0Var;
            }
        }
        Object[] array = collection.toArray();
        return k(array.length, array);
    }

    @Override // fi.z
    public e0 a() {
        e0 e0Var = this.f8662e;
        if (e0Var != null) {
            return e0Var;
        }
        e0 n6 = n();
        this.f8662e = n6;
        return n6;
    }

    @Override // java.util.Collection, java.util.Set
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if ((obj instanceof h0) && (this instanceof x0) && (((h0) obj) instanceof x0) && hashCode() != obj.hashCode()) {
            return false;
        }
        return p.f(this, obj);
    }

    @Override // java.util.Collection, java.util.Set
    public int hashCode() {
        return p.j(this);
    }

    public e0 n() {
        Object[] array = toArray(z.f8744d);
        c0 c0Var = e0.f8656e;
        return e0.j(array.length, array);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    /* renamed from: p, reason: merged with bridge method [inline-methods] */
    public abstract e1 iterator();
}
