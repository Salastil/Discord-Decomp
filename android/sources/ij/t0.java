package ij;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class t0 {

    /* renamed from: e, reason: collision with root package name */
    public static final t0 f10924e = new t0(0, new int[0], new Object[0], false);
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int[] f10925b;

    /* renamed from: c, reason: collision with root package name */
    public Object[] f10926c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f10927d;

    public t0(int i5, int[] iArr, Object[] objArr, boolean z5) {
        this.a = i5;
        this.f10925b = iArr;
        this.f10926c = objArr;
        this.f10927d = z5;
    }

    public final void a(int i5) {
        int[] iArr = this.f10925b;
        if (i5 > iArr.length) {
            int i6 = this.a;
            int i10 = (i6 / 2) + i6;
            if (i10 >= i5) {
                i5 = i10;
            }
            if (i5 < 8) {
                i5 = 8;
            }
            this.f10925b = Arrays.copyOf(iArr, i5);
            this.f10926c = Arrays.copyOf(this.f10926c, i5);
        }
    }

    public final void b(int i5, Object obj) {
        if (!this.f10927d) {
            throw new UnsupportedOperationException();
        }
        a(this.a + 1);
        int[] iArr = this.f10925b;
        int i6 = this.a;
        iArr[i6] = i5;
        this.f10926c[i6] = obj;
        this.a = i6 + 1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof t0)) {
            return false;
        }
        t0 t0Var = (t0) obj;
        int i5 = this.a;
        if (i5 == t0Var.a) {
            int[] iArr = this.f10925b;
            int[] iArr2 = t0Var.f10925b;
            int i6 = 0;
            while (true) {
                if (i6 >= i5) {
                    Object[] objArr = this.f10926c;
                    Object[] objArr2 = t0Var.f10926c;
                    int i10 = this.a;
                    for (int i11 = 0; i11 < i10; i11++) {
                        if (objArr[i11].equals(objArr2[i11])) {
                        }
                    }
                    return true;
                }
                if (iArr[i6] != iArr2[i6]) {
                    break;
                }
                i6++;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.a;
        int i6 = (527 + i5) * 31;
        int[] iArr = this.f10925b;
        int i10 = 17;
        int i11 = 17;
        for (int i12 = 0; i12 < i5; i12++) {
            i11 = (i11 * 31) + iArr[i12];
        }
        int i13 = (i6 + i11) * 31;
        Object[] objArr = this.f10926c;
        int i14 = this.a;
        for (int i15 = 0; i15 < i14; i15++) {
            i10 = (i10 * 31) + objArr[i15].hashCode();
        }
        return i13 + i10;
    }
}
