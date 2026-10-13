package et;

import java.io.EOFException;
import java.io.IOException;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public final class m implements Source {

    /* renamed from: d, reason: collision with root package name */
    public final r f8256d;

    /* renamed from: e, reason: collision with root package name */
    public final Inflater f8257e;

    /* renamed from: i, reason: collision with root package name */
    public int f8258i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f8259v;

    public m(r source, Inflater inflater) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        this.f8256d = source;
        this.f8257e = inflater;
    }

    public final long c(Buffer sink, long j) {
        Inflater inflater = this.f8257e;
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j < 0) {
            throw new IllegalArgumentException(k0.d.j(j, "byteCount < 0: ").toString());
        }
        if (this.f8259v) {
            throw new IllegalStateException("closed");
        }
        if (j != 0) {
            try {
                s Q = sink.Q(1);
                int min = (int) Math.min(j, 8192 - Q.f8276c);
                boolean needsInput = inflater.needsInput();
                r rVar = this.f8256d;
                if (needsInput && !rVar.c()) {
                    s sVar = rVar.f8273e.f16113d;
                    Intrinsics.checkNotNull(sVar);
                    int i5 = sVar.f8276c;
                    int i6 = sVar.f8275b;
                    int i10 = i5 - i6;
                    this.f8258i = i10;
                    inflater.setInput(sVar.a, i6, i10);
                }
                int inflate = inflater.inflate(Q.a, Q.f8276c, min);
                int i11 = this.f8258i;
                if (i11 != 0) {
                    int remaining = i11 - inflater.getRemaining();
                    this.f8258i -= remaining;
                    rVar.skip(remaining);
                }
                if (inflate > 0) {
                    Q.f8276c += inflate;
                    long j5 = inflate;
                    sink.f16114e += j5;
                    return j5;
                }
                if (Q.f8275b == Q.f8276c) {
                    sink.f16113d = Q.a();
                    t.a(Q);
                }
            } catch (DataFormatException e9) {
                throw new IOException(e9);
            }
        }
        return 0L;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f8259v) {
            return;
        }
        this.f8257e.end();
        this.f8259v = true;
        this.f8256d.close();
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        do {
            long c6 = c(sink, j);
            if (c6 > 0) {
                return c6;
            }
            Inflater inflater = this.f8257e;
            if (inflater.finished() || inflater.needsDictionary()) {
                return -1L;
            }
        } while (!this.f8256d.c());
        throw new EOFException("source exhausted prematurely");
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f8256d.f8272d.timeout();
    }
}
