package et;

import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Sink;
import okio.Timeout;

/* loaded from: classes.dex */
public final class d implements Sink {
    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        source.skip(j);
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        return Timeout.f16119d;
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }

    @Override // okio.Sink, java.io.Flushable
    public final void flush() {
    }
}
