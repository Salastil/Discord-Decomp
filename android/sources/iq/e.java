package iq;

import androidx.recyclerview.widget.RecyclerView;
import com.google.android.gms.internal.play_billing.w1;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: c, reason: collision with root package name */
    public int f12200c;

    /* renamed from: e, reason: collision with root package name */
    public final InputStream f12202e;

    /* renamed from: f, reason: collision with root package name */
    public int f12203f;

    /* renamed from: i, reason: collision with root package name */
    public int f12206i;

    /* renamed from: h, reason: collision with root package name */
    public int f12205h = Integer.MAX_VALUE;
    public final byte[] a = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];

    /* renamed from: b, reason: collision with root package name */
    public int f12199b = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f12201d = 0;

    /* renamed from: g, reason: collision with root package name */
    public int f12204g = 0;

    public e(InputStream inputStream) {
        this.f12202e = inputStream;
    }

    public final void a(int i5) {
        if (this.f12203f != i5) {
            throw new q("Protocol message end-group tag did not match expected tag.");
        }
    }

    public final int b() {
        int i5 = this.f12205h;
        if (i5 == Integer.MAX_VALUE) {
            return -1;
        }
        return i5 - (this.f12204g + this.f12201d);
    }

    public final void c(int i5) {
        this.f12205h = i5;
        o();
    }

    public final int d(int i5) {
        if (i5 < 0) {
            throw new q("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
        }
        int i6 = this.f12204g + this.f12201d + i5;
        int i10 = this.f12205h;
        if (i6 > i10) {
            throw q.a();
        }
        this.f12205h = i6;
        o();
        return i10;
    }

    public final t e() {
        int k = k();
        int i5 = this.f12199b;
        int i6 = this.f12201d;
        if (k > i5 - i6 || k <= 0) {
            return k == 0 ? d.f12197d : new t(h(k));
        }
        byte[] bArr = new byte[k];
        System.arraycopy(this.a, i6, bArr, 0, k);
        t tVar = new t(bArr);
        this.f12201d += k;
        return tVar;
    }

    public final int f() {
        return k();
    }

    public final a g(v vVar, g gVar) {
        int k = k();
        if (this.f12206i >= 64) {
            throw new q("Protocol message had too many levels of nesting.  May be malicious.  Use CodedInputStream.setRecursionLimit() to increase the depth limit.");
        }
        int d6 = d(k);
        this.f12206i++;
        a aVar = (a) vVar.a(this, gVar);
        a(0);
        this.f12206i--;
        c(d6);
        return aVar;
    }

    public final byte[] h(int i5) {
        if (i5 <= 0) {
            if (i5 == 0) {
                return p.a;
            }
            throw new q("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
        }
        int i6 = this.f12204g;
        int i10 = this.f12201d;
        int i11 = i6 + i10 + i5;
        int i12 = this.f12205h;
        if (i11 > i12) {
            r((i12 - i6) - i10);
            throw q.a();
        }
        byte[] bArr = this.a;
        if (i5 < 4096) {
            byte[] bArr2 = new byte[i5];
            int i13 = this.f12199b - i10;
            System.arraycopy(bArr, i10, bArr2, 0, i13);
            this.f12201d = this.f12199b;
            int i14 = i5 - i13;
            if (i14 > 0) {
                p(i14);
            }
            System.arraycopy(bArr, 0, bArr2, i13, i14);
            this.f12201d = i14;
            return bArr2;
        }
        int i15 = this.f12199b;
        this.f12204g = i6 + i15;
        this.f12201d = 0;
        this.f12199b = 0;
        int i16 = i15 - i10;
        int i17 = i5 - i16;
        ArrayList arrayList = new ArrayList();
        while (i17 > 0) {
            int min = Math.min(i17, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
            byte[] bArr3 = new byte[min];
            int i18 = 0;
            while (i18 < min) {
                int read = this.f12202e.read(bArr3, i18, min - i18);
                if (read == -1) {
                    throw q.a();
                }
                this.f12204g += read;
                i18 += read;
            }
            i17 -= min;
            arrayList.add(bArr3);
        }
        byte[] bArr4 = new byte[i5];
        System.arraycopy(bArr, i10, bArr4, 0, i16);
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            byte[] bArr5 = (byte[]) it.next();
            System.arraycopy(bArr5, 0, bArr4, i16, bArr5.length);
            i16 += bArr5.length;
        }
        return bArr4;
    }

    public final int i() {
        int i5 = this.f12201d;
        if (this.f12199b - i5 < 4) {
            p(4);
            i5 = this.f12201d;
        }
        this.f12201d = i5 + 4;
        byte[] bArr = this.a;
        return ((bArr[i5 + 3] & 255) << 24) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16);
    }

    public final long j() {
        int i5 = this.f12201d;
        if (this.f12199b - i5 < 8) {
            p(8);
            i5 = this.f12201d;
        }
        this.f12201d = i5 + 8;
        byte[] bArr = this.a;
        return ((bArr[i5 + 7] & 255) << 56) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16) | ((bArr[i5 + 3] & 255) << 24) | ((bArr[i5 + 4] & 255) << 32) | ((bArr[i5 + 5] & 255) << 40) | ((bArr[i5 + 6] & 255) << 48);
    }

    public final int k() {
        int i5;
        int i6 = this.f12201d;
        int i10 = this.f12199b;
        if (i10 != i6) {
            int i11 = i6 + 1;
            byte[] bArr = this.a;
            byte b10 = bArr[i6];
            if (b10 >= 0) {
                this.f12201d = i11;
                return b10;
            }
            if (i10 - i11 >= 9) {
                int i12 = i6 + 2;
                int i13 = (bArr[i11] << 7) ^ b10;
                long j = i13;
                if (j < 0) {
                    i5 = (int) ((-128) ^ j);
                } else {
                    int i14 = i6 + 3;
                    int i15 = (bArr[i12] << 14) ^ i13;
                    long j5 = i15;
                    if (j5 >= 0) {
                        i5 = (int) (16256 ^ j5);
                    } else {
                        int i16 = i6 + 4;
                        long j7 = i15 ^ (bArr[i14] << 21);
                        if (j7 < 0) {
                            i5 = (int) ((-2080896) ^ j7);
                        } else {
                            i14 = i6 + 5;
                            int i17 = (int) ((r1 ^ (r2 << 28)) ^ 266354560);
                            if (bArr[i16] < 0) {
                                i16 = i6 + 6;
                                if (bArr[i14] < 0) {
                                    i14 = i6 + 7;
                                    if (bArr[i16] < 0) {
                                        i16 = i6 + 8;
                                        if (bArr[i14] < 0) {
                                            i14 = i6 + 9;
                                            if (bArr[i16] < 0) {
                                                int i18 = i6 + 10;
                                                if (bArr[i14] >= 0) {
                                                    i12 = i18;
                                                    i5 = i17;
                                                }
                                            }
                                        }
                                    }
                                }
                                i5 = i17;
                            }
                            i5 = i17;
                        }
                        i12 = i16;
                    }
                    i12 = i14;
                }
                this.f12201d = i12;
                return i5;
            }
        }
        return (int) m();
    }

    /* JADX WARN: Code restructure failed: missing block: B:38:0x00b6, code lost:
    
        if (r3[r2] < 0) goto L39;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long l() {
        long j;
        long j5;
        long j7;
        int i5 = this.f12201d;
        int i6 = this.f12199b;
        if (i6 != i5) {
            int i10 = i5 + 1;
            byte[] bArr = this.a;
            byte b10 = bArr[i5];
            if (b10 >= 0) {
                this.f12201d = i10;
                return b10;
            }
            if (i6 - i10 >= 9) {
                int i11 = i5 + 2;
                long j10 = (bArr[i10] << 7) ^ b10;
                if (j10 >= 0) {
                    int i12 = i5 + 3;
                    long j11 = j10 ^ (bArr[i11] << 14);
                    if (j11 >= 0) {
                        j7 = 16256;
                    } else {
                        i11 = i5 + 4;
                        j10 = j11 ^ (bArr[i12] << 21);
                        if (j10 < 0) {
                            j5 = -2080896;
                        } else {
                            i12 = i5 + 5;
                            j11 = j10 ^ (bArr[i11] << 28);
                            if (j11 >= 0) {
                                j7 = 266354560;
                            } else {
                                i11 = i5 + 6;
                                j10 = j11 ^ (bArr[i12] << 35);
                                if (j10 < 0) {
                                    j5 = -34093383808L;
                                } else {
                                    i12 = i5 + 7;
                                    j11 = j10 ^ (bArr[i11] << 42);
                                    if (j11 >= 0) {
                                        j7 = 4363953127296L;
                                    } else {
                                        i11 = i5 + 8;
                                        j10 = j11 ^ (bArr[i12] << 49);
                                        if (j10 >= 0) {
                                            long j12 = (j10 ^ (bArr[i11] << 56)) ^ 71499008037633920L;
                                            i11 = j12 < 0 ? i5 + 10 : i5 + 9;
                                            j = j12;
                                            this.f12201d = i11;
                                            return j;
                                        }
                                        j5 = -558586000294016L;
                                    }
                                }
                            }
                        }
                    }
                    i11 = i12;
                    j = j7 ^ j11;
                    this.f12201d = i11;
                    return j;
                }
                j5 = -128;
                j = j5 ^ j10;
                this.f12201d = i11;
                return j;
            }
        }
        return m();
    }

    public final long m() {
        long j = 0;
        for (int i5 = 0; i5 < 64; i5 += 7) {
            if (this.f12201d == this.f12199b) {
                p(1);
            }
            int i6 = this.f12201d;
            this.f12201d = i6 + 1;
            j |= (r3 & ByteCompanionObject.MAX_VALUE) << i5;
            if ((this.a[i6] & ByteCompanionObject.MIN_VALUE) == 0) {
                return j;
            }
        }
        throw new q("CodedInputStream encountered a malformed varint.");
    }

    public final int n() {
        if (this.f12201d == this.f12199b && !s(1)) {
            this.f12203f = 0;
            return 0;
        }
        int k = k();
        this.f12203f = k;
        if ((k >>> 3) != 0) {
            return k;
        }
        throw new q("Protocol message contained an invalid tag (zero).");
    }

    public final void o() {
        int i5 = this.f12199b + this.f12200c;
        this.f12199b = i5;
        int i6 = this.f12204g + i5;
        int i10 = this.f12205h;
        if (i6 <= i10) {
            this.f12200c = 0;
            return;
        }
        int i11 = i6 - i10;
        this.f12200c = i11;
        this.f12199b = i5 - i11;
    }

    public final void p(int i5) {
        if (!s(i5)) {
            throw q.a();
        }
    }

    public final boolean q(int i5, w1 w1Var) {
        int n6;
        int i6 = i5 & 7;
        if (i6 == 0) {
            long l6 = l();
            w1Var.A(i5);
            w1Var.B(l6);
            return true;
        }
        if (i6 == 1) {
            long j = j();
            w1Var.A(i5);
            w1Var.z(j);
            return true;
        }
        if (i6 == 2) {
            t e9 = e();
            w1Var.A(i5);
            w1Var.A(e9.size());
            w1Var.w(e9);
            return true;
        }
        if (i6 != 3) {
            if (i6 == 4) {
                return false;
            }
            if (i6 != 5) {
                throw new q("Protocol message tag had invalid wire type.");
            }
            int i10 = i();
            w1Var.A(i5);
            w1Var.y(i10);
            return true;
        }
        w1Var.A(i5);
        do {
            n6 = n();
            if (n6 == 0) {
                break;
            }
        } while (q(n6, w1Var));
        int i11 = ((i5 >>> 3) << 3) | 4;
        a(i11);
        w1Var.A(i11);
        return true;
    }

    public final void r(int i5) {
        int i6 = this.f12199b;
        int i10 = this.f12201d;
        int i11 = i6 - i10;
        if (i5 <= i11 && i5 >= 0) {
            this.f12201d = i10 + i5;
            return;
        }
        if (i5 < 0) {
            throw new q("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
        }
        int i12 = this.f12204g;
        int i13 = i12 + i10 + i5;
        int i14 = this.f12205h;
        if (i13 > i14) {
            r((i14 - i12) - i10);
            throw q.a();
        }
        this.f12201d = i6;
        p(1);
        while (true) {
            int i15 = i5 - i11;
            int i16 = this.f12199b;
            if (i15 <= i16) {
                this.f12201d = i15;
                return;
            } else {
                i11 += i16;
                this.f12201d = i16;
                p(1);
            }
        }
    }

    public final boolean s(int i5) {
        InputStream inputStream;
        int i6 = this.f12201d;
        int i10 = i6 + i5;
        int i11 = this.f12199b;
        if (i10 <= i11) {
            StringBuilder sb2 = new StringBuilder(77);
            sb2.append("refillBuffer() called when ");
            sb2.append(i5);
            sb2.append(" bytes were already available in buffer");
            throw new IllegalStateException(sb2.toString());
        }
        if (this.f12204g + i6 + i5 <= this.f12205h && (inputStream = this.f12202e) != null) {
            byte[] bArr = this.a;
            if (i6 > 0) {
                if (i11 > i6) {
                    System.arraycopy(bArr, i6, bArr, 0, i11 - i6);
                }
                this.f12204g += i6;
                this.f12199b -= i6;
                this.f12201d = 0;
            }
            int i12 = this.f12199b;
            int read = inputStream.read(bArr, i12, bArr.length - i12);
            if (read == 0 || read < -1 || read > bArr.length) {
                StringBuilder sb3 = new StringBuilder(102);
                sb3.append("InputStream#read(byte[]) returned invalid result: ");
                sb3.append(read);
                sb3.append("\nThe InputStream implementation is buggy.");
                throw new IllegalStateException(sb3.toString());
            }
            if (read > 0) {
                this.f12199b += read;
                if ((this.f12204g + i5) - 67108864 > 0) {
                    throw new q("Protocol message was too large.  May be malicious.  Use CodedInputStream.setSizeLimit() to increase the size limit.");
                }
                o();
                if (this.f12199b >= i5) {
                    return true;
                }
                return s(i5);
            }
        }
        return false;
    }
}
