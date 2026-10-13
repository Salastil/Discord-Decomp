package et;

import java.util.zip.Deflater;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;
import okio.Sink;
import okio.Timeout;

/* loaded from: classes.dex */
public final class g implements Sink {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8244d = 1;

    /* renamed from: e, reason: collision with root package name */
    public boolean f8245e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8246i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f8247v;

    public g(Buffer sink, Deflater deflater) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        Intrinsics.checkNotNullParameter(deflater, "deflater");
        q sink2 = y.c(sink);
        Intrinsics.checkNotNullParameter(sink2, "sink");
        Intrinsics.checkNotNullParameter(deflater, "deflater");
        this.f8246i = sink2;
        this.f8247v = deflater;
    }

    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        int i5 = this.f8244d;
        Object obj = this.f8247v;
        Intrinsics.checkNotNullParameter(source, "source");
        switch (i5) {
            case 0:
                y.f(source.f16114e, 0L, j);
                while (j > 0) {
                    s sVar = source.f16113d;
                    Intrinsics.checkNotNull(sVar);
                    int min = (int) Math.min(j, sVar.f8276c - sVar.f8275b);
                    ((Deflater) obj).setInput(sVar.a, sVar.f8275b, min);
                    c(false);
                    long j5 = min;
                    source.f16114e -= j5;
                    int i6 = sVar.f8275b + min;
                    sVar.f8275b = i6;
                    if (i6 == sVar.f8276c) {
                        source.f16113d = sVar.a();
                        t.a(sVar);
                    }
                    j -= j5;
                }
                return;
            default:
                if (this.f8245e) {
                    throw new IllegalStateException("closed");
                }
                long j7 = source.f16114e;
                byte[] bArr = qs.b.a;
                if (j < 0 || 0 > j7 || j7 < j) {
                    throw new ArrayIndexOutOfBoundsException();
                }
                ((BufferedSink) ((aj.a) obj).f638f).H(source, j);
                return;
        }
    }

    public void c(boolean z5) {
        s Q;
        int deflate;
        Deflater deflater = (Deflater) this.f8247v;
        q qVar = (q) this.f8246i;
        Buffer buffer = qVar.f8270e;
        while (true) {
            Q = buffer.Q(1);
            byte[] bArr = Q.a;
            if (z5) {
                int i5 = Q.f8276c;
                deflate = deflater.deflate(bArr, i5, 8192 - i5, 2);
            } else {
                int i6 = Q.f8276c;
                deflate = deflater.deflate(bArr, i6, 8192 - i6);
            }
            if (deflate > 0) {
                Q.f8276c += deflate;
                buffer.f16114e += deflate;
                qVar.c();
            } else if (deflater.needsInput()) {
                break;
            }
        }
        if (Q.f8275b == Q.f8276c) {
            buffer.f16113d = Q.a();
            t.a(Q);
        }
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f8244d) {
            case 0:
                Deflater deflater = (Deflater) this.f8247v;
                if (this.f8245e) {
                    return;
                }
                try {
                    deflater.finish();
                    c(false);
                    th = null;
                } catch (Throwable th2) {
                    th = th2;
                }
                try {
                    deflater.end();
                } catch (Throwable th3) {
                    if (th == null) {
                        th = th3;
                    }
                }
                try {
                    ((q) this.f8246i).close();
                } catch (Throwable th4) {
                    if (th == null) {
                        th = th4;
                    }
                }
                this.f8245e = true;
                if (th != null) {
                    throw th;
                }
                return;
            default:
                aj.a aVar = (aj.a) this.f8247v;
                if (this.f8245e) {
                    return;
                }
                this.f8245e = true;
                aj.a.i(aVar, (j) this.f8246i);
                aVar.f635c = 3;
                return;
        }
    }

    @Override // okio.Sink, java.io.Flushable
    public final void flush() {
        switch (this.f8244d) {
            case 0:
                c(true);
                ((q) this.f8246i).flush();
                break;
            default:
                if (!this.f8245e) {
                    ((BufferedSink) ((aj.a) this.f8247v).f638f).flush();
                    break;
                }
                break;
        }
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        switch (this.f8244d) {
            case 0:
                return ((q) this.f8246i).f8269d.timeout();
            default:
                return (j) this.f8246i;
        }
    }

    public String toString() {
        switch (this.f8244d) {
            case 0:
                return "DeflaterSink(" + ((q) this.f8246i) + ')';
            default:
                return super.toString();
        }
    }

    public g(aj.a this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f8247v = this$0;
        this.f8246i = new j(((BufferedSink) this$0.f638f).timeout());
    }
}
