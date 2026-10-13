package androidx.collection;

import java.util.Arrays;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import s.l;
import t.a;

/* loaded from: classes.dex */
public final class SparseArrayCompat implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ boolean f1209d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ int[] f1210e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object[] f1211i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ int f1212v;

    public SparseArrayCompat(int i5) {
        int i6;
        int i10 = 4;
        while (true) {
            i6 = 40;
            if (i10 >= 32) {
                break;
            }
            int i11 = (1 << i10) - 12;
            if (40 <= i11) {
                i6 = i11;
                break;
            }
            i10++;
        }
        int i12 = i6 / 4;
        this.f1210e = new int[i12];
        this.f1211i = new Object[i12];
    }

    public final void a(int i5, Object obj) {
        int i6 = this.f1212v;
        if (i6 != 0 && i5 <= this.f1210e[i6 - 1]) {
            e(i5, obj);
            return;
        }
        if (this.f1209d && i6 >= this.f1210e.length) {
            l.a(this);
        }
        int i10 = this.f1212v;
        if (i10 >= this.f1210e.length) {
            int i11 = (i10 + 1) * 4;
            int i12 = 4;
            while (true) {
                if (i12 >= 32) {
                    break;
                }
                int i13 = (1 << i12) - 12;
                if (i11 <= i13) {
                    i11 = i13;
                    break;
                }
                i12++;
            }
            int i14 = i11 / 4;
            int[] copyOf = Arrays.copyOf(this.f1210e, i14);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f1210e = copyOf;
            Object[] copyOf2 = Arrays.copyOf(this.f1211i, i14);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f1211i = copyOf2;
        }
        this.f1210e[i10] = i5;
        this.f1211i[i10] = obj;
        this.f1212v = i10 + 1;
    }

    public final boolean b(int i5) {
        if (this.f1209d) {
            l.a(this);
        }
        return a.a(this.f1212v, i5, this.f1210e) >= 0;
    }

    public final Object c(int i5) {
        Object obj;
        Intrinsics.checkNotNullParameter(this, "<this>");
        int a = a.a(this.f1212v, i5, this.f1210e);
        if (a < 0 || (obj = this.f1211i[a]) == l.f17686b) {
            return null;
        }
        return obj;
    }

    public final Object clone() {
        Object clone = super.clone();
        Intrinsics.checkNotNull(clone, "null cannot be cast to non-null type androidx.collection.SparseArrayCompat<E of androidx.collection.SparseArrayCompat>");
        SparseArrayCompat sparseArrayCompat = (SparseArrayCompat) clone;
        sparseArrayCompat.f1210e = (int[]) this.f1210e.clone();
        sparseArrayCompat.f1211i = (Object[]) this.f1211i.clone();
        return sparseArrayCompat;
    }

    public final int d(int i5) {
        if (this.f1209d) {
            l.a(this);
        }
        return this.f1210e[i5];
    }

    public final void e(int i5, Object obj) {
        int a = a.a(this.f1212v, i5, this.f1210e);
        if (a >= 0) {
            this.f1211i[a] = obj;
            return;
        }
        int i6 = ~a;
        int i10 = this.f1212v;
        if (i6 < i10) {
            Object[] objArr = this.f1211i;
            if (objArr[i6] == l.f17686b) {
                this.f1210e[i6] = i5;
                objArr[i6] = obj;
                return;
            }
        }
        if (this.f1209d && i10 >= this.f1210e.length) {
            l.a(this);
            i6 = ~a.a(this.f1212v, i5, this.f1210e);
        }
        int i11 = this.f1212v;
        if (i11 >= this.f1210e.length) {
            int i12 = (i11 + 1) * 4;
            int i13 = 4;
            while (true) {
                if (i13 >= 32) {
                    break;
                }
                int i14 = (1 << i13) - 12;
                if (i12 <= i14) {
                    i12 = i14;
                    break;
                }
                i13++;
            }
            int i15 = i12 / 4;
            int[] copyOf = Arrays.copyOf(this.f1210e, i15);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f1210e = copyOf;
            Object[] copyOf2 = Arrays.copyOf(this.f1211i, i15);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f1211i = copyOf2;
        }
        int i16 = this.f1212v;
        if (i16 - i6 != 0) {
            int[] iArr = this.f1210e;
            int i17 = i6 + 1;
            u.e(i17, i6, iArr, iArr, i16);
            Object[] objArr2 = this.f1211i;
            u.d(i17, i6, this.f1212v, objArr2, objArr2);
        }
        this.f1210e[i6] = i5;
        this.f1211i[i6] = obj;
        this.f1212v++;
    }

    public final void f(int i5) {
        Intrinsics.checkNotNullParameter(this, "<this>");
        int a = a.a(this.f1212v, i5, this.f1210e);
        if (a >= 0) {
            Object[] objArr = this.f1211i;
            Object obj = objArr[a];
            Object obj2 = l.f17686b;
            if (obj != obj2) {
                objArr[a] = obj2;
                this.f1209d = true;
            }
        }
    }

    public final int g() {
        if (this.f1209d) {
            l.a(this);
        }
        return this.f1212v;
    }

    public final Object h(int i5) {
        if (this.f1209d) {
            l.a(this);
        }
        Object[] objArr = this.f1211i;
        if (i5 < objArr.length) {
            return objArr[i5];
        }
        throw new ArrayIndexOutOfBoundsException();
    }

    public final String toString() {
        if (g() <= 0) {
            return "{}";
        }
        StringBuilder sb2 = new StringBuilder(this.f1212v * 28);
        sb2.append('{');
        int i5 = this.f1212v;
        for (int i6 = 0; i6 < i5; i6++) {
            if (i6 > 0) {
                sb2.append(", ");
            }
            sb2.append(d(i6));
            sb2.append('=');
            Object h6 = h(i6);
            if (h6 != this) {
                sb2.append(h6);
            } else {
                sb2.append("(this Map)");
            }
        }
        sb2.append('}');
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }
}
