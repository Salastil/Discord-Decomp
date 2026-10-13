package androidx.datastore.preferences.protobuf;

import java.util.Arrays;

/* loaded from: classes.dex */
public final class e1 {

    /* renamed from: f, reason: collision with root package name */
    public static final e1 f1736f = new e1(0, new int[0], new Object[0], false);
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int[] f1737b;

    /* renamed from: c, reason: collision with root package name */
    public Object[] f1738c;

    /* renamed from: d, reason: collision with root package name */
    public int f1739d = -1;

    /* renamed from: e, reason: collision with root package name */
    public boolean f1740e;

    public e1(int i5, int[] iArr, Object[] objArr, boolean z5) {
        this.a = i5;
        this.f1737b = iArr;
        this.f1738c = objArr;
        this.f1740e = z5;
    }

    public static e1 b() {
        return new e1(0, new int[8], new Object[8], true);
    }

    public final int a() {
        int y5;
        int A;
        int u5;
        int i5 = this.f1739d;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.a; i10++) {
            int i11 = this.f1737b[i10];
            int i12 = i11 >>> 3;
            int i13 = i11 & 7;
            if (i13 != 0) {
                if (i13 == 1) {
                    ((Long) this.f1738c[i10]).getClass();
                    u5 = j.u(i12);
                } else if (i13 == 2) {
                    u5 = j.r(i12, (f) this.f1738c[i10]);
                } else if (i13 == 3) {
                    y5 = j.y(i12) * 2;
                    A = ((e1) this.f1738c[i10]).a();
                } else {
                    if (i13 != 5) {
                        throw new IllegalStateException(x.b());
                    }
                    ((Integer) this.f1738c[i10]).getClass();
                    u5 = j.t(i12);
                }
                i6 = u5 + i6;
            } else {
                long longValue = ((Long) this.f1738c[i10]).longValue();
                y5 = j.y(i12);
                A = j.A(longValue);
            }
            i6 = A + y5 + i6;
        }
        this.f1739d = i6;
        return i6;
    }

    public final void c(int i5, Object obj) {
        if (!this.f1740e) {
            throw new UnsupportedOperationException();
        }
        int i6 = this.a;
        int[] iArr = this.f1737b;
        if (i6 == iArr.length) {
            int i10 = i6 + (i6 < 4 ? 8 : i6 >> 1);
            this.f1737b = Arrays.copyOf(iArr, i10);
            this.f1738c = Arrays.copyOf(this.f1738c, i10);
        }
        int[] iArr2 = this.f1737b;
        int i11 = this.a;
        iArr2[i11] = i5;
        this.f1738c[i11] = obj;
        this.a = i11 + 1;
    }

    public final void d(f0 f0Var) {
        if (this.a == 0) {
            return;
        }
        f0Var.getClass();
        j jVar = (j) f0Var.a;
        for (int i5 = 0; i5 < this.a; i5++) {
            int i6 = this.f1737b[i5];
            Object obj = this.f1738c[i5];
            int i10 = i6 >>> 3;
            int i11 = i6 & 7;
            if (i11 == 0) {
                jVar.U(i10, ((Long) obj).longValue());
            } else if (i11 == 1) {
                jVar.K(i10, ((Long) obj).longValue());
            } else if (i11 == 2) {
                f0Var.a(i10, (f) obj);
            } else if (i11 == 3) {
                jVar.R(i10, 3);
                ((e1) obj).d(f0Var);
                jVar.R(i10, 4);
            } else {
                if (i11 != 5) {
                    throw new RuntimeException(x.b());
                }
                jVar.I(i10, ((Integer) obj).intValue());
            }
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof e1)) {
            return false;
        }
        e1 e1Var = (e1) obj;
        int i5 = this.a;
        if (i5 == e1Var.a) {
            int[] iArr = this.f1737b;
            int[] iArr2 = e1Var.f1737b;
            int i6 = 0;
            while (true) {
                if (i6 >= i5) {
                    Object[] objArr = this.f1738c;
                    Object[] objArr2 = e1Var.f1738c;
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
        int[] iArr = this.f1737b;
        int i10 = 17;
        int i11 = 17;
        for (int i12 = 0; i12 < i5; i12++) {
            i11 = (i11 * 31) + iArr[i12];
        }
        int i13 = (i6 + i11) * 31;
        Object[] objArr = this.f1738c;
        int i14 = this.a;
        for (int i15 = 0; i15 < i14; i15++) {
            i10 = (i10 * 31) + objArr[i15].hashCode();
        }
        return i13 + i10;
    }
}
