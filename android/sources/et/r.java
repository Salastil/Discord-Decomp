package et;

import java.io.EOFException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.text.CharsKt;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;
import okio.Sink;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public final class r implements BufferedSource {

    /* renamed from: d, reason: collision with root package name */
    public final Source f8272d;

    /* renamed from: e, reason: collision with root package name */
    public final Buffer f8273e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f8274i;

    public r(Source source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.f8272d = source;
        this.f8273e = new Buffer();
    }

    @Override // okio.BufferedSource
    public final String E(Charset charset) {
        Intrinsics.checkNotNullParameter(charset, "charset");
        Source source = this.f8272d;
        Buffer buffer = this.f8273e;
        buffer.J(source);
        return buffer.E(charset);
    }

    @Override // okio.BufferedSource
    public final ByteString L() {
        Source source = this.f8272d;
        Buffer buffer = this.f8273e;
        buffer.J(source);
        return buffer.m(buffer.f16114e);
    }

    @Override // okio.BufferedSource
    public final boolean N(long j) {
        Buffer buffer;
        if (j < 0) {
            throw new IllegalArgumentException(k0.d.j(j, "byteCount < 0: ").toString());
        }
        if (this.f8274i) {
            throw new IllegalStateException("closed");
        }
        do {
            buffer = this.f8273e;
            if (buffer.f16114e >= j) {
                return true;
            }
        } while (this.f8272d.read(buffer, 8192L) != -1);
        return false;
    }

    @Override // okio.BufferedSource
    public final String T() {
        return y(LongCompanionObject.MAX_VALUE);
    }

    @Override // okio.BufferedSource
    public final String W() {
        Source source = this.f8272d;
        Buffer buffer = this.f8273e;
        buffer.J(source);
        return buffer.W();
    }

    @Override // okio.BufferedSource
    public final int Y(o options) {
        Intrinsics.checkNotNullParameter(options, "options");
        if (this.f8274i) {
            throw new IllegalStateException("closed");
        }
        while (true) {
            Buffer buffer = this.f8273e;
            int c6 = ft.a.c(buffer, options, true);
            if (c6 != -2) {
                if (c6 != -1) {
                    buffer.skip(options.f8261e[c6].c());
                    return c6;
                }
            } else if (this.f8272d.read(buffer, 8192L) == -1) {
                break;
            }
        }
        return -1;
    }

    public final boolean c() {
        if (this.f8274i) {
            throw new IllegalStateException("closed");
        }
        Buffer buffer = this.f8273e;
        return buffer.l() && this.f8272d.read(buffer, 8192L) == -1;
    }

    @Override // okio.BufferedSource
    public final long c0(Sink sink) {
        Buffer buffer;
        Intrinsics.checkNotNullParameter(sink, "sink");
        long j = 0;
        while (true) {
            Source source = this.f8272d;
            buffer = this.f8273e;
            if (source.read(buffer, 8192L) == -1) {
                break;
            }
            long f2 = buffer.f();
            if (f2 > 0) {
                j += f2;
                sink.H(buffer, f2);
            }
        }
        long j5 = buffer.f16114e;
        if (j5 <= 0) {
            return j;
        }
        long j7 = j + j5;
        sink.H(buffer, j5);
        return j7;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable, java.nio.channels.Channel
    public final void close() {
        if (this.f8274i) {
            return;
        }
        this.f8274i = true;
        this.f8272d.close();
        this.f8273e.c();
    }

    @Override // okio.BufferedSource
    public final void e0(long j) {
        if (!N(j)) {
            throw new EOFException();
        }
    }

    public final long f(byte b10, long j, long j5) {
        if (this.f8274i) {
            throw new IllegalStateException("closed");
        }
        if (0 > j5) {
            throw new IllegalArgumentException(k0.d.j(j5, "fromIndex=0 toIndex=").toString());
        }
        long j7 = 0;
        while (j7 < j5) {
            Buffer buffer = this.f8273e;
            byte b11 = b10;
            long j10 = j5;
            long q5 = buffer.q(b11, j7, j10);
            if (q5 == -1) {
                long j11 = buffer.f16114e;
                if (j11 >= j10 || this.f8272d.read(buffer, 8192L) == -1) {
                    break;
                }
                j7 = Math.max(j7, j11);
                b10 = b11;
                j5 = j10;
            } else {
                return q5;
            }
        }
        return -1L;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x015b  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x015a A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long g(ByteString targetBytes) {
        int i5;
        int i6;
        long j;
        int i10;
        int i11;
        Intrinsics.checkNotNullParameter(targetBytes, "targetBytes");
        Intrinsics.checkNotNullParameter(targetBytes, "targetBytes");
        if (this.f8274i) {
            throw new IllegalStateException("closed");
        }
        long j5 = 0;
        while (true) {
            Buffer buffer = this.f8273e;
            buffer.getClass();
            Intrinsics.checkNotNullParameter(targetBytes, "targetBytes");
            long j7 = 0;
            if (j5 < 0) {
                throw new IllegalArgumentException(k0.d.j(j5, "fromIndex < 0: ").toString());
            }
            s sVar = buffer.f16113d;
            if (sVar != null) {
                long j10 = buffer.f16114e;
                int i12 = 0;
                if (j10 - j5 < j5) {
                    while (j10 > j5) {
                        sVar = sVar.f8280g;
                        Intrinsics.checkNotNull(sVar);
                        j10 -= sVar.f8276c - sVar.f8275b;
                    }
                    if (targetBytes.c() == 2) {
                        byte f2 = targetBytes.f(0);
                        byte f10 = targetBytes.f(1);
                        long j11 = j5;
                        while (j10 < buffer.f16114e) {
                            byte[] bArr = sVar.a;
                            i10 = (int) ((sVar.f8275b + j11) - j10);
                            int i13 = sVar.f8276c;
                            while (i10 < i13) {
                                byte b10 = bArr[i10];
                                if (b10 == f2 || b10 == f10) {
                                    i11 = sVar.f8275b;
                                    j = (i10 - i11) + j10;
                                    break;
                                }
                                i10++;
                            }
                            j11 = j10 + (sVar.f8276c - sVar.f8275b);
                            sVar = sVar.f8279f;
                            Intrinsics.checkNotNull(sVar);
                            j10 = j11;
                        }
                    } else {
                        byte[] e9 = targetBytes.e();
                        long j12 = j5;
                        while (j10 < buffer.f16114e) {
                            byte[] bArr2 = sVar.a;
                            i10 = (int) ((sVar.f8275b + j12) - j10);
                            int i14 = sVar.f8276c;
                            while (i10 < i14) {
                                byte b11 = bArr2[i10];
                                int length = e9.length;
                                for (int i15 = i12; i15 < length; i15++) {
                                    if (b11 == e9[i15]) {
                                        i11 = sVar.f8275b;
                                        j = (i10 - i11) + j10;
                                        break;
                                    }
                                }
                                i10++;
                                i12 = 0;
                            }
                            j12 = (sVar.f8276c - sVar.f8275b) + j10;
                            sVar = sVar.f8279f;
                            Intrinsics.checkNotNull(sVar);
                            j10 = j12;
                            i12 = 0;
                        }
                    }
                    if (j != -1) {
                        return j;
                    }
                    long j13 = buffer.f16114e;
                    if (this.f8272d.read(buffer, 8192L) == -1) {
                        return -1L;
                    }
                    j5 = Math.max(j5, j13);
                } else {
                    while (true) {
                        long j14 = (sVar.f8276c - sVar.f8275b) + j7;
                        if (j14 > j5) {
                            break;
                        }
                        sVar = sVar.f8279f;
                        Intrinsics.checkNotNull(sVar);
                        j7 = j14;
                    }
                    if (targetBytes.c() == 2) {
                        byte f11 = targetBytes.f(0);
                        byte f12 = targetBytes.f(1);
                        long j15 = j5;
                        while (j7 < buffer.f16114e) {
                            byte[] bArr3 = sVar.a;
                            i5 = (int) ((sVar.f8275b + j15) - j7);
                            int i16 = sVar.f8276c;
                            while (i5 < i16) {
                                byte b12 = bArr3[i5];
                                if (b12 == f11 || b12 == f12) {
                                    i6 = sVar.f8275b;
                                    j = (i5 - i6) + j7;
                                    break;
                                }
                                i5++;
                            }
                            j15 = (sVar.f8276c - sVar.f8275b) + j7;
                            sVar = sVar.f8279f;
                            Intrinsics.checkNotNull(sVar);
                            j7 = j15;
                        }
                    } else {
                        int i17 = 0;
                        byte[] e10 = targetBytes.e();
                        long j16 = j5;
                        while (j7 < buffer.f16114e) {
                            byte[] bArr4 = sVar.a;
                            i5 = (int) ((sVar.f8275b + j16) - j7);
                            int i18 = sVar.f8276c;
                            while (i5 < i18) {
                                byte b13 = bArr4[i5];
                                int length2 = e10.length;
                                for (int i19 = i17; i19 < length2; i19++) {
                                    if (b13 == e10[i19]) {
                                        i6 = sVar.f8275b;
                                        j = (i5 - i6) + j7;
                                        break;
                                    }
                                }
                                i5++;
                                i17 = 0;
                            }
                            j16 = (sVar.f8276c - sVar.f8275b) + j7;
                            sVar = sVar.f8279f;
                            Intrinsics.checkNotNull(sVar);
                            j7 = j16;
                            i17 = 0;
                        }
                    }
                    if (j != -1) {
                    }
                }
            }
            j = -1;
            if (j != -1) {
            }
        }
    }

    @Override // okio.BufferedSource
    public final Buffer h() {
        return this.f8273e;
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x002e, code lost:
    
        if (r5 == 0) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0031, code lost:
    
        r2 = new java.lang.StringBuilder("Expected a digit or '-' but was 0x");
        r3 = java.lang.Integer.toString(r9, kotlin.text.CharsKt.checkRadix(kotlin.text.CharsKt.checkRadix(16)));
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, "toString(this, checkRadix(radix))");
        r2.append(r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0058, code lost:
    
        throw new java.lang.NumberFormatException(r2.toString());
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x009d, code lost:
    
        r1 = new okio.Buffer();
        r1.V(r8);
        r1.U(r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00a8, code lost:
    
        if (r15 != false) goto L39;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00aa, code lost:
    
        r1.readByte();
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x00bc, code lost:
    
        throw new java.lang.NumberFormatException("Number too large: ".concat(r1.W()));
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long i() {
        int i5;
        int i6;
        Buffer buffer;
        long j;
        e0(1L);
        long j5 = 0;
        long j7 = 0;
        while (true) {
            long j10 = j7 + 1;
            boolean N = N(j10);
            i5 = 57;
            i6 = 48;
            buffer = this.f8273e;
            if (!N) {
                break;
            }
            byte o6 = buffer.o(j7);
            if ((o6 < ((byte) 48) || o6 > ((byte) 57)) && !(j7 == 0 && o6 == ((byte) 45))) {
                break;
            }
            j7 = j10;
        }
        if (buffer.f16114e == 0) {
            throw new EOFException();
        }
        long j11 = -7;
        long j12 = 0;
        int i10 = 0;
        boolean z5 = false;
        boolean z6 = false;
        loop1: while (true) {
            s sVar = buffer.f16113d;
            Intrinsics.checkNotNull(sVar);
            byte[] bArr = sVar.a;
            int i11 = sVar.f8275b;
            j = j5;
            int i12 = sVar.f8276c;
            while (i11 < i12) {
                byte b10 = bArr[i11];
                byte b11 = (byte) i6;
                if (b10 >= b11 && b10 <= ((byte) i5)) {
                    int i13 = b11 - b10;
                    if (j12 < -922337203685477580L || (j12 == -922337203685477580L && i13 < j11)) {
                        break loop1;
                    }
                    j12 = (j12 * 10) + i13;
                } else {
                    if (b10 != ((byte) 45) || i10 != 0) {
                        z6 = true;
                        break;
                    }
                    j11--;
                    z5 = true;
                }
                i11++;
                i10++;
                i5 = 57;
                i6 = 48;
            }
            if (i11 == i12) {
                buffer.f16113d = sVar.a();
                t.a(sVar);
            } else {
                sVar.f8275b = i11;
            }
            if (z6 || buffer.f16113d == null) {
                break;
            }
            j5 = j;
            i5 = 57;
            i6 = 48;
        }
        long j13 = buffer.f16114e - i10;
        buffer.f16114e = j13;
        if (i10 >= (z5 ? 2 : 1)) {
            return z5 ? j12 : -j12;
        }
        if (j13 == j) {
            throw new EOFException();
        }
        StringBuilder p3 = k0.d.p(z5 ? "Expected a digit" : "Expected a digit or '-'", " but was 0x");
        byte o7 = buffer.o(j);
        char[] cArr = ft.b.a;
        char[] cArr2 = {cArr[(o7 >> 4) & 15], cArr[o7 & 15]};
        Intrinsics.checkNotNullParameter(cArr2, "<this>");
        p3.append(new String(cArr2));
        throw new NumberFormatException(p3.toString());
    }

    @Override // okio.BufferedSource
    public final long i0() {
        Buffer buffer;
        byte o6;
        e0(1L);
        int i5 = 0;
        while (true) {
            int i6 = i5 + 1;
            boolean N = N(i6);
            buffer = this.f8273e;
            if (!N) {
                break;
            }
            o6 = buffer.o(i5);
            if ((o6 < ((byte) 48) || o6 > ((byte) 57)) && ((o6 < ((byte) 97) || o6 > ((byte) 102)) && (o6 < ((byte) 65) || o6 > ((byte) 70)))) {
                break;
            }
            i5 = i6;
        }
        if (i5 == 0) {
            StringBuilder sb2 = new StringBuilder("Expected leading [0-9a-fA-F] character but was 0x");
            String num = Integer.toString(o6, CharsKt.checkRadix(CharsKt.checkRadix(16)));
            Intrinsics.checkNotNullExpressionValue(num, "toString(this, checkRadix(radix))");
            sb2.append(num);
            throw new NumberFormatException(sb2.toString());
        }
        return buffer.i0();
    }

    @Override // java.nio.channels.Channel
    public final boolean isOpen() {
        return !this.f8274i;
    }

    @Override // okio.BufferedSource
    public final InputStream k0() {
        return new f(this, 1);
    }

    public final int l() {
        e0(4L);
        int readInt = this.f8273e.readInt();
        return ((readInt & 255) << 24) | (((-16777216) & readInt) >>> 24) | ((16711680 & readInt) >>> 8) | ((65280 & readInt) << 8);
    }

    @Override // okio.BufferedSource
    public final ByteString m(long j) {
        e0(j);
        return this.f8273e.m(j);
    }

    @Override // java.nio.channels.ReadableByteChannel
    public final int read(ByteBuffer sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        Buffer buffer = this.f8273e;
        if (buffer.f16114e == 0 && this.f8272d.read(buffer, 8192L) == -1) {
            return -1;
        }
        return buffer.read(sink);
    }

    @Override // okio.BufferedSource
    public final byte readByte() {
        e0(1L);
        return this.f8273e.readByte();
    }

    @Override // okio.BufferedSource
    public final void readFully(byte[] sink) {
        Buffer buffer = this.f8273e;
        Intrinsics.checkNotNullParameter(sink, "sink");
        try {
            e0(sink.length);
            buffer.readFully(sink);
        } catch (EOFException e9) {
            int i5 = 0;
            while (true) {
                long j = buffer.f16114e;
                if (j <= 0) {
                    throw e9;
                }
                int read = buffer.read(sink, i5, (int) j);
                if (read == -1) {
                    throw new AssertionError();
                }
                i5 += read;
            }
        }
    }

    @Override // okio.BufferedSource
    public final int readInt() {
        e0(4L);
        return this.f8273e.readInt();
    }

    @Override // okio.BufferedSource
    public final long readLong() {
        e0(8L);
        return this.f8273e.readLong();
    }

    @Override // okio.BufferedSource
    public final short readShort() {
        e0(2L);
        return this.f8273e.readShort();
    }

    @Override // okio.BufferedSource
    public final void skip(long j) {
        if (this.f8274i) {
            throw new IllegalStateException("closed");
        }
        while (j > 0) {
            Buffer buffer = this.f8273e;
            if (buffer.f16114e == 0 && this.f8272d.read(buffer, 8192L) == -1) {
                throw new EOFException();
            }
            long min = Math.min(j, buffer.f16114e);
            buffer.skip(min);
            j -= min;
        }
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f8272d.timeout();
    }

    public final String toString() {
        return "buffer(" + this.f8272d + ')';
    }

    @Override // okio.BufferedSource
    public final byte[] v() {
        Source source = this.f8272d;
        Buffer buffer = this.f8273e;
        buffer.J(source);
        return buffer.A(buffer.f16114e);
    }

    @Override // okio.BufferedSource
    public final void w(Buffer sink, long j) {
        Buffer buffer = this.f8273e;
        Intrinsics.checkNotNullParameter(sink, "sink");
        try {
            e0(j);
            buffer.w(sink, j);
        } catch (EOFException e9) {
            sink.J(buffer);
            throw e9;
        }
    }

    @Override // okio.BufferedSource
    public final String y(long j) {
        if (j < 0) {
            throw new IllegalArgumentException(k0.d.j(j, "limit < 0: ").toString());
        }
        long j5 = j == LongCompanionObject.MAX_VALUE ? Long.MAX_VALUE : j + 1;
        byte b10 = (byte) 10;
        long f2 = f(b10, 0L, j5);
        Buffer buffer = this.f8273e;
        if (f2 != -1) {
            return ft.a.b(buffer, f2);
        }
        if (j5 < LongCompanionObject.MAX_VALUE && N(j5) && buffer.o(j5 - 1) == ((byte) 13) && N(j5 + 1) && buffer.o(j5) == b10) {
            return ft.a.b(buffer, j5);
        }
        Buffer buffer2 = new Buffer();
        buffer.g(buffer2, 0L, Math.min(32, buffer.f16114e));
        throw new EOFException("\\n not found: limit=" + Math.min(buffer.f16114e, j) + " content=" + buffer2.m(buffer2.f16114e).d() + (char) 8230);
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j >= 0) {
            if (!this.f8274i) {
                Buffer buffer = this.f8273e;
                if (buffer.f16114e == 0 && this.f8272d.read(buffer, 8192L) == -1) {
                    return -1L;
                }
                return buffer.read(sink, Math.min(j, buffer.f16114e));
            }
            throw new IllegalStateException("closed");
        }
        throw new IllegalArgumentException(k0.d.j(j, "byteCount < 0: ").toString());
    }
}
