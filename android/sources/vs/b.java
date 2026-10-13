package vs;

import et.j;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;
import okio.Sink;
import okio.Timeout;

/* loaded from: classes3.dex */
public final class b implements Sink {

    /* renamed from: d, reason: collision with root package name */
    public final j f19575d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f19576e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ aj.a f19577i;

    public b(aj.a this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f19577i = this$0;
        this.f19575d = new j(((BufferedSink) this$0.f638f).timeout());
    }

    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        BufferedSink bufferedSink = (BufferedSink) this.f19577i.f638f;
        Intrinsics.checkNotNullParameter(source, "source");
        if (this.f19576e) {
            throw new IllegalStateException("closed");
        }
        if (j == 0) {
            return;
        }
        bufferedSink.K(j);
        bufferedSink.B("\r\n");
        bufferedSink.H(source, j);
        bufferedSink.B("\r\n");
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        if (this.f19576e) {
            return;
        }
        this.f19576e = true;
        ((BufferedSink) this.f19577i.f638f).B("0\r\n\r\n");
        aj.a.i(this.f19577i, this.f19575d);
        this.f19577i.f635c = 3;
    }

    @Override // okio.Sink, java.io.Flushable
    public final synchronized void flush() {
        if (this.f19576e) {
            return;
        }
        ((BufferedSink) this.f19577i.f638f).flush();
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        return this.f19575d;
    }
}
