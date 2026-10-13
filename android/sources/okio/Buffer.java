package okio;

import a3.e;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import e2.k;
import et.f;
import et.o;
import et.s;
import et.t;
import et.y;
import ft.b;
import java.io.EOFException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.channels.ByteChannel;
import java.nio.charset.Charset;
import k0.d;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.text.Charsets;
import kotlin.text.x;

/* loaded from: classes.dex */
public final class Buffer implements BufferedSource, BufferedSink, Cloneable, ByteChannel {

    /* renamed from: d, reason: collision with root package name */
    public s f16113d;

    /* renamed from: e, reason: collision with root package name */
    public long f16114e;

    public final byte[] A(long j) {
        if (j < 0 || j > 2147483647L) {
            throw new IllegalArgumentException(d.j(j, "byteCount: ").toString());
        }
        if (this.f16114e < j) {
            throw new EOFException();
        }
        byte[] bArr = new byte[(int) j];
        readFully(bArr);
        return bArr;
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink B(String str) {
        l0(str);
        return this;
    }

    public final String C(long j, Charset charset) {
        Intrinsics.checkNotNullParameter(charset, "charset");
        if (j < 0 || j > 2147483647L) {
            throw new IllegalArgumentException(d.j(j, "byteCount: ").toString());
        }
        if (this.f16114e < j) {
            throw new EOFException();
        }
        if (j == 0) {
            return "";
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        int i5 = sVar.f8275b;
        if (i5 + j > sVar.f8276c) {
            return new String(A(j), charset);
        }
        int i6 = (int) j;
        String str = new String(sVar.a, i5, i6, charset);
        int i10 = sVar.f8275b + i6;
        sVar.f8275b = i10;
        this.f16114e -= j;
        if (i10 == sVar.f8276c) {
            this.f16113d = sVar.a();
            t.a(sVar);
        }
        return str;
    }

    @Override // okio.BufferedSource
    public final String E(Charset charset) {
        Intrinsics.checkNotNullParameter(charset, "charset");
        return C(this.f16114e, charset);
    }

    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        s sVar;
        s b10;
        Intrinsics.checkNotNullParameter(source, "source");
        if (source == this) {
            throw new IllegalArgumentException("source == this");
        }
        y.f(source.f16114e, 0L, j);
        while (j > 0) {
            s sVar2 = source.f16113d;
            Intrinsics.checkNotNull(sVar2);
            int i5 = sVar2.f8276c;
            s sVar3 = source.f16113d;
            Intrinsics.checkNotNull(sVar3);
            long j5 = i5 - sVar3.f8275b;
            int i6 = 0;
            if (j < j5) {
                s sVar4 = this.f16113d;
                if (sVar4 != null) {
                    Intrinsics.checkNotNull(sVar4);
                    sVar = sVar4.f8280g;
                } else {
                    sVar = null;
                }
                if (sVar != null && sVar.f8278e) {
                    if ((sVar.f8276c + j) - (sVar.f8277d ? 0 : sVar.f8275b) <= 8192) {
                        s sVar5 = source.f16113d;
                        Intrinsics.checkNotNull(sVar5);
                        sVar5.d(sVar, (int) j);
                        source.f16114e -= j;
                        this.f16114e += j;
                        return;
                    }
                }
                s sVar6 = source.f16113d;
                Intrinsics.checkNotNull(sVar6);
                int i10 = (int) j;
                if (i10 <= 0) {
                    sVar6.getClass();
                } else if (i10 <= sVar6.f8276c - sVar6.f8275b) {
                    if (i10 >= 1024) {
                        b10 = sVar6.c();
                    } else {
                        b10 = t.b();
                        byte[] bArr = sVar6.a;
                        byte[] bArr2 = b10.a;
                        int i11 = sVar6.f8275b;
                        u.c(0, i11, i11 + i10, bArr, bArr2);
                    }
                    b10.f8276c = b10.f8275b + i10;
                    sVar6.f8275b += i10;
                    s sVar7 = sVar6.f8280g;
                    Intrinsics.checkNotNull(sVar7);
                    sVar7.b(b10);
                    source.f16113d = b10;
                }
                throw new IllegalArgumentException("byteCount out of range");
            }
            s sVar8 = source.f16113d;
            Intrinsics.checkNotNull(sVar8);
            long j7 = sVar8.f8276c - sVar8.f8275b;
            source.f16113d = sVar8.a();
            s sVar9 = this.f16113d;
            if (sVar9 == null) {
                this.f16113d = sVar8;
                sVar8.f8280g = sVar8;
                sVar8.f8279f = sVar8;
            } else {
                Intrinsics.checkNotNull(sVar9);
                s sVar10 = sVar9.f8280g;
                Intrinsics.checkNotNull(sVar10);
                sVar10.b(sVar8);
                s sVar11 = sVar8.f8280g;
                if (sVar11 == sVar8) {
                    throw new IllegalStateException("cannot compact");
                }
                Intrinsics.checkNotNull(sVar11);
                if (sVar11.f8278e) {
                    int i12 = sVar8.f8276c - sVar8.f8275b;
                    s sVar12 = sVar8.f8280g;
                    Intrinsics.checkNotNull(sVar12);
                    int i13 = 8192 - sVar12.f8276c;
                    s sVar13 = sVar8.f8280g;
                    Intrinsics.checkNotNull(sVar13);
                    if (!sVar13.f8277d) {
                        s sVar14 = sVar8.f8280g;
                        Intrinsics.checkNotNull(sVar14);
                        i6 = sVar14.f8275b;
                    }
                    if (i12 <= i13 + i6) {
                        s sVar15 = sVar8.f8280g;
                        Intrinsics.checkNotNull(sVar15);
                        sVar8.d(sVar15, i12);
                        sVar8.a();
                        t.a(sVar8);
                    }
                }
            }
            source.f16114e -= j7;
            this.f16114e += j7;
            j -= j7;
        }
    }

    @Override // okio.BufferedSink
    public final long J(Source source) {
        Intrinsics.checkNotNullParameter(source, "source");
        long j = 0;
        while (true) {
            long read = source.read(this, 8192L);
            if (read == -1) {
                return j;
            }
            j += read;
        }
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink K(long j) {
        X(j);
        return this;
    }

    @Override // okio.BufferedSource
    public final ByteString L() {
        return m(this.f16114e);
    }

    @Override // okio.BufferedSource
    public final boolean N(long j) {
        return this.f16114e >= j;
    }

    public final ByteString P(int i5) {
        if (i5 == 0) {
            return ByteString.f16115v;
        }
        y.f(this.f16114e, 0L, i5);
        s sVar = this.f16113d;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        while (i10 < i5) {
            Intrinsics.checkNotNull(sVar);
            int i12 = sVar.f8276c;
            int i13 = sVar.f8275b;
            if (i12 == i13) {
                throw new AssertionError("s.limit == s.pos");
            }
            i10 += i12 - i13;
            i11++;
            sVar = sVar.f8279f;
        }
        byte[][] bArr = new byte[i11][];
        int[] iArr = new int[i11 * 2];
        s sVar2 = this.f16113d;
        int i14 = 0;
        while (i6 < i5) {
            Intrinsics.checkNotNull(sVar2);
            bArr[i14] = sVar2.a;
            i6 += sVar2.f8276c - sVar2.f8275b;
            iArr[i14] = Math.min(i6, i5);
            iArr[i14 + i11] = sVar2.f8275b;
            sVar2.f8277d = true;
            i14++;
            sVar2 = sVar2.f8279f;
        }
        return new et.u(bArr, iArr);
    }

    public final s Q(int i5) {
        if (i5 < 1 || i5 > 8192) {
            throw new IllegalArgumentException("unexpected capacity");
        }
        s sVar = this.f16113d;
        if (sVar == null) {
            s b10 = t.b();
            this.f16113d = b10;
            b10.f8280g = b10;
            b10.f8279f = b10;
            return b10;
        }
        Intrinsics.checkNotNull(sVar);
        s sVar2 = sVar.f8280g;
        Intrinsics.checkNotNull(sVar2);
        if (sVar2.f8276c + i5 <= 8192 && sVar2.f8278e) {
            return sVar2;
        }
        s b11 = t.b();
        sVar2.b(b11);
        return b11;
    }

    public final void R(ByteString byteString) {
        Intrinsics.checkNotNullParameter(byteString, "byteString");
        byteString.m(this, byteString.c());
    }

    @Override // okio.BufferedSource
    public final String T() {
        return y(LongCompanionObject.MAX_VALUE);
    }

    public final void U(int i5) {
        s Q = Q(1);
        byte[] bArr = Q.a;
        int i6 = Q.f8276c;
        Q.f8276c = i6 + 1;
        bArr[i6] = (byte) i5;
        this.f16114e++;
    }

    public final void V(long j) {
        boolean z5;
        if (j == 0) {
            U(48);
            return;
        }
        int i5 = 1;
        if (j < 0) {
            j = -j;
            if (j < 0) {
                l0("-9223372036854775808");
                return;
            }
            z5 = true;
        } else {
            z5 = false;
        }
        if (j >= 100000000) {
            i5 = j < 1000000000000L ? j < 10000000000L ? j < 1000000000 ? 9 : 10 : j < 100000000000L ? 11 : 12 : j < 1000000000000000L ? j < 10000000000000L ? 13 : j < 100000000000000L ? 14 : 15 : j < 100000000000000000L ? j < 10000000000000000L ? 16 : 17 : j < 1000000000000000000L ? 18 : 19;
        } else if (j >= 10000) {
            i5 = j < 1000000 ? j < 100000 ? 5 : 6 : j < 10000000 ? 7 : 8;
        } else if (j >= 100) {
            i5 = j < 1000 ? 3 : 4;
        } else if (j >= 10) {
            i5 = 2;
        }
        if (z5) {
            i5++;
        }
        s Q = Q(i5);
        byte[] bArr = Q.a;
        int i6 = Q.f8276c + i5;
        while (j != 0) {
            long j5 = 10;
            i6--;
            bArr[i6] = ft.a.a[(int) (j % j5)];
            j /= j5;
        }
        if (z5) {
            bArr[i6 - 1] = (byte) 45;
        }
        Q.f8276c += i5;
        this.f16114e += i5;
    }

    @Override // okio.BufferedSource
    public final String W() {
        return C(this.f16114e, Charsets.UTF_8);
    }

    public final void X(long j) {
        if (j == 0) {
            U(48);
            return;
        }
        long j5 = (j >>> 1) | j;
        long j7 = j5 | (j5 >>> 2);
        long j10 = j7 | (j7 >>> 4);
        long j11 = j10 | (j10 >>> 8);
        long j12 = j11 | (j11 >>> 16);
        long j13 = j12 | (j12 >>> 32);
        long j14 = j13 - ((j13 >>> 1) & 6148914691236517205L);
        long j15 = ((j14 >>> 2) & 3689348814741910323L) + (j14 & 3689348814741910323L);
        long j16 = ((j15 >>> 4) + j15) & 1085102592571150095L;
        long j17 = j16 + (j16 >>> 8);
        long j18 = j17 + (j17 >>> 16);
        int i5 = (int) ((((j18 & 63) + ((j18 >>> 32) & 63)) + 3) / 4);
        s Q = Q(i5);
        byte[] bArr = Q.a;
        int i6 = Q.f8276c;
        for (int i10 = (i6 + i5) - 1; i10 >= i6; i10--) {
            bArr[i10] = ft.a.a[(int) (15 & j)];
            j >>>= 4;
        }
        Q.f8276c += i5;
        this.f16114e += i5;
    }

    @Override // okio.BufferedSource
    public final int Y(o options) {
        Intrinsics.checkNotNullParameter(options, "options");
        int c6 = ft.a.c(this, options, false);
        if (c6 == -1) {
            return -1;
        }
        skip(options.f8261e[c6].c());
        return c6;
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink a0(ByteString byteString) {
        R(byteString);
        return this;
    }

    public final void b0(int i5) {
        s Q = Q(4);
        byte[] bArr = Q.a;
        int i6 = Q.f8276c;
        bArr[i6] = (byte) ((i5 >>> 24) & 255);
        bArr[i6 + 1] = (byte) ((i5 >>> 16) & 255);
        bArr[i6 + 2] = (byte) ((i5 >>> 8) & 255);
        bArr[i6 + 3] = (byte) (i5 & 255);
        Q.f8276c = i6 + 4;
        this.f16114e += 4;
    }

    public final void c() {
        skip(this.f16114e);
    }

    @Override // okio.BufferedSource
    public final long c0(Sink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        long j = this.f16114e;
        if (j > 0) {
            sink.H(this, j);
        }
        return j;
    }

    public final Object clone() {
        Buffer buffer = new Buffer();
        if (this.f16114e == 0) {
            return buffer;
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        s c6 = sVar.c();
        buffer.f16113d = c6;
        c6.f8280g = c6;
        c6.f8279f = c6;
        for (s sVar2 = sVar.f8279f; sVar2 != sVar; sVar2 = sVar2.f8279f) {
            s sVar3 = c6.f8280g;
            Intrinsics.checkNotNull(sVar3);
            Intrinsics.checkNotNull(sVar2);
            sVar3.b(sVar2.c());
        }
        buffer.f16114e = this.f16114e;
        return buffer;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable, java.nio.channels.Channel, okio.Sink
    public final void close() {
    }

    public final void d0(int i5) {
        s Q = Q(2);
        byte[] bArr = Q.a;
        int i6 = Q.f8276c;
        bArr[i6] = (byte) ((i5 >>> 8) & 255);
        bArr[i6 + 1] = (byte) (i5 & 255);
        Q.f8276c = i6 + 2;
        this.f16114e += 2;
    }

    @Override // okio.BufferedSource
    public final void e0(long j) {
        if (this.f16114e < j) {
            throw new EOFException();
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Buffer)) {
            return false;
        }
        long j = this.f16114e;
        Buffer buffer = (Buffer) obj;
        if (j != buffer.f16114e) {
            return false;
        }
        if (j == 0) {
            return true;
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        s sVar2 = buffer.f16113d;
        Intrinsics.checkNotNull(sVar2);
        int i5 = sVar.f8275b;
        int i6 = sVar2.f8275b;
        long j5 = 0;
        while (j5 < this.f16114e) {
            long min = Math.min(sVar.f8276c - i5, sVar2.f8276c - i6);
            long j7 = 0;
            while (j7 < min) {
                int i10 = i5 + 1;
                int i11 = i6 + 1;
                if (sVar.a[i5] != sVar2.a[i6]) {
                    return false;
                }
                j7++;
                i5 = i10;
                i6 = i11;
            }
            if (i5 == sVar.f8276c) {
                sVar = sVar.f8279f;
                Intrinsics.checkNotNull(sVar);
                i5 = sVar.f8275b;
            }
            if (i6 == sVar2.f8276c) {
                sVar2 = sVar2.f8279f;
                Intrinsics.checkNotNull(sVar2);
                i6 = sVar2.f8275b;
            }
            j5 += min;
        }
        return true;
    }

    public final long f() {
        long j = this.f16114e;
        if (j == 0) {
            return 0L;
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        s sVar2 = sVar.f8280g;
        Intrinsics.checkNotNull(sVar2);
        return (sVar2.f8276c >= 8192 || !sVar2.f8278e) ? j : j - (r3 - sVar2.f8275b);
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink f0(long j) {
        V(j);
        return this;
    }

    @Override // okio.BufferedSink, okio.Sink, java.io.Flushable
    public final void flush() {
    }

    public final void g(Buffer out, long j, long j5) {
        Intrinsics.checkNotNullParameter(out, "out");
        long j7 = j;
        y.f(this.f16114e, j7, j5);
        if (j5 == 0) {
            return;
        }
        out.f16114e += j5;
        s sVar = this.f16113d;
        while (true) {
            Intrinsics.checkNotNull(sVar);
            long j10 = sVar.f8276c - sVar.f8275b;
            if (j7 < j10) {
                break;
            }
            j7 -= j10;
            sVar = sVar.f8279f;
        }
        s sVar2 = sVar;
        long j11 = j5;
        while (j11 > 0) {
            Intrinsics.checkNotNull(sVar2);
            s c6 = sVar2.c();
            int i5 = c6.f8275b + ((int) j7);
            c6.f8275b = i5;
            c6.f8276c = Math.min(i5 + ((int) j11), c6.f8276c);
            s sVar3 = out.f16113d;
            if (sVar3 == null) {
                c6.f8280g = c6;
                c6.f8279f = c6;
                out.f16113d = c6;
            } else {
                Intrinsics.checkNotNull(sVar3);
                s sVar4 = sVar3.f8280g;
                Intrinsics.checkNotNull(sVar4);
                sVar4.b(c6);
            }
            j11 -= c6.f8276c - c6.f8275b;
            sVar2 = sVar2.f8279f;
            j7 = 0;
        }
    }

    @Override // okio.BufferedSink
    public final OutputStream g0() {
        return new k(this, 1);
    }

    @Override // okio.BufferedSource
    public final Buffer h() {
        return this;
    }

    public final int hashCode() {
        s sVar = this.f16113d;
        if (sVar == null) {
            return 0;
        }
        int i5 = 1;
        do {
            int i6 = sVar.f8276c;
            for (int i10 = sVar.f8275b; i10 < i6; i10++) {
                i5 = (i5 * 31) + sVar.a[i10];
            }
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
        } while (sVar != this.f16113d);
        return i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x009c  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00aa  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00ae A[EDGE_INSN: B:39:0x00ae->B:36:0x00ae BREAK  A[LOOP:0: B:4:0x000c->B:38:?], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00a6  */
    @Override // okio.BufferedSource
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long i0() {
        int i5;
        if (this.f16114e == 0) {
            throw new EOFException();
        }
        int i6 = 0;
        boolean z5 = false;
        long j = 0;
        do {
            s sVar = this.f16113d;
            Intrinsics.checkNotNull(sVar);
            byte[] bArr = sVar.a;
            int i10 = sVar.f8275b;
            int i11 = sVar.f8276c;
            while (i10 < i11) {
                byte b10 = bArr[i10];
                byte b11 = (byte) 48;
                if (b10 < b11 || b10 > ((byte) 57)) {
                    byte b12 = (byte) 97;
                    if ((b10 < b12 || b10 > ((byte) 102)) && (b10 < (b12 = (byte) 65) || b10 > ((byte) 70))) {
                        z5 = true;
                        if (i6 == 0) {
                            char[] cArr = b.a;
                            char[] cArr2 = {cArr[(b10 >> 4) & 15], cArr[b10 & 15]};
                            Intrinsics.checkNotNullParameter(cArr2, "<this>");
                            throw new NumberFormatException("Expected leading [0-9a-fA-F] character but was 0x".concat(new String(cArr2)));
                        }
                        if (i10 != i11) {
                            this.f16113d = sVar.a();
                            t.a(sVar);
                        } else {
                            sVar.f8275b = i10;
                        }
                        if (!z5) {
                            break;
                        }
                    } else {
                        i5 = (b10 - b12) + 10;
                    }
                } else {
                    i5 = b10 - b11;
                }
                if (((-1152921504606846976L) & j) != 0) {
                    Buffer buffer = new Buffer();
                    buffer.X(j);
                    buffer.U(b10);
                    throw new NumberFormatException("Number too large: ".concat(buffer.W()));
                }
                j = (j << 4) | i5;
                i10++;
                i6++;
            }
            if (i10 != i11) {
            }
            if (!z5) {
            }
        } while (this.f16113d != null);
        this.f16114e -= i6;
        return j;
    }

    @Override // java.nio.channels.Channel
    public final boolean isOpen() {
        return true;
    }

    public final void j0(int i5, int i6, String string) {
        char charAt;
        Intrinsics.checkNotNullParameter(string, "string");
        if (i5 < 0) {
            throw new IllegalArgumentException(d.i(i5, "beginIndex < 0: ").toString());
        }
        if (i6 < i5) {
            throw new IllegalArgumentException(e.f(i6, i5, "endIndex < beginIndex: ", " < ").toString());
        }
        if (i6 > string.length()) {
            StringBuilder r5 = e.r(i6, "endIndex > string.length: ", " > ");
            r5.append(string.length());
            throw new IllegalArgumentException(r5.toString().toString());
        }
        while (i5 < i6) {
            char charAt2 = string.charAt(i5);
            if (charAt2 < 128) {
                s Q = Q(1);
                byte[] bArr = Q.a;
                int i10 = Q.f8276c - i5;
                int min = Math.min(i6, 8192 - i10);
                int i11 = i5 + 1;
                bArr[i5 + i10] = (byte) charAt2;
                while (true) {
                    i5 = i11;
                    if (i5 >= min || (charAt = string.charAt(i5)) >= 128) {
                        break;
                    }
                    i11 = i5 + 1;
                    bArr[i5 + i10] = (byte) charAt;
                }
                int i12 = Q.f8276c;
                int i13 = (i10 + i5) - i12;
                Q.f8276c = i12 + i13;
                this.f16114e += i13;
            } else {
                if (charAt2 < 2048) {
                    s Q2 = Q(2);
                    byte[] bArr2 = Q2.a;
                    int i14 = Q2.f8276c;
                    bArr2[i14] = (byte) ((charAt2 >> 6) | JfifUtil.MARKER_SOFn);
                    bArr2[i14 + 1] = (byte) ((charAt2 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    Q2.f8276c = i14 + 2;
                    this.f16114e += 2;
                } else if (charAt2 < 55296 || charAt2 > 57343) {
                    s Q3 = Q(3);
                    byte[] bArr3 = Q3.a;
                    int i15 = Q3.f8276c;
                    bArr3[i15] = (byte) ((charAt2 >> '\f') | 224);
                    bArr3[i15 + 1] = (byte) ((63 & (charAt2 >> 6)) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    bArr3[i15 + 2] = (byte) ((charAt2 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    Q3.f8276c = i15 + 3;
                    this.f16114e += 3;
                } else {
                    int i16 = i5 + 1;
                    char charAt3 = i16 < i6 ? string.charAt(i16) : (char) 0;
                    if (charAt2 > 56319 || 56320 > charAt3 || charAt3 >= 57344) {
                        U(63);
                        i5 = i16;
                    } else {
                        int i17 = (((charAt2 & 1023) << 10) | (charAt3 & 1023)) + KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        s Q4 = Q(4);
                        byte[] bArr4 = Q4.a;
                        int i18 = Q4.f8276c;
                        bArr4[i18] = (byte) ((i17 >> 18) | 240);
                        bArr4[i18 + 1] = (byte) (((i17 >> 12) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        bArr4[i18 + 2] = (byte) (((i17 >> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        bArr4[i18 + 3] = (byte) ((i17 & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        Q4.f8276c = i18 + 4;
                        this.f16114e += 4;
                        i5 += 2;
                    }
                }
                i5++;
            }
        }
    }

    @Override // okio.BufferedSource
    public final InputStream k0() {
        return new f(this, 0);
    }

    public final boolean l() {
        return this.f16114e == 0;
    }

    public final void l0(String string) {
        Intrinsics.checkNotNullParameter(string, "string");
        j0(0, string.length(), string);
    }

    @Override // okio.BufferedSource
    public final ByteString m(long j) {
        if (j < 0 || j > 2147483647L) {
            throw new IllegalArgumentException(d.j(j, "byteCount: ").toString());
        }
        if (this.f16114e < j) {
            throw new EOFException();
        }
        if (j < 4096) {
            return new ByteString(A(j));
        }
        ByteString P = P((int) j);
        skip(j);
        return P;
    }

    public final void m0(int i5) {
        String str;
        if (i5 < 128) {
            U(i5);
            return;
        }
        if (i5 < 2048) {
            s Q = Q(2);
            byte[] bArr = Q.a;
            int i6 = Q.f8276c;
            bArr[i6] = (byte) ((i5 >> 6) | JfifUtil.MARKER_SOFn);
            bArr[i6 + 1] = (byte) ((i5 & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            Q.f8276c = i6 + 2;
            this.f16114e += 2;
            return;
        }
        if (55296 <= i5 && i5 < 57344) {
            U(63);
            return;
        }
        if (i5 < 65536) {
            s Q2 = Q(3);
            byte[] bArr2 = Q2.a;
            int i10 = Q2.f8276c;
            bArr2[i10] = (byte) ((i5 >> 12) | 224);
            bArr2[i10 + 1] = (byte) (((i5 >> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            bArr2[i10 + 2] = (byte) ((i5 & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            Q2.f8276c = i10 + 3;
            this.f16114e += 3;
            return;
        }
        if (i5 <= 1114111) {
            s Q3 = Q(4);
            byte[] bArr3 = Q3.a;
            int i11 = Q3.f8276c;
            bArr3[i11] = (byte) ((i5 >> 18) | 240);
            bArr3[i11 + 1] = (byte) (((i5 >> 12) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            bArr3[i11 + 2] = (byte) (((i5 >> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            bArr3[i11 + 3] = (byte) ((i5 & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            Q3.f8276c = i11 + 4;
            this.f16114e += 4;
            return;
        }
        StringBuilder sb2 = new StringBuilder("Unexpected code point: 0x");
        if (i5 != 0) {
            char[] cArr = b.a;
            char[] cArr2 = {cArr[(i5 >> 28) & 15], cArr[(i5 >> 24) & 15], cArr[(i5 >> 20) & 15], cArr[(i5 >> 16) & 15], cArr[(i5 >> 12) & 15], cArr[(i5 >> 8) & 15], cArr[(i5 >> 4) & 15], cArr[i5 & 15]};
            int i12 = 0;
            while (i12 < 8 && cArr2[i12] == '0') {
                i12++;
            }
            str = x.f(cArr2, i12, 8);
        } else {
            str = "0";
        }
        sb2.append(str);
        throw new IllegalArgumentException(sb2.toString());
    }

    public final byte o(long j) {
        y.f(this.f16114e, j, 1L);
        s sVar = this.f16113d;
        if (sVar == null) {
            Intrinsics.checkNotNull(null);
            throw null;
        }
        long j5 = this.f16114e;
        if (j5 - j < j) {
            while (j5 > j) {
                sVar = sVar.f8280g;
                Intrinsics.checkNotNull(sVar);
                j5 -= sVar.f8276c - sVar.f8275b;
            }
            Intrinsics.checkNotNull(sVar);
            return sVar.a[(int) ((sVar.f8275b + j) - j5)];
        }
        long j7 = 0;
        while (true) {
            long j10 = (sVar.f8276c - sVar.f8275b) + j7;
            if (j10 > j) {
                Intrinsics.checkNotNull(sVar);
                return sVar.a[(int) ((sVar.f8275b + j) - j7)];
            }
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
            j7 = j10;
        }
    }

    @Override // okio.BufferedSink
    public final BufferedSink p() {
        return this;
    }

    public final long q(byte b10, long j, long j5) {
        s sVar;
        long j7 = j;
        long j10 = j5;
        long j11 = 0;
        if (0 > j7 || j7 > j10) {
            throw new IllegalArgumentException(("size=" + this.f16114e + " fromIndex=" + j7 + " toIndex=" + j10).toString());
        }
        long j12 = this.f16114e;
        if (j10 > j12) {
            j10 = j12;
        }
        long j13 = -1;
        if (j7 == j10 || (sVar = this.f16113d) == null) {
            return -1L;
        }
        if (j12 - j7 < j7) {
            while (j12 > j7) {
                sVar = sVar.f8280g;
                Intrinsics.checkNotNull(sVar);
                j12 -= sVar.f8276c - sVar.f8275b;
            }
            while (j12 < j10) {
                byte[] bArr = sVar.a;
                long j14 = j13;
                int min = (int) Math.min(sVar.f8276c, (sVar.f8275b + j10) - j12);
                for (int i5 = (int) ((sVar.f8275b + j7) - j12); i5 < min; i5++) {
                    if (bArr[i5] == b10) {
                        return (i5 - sVar.f8275b) + j12;
                    }
                }
                j12 += sVar.f8276c - sVar.f8275b;
                sVar = sVar.f8279f;
                Intrinsics.checkNotNull(sVar);
                j13 = j14;
                j7 = j12;
            }
            return j13;
        }
        while (true) {
            long j15 = (sVar.f8276c - sVar.f8275b) + j11;
            if (j15 > j7) {
                break;
            }
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
            j11 = j15;
        }
        while (j11 < j10) {
            byte[] bArr2 = sVar.a;
            int min2 = (int) Math.min(sVar.f8276c, (sVar.f8275b + j10) - j11);
            for (int i6 = (int) ((sVar.f8275b + j7) - j11); i6 < min2; i6++) {
                if (bArr2[i6] == b10) {
                    return (i6 - sVar.f8275b) + j11;
                }
            }
            j11 += sVar.f8276c - sVar.f8275b;
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
            j7 = j11;
        }
        return -1L;
    }

    public final long r(ByteString bytes, long j) {
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        if (bytes.c() <= 0) {
            throw new IllegalArgumentException("bytes is empty");
        }
        long j5 = 0;
        if (j < 0) {
            throw new IllegalArgumentException(d.j(j, "fromIndex < 0: ").toString());
        }
        s sVar = this.f16113d;
        if (sVar == null) {
            return -1L;
        }
        long j7 = this.f16114e;
        if (j7 - j < j) {
            while (j7 > j) {
                sVar = sVar.f8280g;
                Intrinsics.checkNotNull(sVar);
                j7 -= sVar.f8276c - sVar.f8275b;
            }
            byte[] e9 = bytes.e();
            byte b10 = e9[0];
            int c6 = bytes.c();
            long j10 = (this.f16114e - c6) + 1;
            while (j7 < j10) {
                byte[] bArr = sVar.a;
                int min = (int) Math.min(sVar.f8276c, (sVar.f8275b + j10) - j7);
                for (int i5 = (int) ((sVar.f8275b + j) - j7); i5 < min; i5++) {
                    if (bArr[i5] == b10 && ft.a.a(sVar, i5 + 1, e9, c6)) {
                        return (i5 - sVar.f8275b) + j7;
                    }
                }
                j7 += sVar.f8276c - sVar.f8275b;
                sVar = sVar.f8279f;
                Intrinsics.checkNotNull(sVar);
                j = j7;
            }
            return -1L;
        }
        while (true) {
            long j11 = (sVar.f8276c - sVar.f8275b) + j5;
            if (j11 > j) {
                break;
            }
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
            j5 = j11;
        }
        byte[] e10 = bytes.e();
        byte b11 = e10[0];
        int c8 = bytes.c();
        long j12 = (this.f16114e - c8) + 1;
        while (j5 < j12) {
            byte[] bArr2 = sVar.a;
            int min2 = (int) Math.min(sVar.f8276c, (sVar.f8275b + j12) - j5);
            for (int i6 = (int) ((sVar.f8275b + j) - j5); i6 < min2; i6++) {
                if (bArr2[i6] == b11 && ft.a.a(sVar, i6 + 1, e10, c8)) {
                    return (i6 - sVar.f8275b) + j5;
                }
            }
            j5 += sVar.f8276c - sVar.f8275b;
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
            j = j5;
        }
        return -1L;
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j < 0) {
            throw new IllegalArgumentException(d.j(j, "byteCount < 0: ").toString());
        }
        long j5 = this.f16114e;
        if (j5 == 0) {
            return -1L;
        }
        if (j > j5) {
            j = j5;
        }
        sink.H(this, j);
        return j;
    }

    @Override // okio.BufferedSource
    public final byte readByte() {
        if (this.f16114e == 0) {
            throw new EOFException();
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        int i5 = sVar.f8275b;
        int i6 = sVar.f8276c;
        int i10 = i5 + 1;
        byte b10 = sVar.a[i5];
        this.f16114e--;
        if (i10 != i6) {
            sVar.f8275b = i10;
            return b10;
        }
        this.f16113d = sVar.a();
        t.a(sVar);
        return b10;
    }

    @Override // okio.BufferedSource
    public final void readFully(byte[] sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        int i5 = 0;
        while (i5 < sink.length) {
            int read = read(sink, i5, sink.length - i5);
            if (read == -1) {
                throw new EOFException();
            }
            i5 += read;
        }
    }

    @Override // okio.BufferedSource
    public final int readInt() {
        if (this.f16114e < 4) {
            throw new EOFException();
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        int i5 = sVar.f8275b;
        int i6 = sVar.f8276c;
        if (i6 - i5 < 4) {
            return ((readByte() & 255) << 24) | ((readByte() & 255) << 16) | ((readByte() & 255) << 8) | (readByte() & 255);
        }
        byte[] bArr = sVar.a;
        int i10 = i5 + 3;
        int i11 = ((bArr[i5 + 1] & 255) << 16) | ((bArr[i5] & 255) << 24) | ((bArr[i5 + 2] & 255) << 8);
        int i12 = i5 + 4;
        int i13 = (bArr[i10] & 255) | i11;
        this.f16114e -= 4;
        if (i12 != i6) {
            sVar.f8275b = i12;
            return i13;
        }
        this.f16113d = sVar.a();
        t.a(sVar);
        return i13;
    }

    @Override // okio.BufferedSource
    public final long readLong() {
        if (this.f16114e < 8) {
            throw new EOFException();
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        int i5 = sVar.f8275b;
        int i6 = sVar.f8276c;
        if (i6 - i5 < 8) {
            return ((readInt() & 4294967295L) << 32) | (4294967295L & readInt());
        }
        byte[] bArr = sVar.a;
        int i10 = i5 + 7;
        long j = ((bArr[i5] & 255) << 56) | ((bArr[i5 + 1] & 255) << 48) | ((bArr[i5 + 2] & 255) << 40) | ((bArr[i5 + 3] & 255) << 32) | ((bArr[i5 + 4] & 255) << 24) | ((bArr[i5 + 5] & 255) << 16) | ((bArr[i5 + 6] & 255) << 8);
        int i11 = i5 + 8;
        long j5 = j | (bArr[i10] & 255);
        this.f16114e -= 8;
        if (i11 != i6) {
            sVar.f8275b = i11;
            return j5;
        }
        this.f16113d = sVar.a();
        t.a(sVar);
        return j5;
    }

    @Override // okio.BufferedSource
    public final short readShort() {
        if (this.f16114e < 2) {
            throw new EOFException();
        }
        s sVar = this.f16113d;
        Intrinsics.checkNotNull(sVar);
        int i5 = sVar.f8275b;
        int i6 = sVar.f8276c;
        if (i6 - i5 < 2) {
            return (short) (((readByte() & 255) << 8) | (readByte() & 255));
        }
        byte[] bArr = sVar.a;
        int i10 = i5 + 1;
        int i11 = (bArr[i5] & 255) << 8;
        int i12 = i5 + 2;
        int i13 = (bArr[i10] & 255) | i11;
        this.f16114e -= 2;
        if (i12 == i6) {
            this.f16113d = sVar.a();
            t.a(sVar);
        } else {
            sVar.f8275b = i12;
        }
        return (short) i13;
    }

    @Override // okio.BufferedSource
    public final void skip(long j) {
        while (j > 0) {
            s sVar = this.f16113d;
            if (sVar == null) {
                throw new EOFException();
            }
            int min = (int) Math.min(j, sVar.f8276c - sVar.f8275b);
            long j5 = min;
            this.f16114e -= j5;
            j -= j5;
            int i5 = sVar.f8275b + min;
            sVar.f8275b = i5;
            if (i5 == sVar.f8276c) {
                this.f16113d = sVar.a();
                t.a(sVar);
            }
        }
    }

    public final et.e t(et.e unsafeCursor) {
        Intrinsics.checkNotNullParameter(unsafeCursor, "unsafeCursor");
        byte[] bArr = ft.a.a;
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(unsafeCursor, "unsafeCursor");
        Intrinsics.checkNotNullParameter(unsafeCursor, "unsafeCursor");
        if (unsafeCursor == y.a) {
            unsafeCursor = new et.e();
        }
        if (unsafeCursor.f8235d != null) {
            throw new IllegalStateException("already attached to a buffer");
        }
        unsafeCursor.f8235d = this;
        unsafeCursor.f8236e = true;
        return unsafeCursor;
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return Timeout.f16119d;
    }

    public final String toString() {
        long j = this.f16114e;
        if (j <= 2147483647L) {
            return P((int) j).toString();
        }
        throw new IllegalStateException(("size > Int.MAX_VALUE: " + this.f16114e).toString());
    }

    @Override // okio.BufferedSource
    public final byte[] v() {
        return A(this.f16114e);
    }

    @Override // okio.BufferedSource
    public final void w(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        long j5 = this.f16114e;
        if (j5 >= j) {
            sink.H(this, j);
        } else {
            sink.H(this, j5);
            throw new EOFException();
        }
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink write(byte[] bArr) {
        m1301write(bArr);
        return this;
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink writeByte(int i5) {
        U(i5);
        return this;
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink writeInt(int i5) {
        b0(i5);
        return this;
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink writeShort(int i5) {
        d0(i5);
        return this;
    }

    @Override // okio.BufferedSource
    public final String y(long j) {
        if (j < 0) {
            throw new IllegalArgumentException(d.j(j, "limit < 0: ").toString());
        }
        long j5 = LongCompanionObject.MAX_VALUE;
        if (j != LongCompanionObject.MAX_VALUE) {
            j5 = j + 1;
        }
        long j7 = j5;
        byte b10 = (byte) 10;
        long q5 = q(b10, 0L, j7);
        if (q5 != -1) {
            return ft.a.b(this, q5);
        }
        if (j7 < this.f16114e && o(j7 - 1) == ((byte) 13) && o(j7) == b10) {
            return ft.a.b(this, j7);
        }
        Buffer buffer = new Buffer();
        g(buffer, 0L, Math.min(32, this.f16114e));
        throw new EOFException("\\n not found: limit=" + Math.min(this.f16114e, j) + " content=" + buffer.m(buffer.f16114e).d() + (char) 8230);
    }

    @Override // okio.BufferedSink
    public final /* bridge */ /* synthetic */ BufferedSink write(byte[] bArr, int i5, int i6) {
        m1302write(bArr, i5, i6);
        return this;
    }

    @Override // java.nio.channels.WritableByteChannel
    public final int write(ByteBuffer source) {
        Intrinsics.checkNotNullParameter(source, "source");
        int remaining = source.remaining();
        int i5 = remaining;
        while (i5 > 0) {
            s Q = Q(1);
            int min = Math.min(i5, 8192 - Q.f8276c);
            source.get(Q.a, Q.f8276c, min);
            i5 -= min;
            Q.f8276c += min;
        }
        this.f16114e += remaining;
        return remaining;
    }

    /* renamed from: write, reason: collision with other method in class */
    public final void m1301write(byte[] source) {
        Intrinsics.checkNotNullParameter(source, "source");
        m1302write(source, 0, source.length);
    }

    @Override // java.nio.channels.ReadableByteChannel
    public final int read(ByteBuffer sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        s sVar = this.f16113d;
        if (sVar == null) {
            return -1;
        }
        int min = Math.min(sink.remaining(), sVar.f8276c - sVar.f8275b);
        sink.put(sVar.a, sVar.f8275b, min);
        int i5 = sVar.f8275b + min;
        sVar.f8275b = i5;
        this.f16114e -= min;
        if (i5 == sVar.f8276c) {
            this.f16113d = sVar.a();
            t.a(sVar);
        }
        return min;
    }

    /* renamed from: write, reason: collision with other method in class */
    public final void m1302write(byte[] source, int i5, int i6) {
        Intrinsics.checkNotNullParameter(source, "source");
        long j = i6;
        y.f(source.length, i5, j);
        int i10 = i6 + i5;
        while (i5 < i10) {
            s Q = Q(1);
            int min = Math.min(i10 - i5, 8192 - Q.f8276c);
            int i11 = i5 + min;
            u.c(Q.f8276c, i5, i11, source, Q.a);
            Q.f8276c += min;
            i5 = i11;
        }
        this.f16114e += j;
    }

    public final int read(byte[] sink, int i5, int i6) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        y.f(sink.length, i5, i6);
        s sVar = this.f16113d;
        if (sVar == null) {
            return -1;
        }
        int min = Math.min(i6, sVar.f8276c - sVar.f8275b);
        byte[] bArr = sVar.a;
        int i10 = sVar.f8275b;
        u.c(i5, i10, i10 + min, bArr, sink);
        int i11 = sVar.f8275b + min;
        sVar.f8275b = i11;
        this.f16114e -= min;
        if (i11 == sVar.f8276c) {
            this.f16113d = sVar.a();
            t.a(sVar);
        }
        return min;
    }
}
