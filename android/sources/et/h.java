package et;

import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Sink;
import okio.Timeout;

/* loaded from: classes.dex */
public abstract class h implements Sink {

    /* renamed from: d, reason: collision with root package name */
    public final Sink f8248d;

    public h(Sink delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f8248d = delegate;
    }

    @Override // okio.Sink
    public void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.f8248d.H(source, j);
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f8248d.close();
    }

    @Override // okio.Sink, java.io.Flushable
    public void flush() {
        this.f8248d.flush();
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        return this.f8248d.timeout();
    }

    public final String toString() {
        return getClass().getSimpleName() + '(' + this.f8248d + ')';
    }
}
