package bg;

import java.util.Arrays;
import java.util.Objects;
import java.util.Set;

/* loaded from: classes3.dex */
public abstract class r extends k implements Set {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f2988i = 0;

    /* renamed from: e, reason: collision with root package name */
    public transient p f2989e;

    public static r i(int i5, Object... objArr) {
        if (i5 == 0) {
            return c0.G;
        }
        if (i5 == 1) {
            Object obj = objArr[0];
            Objects.requireNonNull(obj);
            return new f0(obj);
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
            int rotateLeft = (int) (Integer.rotateLeft((int) (hashCode * (-862048943)), 15) * 461845907);
            while (true) {
                int i13 = rotateLeft & i6;
                Object obj3 = objArr2[i13];
                if (obj3 == null) {
                    objArr[i11] = obj2;
                    objArr2[i13] = obj2;
                    i10 += hashCode;
                    i11++;
                    break;
                }
                if (!obj3.equals(obj2)) {
                    rotateLeft++;
                }
            }
        }
        Arrays.fill(objArr, i11, i5, (Object) null);
        if (i11 == 1) {
            Object obj4 = objArr[0];
            Objects.requireNonNull(obj4);
            return new f0(obj4);
        }
        if (j(i11) < j / 2) {
            return i(i11, objArr);
        }
        if (i11 <= 0) {
            objArr = Arrays.copyOf(objArr, i11);
        }
        return new c0(i10, i6, i11, objArr, objArr2);
    }

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

    @Override // java.util.Collection, java.util.Set
    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if ((obj instanceof r) && (this instanceof c0) && (((r) obj) instanceof c0) && ((c0) this).f2939w != obj.hashCode()) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Set)) {
            return false;
        }
        Set set = (Set) obj;
        try {
            if (size() == set.size()) {
                return containsAll(set);
            }
            return false;
        } catch (ClassCastException | NullPointerException unused) {
            return false;
        }
    }

    @Override // java.util.Collection, java.util.Set
    public int hashCode() {
        return b.b(this);
    }

    public p k() {
        p pVar = this.f2989e;
        if (pVar != null) {
            return pVar;
        }
        p m5 = m();
        this.f2989e = m5;
        return m5;
    }

    public p m() {
        Object[] array = toArray(k.f2960d);
        l lVar = p.f2980e;
        return p.k(array.length, array);
    }
}
