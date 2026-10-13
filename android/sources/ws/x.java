package ws;

import java.io.Closeable;
import java.io.IOException;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;

/* loaded from: classes3.dex */
public final class x implements Closeable {

    /* renamed from: x, reason: collision with root package name */
    public static final Logger f20158x = Logger.getLogger(g.class.getName());

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSink f20159d;

    /* renamed from: e, reason: collision with root package name */
    public final Buffer f20160e;

    /* renamed from: i, reason: collision with root package name */
    public int f20161i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f20162v;

    /* renamed from: w, reason: collision with root package name */
    public final e f20163w;

    public x(BufferedSink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        this.f20159d = sink;
        Buffer buffer = new Buffer();
        this.f20160e = buffer;
        this.f20161i = 16384;
        this.f20163w = new e(buffer);
    }

    public final synchronized void c(a0 peerSettings) {
        try {
            Intrinsics.checkNotNullParameter(peerSettings, "peerSettings");
            if (this.f20162v) {
                throw new IOException("closed");
            }
            int i5 = this.f20161i;
            int i6 = peerSettings.a;
            if ((i6 & 32) != 0) {
                i5 = peerSettings.f20058b[5];
            }
            this.f20161i = i5;
            if (((i6 & 2) != 0 ? peerSettings.f20058b[1] : -1) != -1) {
                e eVar = this.f20163w;
                int i10 = (i6 & 2) != 0 ? peerSettings.f20058b[1] : -1;
                eVar.getClass();
                int min = Math.min(i10, 16384);
                int i11 = eVar.f20083d;
                if (i11 != min) {
                    if (min < i11) {
                        eVar.f20081b = Math.min(eVar.f20081b, min);
                    }
                    eVar.f20082c = true;
                    eVar.f20083d = min;
                    int i12 = eVar.f20087h;
                    if (min < i12) {
                        if (min == 0) {
                            c[] cVarArr = eVar.f20084e;
                            kotlin.collections.u.k(cVarArr, null, 0, cVarArr.length);
                            eVar.f20085f = eVar.f20084e.length - 1;
                            eVar.f20086g = 0;
                            eVar.f20087h = 0;
                        } else {
                            eVar.a(i12 - min);
                        }
                    }
                }
            }
            g(0, 0, 4, 1);
            this.f20159d.flush();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        this.f20162v = true;
        this.f20159d.close();
    }

    public final synchronized void f(boolean z5, int i5, Buffer buffer, int i6) {
        if (this.f20162v) {
            throw new IOException("closed");
        }
        g(i5, i6, 0, z5 ? 1 : 0);
        if (i6 > 0) {
            BufferedSink bufferedSink = this.f20159d;
            Intrinsics.checkNotNull(buffer);
            bufferedSink.H(buffer, i6);
        }
    }

    public final synchronized void flush() {
        if (this.f20162v) {
            throw new IOException("closed");
        }
        this.f20159d.flush();
    }

    public final void g(int i5, int i6, int i10, int i11) {
        Level level = Level.FINE;
        Logger logger = f20158x;
        if (logger.isLoggable(level)) {
            logger.fine(g.a(i5, i6, i10, i11, false));
        }
        if (i6 > this.f20161i) {
            throw new IllegalArgumentException(("FRAME_SIZE_ERROR length > " + this.f20161i + ": " + i6).toString());
        }
        if ((Integer.MIN_VALUE & i5) != 0) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("reserved bit set: ", Integer.valueOf(i5)).toString());
        }
        byte[] bArr = qs.b.a;
        BufferedSink bufferedSink = this.f20159d;
        Intrinsics.checkNotNullParameter(bufferedSink, "<this>");
        bufferedSink.writeByte((i6 >>> 16) & 255);
        bufferedSink.writeByte((i6 >>> 8) & 255);
        bufferedSink.writeByte(i6 & 255);
        bufferedSink.writeByte(i10 & 255);
        bufferedSink.writeByte(i11 & 255);
        bufferedSink.writeInt(i5 & Integer.MAX_VALUE);
    }

    public final synchronized void i(int i5, b errorCode, byte[] debugData) {
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        Intrinsics.checkNotNullParameter(debugData, "debugData");
        if (this.f20162v) {
            throw new IOException("closed");
        }
        if (errorCode.f20065d == -1) {
            throw new IllegalArgumentException("errorCode.httpCode == -1");
        }
        g(0, debugData.length + 8, 7, 0);
        this.f20159d.writeInt(i5);
        this.f20159d.writeInt(errorCode.f20065d);
        if (debugData.length != 0) {
            this.f20159d.write(debugData);
        }
        this.f20159d.flush();
    }

    public final synchronized void l(boolean z5, int i5, ArrayList headerBlock) {
        Intrinsics.checkNotNullParameter(headerBlock, "headerBlock");
        if (this.f20162v) {
            throw new IOException("closed");
        }
        this.f20163w.d(headerBlock);
        long j = this.f20160e.f16114e;
        long min = Math.min(this.f20161i, j);
        int i6 = j == min ? 4 : 0;
        if (z5) {
            i6 |= 1;
        }
        g(i5, (int) min, 1, i6);
        this.f20159d.H(this.f20160e, min);
        if (j > min) {
            long j5 = j - min;
            while (j5 > 0) {
                long min2 = Math.min(this.f20161i, j5);
                j5 -= min2;
                g(i5, (int) min2, 9, j5 == 0 ? 4 : 0);
                this.f20159d.H(this.f20160e, min2);
            }
        }
    }

    public final synchronized void o(int i5, int i6, boolean z5) {
        if (this.f20162v) {
            throw new IOException("closed");
        }
        g(0, 8, 6, z5 ? 1 : 0);
        this.f20159d.writeInt(i5);
        this.f20159d.writeInt(i6);
        this.f20159d.flush();
    }

    public final synchronized void q(int i5, b errorCode) {
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        if (this.f20162v) {
            throw new IOException("closed");
        }
        if (errorCode.f20065d == -1) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        g(i5, 4, 3, 0);
        this.f20159d.writeInt(errorCode.f20065d);
        this.f20159d.flush();
    }

    public final synchronized void r(int i5, long j) {
        if (this.f20162v) {
            throw new IOException("closed");
        }
        if (j == 0 || j > 2147483647L) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("windowSizeIncrement == 0 || windowSizeIncrement > 0x7fffffffL: ", Long.valueOf(j)).toString());
        }
        g(i5, 4, 8, 0);
        this.f20159d.writeInt((int) j);
        this.f20159d.flush();
    }
}
