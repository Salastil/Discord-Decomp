package et;

import java.io.OutputStream;
import java.nio.ByteBuffer;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;
import okio.ByteString;
import okio.Sink;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public final class q implements BufferedSink {

    /* renamed from: d, reason: collision with root package name */
    public final Sink f8269d;

    /* renamed from: e, reason: collision with root package name */
    public final Buffer f8270e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f8271i;

    public q(Sink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        this.f8269d = sink;
        this.f8270e = new Buffer();
    }

    @Override // okio.BufferedSink
    public final BufferedSink B(String string) {
        Intrinsics.checkNotNullParameter(string, "string");
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.l0(string);
        c();
        return this;
    }

    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.H(source, j);
        c();
    }

    @Override // okio.BufferedSink
    public final long J(Source source) {
        Intrinsics.checkNotNullParameter(source, "source");
        long j = 0;
        while (true) {
            long read = source.read(this.f8270e, 8192L);
            if (read == -1) {
                return j;
            }
            j += read;
            c();
        }
    }

    @Override // okio.BufferedSink
    public final BufferedSink K(long j) {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.X(j);
        c();
        return this;
    }

    @Override // okio.BufferedSink
    public final BufferedSink a0(ByteString byteString) {
        Intrinsics.checkNotNullParameter(byteString, "byteString");
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.R(byteString);
        c();
        return this;
    }

    public final BufferedSink c() {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        Buffer buffer = this.f8270e;
        long f2 = buffer.f();
        if (f2 > 0) {
            this.f8269d.H(buffer, f2);
        }
        return this;
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        Sink sink = this.f8269d;
        if (this.f8271i) {
            return;
        }
        try {
            Buffer buffer = this.f8270e;
            long j = buffer.f16114e;
            if (j > 0) {
                sink.H(buffer, j);
            }
            th = null;
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            sink.close();
        } catch (Throwable th3) {
            if (th == null) {
                th = th3;
            }
        }
        this.f8271i = true;
        if (th != null) {
            throw th;
        }
    }

    @Override // okio.BufferedSink
    public final BufferedSink f0(long j) {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.V(j);
        c();
        return this;
    }

    @Override // okio.BufferedSink, okio.Sink, java.io.Flushable
    public final void flush() {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        Buffer buffer = this.f8270e;
        long j = buffer.f16114e;
        Sink sink = this.f8269d;
        if (j > 0) {
            sink.H(buffer, j);
        }
        sink.flush();
    }

    @Override // okio.BufferedSink
    public final OutputStream g0() {
        return new e2.k(this, 2);
    }

    @Override // okio.BufferedSink
    public final Buffer h() {
        return this.f8270e;
    }

    @Override // java.nio.channels.Channel
    public final boolean isOpen() {
        return !this.f8271i;
    }

    @Override // okio.BufferedSink
    public final BufferedSink p() {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        Buffer buffer = this.f8270e;
        long j = buffer.f16114e;
        if (j > 0) {
            this.f8269d.H(buffer, j);
        }
        return this;
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        return this.f8269d.timeout();
    }

    public final String toString() {
        return "buffer(" + this.f8269d + ')';
    }

    @Override // java.nio.channels.WritableByteChannel
    public final int write(ByteBuffer source) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        int write = this.f8270e.write(source);
        c();
        return write;
    }

    @Override // okio.BufferedSink
    public final BufferedSink writeByte(int i5) {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.U(i5);
        c();
        return this;
    }

    @Override // okio.BufferedSink
    public final BufferedSink writeInt(int i5) {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.b0(i5);
        c();
        return this;
    }

    @Override // okio.BufferedSink
    public final BufferedSink writeShort(int i5) {
        if (this.f8271i) {
            throw new IllegalStateException("closed");
        }
        this.f8270e.d0(i5);
        c();
        return this;
    }

    @Override // okio.BufferedSink
    public final BufferedSink write(byte[] source) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (!this.f8271i) {
            this.f8270e.m1301write(source);
            c();
            return this;
        }
        throw new IllegalStateException("closed");
    }

    @Override // okio.BufferedSink
    public final BufferedSink write(byte[] source, int i5, int i6) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (!this.f8271i) {
            this.f8270e.m1302write(source, i5, i6);
            c();
            return this;
        }
        throw new IllegalStateException("closed");
    }
}
