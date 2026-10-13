package et;

import java.io.IOException;
import java.io.OutputStream;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Sink;
import okio.Timeout;

/* loaded from: classes.dex */
public final class b implements Sink {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8229d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8230e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8231i;

    public b(OutputStream out, Timeout timeout) {
        Intrinsics.checkNotNullParameter(out, "out");
        Intrinsics.checkNotNullParameter(timeout, "timeout");
        this.f8230e = out;
        this.f8231i = timeout;
    }

    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        long j5;
        int i5 = this.f8229d;
        Object obj = this.f8230e;
        Object obj2 = this.f8231i;
        Intrinsics.checkNotNullParameter(source, "source");
        switch (i5) {
            case 0:
                y.f(source.f16114e, 0L, j);
                for (long j7 = j; j7 > 0; j7 -= j5) {
                    s sVar = source.f16113d;
                    Intrinsics.checkNotNull(sVar);
                    j5 = 0;
                    while (true) {
                        if (j5 < 65536) {
                            j5 += sVar.f8276c - sVar.f8275b;
                            if (j5 >= j7) {
                                j5 = j7;
                            } else {
                                sVar = sVar.f8279f;
                                Intrinsics.checkNotNull(sVar);
                            }
                        }
                    }
                    v vVar = (v) obj;
                    b bVar = (b) obj2;
                    vVar.i();
                    try {
                        bVar.H(source, j5);
                        Unit unit = Unit.a;
                        if (vVar.j()) {
                            throw vVar.m(null);
                        }
                    } catch (IOException e9) {
                        if (!vVar.j()) {
                            throw e9;
                        }
                        throw vVar.m(e9);
                    } finally {
                        vVar.j();
                    }
                }
                return;
            default:
                y.f(source.f16114e, 0L, j);
                long j10 = j;
                while (j10 > 0) {
                    ((Timeout) obj2).f();
                    s sVar2 = source.f16113d;
                    Intrinsics.checkNotNull(sVar2);
                    int min = (int) Math.min(j10, sVar2.f8276c - sVar2.f8275b);
                    ((OutputStream) obj).write(sVar2.a, sVar2.f8275b, min);
                    int i6 = sVar2.f8275b + min;
                    sVar2.f8275b = i6;
                    long j11 = min;
                    j10 -= j11;
                    source.f16114e -= j11;
                    if (i6 == sVar2.f8276c) {
                        source.f16113d = sVar2.a();
                        t.a(sVar2);
                    }
                }
                return;
        }
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        int i5 = this.f8229d;
        Object obj = this.f8230e;
        switch (i5) {
            case 0:
                v vVar = (v) obj;
                b bVar = (b) this.f8231i;
                vVar.i();
                try {
                    bVar.close();
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
                ((OutputStream) obj).close();
                return;
        }
    }

    @Override // okio.Sink, java.io.Flushable
    public final void flush() {
        int i5 = this.f8229d;
        Object obj = this.f8230e;
        switch (i5) {
            case 0:
                v vVar = (v) obj;
                b bVar = (b) this.f8231i;
                vVar.i();
                try {
                    bVar.flush();
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
                ((OutputStream) obj).flush();
                return;
        }
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        switch (this.f8229d) {
            case 0:
                return (v) this.f8230e;
            default:
                return (Timeout) this.f8231i;
        }
    }

    public final String toString() {
        switch (this.f8229d) {
            case 0:
                return "AsyncTimeout.sink(" + ((b) this.f8231i) + ')';
            default:
                return "sink(" + ((OutputStream) this.f8230e) + ')';
        }
    }

    public b(v vVar, b bVar) {
        this.f8230e = vVar;
        this.f8231i = bVar;
    }
}
