package s;

import java.util.Arrays;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class k implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ boolean f17682d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ long[] f17683e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object[] f17684i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ int f17685v;

    public k(int i5) {
        if (i5 == 0) {
            this.f17683e = t.a.f18149b;
            this.f17684i = t.a.f18150c;
            return;
        }
        int i6 = i5 * 8;
        int i10 = 4;
        while (true) {
            if (i10 >= 32) {
                break;
            }
            int i11 = (1 << i10) - 12;
            if (i6 <= i11) {
                i6 = i11;
                break;
            }
            i10++;
        }
        int i12 = i6 / 8;
        this.f17683e = new long[i12];
        this.f17684i = new Object[i12];
    }

    public final void a() {
        int i5 = this.f17685v;
        Object[] objArr = this.f17684i;
        for (int i6 = 0; i6 < i5; i6++) {
            objArr[i6] = null;
        }
        this.f17685v = 0;
        this.f17682d = false;
    }

    public final Object b(long j) {
        Object obj;
        int b10 = t.a.b(this.f17683e, this.f17685v, j);
        if (b10 < 0 || (obj = this.f17684i[b10]) == l.a) {
            return null;
        }
        return obj;
    }

    public final int c(long j) {
        if (this.f17682d) {
            int i5 = this.f17685v;
            long[] jArr = this.f17683e;
            Object[] objArr = this.f17684i;
            int i6 = 0;
            for (int i10 = 0; i10 < i5; i10++) {
                Object obj = objArr[i10];
                if (obj != l.a) {
                    if (i10 != i6) {
                        jArr[i6] = jArr[i10];
                        objArr[i6] = obj;
                        objArr[i10] = null;
                    }
                    i6++;
                }
            }
            this.f17682d = false;
            this.f17685v = i6;
        }
        return t.a.b(this.f17683e, this.f17685v, j);
    }

    public final Object clone() {
        Object clone = super.clone();
        Intrinsics.checkNotNull(clone, "null cannot be cast to non-null type androidx.collection.LongSparseArray<E of androidx.collection.LongSparseArray>");
        k kVar = (k) clone;
        kVar.f17683e = (long[]) this.f17683e.clone();
        kVar.f17684i = (Object[]) this.f17684i.clone();
        return kVar;
    }

    public final long d(int i5) {
        int i6;
        if (i5 < 0 || i5 >= (i6 = this.f17685v)) {
            t.a.c("Expected index to be within 0..size()-1, but was " + i5);
            throw null;
        }
        if (this.f17682d) {
            long[] jArr = this.f17683e;
            Object[] objArr = this.f17684i;
            int i10 = 0;
            for (int i11 = 0; i11 < i6; i11++) {
                Object obj = objArr[i11];
                if (obj != l.a) {
                    if (i11 != i10) {
                        jArr[i10] = jArr[i11];
                        objArr[i10] = obj;
                        objArr[i11] = null;
                    }
                    i10++;
                }
            }
            this.f17682d = false;
            this.f17685v = i10;
        }
        return this.f17683e[i5];
    }

    public final void e(long j, Object obj) {
        Object obj2 = l.a;
        int b10 = t.a.b(this.f17683e, this.f17685v, j);
        if (b10 >= 0) {
            this.f17684i[b10] = obj;
            return;
        }
        int i5 = ~b10;
        int i6 = this.f17685v;
        if (i5 < i6) {
            Object[] objArr = this.f17684i;
            if (objArr[i5] == obj2) {
                this.f17683e[i5] = j;
                objArr[i5] = obj;
                return;
            }
        }
        if (this.f17682d) {
            long[] jArr = this.f17683e;
            if (i6 >= jArr.length) {
                Object[] objArr2 = this.f17684i;
                int i10 = 0;
                for (int i11 = 0; i11 < i6; i11++) {
                    Object obj3 = objArr2[i11];
                    if (obj3 != obj2) {
                        if (i11 != i10) {
                            jArr[i10] = jArr[i11];
                            objArr2[i10] = obj3;
                            objArr2[i11] = null;
                        }
                        i10++;
                    }
                }
                this.f17682d = false;
                this.f17685v = i10;
                i5 = ~t.a.b(this.f17683e, i10, j);
            }
        }
        int i12 = this.f17685v;
        if (i12 >= this.f17683e.length) {
            int i13 = (i12 + 1) * 8;
            int i14 = 4;
            while (true) {
                if (i14 >= 32) {
                    break;
                }
                int i15 = (1 << i14) - 12;
                if (i13 <= i15) {
                    i13 = i15;
                    break;
                }
                i14++;
            }
            int i16 = i13 / 8;
            long[] copyOf = Arrays.copyOf(this.f17683e, i16);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f17683e = copyOf;
            Object[] copyOf2 = Arrays.copyOf(this.f17684i, i16);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            this.f17684i = copyOf2;
        }
        int i17 = this.f17685v;
        if (i17 - i5 != 0) {
            long[] jArr2 = this.f17683e;
            int i18 = i5 + 1;
            u.f(jArr2, jArr2, i18, i5, i17);
            Object[] objArr3 = this.f17684i;
            u.d(i18, i5, this.f17685v, objArr3, objArr3);
        }
        this.f17683e[i5] = j;
        this.f17684i[i5] = obj;
        this.f17685v++;
    }

    public final int f() {
        if (this.f17682d) {
            int i5 = this.f17685v;
            long[] jArr = this.f17683e;
            Object[] objArr = this.f17684i;
            int i6 = 0;
            for (int i10 = 0; i10 < i5; i10++) {
                Object obj = objArr[i10];
                if (obj != l.a) {
                    if (i10 != i6) {
                        jArr[i6] = jArr[i10];
                        objArr[i6] = obj;
                        objArr[i10] = null;
                    }
                    i6++;
                }
            }
            this.f17682d = false;
            this.f17685v = i6;
        }
        return this.f17685v;
    }

    public final Object g(int i5) {
        int i6;
        if (i5 < 0 || i5 >= (i6 = this.f17685v)) {
            t.a.c("Expected index to be within 0..size()-1, but was " + i5);
            throw null;
        }
        if (this.f17682d) {
            long[] jArr = this.f17683e;
            Object[] objArr = this.f17684i;
            int i10 = 0;
            for (int i11 = 0; i11 < i6; i11++) {
                Object obj = objArr[i11];
                if (obj != l.a) {
                    if (i11 != i10) {
                        jArr[i10] = jArr[i11];
                        objArr[i10] = obj;
                        objArr[i11] = null;
                    }
                    i10++;
                }
            }
            this.f17682d = false;
            this.f17685v = i10;
        }
        return this.f17684i[i5];
    }

    public final String toString() {
        if (f() <= 0) {
            return "{}";
        }
        StringBuilder sb2 = new StringBuilder(this.f17685v * 28);
        sb2.append('{');
        int i5 = this.f17685v;
        for (int i6 = 0; i6 < i5; i6++) {
            if (i6 > 0) {
                sb2.append(", ");
            }
            sb2.append(d(i6));
            sb2.append('=');
            Object g6 = g(i6);
            if (g6 != sb2) {
                sb2.append(g6);
            } else {
                sb2.append("(this Map)");
            }
        }
        sb2.append('}');
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public k() {
        this(10);
    }
}
