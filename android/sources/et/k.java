package et;

import java.io.EOFException;
import java.io.IOException;
import java.util.Arrays;
import java.util.zip.CRC32;
import java.util.zip.Inflater;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import okio.Buffer;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public final class k implements Source {

    /* renamed from: d, reason: collision with root package name */
    public byte f8250d;

    /* renamed from: e, reason: collision with root package name */
    public final r f8251e;

    /* renamed from: i, reason: collision with root package name */
    public final Inflater f8252i;

    /* renamed from: v, reason: collision with root package name */
    public final m f8253v;

    /* renamed from: w, reason: collision with root package name */
    public final CRC32 f8254w;

    public k(Source source) {
        Intrinsics.checkNotNullParameter(source, "source");
        r rVar = new r(source);
        this.f8251e = rVar;
        Inflater inflater = new Inflater(true);
        this.f8252i = inflater;
        this.f8253v = new m(rVar, inflater);
        this.f8254w = new CRC32();
    }

    public static void c(int i5, int i6, String str) {
        if (i6 == i5) {
            return;
        }
        String format = String.format("%s: actual 0x%08x != expected 0x%08x", Arrays.copyOf(new Object[]{str, Integer.valueOf(i6), Integer.valueOf(i5)}, 3));
        Intrinsics.checkNotNullExpressionValue(format, "format(this, *args)");
        throw new IOException(format);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f8253v.close();
    }

    public final void f(Buffer buffer, long j, long j5) {
        s sVar = buffer.f16113d;
        Intrinsics.checkNotNull(sVar);
        while (true) {
            int i5 = sVar.f8276c;
            int i6 = sVar.f8275b;
            if (j < i5 - i6) {
                break;
            }
            j -= i5 - i6;
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
        }
        while (j5 > 0) {
            int min = (int) Math.min(sVar.f8276c - r6, j5);
            this.f8254w.update(sVar.a, (int) (sVar.f8275b + j), min);
            j5 -= min;
            sVar = sVar.f8279f;
            Intrinsics.checkNotNull(sVar);
            j = 0;
        }
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        long j5;
        k kVar = this;
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j < 0) {
            throw new IllegalArgumentException(k0.d.j(j, "byteCount < 0: ").toString());
        }
        if (j == 0) {
            return 0L;
        }
        byte b10 = kVar.f8250d;
        CRC32 crc32 = kVar.f8254w;
        r rVar = kVar.f8251e;
        if (b10 == 0) {
            rVar.e0(10L);
            Buffer buffer = rVar.f8273e;
            byte o6 = buffer.o(3L);
            boolean z5 = ((o6 >> 1) & 1) == 1;
            if (z5) {
                kVar.f(buffer, 0L, 10L);
            }
            c(8075, rVar.readShort(), "ID1ID2");
            rVar.skip(8L);
            if (((o6 >> 2) & 1) == 1) {
                rVar.e0(2L);
                if (z5) {
                    f(buffer, 0L, 2L);
                }
                short readShort = buffer.readShort();
                long j7 = (short) (((readShort & 255) << 8) | ((readShort & 65280) >>> 8));
                rVar.e0(j7);
                if (z5) {
                    f(buffer, 0L, j7);
                }
                rVar.skip(j7);
            }
            if (((o6 >> 3) & 1) == 1) {
                long f2 = rVar.f((byte) 0, 0L, LongCompanionObject.MAX_VALUE);
                if (f2 == -1) {
                    throw new EOFException();
                }
                if (z5) {
                    j5 = 2;
                    f(buffer, 0L, f2 + 1);
                } else {
                    j5 = 2;
                }
                rVar.skip(f2 + 1);
            } else {
                j5 = 2;
            }
            if (((o6 >> 4) & 1) == 1) {
                long j10 = j5;
                long f10 = rVar.f((byte) 0, 0L, LongCompanionObject.MAX_VALUE);
                if (f10 == -1) {
                    throw new EOFException();
                }
                if (z5) {
                    j5 = j10;
                    kVar = this;
                    kVar.f(buffer, 0L, f10 + 1);
                } else {
                    kVar = this;
                    j5 = j10;
                }
                rVar.skip(f10 + 1);
            } else {
                kVar = this;
            }
            if (z5) {
                rVar.e0(j5);
                short readShort2 = buffer.readShort();
                c((short) (((readShort2 & 255) << 8) | ((readShort2 & 65280) >>> 8)), (short) crc32.getValue(), "FHCRC");
                crc32.reset();
            }
            kVar.f8250d = (byte) 1;
        }
        if (kVar.f8250d == 1) {
            long j11 = sink.f16114e;
            long read = kVar.f8253v.read(sink, j);
            if (read != -1) {
                kVar.f(sink, j11, read);
                return read;
            }
            kVar.f8250d = (byte) 2;
        }
        if (kVar.f8250d == 2) {
            c(rVar.l(), (int) crc32.getValue(), "CRC");
            c(rVar.l(), (int) kVar.f8252i.getBytesWritten(), "ISIZE");
            kVar.f8250d = (byte) 3;
            if (!rVar.c()) {
                throw new IOException("gzip finished without exhausting source");
            }
        }
        return -1L;
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f8251e.f8272d.timeout();
    }
}
