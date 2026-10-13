package ke;

import fi.h0;
import java.nio.charset.Charset;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class w {

    /* renamed from: d, reason: collision with root package name */
    public static final char[] f13360d = {'\r', '\n'};

    /* renamed from: e, reason: collision with root package name */
    public static final char[] f13361e = {'\n'};

    /* renamed from: f, reason: collision with root package name */
    public static final h0 f13362f = h0.k(5, ei.d.a, ei.d.f8100c, ei.d.f8103f, ei.d.f8101d, ei.d.f8102e);
    public byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f13363b;

    /* renamed from: c, reason: collision with root package name */
    public int f13364c;

    public w() {
        this.a = d0.f13298f;
    }

    public final long A() {
        int i5;
        int i6;
        long j = this.a[this.f13363b];
        int i10 = 7;
        while (true) {
            if (i10 < 0) {
                break;
            }
            if (((1 << i10) & j) != 0) {
                i10--;
            } else if (i10 < 6) {
                j &= r6 - 1;
                i6 = 7 - i10;
            } else if (i10 == 7) {
                i6 = 1;
            }
        }
        i6 = 0;
        if (i6 == 0) {
            throw new NumberFormatException(k0.d.j(j, "Invalid UTF-8 sequence first byte: "));
        }
        for (i5 = 1; i5 < i6; i5++) {
            if ((this.a[this.f13363b + i5] & 192) != 128) {
                throw new NumberFormatException(k0.d.j(j, "Invalid UTF-8 sequence continuation byte: "));
            }
            j = (j << 6) | (r3 & 63);
        }
        this.f13363b += i6;
        return j;
    }

    public final Charset B() {
        if (a() >= 3) {
            byte[] bArr = this.a;
            int i5 = this.f13363b;
            if (bArr[i5] == -17 && bArr[i5 + 1] == -69 && bArr[i5 + 2] == -65) {
                this.f13363b = i5 + 3;
                return ei.d.f8100c;
            }
        }
        if (a() < 2) {
            return null;
        }
        byte[] bArr2 = this.a;
        int i6 = this.f13363b;
        byte b10 = bArr2[i6];
        if (b10 == -2 && bArr2[i6 + 1] == -1) {
            this.f13363b = i6 + 2;
            return ei.d.f8101d;
        }
        if (b10 != -1 || bArr2[i6 + 1] != -2) {
            return null;
        }
        this.f13363b = i6 + 2;
        return ei.d.f8102e;
    }

    public final void C(int i5) {
        byte[] bArr = this.a;
        if (bArr.length < i5) {
            bArr = new byte[i5];
        }
        D(bArr, i5);
    }

    public final void D(byte[] bArr, int i5) {
        this.a = bArr;
        this.f13364c = i5;
        this.f13363b = 0;
    }

    public final void E(int i5) {
        b.g(i5 >= 0 && i5 <= this.a.length);
        this.f13364c = i5;
    }

    public final void F(int i5) {
        b.g(i5 >= 0 && i5 <= this.f13364c);
        this.f13363b = i5;
    }

    public final void G(int i5) {
        F(this.f13363b + i5);
    }

    public final int a() {
        return this.f13364c - this.f13363b;
    }

    public final void b(int i5) {
        byte[] bArr = this.a;
        if (i5 > bArr.length) {
            this.a = Arrays.copyOf(bArr, i5);
        }
    }

    public final char c(Charset charset) {
        b.f("Unsupported charset: " + charset, f13362f.contains(charset));
        return (char) (d(charset) >> 16);
    }

    public final int d(Charset charset) {
        byte b10;
        int i5;
        byte b11;
        byte b12;
        if ((charset.equals(ei.d.f8100c) || charset.equals(ei.d.a)) && a() >= 1) {
            long j = this.a[this.f13363b] & 255;
            char c6 = (char) j;
            ys.d.q(((long) c6) == j, "Out of range: %s", j);
            b10 = (byte) c6;
            i5 = 1;
        } else {
            i5 = 2;
            if ((charset.equals(ei.d.f8103f) || charset.equals(ei.d.f8101d)) && a() >= 2) {
                byte[] bArr = this.a;
                int i6 = this.f13363b;
                b11 = bArr[i6];
                b12 = bArr[i6 + 1];
            } else {
                if (!charset.equals(ei.d.f8102e) || a() < 2) {
                    return 0;
                }
                byte[] bArr2 = this.a;
                int i10 = this.f13363b;
                b11 = bArr2[i10 + 1];
                b12 = bArr2[i10];
            }
            b10 = (byte) ((char) ((b12 & 255) | (b11 << 8)));
        }
        long j5 = b10;
        char c8 = (char) j5;
        ys.d.q(((long) c8) == j5, "Out of range: %s", j5);
        return (c8 << 16) + i5;
    }

    public final void e(byte[] bArr, int i5, int i6) {
        System.arraycopy(this.a, this.f13363b, bArr, i5, i6);
        this.f13363b += i6;
    }

    public final char f(Charset charset, char[] cArr) {
        int d6 = d(charset);
        if (d6 != 0) {
            char c6 = (char) (d6 >> 16);
            for (char c8 : cArr) {
                if (c8 == c6) {
                    this.f13363b += d6 & 65535;
                    return c6;
                }
            }
        }
        return (char) 0;
    }

    public final int g() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = (bArr[i5] & 255) << 24;
        int i11 = i5 + 2;
        this.f13363b = i11;
        int i12 = ((bArr[i6] & 255) << 16) | i10;
        int i13 = i5 + 3;
        this.f13363b = i13;
        int i14 = i12 | ((bArr[i11] & 255) << 8);
        this.f13363b = i5 + 4;
        return (bArr[i13] & 255) | i14;
    }

    public final String h(Charset charset) {
        int i5;
        b.f("Unsupported charset: " + charset, f13362f.contains(charset));
        if (a() == 0) {
            return null;
        }
        Charset charset2 = ei.d.a;
        if (!charset.equals(charset2)) {
            B();
        }
        if (charset.equals(ei.d.f8100c) || charset.equals(charset2)) {
            i5 = 1;
        } else {
            if (!charset.equals(ei.d.f8103f) && !charset.equals(ei.d.f8102e) && !charset.equals(ei.d.f8101d)) {
                throw new IllegalArgumentException("Unsupported charset: " + charset);
            }
            i5 = 2;
        }
        int i6 = this.f13363b;
        while (true) {
            int i10 = this.f13364c;
            if (i6 >= i10 - (i5 - 1)) {
                i6 = i10;
                break;
            }
            if ((charset.equals(ei.d.f8100c) || charset.equals(ei.d.a)) && d0.G(this.a[i6])) {
                break;
            }
            if (charset.equals(ei.d.f8103f) || charset.equals(ei.d.f8101d)) {
                byte[] bArr = this.a;
                if (bArr[i6] == 0 && d0.G(bArr[i6 + 1])) {
                    break;
                }
            }
            if (charset.equals(ei.d.f8102e)) {
                byte[] bArr2 = this.a;
                if (bArr2[i6 + 1] == 0 && d0.G(bArr2[i6])) {
                    break;
                }
            }
            i6 += i5;
        }
        String s2 = s(i6 - this.f13363b, charset);
        if (this.f13363b != this.f13364c && f(charset, f13360d) == '\r') {
            f(charset, f13361e);
        }
        return s2;
    }

    public final int i() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = bArr[i5] & 255;
        int i11 = i5 + 2;
        this.f13363b = i11;
        int i12 = ((bArr[i6] & 255) << 8) | i10;
        int i13 = i5 + 3;
        this.f13363b = i13;
        int i14 = i12 | ((bArr[i11] & 255) << 16);
        this.f13363b = i5 + 4;
        return ((bArr[i13] & 255) << 24) | i14;
    }

    public final long j() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        this.f13363b = i5 + 1;
        this.f13363b = i5 + 2;
        this.f13363b = i5 + 3;
        long j = (bArr[i5] & 255) | ((bArr[r2] & 255) << 8) | ((bArr[r7] & 255) << 16);
        this.f13363b = i5 + 4;
        long j5 = j | ((bArr[r8] & 255) << 24);
        this.f13363b = i5 + 5;
        long j7 = j5 | ((bArr[r7] & 255) << 32);
        this.f13363b = i5 + 6;
        long j10 = j7 | ((bArr[r8] & 255) << 40);
        this.f13363b = i5 + 7;
        long j11 = j10 | ((bArr[r7] & 255) << 48);
        this.f13363b = i5 + 8;
        return ((bArr[r8] & 255) << 56) | j11;
    }

    public final short k() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = bArr[i5] & 255;
        this.f13363b = i5 + 2;
        return (short) (((bArr[i6] & 255) << 8) | i10);
    }

    public final long l() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        this.f13363b = i5 + 1;
        this.f13363b = i5 + 2;
        this.f13363b = i5 + 3;
        long j = (bArr[i5] & 255) | ((bArr[r2] & 255) << 8) | ((bArr[r7] & 255) << 16);
        this.f13363b = i5 + 4;
        return ((bArr[r4] & 255) << 24) | j;
    }

    public final int m() {
        int i5 = i();
        if (i5 >= 0) {
            return i5;
        }
        throw new IllegalStateException(k0.d.i(i5, "Top bit not zero: "));
    }

    public final int n() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = bArr[i5] & 255;
        this.f13363b = i5 + 2;
        return ((bArr[i6] & 255) << 8) | i10;
    }

    public final long o() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        this.f13363b = i5 + 1;
        this.f13363b = i5 + 2;
        this.f13363b = i5 + 3;
        long j = ((bArr[i5] & 255) << 56) | ((bArr[r2] & 255) << 48) | ((bArr[r7] & 255) << 40);
        this.f13363b = i5 + 4;
        long j5 = j | ((bArr[r4] & 255) << 32);
        this.f13363b = i5 + 5;
        long j7 = j5 | ((bArr[r7] & 255) << 24);
        this.f13363b = i5 + 6;
        long j10 = j7 | ((bArr[r4] & 255) << 16);
        this.f13363b = i5 + 7;
        long j11 = j10 | ((bArr[r7] & 255) << 8);
        this.f13363b = i5 + 8;
        return (bArr[r4] & 255) | j11;
    }

    public final String p() {
        if (a() == 0) {
            return null;
        }
        int i5 = this.f13363b;
        while (i5 < this.f13364c && this.a[i5] != 0) {
            i5++;
        }
        byte[] bArr = this.a;
        int i6 = this.f13363b;
        int i10 = d0.a;
        String str = new String(bArr, i6, i5 - i6, ei.d.f8100c);
        this.f13363b = i5;
        if (i5 < this.f13364c) {
            this.f13363b = i5 + 1;
        }
        return str;
    }

    public final String q(int i5) {
        if (i5 == 0) {
            return "";
        }
        int i6 = this.f13363b;
        int i10 = (i6 + i5) - 1;
        int i11 = (i10 >= this.f13364c || this.a[i10] != 0) ? i5 : i5 - 1;
        byte[] bArr = this.a;
        int i12 = d0.a;
        String str = new String(bArr, i6, i11, ei.d.f8100c);
        this.f13363b += i5;
        return str;
    }

    public final short r() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = (bArr[i5] & 255) << 8;
        this.f13363b = i5 + 2;
        return (short) ((bArr[i6] & 255) | i10);
    }

    public final String s(int i5, Charset charset) {
        String str = new String(this.a, this.f13363b, i5, charset);
        this.f13363b += i5;
        return str;
    }

    public final int t() {
        return (u() << 21) | (u() << 14) | (u() << 7) | u();
    }

    public final int u() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        this.f13363b = i5 + 1;
        return bArr[i5] & 255;
    }

    public final long v() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        this.f13363b = i5 + 1;
        this.f13363b = i5 + 2;
        this.f13363b = i5 + 3;
        long j = ((bArr[i5] & 255) << 24) | ((bArr[r2] & 255) << 16) | ((bArr[r7] & 255) << 8);
        this.f13363b = i5 + 4;
        return (bArr[r4] & 255) | j;
    }

    public final int w() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = (bArr[i5] & 255) << 16;
        int i11 = i5 + 2;
        this.f13363b = i11;
        int i12 = ((bArr[i6] & 255) << 8) | i10;
        this.f13363b = i5 + 3;
        return (bArr[i11] & 255) | i12;
    }

    public final int x() {
        int g6 = g();
        if (g6 >= 0) {
            return g6;
        }
        throw new IllegalStateException(k0.d.i(g6, "Top bit not zero: "));
    }

    public final long y() {
        long o6 = o();
        if (o6 >= 0) {
            return o6;
        }
        throw new IllegalStateException(k0.d.j(o6, "Top bit not zero: "));
    }

    public final int z() {
        byte[] bArr = this.a;
        int i5 = this.f13363b;
        int i6 = i5 + 1;
        this.f13363b = i6;
        int i10 = (bArr[i5] & 255) << 8;
        this.f13363b = i5 + 2;
        return (bArr[i6] & 255) | i10;
    }

    public w(int i5) {
        this.a = new byte[i5];
        this.f13364c = i5;
    }

    public w(byte[] bArr) {
        this.a = bArr;
        this.f13364c = bArr.length;
    }

    public w(byte[] bArr, int i5) {
        this.a = bArr;
        this.f13364c = i5;
    }
}
