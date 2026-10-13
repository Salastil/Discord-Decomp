package et;

import java.io.Closeable;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;

/* loaded from: classes.dex */
public final class e implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public Buffer f8235d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f8236e;

    /* renamed from: i, reason: collision with root package name */
    public s f8237i;

    /* renamed from: w, reason: collision with root package name */
    public byte[] f8239w;

    /* renamed from: v, reason: collision with root package name */
    public long f8238v = -1;

    /* renamed from: x, reason: collision with root package name */
    public int f8240x = -1;

    /* renamed from: y, reason: collision with root package name */
    public int f8241y = -1;

    public final void c(long j) {
        Buffer buffer = this.f8235d;
        if (buffer == null) {
            throw new IllegalStateException("not attached to a buffer");
        }
        if (!this.f8236e) {
            throw new IllegalStateException("resizeBuffer() only permitted for read/write buffers");
        }
        long j5 = buffer.f16114e;
        if (j <= j5) {
            if (j < 0) {
                throw new IllegalArgumentException(k0.d.j(j, "newSize < 0: ").toString());
            }
            long j7 = j5 - j;
            while (true) {
                if (j7 <= 0) {
                    break;
                }
                s sVar = buffer.f16113d;
                Intrinsics.checkNotNull(sVar);
                s sVar2 = sVar.f8280g;
                Intrinsics.checkNotNull(sVar2);
                int i5 = sVar2.f8276c;
                long j10 = i5 - sVar2.f8275b;
                if (j10 > j7) {
                    sVar2.f8276c = i5 - ((int) j7);
                    break;
                } else {
                    buffer.f16113d = sVar2.a();
                    t.a(sVar2);
                    j7 -= j10;
                }
            }
            this.f8237i = null;
            this.f8238v = j;
            this.f8239w = null;
            this.f8240x = -1;
            this.f8241y = -1;
        } else if (j > j5) {
            long j11 = j - j5;
            int i6 = 1;
            boolean z5 = true;
            for (long j12 = 0; j11 > j12; j12 = 0) {
                s Q = buffer.Q(i6);
                int min = (int) Math.min(j11, 8192 - Q.f8276c);
                int i10 = Q.f8276c + min;
                Q.f8276c = i10;
                j11 -= min;
                if (z5) {
                    this.f8237i = Q;
                    this.f8238v = j5;
                    this.f8239w = Q.a;
                    this.f8240x = i10 - min;
                    this.f8241y = i10;
                    z5 = false;
                }
                i6 = 1;
            }
        }
        buffer.f16114e = j;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f8235d == null) {
            throw new IllegalStateException("not attached to a buffer");
        }
        this.f8235d = null;
        this.f8237i = null;
        this.f8238v = -1L;
        this.f8239w = null;
        this.f8240x = -1;
        this.f8241y = -1;
    }

    public final int f(long j) {
        s sVar;
        Buffer buffer = this.f8235d;
        if (buffer == null) {
            throw new IllegalStateException("not attached to a buffer");
        }
        if (j >= -1) {
            long j5 = buffer.f16114e;
            if (j <= j5) {
                if (j == -1 || j == j5) {
                    this.f8237i = null;
                    this.f8238v = j;
                    this.f8239w = null;
                    this.f8240x = -1;
                    this.f8241y = -1;
                    return -1;
                }
                s sVar2 = buffer.f16113d;
                s sVar3 = this.f8237i;
                long j7 = 0;
                if (sVar3 != null) {
                    long j10 = this.f8238v;
                    int i5 = this.f8240x;
                    Intrinsics.checkNotNull(sVar3);
                    long j11 = j10 - (i5 - sVar3.f8275b);
                    if (j11 > j) {
                        sVar = sVar2;
                        sVar2 = this.f8237i;
                        j5 = j11;
                    } else {
                        sVar = this.f8237i;
                        j7 = j11;
                    }
                } else {
                    sVar = sVar2;
                }
                if (j5 - j > j - j7) {
                    while (true) {
                        Intrinsics.checkNotNull(sVar);
                        long j12 = (sVar.f8276c - sVar.f8275b) + j7;
                        if (j < j12) {
                            break;
                        }
                        sVar = sVar.f8279f;
                        j7 = j12;
                    }
                } else {
                    while (j5 > j) {
                        Intrinsics.checkNotNull(sVar2);
                        sVar2 = sVar2.f8280g;
                        Intrinsics.checkNotNull(sVar2);
                        j5 -= sVar2.f8276c - sVar2.f8275b;
                    }
                    sVar = sVar2;
                    j7 = j5;
                }
                if (this.f8236e) {
                    Intrinsics.checkNotNull(sVar);
                    if (sVar.f8277d) {
                        byte[] bArr = sVar.a;
                        byte[] copyOf = Arrays.copyOf(bArr, bArr.length);
                        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, size)");
                        s sVar4 = new s(copyOf, sVar.f8275b, sVar.f8276c, false, true);
                        if (buffer.f16113d == sVar) {
                            buffer.f16113d = sVar4;
                        }
                        sVar.b(sVar4);
                        s sVar5 = sVar4.f8280g;
                        Intrinsics.checkNotNull(sVar5);
                        sVar5.a();
                        sVar = sVar4;
                    }
                }
                this.f8237i = sVar;
                this.f8238v = j;
                Intrinsics.checkNotNull(sVar);
                this.f8239w = sVar.a;
                int i6 = sVar.f8275b + ((int) (j - j7));
                this.f8240x = i6;
                int i10 = sVar.f8276c;
                this.f8241y = i10;
                return i10 - i6;
            }
        }
        StringBuilder n6 = k0.d.n(j, "offset=", " > size=");
        n6.append(buffer.f16114e);
        throw new ArrayIndexOutOfBoundsException(n6.toString());
    }
}
