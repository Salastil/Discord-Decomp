package androidx.datastore.preferences.protobuf;

import androidx.recyclerview.widget.RecyclerView;
import java.io.FileInputStream;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes.dex */
public final class g {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public h f1746b;

    /* renamed from: c, reason: collision with root package name */
    public final FileInputStream f1747c;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f1748d;

    /* renamed from: e, reason: collision with root package name */
    public int f1749e;

    /* renamed from: f, reason: collision with root package name */
    public int f1750f;

    /* renamed from: g, reason: collision with root package name */
    public int f1751g;

    /* renamed from: h, reason: collision with root package name */
    public int f1752h;

    /* renamed from: i, reason: collision with root package name */
    public int f1753i;
    public int j = Integer.MAX_VALUE;

    public g(FileInputStream fileInputStream) {
        Charset charset = v.a;
        this.f1747c = fileInputStream;
        this.f1748d = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        this.f1749e = 0;
        this.f1751g = 0;
        this.f1753i = 0;
    }

    public final int A() {
        return s();
    }

    public final long B() {
        return t();
    }

    public final void C() {
        int i5 = this.f1749e + this.f1750f;
        this.f1749e = i5;
        int i6 = this.f1753i + i5;
        int i10 = this.j;
        if (i6 <= i10) {
            this.f1750f = 0;
            return;
        }
        int i11 = i6 - i10;
        this.f1750f = i11;
        this.f1749e = i5 - i11;
    }

    public final void D(int i5) {
        if (G(i5)) {
            return;
        }
        if (i5 <= (Integer.MAX_VALUE - this.f1753i) - this.f1751g) {
            throw x.f();
        }
        throw new x("Protocol message was too large.  May be malicious.  Use CodedInputStream.setSizeLimit() to increase the size limit.");
    }

    public final boolean E(int i5) {
        int z5;
        int i6 = i5 & 7;
        int i10 = 0;
        if (i6 == 0) {
            int i11 = this.f1749e - this.f1751g;
            byte[] bArr = this.f1748d;
            if (i11 >= 10) {
                while (i10 < 10) {
                    int i12 = this.f1751g;
                    this.f1751g = i12 + 1;
                    if (bArr[i12] < 0) {
                        i10++;
                    }
                }
                throw x.c();
            }
            while (i10 < 10) {
                if (this.f1751g == this.f1749e) {
                    D(1);
                }
                int i13 = this.f1751g;
                this.f1751g = i13 + 1;
                if (bArr[i13] < 0) {
                    i10++;
                }
            }
            throw x.c();
            return true;
        }
        if (i6 == 1) {
            F(8);
            return true;
        }
        if (i6 == 2) {
            F(s());
            return true;
        }
        if (i6 != 3) {
            if (i6 == 4) {
                return false;
            }
            if (i6 != 5) {
                throw x.b();
            }
            F(4);
            return true;
        }
        do {
            z5 = z();
            if (z5 == 0) {
                break;
            }
        } while (E(z5));
        a(((i5 >>> 3) << 3) | 4);
        return true;
    }

    public final void F(int i5) {
        int i6 = this.f1749e;
        int i10 = this.f1751g;
        int i11 = i6 - i10;
        if (i5 <= i11 && i5 >= 0) {
            this.f1751g = i10 + i5;
            return;
        }
        FileInputStream fileInputStream = this.f1747c;
        if (i5 < 0) {
            throw x.d();
        }
        int i12 = this.f1753i;
        int i13 = i12 + i10;
        int i14 = i13 + i5;
        int i15 = this.j;
        if (i14 > i15) {
            F((i15 - i12) - i10);
            throw x.f();
        }
        this.f1753i = i13;
        this.f1749e = 0;
        this.f1751g = 0;
        while (i11 < i5) {
            long j = i5 - i11;
            try {
                long skip = fileInputStream.skip(j);
                if (skip < 0 || skip > j) {
                    throw new IllegalStateException(fileInputStream.getClass() + "#skip returned invalid result: " + skip + "\nThe InputStream implementation is buggy.");
                }
                if (skip == 0) {
                    break;
                } else {
                    i11 += (int) skip;
                }
            } finally {
                this.f1753i += i11;
                C();
            }
        }
        if (i11 >= i5) {
            return;
        }
        int i16 = this.f1749e;
        int i17 = i16 - this.f1751g;
        this.f1751g = i16;
        D(1);
        while (true) {
            int i18 = i5 - i17;
            int i19 = this.f1749e;
            if (i18 <= i19) {
                this.f1751g = i18;
                return;
            } else {
                i17 += i19;
                this.f1751g = i19;
                D(1);
            }
        }
    }

    public final boolean G(int i5) {
        int i6 = this.f1751g;
        int i10 = i6 + i5;
        int i11 = this.f1749e;
        if (i10 <= i11) {
            throw new IllegalStateException(s4.h.e(i5, "refillBuffer() called when ", " bytes were already available in buffer"));
        }
        int i12 = this.f1753i;
        if (i5 <= (Integer.MAX_VALUE - i12) - i6 && i12 + i6 + i5 <= this.j) {
            byte[] bArr = this.f1748d;
            if (i6 > 0) {
                if (i11 > i6) {
                    System.arraycopy(bArr, i6, bArr, 0, i11 - i6);
                }
                this.f1753i += i6;
                this.f1749e -= i6;
                this.f1751g = 0;
            }
            int i13 = this.f1749e;
            int min = Math.min(bArr.length - i13, (Integer.MAX_VALUE - this.f1753i) - i13);
            FileInputStream fileInputStream = this.f1747c;
            int read = fileInputStream.read(bArr, i13, min);
            if (read == 0 || read < -1 || read > bArr.length) {
                throw new IllegalStateException(fileInputStream.getClass() + "#read(byte[]) returned invalid result: " + read + "\nThe InputStream implementation is buggy.");
            }
            if (read > 0) {
                this.f1749e += read;
                C();
                if (this.f1749e >= i5) {
                    return true;
                }
                return G(i5);
            }
        }
        return false;
    }

    public final void a(int i5) {
        if (this.f1752h != i5) {
            throw new x("Protocol message end-group tag did not match expected tag.");
        }
    }

    public final int b() {
        return this.f1753i + this.f1751g;
    }

    public final boolean c() {
        return this.f1751g == this.f1749e && !G(1);
    }

    public final void d(int i5) {
        this.j = i5;
        C();
    }

    public final int e(int i5) {
        if (i5 < 0) {
            throw x.d();
        }
        int i6 = this.f1753i + this.f1751g + i5;
        int i10 = this.j;
        if (i6 > i10) {
            throw x.f();
        }
        this.j = i6;
        C();
        return i10;
    }

    public final boolean f() {
        return t() != 0;
    }

    public final double g() {
        return Double.longBitsToDouble(r());
    }

    public final int h() {
        return s();
    }

    public final int i() {
        return q();
    }

    public final long j() {
        return r();
    }

    public final float k() {
        return Float.intBitsToFloat(q());
    }

    public final int l() {
        return s();
    }

    public final long m() {
        return t();
    }

    public final byte[] n(int i5) {
        byte[] o6 = o(i5);
        if (o6 != null) {
            return o6;
        }
        int i6 = this.f1751g;
        int i10 = this.f1749e;
        int i11 = i10 - i6;
        this.f1753i += i10;
        this.f1751g = 0;
        this.f1749e = 0;
        ArrayList p3 = p(i5 - i11);
        byte[] bArr = new byte[i5];
        System.arraycopy(this.f1748d, i6, bArr, 0, i11);
        Iterator it = p3.iterator();
        while (it.hasNext()) {
            byte[] bArr2 = (byte[]) it.next();
            System.arraycopy(bArr2, 0, bArr, i11, bArr2.length);
            i11 += bArr2.length;
        }
        return bArr;
    }

    public final byte[] o(int i5) {
        if (i5 == 0) {
            return v.f1817b;
        }
        if (i5 < 0) {
            throw x.d();
        }
        int i6 = this.f1753i;
        int i10 = this.f1751g;
        int i11 = i6 + i10 + i5;
        if (i11 - Integer.MAX_VALUE > 0) {
            throw new x("Protocol message was too large.  May be malicious.  Use CodedInputStream.setSizeLimit() to increase the size limit.");
        }
        int i12 = this.j;
        if (i11 > i12) {
            F((i12 - i6) - i10);
            throw x.f();
        }
        int i13 = this.f1749e - i10;
        int i14 = i5 - i13;
        FileInputStream fileInputStream = this.f1747c;
        if (i14 >= 4096 && i14 > fileInputStream.available()) {
            return null;
        }
        byte[] bArr = new byte[i5];
        System.arraycopy(this.f1748d, this.f1751g, bArr, 0, i13);
        this.f1753i += this.f1749e;
        this.f1751g = 0;
        this.f1749e = 0;
        while (i13 < i5) {
            int read = fileInputStream.read(bArr, i13, i5 - i13);
            if (read == -1) {
                throw x.f();
            }
            this.f1753i += read;
            i13 += read;
        }
        return bArr;
    }

    public final ArrayList p(int i5) {
        ArrayList arrayList = new ArrayList();
        while (i5 > 0) {
            int min = Math.min(i5, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
            byte[] bArr = new byte[min];
            int i6 = 0;
            while (i6 < min) {
                int read = this.f1747c.read(bArr, i6, min - i6);
                if (read == -1) {
                    throw x.f();
                }
                this.f1753i += read;
                i6 += read;
            }
            i5 -= min;
            arrayList.add(bArr);
        }
        return arrayList;
    }

    public final int q() {
        int i5 = this.f1751g;
        if (this.f1749e - i5 < 4) {
            D(4);
            i5 = this.f1751g;
        }
        this.f1751g = i5 + 4;
        byte[] bArr = this.f1748d;
        return ((bArr[i5 + 3] & 255) << 24) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16);
    }

    public final long r() {
        int i5 = this.f1751g;
        if (this.f1749e - i5 < 8) {
            D(8);
            i5 = this.f1751g;
        }
        this.f1751g = i5 + 8;
        byte[] bArr = this.f1748d;
        return ((bArr[i5 + 7] & 255) << 56) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16) | ((bArr[i5 + 3] & 255) << 24) | ((bArr[i5 + 4] & 255) << 32) | ((bArr[i5 + 5] & 255) << 40) | ((bArr[i5 + 6] & 255) << 48);
    }

    public final int s() {
        int i5;
        int i6 = this.f1751g;
        int i10 = this.f1749e;
        if (i10 != i6) {
            int i11 = i6 + 1;
            byte[] bArr = this.f1748d;
            byte b10 = bArr[i6];
            if (b10 >= 0) {
                this.f1751g = i11;
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
                this.f1751g = i12;
                return i5;
            }
        }
        return (int) u();
    }

    public final long t() {
        long j;
        long j5;
        long j7;
        long j10;
        int i5 = this.f1751g;
        int i6 = this.f1749e;
        if (i6 != i5) {
            int i10 = i5 + 1;
            byte[] bArr = this.f1748d;
            byte b10 = bArr[i5];
            if (b10 >= 0) {
                this.f1751g = i10;
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
                this.f1751g = i11;
                return j;
            }
        }
        return u();
    }

    public final long u() {
        long j = 0;
        for (int i5 = 0; i5 < 64; i5 += 7) {
            if (this.f1751g == this.f1749e) {
                D(1);
            }
            int i6 = this.f1751g;
            this.f1751g = i6 + 1;
            j |= (r3 & ByteCompanionObject.MAX_VALUE) << i5;
            if ((this.f1748d[i6] & ByteCompanionObject.MIN_VALUE) == 0) {
                return j;
            }
        }
        throw x.c();
    }

    public final int v() {
        return q();
    }

    public final long w() {
        return r();
    }

    public final int x() {
        int s2 = s();
        return (-(s2 & 1)) ^ (s2 >>> 1);
    }

    public final long y() {
        long t5 = t();
        return (-(t5 & 1)) ^ (t5 >>> 1);
    }

    public final int z() {
        if (c()) {
            this.f1752h = 0;
            return 0;
        }
        int s2 = s();
        this.f1752h = s2;
        if ((s2 >>> 3) != 0) {
            return s2;
        }
        throw new x("Protocol message contained an invalid tag (zero).");
    }
}
