package ij;

import androidx.recyclerview.widget.RecyclerView;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class i extends j {

    /* renamed from: c, reason: collision with root package name */
    public final InputStream f10870c;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f10871d;

    /* renamed from: e, reason: collision with root package name */
    public int f10872e;

    /* renamed from: f, reason: collision with root package name */
    public int f10873f;

    /* renamed from: g, reason: collision with root package name */
    public int f10874g;

    /* renamed from: h, reason: collision with root package name */
    public int f10875h;

    /* renamed from: i, reason: collision with root package name */
    public int f10876i;
    public int j = Integer.MAX_VALUE;

    public i(InputStream inputStream) {
        t.a(inputStream, "input");
        this.f10870c = inputStream;
        this.f10871d = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        this.f10872e = 0;
        this.f10874g = 0;
        this.f10876i = 0;
    }

    public final byte[] A(int i5) {
        byte[] B = B(i5);
        if (B != null) {
            return B;
        }
        int i6 = this.f10874g;
        int i10 = this.f10872e;
        int i11 = i10 - i6;
        this.f10876i += i10;
        this.f10874g = 0;
        this.f10872e = 0;
        ArrayList C = C(i5 - i11);
        byte[] bArr = new byte[i5];
        System.arraycopy(this.f10871d, i6, bArr, 0, i11);
        Iterator it = C.iterator();
        while (it.hasNext()) {
            byte[] bArr2 = (byte[]) it.next();
            System.arraycopy(bArr2, 0, bArr, i11, bArr2.length);
            i11 += bArr2.length;
        }
        return bArr;
    }

    public final byte[] B(int i5) {
        if (i5 == 0) {
            return t.f10923b;
        }
        if (i5 < 0) {
            throw v.d();
        }
        int i6 = this.f10876i;
        int i10 = this.f10874g;
        int i11 = i6 + i10 + i5;
        if (i11 - Integer.MAX_VALUE > 0) {
            throw new v("Protocol message was too large.  May be malicious.  Use CodedInputStream.setSizeLimit() to increase the size limit.");
        }
        int i12 = this.j;
        if (i11 > i12) {
            K((i12 - i6) - i10);
            throw v.e();
        }
        int i13 = this.f10872e - i10;
        int i14 = i5 - i13;
        InputStream inputStream = this.f10870c;
        if (i14 >= 4096) {
            try {
                if (i14 > inputStream.available()) {
                    return null;
                }
            } catch (v e9) {
                e9.f10928d = true;
                throw e9;
            }
        }
        byte[] bArr = new byte[i5];
        System.arraycopy(this.f10871d, this.f10874g, bArr, 0, i13);
        this.f10876i += this.f10872e;
        this.f10874g = 0;
        this.f10872e = 0;
        while (i13 < i5) {
            try {
                int read = inputStream.read(bArr, i13, i5 - i13);
                if (read == -1) {
                    throw v.e();
                }
                this.f10876i += read;
                i13 += read;
            } catch (v e10) {
                e10.f10928d = true;
                throw e10;
            }
        }
        return bArr;
    }

    public final ArrayList C(int i5) {
        ArrayList arrayList = new ArrayList();
        while (i5 > 0) {
            int min = Math.min(i5, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
            byte[] bArr = new byte[min];
            int i6 = 0;
            while (i6 < min) {
                int read = this.f10870c.read(bArr, i6, min - i6);
                if (read == -1) {
                    throw v.e();
                }
                this.f10876i += read;
                i6 += read;
            }
            i5 -= min;
            arrayList.add(bArr);
        }
        return arrayList;
    }

    public final int D() {
        int i5 = this.f10874g;
        if (this.f10872e - i5 < 4) {
            J(4);
            i5 = this.f10874g;
        }
        this.f10874g = i5 + 4;
        byte[] bArr = this.f10871d;
        return ((bArr[i5 + 3] & 255) << 24) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16);
    }

    public final long E() {
        int i5 = this.f10874g;
        if (this.f10872e - i5 < 8) {
            J(8);
            i5 = this.f10874g;
        }
        this.f10874g = i5 + 8;
        byte[] bArr = this.f10871d;
        return ((bArr[i5 + 7] & 255) << 56) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16) | ((bArr[i5 + 3] & 255) << 24) | ((bArr[i5 + 4] & 255) << 32) | ((bArr[i5 + 5] & 255) << 40) | ((bArr[i5 + 6] & 255) << 48);
    }

    public final int F() {
        int i5;
        int i6 = this.f10874g;
        int i10 = this.f10872e;
        if (i10 != i6) {
            int i11 = i6 + 1;
            byte[] bArr = this.f10871d;
            byte b10 = bArr[i6];
            if (b10 >= 0) {
                this.f10874g = i11;
                return b10;
            }
            if (i10 - i11 >= 9) {
                int i12 = i6 + 2;
                int i13 = (bArr[i11] << 7) ^ b10;
                if (i13 < 0) {
                    i5 = i13 ^ (-128);
                } else {
                    int i14 = i6 + 3;
                    int i15 = (bArr[i12] << 14) ^ i13;
                    if (i15 >= 0) {
                        i5 = i15 ^ 16256;
                    } else {
                        int i16 = i6 + 4;
                        int i17 = i15 ^ (bArr[i14] << 21);
                        if (i17 < 0) {
                            i5 = (-2080896) ^ i17;
                        } else {
                            i14 = i6 + 5;
                            byte b11 = bArr[i16];
                            int i18 = (i17 ^ (b11 << 28)) ^ 266354560;
                            if (b11 < 0) {
                                i16 = i6 + 6;
                                if (bArr[i14] < 0) {
                                    i14 = i6 + 7;
                                    if (bArr[i16] < 0) {
                                        i16 = i6 + 8;
                                        if (bArr[i14] < 0) {
                                            i14 = i6 + 9;
                                            if (bArr[i16] < 0) {
                                                int i19 = i6 + 10;
                                                if (bArr[i14] >= 0) {
                                                    i12 = i19;
                                                    i5 = i18;
                                                }
                                            }
                                        }
                                    }
                                }
                                i5 = i18;
                            }
                            i5 = i18;
                        }
                        i12 = i16;
                    }
                    i12 = i14;
                }
                this.f10874g = i12;
                return i5;
            }
        }
        return (int) H();
    }

    public final long G() {
        long j;
        long j5;
        long j7;
        long j10;
        int i5 = this.f10874g;
        int i6 = this.f10872e;
        if (i6 != i5) {
            int i10 = i5 + 1;
            byte[] bArr = this.f10871d;
            byte b10 = bArr[i5];
            if (b10 >= 0) {
                this.f10874g = i10;
                return b10;
            }
            if (i6 - i10 >= 9) {
                int i11 = i5 + 2;
                int i12 = (bArr[i10] << 7) ^ b10;
                if (i12 < 0) {
                    j = i12 ^ (-128);
                } else {
                    int i13 = i5 + 3;
                    int i14 = (bArr[i11] << 14) ^ i12;
                    if (i14 >= 0) {
                        j = i14 ^ 16256;
                        i11 = i13;
                    } else {
                        int i15 = i5 + 4;
                        int i16 = i14 ^ (bArr[i13] << 21);
                        if (i16 < 0) {
                            j10 = (-2080896) ^ i16;
                        } else {
                            long j11 = i16;
                            i11 = i5 + 5;
                            long j12 = j11 ^ (bArr[i15] << 28);
                            if (j12 >= 0) {
                                j7 = 266354560;
                            } else {
                                i15 = i5 + 6;
                                long j13 = j12 ^ (bArr[i11] << 35);
                                if (j13 < 0) {
                                    j5 = -34093383808L;
                                } else {
                                    i11 = i5 + 7;
                                    j12 = j13 ^ (bArr[i15] << 42);
                                    if (j12 >= 0) {
                                        j7 = 4363953127296L;
                                    } else {
                                        i15 = i5 + 8;
                                        j13 = j12 ^ (bArr[i11] << 49);
                                        if (j13 < 0) {
                                            j5 = -558586000294016L;
                                        } else {
                                            i11 = i5 + 9;
                                            long j14 = (j13 ^ (bArr[i15] << 56)) ^ 71499008037633920L;
                                            if (j14 < 0) {
                                                int i17 = i5 + 10;
                                                if (bArr[i11] >= 0) {
                                                    i11 = i17;
                                                }
                                            }
                                            j = j14;
                                        }
                                    }
                                }
                                j10 = j5 ^ j13;
                            }
                            j = j7 ^ j12;
                        }
                        i11 = i15;
                        j = j10;
                    }
                }
                this.f10874g = i11;
                return j;
            }
        }
        return H();
    }

    public final long H() {
        long j = 0;
        for (int i5 = 0; i5 < 64; i5 += 7) {
            if (this.f10874g == this.f10872e) {
                J(1);
            }
            int i6 = this.f10874g;
            this.f10874g = i6 + 1;
            j |= (r3 & ByteCompanionObject.MAX_VALUE) << i5;
            if ((this.f10871d[i6] & ByteCompanionObject.MIN_VALUE) == 0) {
                return j;
            }
        }
        throw v.c();
    }

    public final void I() {
        int i5 = this.f10872e + this.f10873f;
        this.f10872e = i5;
        int i6 = this.f10876i + i5;
        int i10 = this.j;
        if (i6 <= i10) {
            this.f10873f = 0;
            return;
        }
        int i11 = i6 - i10;
        this.f10873f = i11;
        this.f10872e = i5 - i11;
    }

    public final void J(int i5) {
        if (L(i5)) {
            return;
        }
        if (i5 <= (Integer.MAX_VALUE - this.f10876i) - this.f10874g) {
            throw v.e();
        }
        throw new v("Protocol message was too large.  May be malicious.  Use CodedInputStream.setSizeLimit() to increase the size limit.");
    }

    public final void K(int i5) {
        int i6 = this.f10872e;
        int i10 = this.f10874g;
        if (i5 <= i6 - i10 && i5 >= 0) {
            this.f10874g = i10 + i5;
            return;
        }
        InputStream inputStream = this.f10870c;
        if (i5 < 0) {
            throw v.d();
        }
        int i11 = this.f10876i;
        int i12 = i11 + i10;
        int i13 = i12 + i5;
        int i14 = this.j;
        if (i13 > i14) {
            K((i14 - i11) - i10);
            throw v.e();
        }
        this.f10876i = i12;
        int i15 = i6 - i10;
        this.f10872e = 0;
        this.f10874g = 0;
        while (i15 < i5) {
            long j = i5 - i15;
            try {
                try {
                    long skip = inputStream.skip(j);
                    if (skip < 0 || skip > j) {
                        throw new IllegalStateException(inputStream.getClass() + "#skip returned invalid result: " + skip + "\nThe InputStream implementation is buggy.");
                    }
                    if (skip == 0) {
                        break;
                    } else {
                        i15 += (int) skip;
                    }
                } catch (v e9) {
                    e9.f10928d = true;
                    throw e9;
                }
            } catch (Throwable th2) {
                this.f10876i += i15;
                I();
                throw th2;
            }
        }
        this.f10876i += i15;
        I();
        if (i15 >= i5) {
            return;
        }
        int i16 = this.f10872e;
        int i17 = i16 - this.f10874g;
        this.f10874g = i16;
        J(1);
        while (true) {
            int i18 = i5 - i17;
            int i19 = this.f10872e;
            if (i18 <= i19) {
                this.f10874g = i18;
                return;
            } else {
                i17 += i19;
                this.f10874g = i19;
                J(1);
            }
        }
    }

    public final boolean L(int i5) {
        InputStream inputStream = this.f10870c;
        int i6 = this.f10874g;
        int i10 = i6 + i5;
        int i11 = this.f10872e;
        if (i10 <= i11) {
            throw new IllegalStateException(s4.h.e(i5, "refillBuffer() called when ", " bytes were already available in buffer"));
        }
        int i12 = this.f10876i;
        if (i5 <= (Integer.MAX_VALUE - i12) - i6 && i12 + i6 + i5 <= this.j) {
            byte[] bArr = this.f10871d;
            if (i6 > 0) {
                if (i11 > i6) {
                    System.arraycopy(bArr, i6, bArr, 0, i11 - i6);
                }
                this.f10876i += i6;
                this.f10872e -= i6;
                this.f10874g = 0;
            }
            int i13 = this.f10872e;
            try {
                int read = inputStream.read(bArr, i13, Math.min(bArr.length - i13, (Integer.MAX_VALUE - this.f10876i) - i13));
                if (read == 0 || read < -1 || read > bArr.length) {
                    throw new IllegalStateException(inputStream.getClass() + "#read(byte[]) returned invalid result: " + read + "\nThe InputStream implementation is buggy.");
                }
                if (read > 0) {
                    this.f10872e += read;
                    I();
                    if (this.f10872e >= i5) {
                        return true;
                    }
                    return L(i5);
                }
            } catch (v e9) {
                e9.f10928d = true;
                throw e9;
            }
        }
        return false;
    }

    @Override // ij.j
    public final void a(int i5) {
        if (this.f10875h != i5) {
            throw new v("Protocol message end-group tag did not match expected tag.");
        }
    }

    @Override // ij.j
    public final int b() {
        return this.f10876i + this.f10874g;
    }

    @Override // ij.j
    public final boolean c() {
        return this.f10874g == this.f10872e && !L(1);
    }

    @Override // ij.j
    public final void d(int i5) {
        this.j = i5;
        I();
    }

    @Override // ij.j
    public final int e(int i5) {
        if (i5 < 0) {
            throw v.d();
        }
        int i6 = this.f10876i + this.f10874g + i5;
        int i10 = this.j;
        if (i6 > i10) {
            throw v.e();
        }
        this.j = i6;
        I();
        return i10;
    }

    @Override // ij.j
    public final boolean f() {
        return G() != 0;
    }

    @Override // ij.j
    public final g g() {
        int F = F();
        int i5 = this.f10872e;
        int i6 = this.f10874g;
        int i10 = i5 - i6;
        byte[] bArr = this.f10871d;
        if (F <= i10 && F > 0) {
            g d6 = g.d(bArr, i6, F);
            this.f10874g += F;
            return d6;
        }
        if (F == 0) {
            return g.f10858i;
        }
        if (F < 0) {
            throw v.d();
        }
        byte[] B = B(F);
        if (B != null) {
            return g.d(B, 0, B.length);
        }
        int i11 = this.f10874g;
        int i12 = this.f10872e;
        int i13 = i12 - i11;
        this.f10876i += i12;
        this.f10874g = 0;
        this.f10872e = 0;
        ArrayList C = C(F - i13);
        byte[] bArr2 = new byte[F];
        System.arraycopy(bArr, i11, bArr2, 0, i13);
        Iterator it = C.iterator();
        while (it.hasNext()) {
            byte[] bArr3 = (byte[]) it.next();
            System.arraycopy(bArr3, 0, bArr2, i13, bArr3.length);
            i13 += bArr3.length;
        }
        g gVar = g.f10858i;
        return new g(bArr2);
    }

    @Override // ij.j
    public final double h() {
        return Double.longBitsToDouble(E());
    }

    @Override // ij.j
    public final int i() {
        return F();
    }

    @Override // ij.j
    public final int j() {
        return D();
    }

    @Override // ij.j
    public final long k() {
        return E();
    }

    @Override // ij.j
    public final float l() {
        return Float.intBitsToFloat(D());
    }

    @Override // ij.j
    public final int m() {
        return F();
    }

    @Override // ij.j
    public final long n() {
        return G();
    }

    @Override // ij.j
    public final int p() {
        return D();
    }

    @Override // ij.j
    public final long q() {
        return E();
    }

    @Override // ij.j
    public final int r() {
        int F = F();
        return (-(F & 1)) ^ (F >>> 1);
    }

    @Override // ij.j
    public final long s() {
        long G = G();
        return (-(G & 1)) ^ (G >>> 1);
    }

    @Override // ij.j
    public final String t() {
        int F = F();
        byte[] bArr = this.f10871d;
        if (F > 0) {
            int i5 = this.f10872e;
            int i6 = this.f10874g;
            if (F <= i5 - i6) {
                String str = new String(bArr, i6, F, t.a);
                this.f10874g += F;
                return str;
            }
        }
        if (F == 0) {
            return "";
        }
        if (F < 0) {
            throw v.d();
        }
        if (F > this.f10872e) {
            return new String(A(F), t.a);
        }
        J(F);
        String str2 = new String(bArr, this.f10874g, F, t.a);
        this.f10874g += F;
        return str2;
    }

    @Override // ij.j
    public final String u() {
        int F = F();
        int i5 = this.f10874g;
        int i6 = this.f10872e;
        int i10 = i6 - i5;
        byte[] bArr = this.f10871d;
        if (F <= i10 && F > 0) {
            this.f10874g = i5 + F;
        } else {
            if (F == 0) {
                return "";
            }
            if (F < 0) {
                throw v.d();
            }
            i5 = 0;
            if (F <= i6) {
                J(F);
                this.f10874g = F;
            } else {
                bArr = A(F);
            }
        }
        return e1.a.l(bArr, i5, F);
    }

    @Override // ij.j
    public final int v() {
        if (c()) {
            this.f10875h = 0;
            return 0;
        }
        int F = F();
        this.f10875h = F;
        if ((F >>> 3) != 0) {
            return F;
        }
        throw new v("Protocol message contained an invalid tag (zero).");
    }

    @Override // ij.j
    public final int w() {
        return F();
    }

    @Override // ij.j
    public final long x() {
        return G();
    }

    @Override // ij.j
    public final boolean y(int i5) {
        int i6 = i5 & 7;
        int i10 = 0;
        if (i6 != 0) {
            if (i6 == 1) {
                K(8);
                return true;
            }
            if (i6 == 2) {
                K(F());
                return true;
            }
            if (i6 == 3) {
                z();
                a(((i5 >>> 3) << 3) | 4);
                return true;
            }
            if (i6 == 4) {
                return false;
            }
            if (i6 != 5) {
                throw v.b();
            }
            K(4);
            return true;
        }
        int i11 = this.f10872e - this.f10874g;
        byte[] bArr = this.f10871d;
        if (i11 >= 10) {
            while (i10 < 10) {
                int i12 = this.f10874g;
                this.f10874g = i12 + 1;
                if (bArr[i12] < 0) {
                    i10++;
                }
            }
            throw v.c();
        }
        while (i10 < 10) {
            if (this.f10874g == this.f10872e) {
                J(1);
            }
            int i13 = this.f10874g;
            this.f10874g = i13 + 1;
            if (bArr[i13] < 0) {
                i10++;
            }
        }
        throw v.c();
        return true;
    }
}
