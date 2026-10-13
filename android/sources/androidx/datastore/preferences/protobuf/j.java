package androidx.datastore.preferences.protobuf;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.logging.Level;
import java.util.logging.Logger;

/* loaded from: classes.dex */
public final class j extends m0 {

    /* renamed from: h, reason: collision with root package name */
    public static final Logger f1765h = Logger.getLogger(j.class.getName());

    /* renamed from: i, reason: collision with root package name */
    public static final boolean f1766i = n1.f1794f;

    /* renamed from: c, reason: collision with root package name */
    public f0 f1767c;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f1768d;

    /* renamed from: e, reason: collision with root package name */
    public final int f1769e;

    /* renamed from: f, reason: collision with root package name */
    public int f1770f;

    /* renamed from: g, reason: collision with root package name */
    public final e2.k f1771g;

    public j(e2.k kVar, int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("bufferSize must be >= 0");
        }
        int max = Math.max(i5, 20);
        this.f1768d = new byte[max];
        this.f1769e = max;
        this.f1771g = kVar;
    }

    public static int A(long j) {
        int i5;
        if (((-128) & j) == 0) {
            return 1;
        }
        if (j < 0) {
            return 10;
        }
        if (((-34359738368L) & j) != 0) {
            j >>>= 28;
            i5 = 6;
        } else {
            i5 = 2;
        }
        if (((-2097152) & j) != 0) {
            i5 += 2;
            j >>>= 14;
        }
        return (j & (-16384)) != 0 ? i5 + 1 : i5;
    }

    public static int r(int i5, f fVar) {
        return s(fVar) + y(i5);
    }

    public static int s(f fVar) {
        int size = fVar.size();
        return z(size) + size;
    }

    public static int t(int i5) {
        return y(i5) + 4;
    }

    public static int u(int i5) {
        return y(i5) + 8;
    }

    public static int v(int i5, a aVar, w0 w0Var) {
        return aVar.b(w0Var) + (y(i5) * 2);
    }

    public static int w(int i5) {
        if (i5 >= 0) {
            return z(i5);
        }
        return 10;
    }

    public static int x(String str) {
        int length;
        try {
            length = q1.b(str);
        } catch (p1 unused) {
            length = str.getBytes(v.a).length;
        }
        return z(length) + length;
    }

    public static int y(int i5) {
        return z(i5 << 3);
    }

    public static int z(int i5) {
        if ((i5 & (-128)) == 0) {
            return 1;
        }
        if ((i5 & (-16384)) == 0) {
            return 2;
        }
        if (((-2097152) & i5) == 0) {
            return 3;
        }
        return (i5 & (-268435456)) == 0 ? 4 : 5;
    }

    public final void B() {
        this.f1771g.write(this.f1768d, 0, this.f1770f);
        this.f1770f = 0;
    }

    public final void C(int i5) {
        if (this.f1769e - this.f1770f < i5) {
            B();
        }
    }

    public final void D(byte b10) {
        if (this.f1770f == this.f1769e) {
            B();
        }
        int i5 = this.f1770f;
        this.f1770f = i5 + 1;
        this.f1768d[i5] = b10;
    }

    public final void E(byte[] bArr, int i5, int i6) {
        int i10 = this.f1770f;
        int i11 = this.f1769e;
        int i12 = i11 - i10;
        byte[] bArr2 = this.f1768d;
        if (i12 >= i6) {
            System.arraycopy(bArr, i5, bArr2, i10, i6);
            this.f1770f += i6;
            return;
        }
        System.arraycopy(bArr, i5, bArr2, i10, i12);
        int i13 = i5 + i12;
        int i14 = i6 - i12;
        this.f1770f = i11;
        B();
        if (i14 > i11) {
            this.f1771g.write(bArr, i13, i14);
        } else {
            System.arraycopy(bArr, i13, bArr2, 0, i14);
            this.f1770f = i14;
        }
    }

    public final void F(int i5, boolean z5) {
        C(11);
        o(i5, 0);
        byte b10 = z5 ? (byte) 1 : (byte) 0;
        int i6 = this.f1770f;
        this.f1770f = i6 + 1;
        this.f1768d[i6] = b10;
    }

    public final void G(int i5, f fVar) {
        R(i5, 2);
        H(fVar);
    }

    public final void H(f fVar) {
        T(fVar.size());
        l(fVar.f1744e, fVar.b(), fVar.size());
    }

    public final void I(int i5, int i6) {
        C(14);
        o(i5, 5);
        m(i6);
    }

    public final void J(int i5) {
        C(4);
        m(i5);
    }

    public final void K(int i5, long j) {
        C(18);
        o(i5, 1);
        n(j);
    }

    public final void L(long j) {
        C(8);
        n(j);
    }

    public final void M(int i5, int i6) {
        C(20);
        o(i5, 0);
        if (i6 >= 0) {
            p(i6);
        } else {
            q(i6);
        }
    }

    public final void N(int i5) {
        if (i5 >= 0) {
            T(i5);
        } else {
            V(i5);
        }
    }

    public final void O(int i5, a aVar, w0 w0Var) {
        R(i5, 2);
        T(aVar.b(w0Var));
        w0Var.d(aVar, this.f1767c);
    }

    public final void P(int i5, String str) {
        R(i5, 2);
        Q(str);
    }

    public final void Q(String str) {
        try {
            int length = str.length() * 3;
            int z5 = z(length);
            int i5 = z5 + length;
            int i6 = this.f1769e;
            if (i5 > i6) {
                byte[] bArr = new byte[length];
                int f2 = q1.a.f(str, bArr, 0, length);
                T(f2);
                E(bArr, 0, f2);
                return;
            }
            if (i5 > i6 - this.f1770f) {
                B();
            }
            int z6 = z(str.length());
            int i10 = this.f1770f;
            byte[] bArr2 = this.f1768d;
            try {
                if (z6 == z5) {
                    int i11 = i10 + z6;
                    this.f1770f = i11;
                    int f10 = q1.a.f(str, bArr2, i11, i6 - i11);
                    this.f1770f = i10;
                    p((f10 - i10) - z6);
                    this.f1770f = f10;
                } else {
                    int b10 = q1.b(str);
                    p(b10);
                    this.f1770f = q1.a.f(str, bArr2, this.f1770f, b10);
                }
            } catch (p1 e9) {
                this.f1770f = i10;
                throw e9;
            } catch (ArrayIndexOutOfBoundsException e10) {
                throw new i(e10);
            }
        } catch (p1 e11) {
            f1765h.log(Level.WARNING, "Converting ill-formed UTF-16. Your Protocol Buffer will not round trip correctly!", (Throwable) e11);
            byte[] bytes = str.getBytes(v.a);
            try {
                T(bytes.length);
                l(bytes, 0, bytes.length);
            } catch (i e12) {
                throw e12;
            } catch (IndexOutOfBoundsException e13) {
                throw new i(e13);
            }
        }
    }

    public final void R(int i5, int i6) {
        T((i5 << 3) | i6);
    }

    public final void S(int i5, int i6) {
        C(20);
        o(i5, 0);
        p(i6);
    }

    public final void T(int i5) {
        C(5);
        p(i5);
    }

    public final void U(int i5, long j) {
        C(20);
        o(i5, 0);
        q(j);
    }

    public final void V(long j) {
        C(10);
        q(j);
    }

    @Override // androidx.datastore.preferences.protobuf.m0
    public final void l(byte[] bArr, int i5, int i6) {
        E(bArr, i5, i6);
    }

    public final void m(int i5) {
        int i6 = this.f1770f;
        int i10 = i6 + 1;
        this.f1770f = i10;
        byte[] bArr = this.f1768d;
        bArr[i6] = (byte) (i5 & 255);
        int i11 = i6 + 2;
        this.f1770f = i11;
        bArr[i10] = (byte) ((i5 >> 8) & 255);
        int i12 = i6 + 3;
        this.f1770f = i12;
        bArr[i11] = (byte) ((i5 >> 16) & 255);
        this.f1770f = i6 + 4;
        bArr[i12] = (byte) ((i5 >> 24) & 255);
    }

    public final void n(long j) {
        int i5 = this.f1770f;
        int i6 = i5 + 1;
        this.f1770f = i6;
        byte[] bArr = this.f1768d;
        bArr[i5] = (byte) (j & 255);
        int i10 = i5 + 2;
        this.f1770f = i10;
        bArr[i6] = (byte) ((j >> 8) & 255);
        int i11 = i5 + 3;
        this.f1770f = i11;
        bArr[i10] = (byte) ((j >> 16) & 255);
        int i12 = i5 + 4;
        this.f1770f = i12;
        bArr[i11] = (byte) (255 & (j >> 24));
        int i13 = i5 + 5;
        this.f1770f = i13;
        bArr[i12] = (byte) (((int) (j >> 32)) & 255);
        int i14 = i5 + 6;
        this.f1770f = i14;
        bArr[i13] = (byte) (((int) (j >> 40)) & 255);
        int i15 = i5 + 7;
        this.f1770f = i15;
        bArr[i14] = (byte) (((int) (j >> 48)) & 255);
        this.f1770f = i5 + 8;
        bArr[i15] = (byte) (((int) (j >> 56)) & 255);
    }

    public final void o(int i5, int i6) {
        p((i5 << 3) | i6);
    }

    public final void p(int i5) {
        boolean z5 = f1766i;
        byte[] bArr = this.f1768d;
        if (!z5) {
            while ((i5 & (-128)) != 0) {
                int i6 = this.f1770f;
                this.f1770f = i6 + 1;
                bArr[i6] = (byte) ((i5 & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                i5 >>>= 7;
            }
            int i10 = this.f1770f;
            this.f1770f = i10 + 1;
            bArr[i10] = (byte) i5;
            return;
        }
        while ((i5 & (-128)) != 0) {
            int i11 = this.f1770f;
            this.f1770f = i11 + 1;
            n1.j(bArr, (byte) ((i5 & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), i11);
            i5 >>>= 7;
        }
        int i12 = this.f1770f;
        this.f1770f = i12 + 1;
        n1.j(bArr, (byte) i5, i12);
    }

    public final void q(long j) {
        boolean z5 = f1766i;
        byte[] bArr = this.f1768d;
        if (!z5) {
            while ((j & (-128)) != 0) {
                int i5 = this.f1770f;
                this.f1770f = i5 + 1;
                bArr[i5] = (byte) ((((int) j) & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                j >>>= 7;
            }
            int i6 = this.f1770f;
            this.f1770f = i6 + 1;
            bArr[i6] = (byte) j;
            return;
        }
        while ((j & (-128)) != 0) {
            int i10 = this.f1770f;
            this.f1770f = i10 + 1;
            n1.j(bArr, (byte) ((((int) j) & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT), i10);
            j >>>= 7;
        }
        int i11 = this.f1770f;
        this.f1770f = i11 + 1;
        n1.j(bArr, (byte) j, i11);
    }
}
