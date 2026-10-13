package et;

import java.io.IOException;
import java.io.InputStream;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public final class c implements Source {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8232d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8233e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8234i;

    public c(InputStream input, Timeout timeout) {
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(timeout, "timeout");
        this.f8233e = input;
        this.f8234i = timeout;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        int i5 = this.f8232d;
        Object obj = this.f8233e;
        switch (i5) {
            case 0:
                v vVar = (v) obj;
                c cVar = (c) this.f8234i;
                vVar.i();
                try {
                    cVar.close();
                    Unit unit = Unit.a;
                    if (vVar.j()) {
                        throw vVar.m(null);
                    }
                    return;
                } catch (IOException e9) {
                    if (!vVar.j()) {
                        throw e9;
                    }
                    throw vVar.m(e9);
                } finally {
                    vVar.j();
                }
            default:
                ((InputStream) obj).close();
                return;
        }
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        switch (this.f8232d) {
            case 0:
                Intrinsics.checkNotNullParameter(sink, "sink");
                v vVar = (v) this.f8233e;
                c cVar = (c) this.f8234i;
                vVar.i();
                try {
                    long read = cVar.read(sink, j);
                    if (vVar.j()) {
                        throw vVar.m(null);
                    }
                    return read;
                } catch (IOException e9) {
                    if (vVar.j()) {
                        throw vVar.m(e9);
                    }
                    throw e9;
                } finally {
                    vVar.j();
                }
            default:
                Intrinsics.checkNotNullParameter(sink, "sink");
                if (j == 0) {
                    return 0L;
                }
                if (j < 0) {
                    throw new IllegalArgumentException(k0.d.j(j, "byteCount < 0: ").toString());
                }
                try {
                    ((Timeout) this.f8234i).f();
                    s Q = sink.Q(1);
                    int read2 = ((InputStream) this.f8233e).read(Q.a, Q.f8276c, (int) Math.min(j, 8192 - Q.f8276c));
                    if (read2 == -1) {
                        if (Q.f8275b == Q.f8276c) {
                            sink.f16113d = Q.a();
                            t.a(Q);
                        }
                        return -1L;
                    }
                    Q.f8276c += read2;
                    long j5 = read2;
                    sink.f16114e += j5;
                    return j5;
                } catch (AssertionError e10) {
                    if (y.g(e10)) {
                        throw new IOException(e10);
                    }
                    throw e10;
                }
        }
    }

    @Override // okio.Source
    public final Timeout timeout() {
        switch (this.f8232d) {
            case 0:
                return (v) this.f8233e;
            default:
                return (Timeout) this.f8234i;
        }
    }

    public final String toString() {
        switch (this.f8232d) {
            case 0:
                return "AsyncTimeout.source(" + ((c) this.f8234i) + ')';
            default:
                return "source(" + ((InputStream) this.f8233e) + ')';
        }
    }

    public c(v vVar, c cVar) {
        this.f8233e = vVar;
        this.f8234i = cVar;
    }
}
