package ws;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;
import okio.Source;
import okio.Timeout;

/* loaded from: classes3.dex */
public final class s implements Source {

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSource f20127d;

    /* renamed from: e, reason: collision with root package name */
    public int f20128e;

    /* renamed from: i, reason: collision with root package name */
    public int f20129i;

    /* renamed from: v, reason: collision with root package name */
    public int f20130v;

    /* renamed from: w, reason: collision with root package name */
    public int f20131w;

    /* renamed from: x, reason: collision with root package name */
    public int f20132x;

    public s(BufferedSource source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.f20127d = source;
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        int i5;
        int readInt;
        Intrinsics.checkNotNullParameter(sink, "sink");
        do {
            int i6 = this.f20131w;
            BufferedSource bufferedSource = this.f20127d;
            if (i6 == 0) {
                bufferedSource.skip(this.f20132x);
                this.f20132x = 0;
                if ((this.f20129i & 4) == 0) {
                    i5 = this.f20130v;
                    int s2 = qs.b.s(bufferedSource);
                    this.f20131w = s2;
                    this.f20128e = s2;
                    int readByte = bufferedSource.readByte() & 255;
                    this.f20129i = bufferedSource.readByte() & 255;
                    Logger logger = t.f20133v;
                    if (logger.isLoggable(Level.FINE)) {
                        ByteString byteString = g.a;
                        logger.fine(g.a(this.f20130v, this.f20128e, readByte, this.f20129i, true));
                    }
                    readInt = bufferedSource.readInt() & Integer.MAX_VALUE;
                    this.f20130v = readInt;
                    if (readByte != 9) {
                        throw new IOException(readByte + " != TYPE_CONTINUATION");
                    }
                }
            } else {
                long read = bufferedSource.read(sink, Math.min(j, i6));
                if (read != -1) {
                    this.f20131w -= (int) read;
                    return read;
                }
            }
            return -1L;
        } while (readInt == i5);
        throw new IOException("TYPE_CONTINUATION streamId changed");
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f20127d.timeout();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }
}
