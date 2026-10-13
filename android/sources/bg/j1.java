package bg;

import java.io.ByteArrayInputStream;
import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.util.ArrayDeque;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class j1 implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final ByteArrayInputStream f2956d;

    /* renamed from: e, reason: collision with root package name */
    public i1 f2957e;

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f2958i = new byte[8];

    /* renamed from: v, reason: collision with root package name */
    public final u4.c f2959v = new u4.c(5);

    public j1(ByteArrayInputStream byteArrayInputStream) {
        this.f2956d = byteArrayInputStream;
    }

    public final long c() {
        r(ByteCompanionObject.MIN_VALUE);
        q();
        long o6 = o();
        if (o6 < 0) {
            throw new UnsupportedOperationException("the maximum supported array length is 9223372036854775807");
        }
        if (o6 > 0) {
            ((ArrayDeque) this.f2959v.f18811d).push(Long.valueOf(o6));
        }
        return o6;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f2956d.close();
        this.f2959v.F();
    }

    public final long f() {
        boolean z5;
        i();
        byte b10 = this.f2957e.a;
        if (b10 == 0) {
            z5 = true;
        } else {
            if (b10 != 32) {
                throw new IllegalStateException(k0.d.i((this.f2957e.a >> 5) & 7, "expected major type 0 or 1 but found "));
            }
            z5 = false;
        }
        long o6 = o();
        if (o6 >= 0) {
            return z5 ? o6 : ~o6;
        }
        throw new UnsupportedOperationException("the maximum supported unsigned/negative integer is 9223372036854775807");
    }

    public final long g() {
        r((byte) -96);
        q();
        long o6 = o();
        if (o6 < 0 || o6 > 4611686018427387903L) {
            throw new UnsupportedOperationException("the maximum supported map length is 4611686018427387903L");
        }
        if (o6 > 0) {
            ((ArrayDeque) this.f2959v.f18811d).push(Long.valueOf(o6 + o6));
        }
        return o6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:52:0x0098, code lost:
    
        if (r0 != (-2)) goto L42;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final i1 i() {
        if (this.f2957e == null) {
            int read = this.f2956d.read();
            u4.c cVar = this.f2959v;
            if (read == -1) {
                cVar.F();
                return null;
            }
            i1 i1Var = new i1(read);
            this.f2957e = i1Var;
            long j = -2;
            byte b10 = i1Var.a;
            if (b10 != Byte.MIN_VALUE && b10 != -96 && b10 != -64) {
                if (b10 != -32) {
                    if (b10 != 0 && b10 != 32) {
                        if (b10 == 64) {
                            cVar.G(-1L);
                        } else {
                            if (b10 != 96) {
                                throw new IllegalStateException(k0.d.i((this.f2957e.a >> 5) & 7, "invalid major type: "));
                            }
                            cVar.G(-2L);
                        }
                        long H = cVar.H();
                        ArrayDeque arrayDeque = (ArrayDeque) cVar.f18811d;
                        if (H == 1) {
                            arrayDeque.pop();
                        } else if (H > 1) {
                            arrayDeque.pop();
                            arrayDeque.push(Long.valueOf(H - 1));
                        } else if (H == -4) {
                            arrayDeque.pop();
                            arrayDeque.push(-5L);
                        } else if (H == -5) {
                            arrayDeque.pop();
                            arrayDeque.push(-4L);
                        }
                    }
                } else if (i1Var.f2953b == 31) {
                    long H2 = cVar.H();
                    if (H2 >= 0) {
                        throw new IOException(k0.d.j(H2, "expected indefinite length scope but found "));
                    }
                    if (H2 == -5) {
                        throw new IOException("expected a value for dangling key in indefinite-length map");
                    }
                    ((ArrayDeque) cVar.f18811d).pop();
                }
            }
            long H3 = cVar.H();
            if (H3 == -1) {
                j = H3;
            }
            throw new IOException(k0.d.j(j, "expected non-string scope but found "));
        }
        return this.f2957e;
    }

    public final boolean l() {
        r((byte) -32);
        if (this.f2957e.f2953b > 24) {
            throw new IllegalStateException("expected simple value");
        }
        int o6 = (int) o();
        if (o6 == 20) {
            return false;
        }
        if (o6 == 21) {
            return true;
        }
        throw new IllegalStateException("expected FALSE or TRUE");
    }

    public final long o() {
        byte b10 = this.f2957e.f2953b;
        if (b10 < 24) {
            long j = b10;
            this.f2957e = null;
            return j;
        }
        if (b10 == 24) {
            int read = this.f2956d.read();
            if (read == -1) {
                throw new EOFException();
            }
            this.f2957e = null;
            return read & 255;
        }
        byte[] bArr = this.f2958i;
        if (b10 == 25) {
            t(bArr, 2);
            return ((bArr[0] & 255) << 8) | (bArr[1] & 255);
        }
        if (b10 == 26) {
            t(bArr, 4);
            return ((bArr[0] & 255) << 24) | ((bArr[1] & 255) << 16) | ((bArr[2] & 255) << 8) | (bArr[3] & 255);
        }
        if (b10 != 27) {
            i1 i1Var = this.f2957e;
            throw new IOException(a3.e.f(i1Var.f2953b, (i1Var.a >> 5) & 7, "invalid additional information ", " for major type "));
        }
        t(bArr, 8);
        return ((bArr[0] & 255) << 56) | ((bArr[1] & 255) << 48) | ((bArr[2] & 255) << 40) | ((bArr[3] & 255) << 32) | ((bArr[4] & 255) << 24) | ((bArr[5] & 255) << 16) | ((bArr[6] & 255) << 8) | (bArr[7] & 255);
    }

    public final void q() {
        i();
        if (this.f2957e.f2953b == 31) {
            throw new IllegalStateException(k0.d.i(this.f2957e.f2953b, "expected definite length but found "));
        }
    }

    public final void r(byte b10) {
        i();
        if (this.f2957e.a != b10) {
            throw new IllegalStateException(a3.e.f((b10 >> 5) & 7, (this.f2957e.a >> 5) & 7, "expected major type ", " but found "));
        }
    }

    public final void t(byte[] bArr, int i5) {
        int i6 = 0;
        while (i6 != i5) {
            int read = this.f2956d.read(bArr, i6, i5 - i6);
            if (read == -1) {
                throw new EOFException();
            }
            i6 += read;
        }
        this.f2957e = null;
    }

    public final byte[] x() {
        q();
        long o6 = o();
        if (o6 < 0 || o6 > 2147483647L) {
            throw new UnsupportedOperationException("the maximum supported byte/text string length is 2147483647 bytes");
        }
        if (this.f2956d.available() < o6) {
            throw new EOFException();
        }
        int i5 = (int) o6;
        byte[] bArr = new byte[i5];
        t(bArr, i5);
        return bArr;
    }
}
