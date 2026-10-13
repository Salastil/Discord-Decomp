package et;

import java.io.IOException;
import java.io.InputStream;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;

/* loaded from: classes.dex */
public final class f extends InputStream {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8242d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BufferedSource f8243e;

    public /* synthetic */ f(BufferedSource bufferedSource, int i5) {
        this.f8242d = i5;
        this.f8243e = bufferedSource;
    }

    @Override // java.io.InputStream
    public final int available() {
        long min;
        switch (this.f8242d) {
            case 0:
                min = Math.min(((Buffer) this.f8243e).f16114e, Integer.MAX_VALUE);
                break;
            default:
                r rVar = (r) this.f8243e;
                if (!rVar.f8274i) {
                    min = Math.min(rVar.f8273e.f16114e, Integer.MAX_VALUE);
                    break;
                } else {
                    throw new IOException("closed");
                }
        }
        return (int) min;
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f8242d) {
            case 0:
                break;
            default:
                ((r) this.f8243e).close();
                break;
        }
    }

    @Override // java.io.InputStream
    public final int read() {
        switch (this.f8242d) {
            case 0:
                Buffer buffer = (Buffer) this.f8243e;
                if (buffer.f16114e > 0) {
                    return buffer.readByte() & 255;
                }
                return -1;
            default:
                r rVar = (r) this.f8243e;
                Buffer buffer2 = rVar.f8273e;
                if (rVar.f8274i) {
                    throw new IOException("closed");
                }
                if (buffer2.f16114e == 0 && rVar.f8272d.read(buffer2, 8192L) == -1) {
                    return -1;
                }
                return buffer2.readByte() & 255;
        }
    }

    public final String toString() {
        switch (this.f8242d) {
            case 0:
                return ((Buffer) this.f8243e) + ".inputStream()";
            default:
                return ((r) this.f8243e) + ".inputStream()";
        }
    }

    @Override // java.io.InputStream
    public final int read(byte[] sink, int i5, int i6) {
        switch (this.f8242d) {
            case 0:
                Intrinsics.checkNotNullParameter(sink, "sink");
                return ((Buffer) this.f8243e).read(sink, i5, i6);
            default:
                Intrinsics.checkNotNullParameter(sink, "data");
                r rVar = (r) this.f8243e;
                Buffer buffer = rVar.f8273e;
                if (!rVar.f8274i) {
                    y.f(sink.length, i5, i6);
                    if (buffer.f16114e == 0 && rVar.f8272d.read(buffer, 8192L) == -1) {
                        return -1;
                    }
                    return buffer.read(sink, i5, i6);
                }
                throw new IOException("closed");
        }
    }

    private final void c() {
    }
}
