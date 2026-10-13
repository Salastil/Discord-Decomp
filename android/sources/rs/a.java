package rs;

import et.q;
import java.io.IOException;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;
import okio.Source;
import okio.Timeout;

/* loaded from: classes3.dex */
public final class a implements Source {

    /* renamed from: d, reason: collision with root package name */
    public boolean f17630d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BufferedSource f17631e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ s9.a f17632i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ q f17633v;

    public a(BufferedSource bufferedSource, s9.a aVar, q qVar) {
        this.f17631e = bufferedSource;
        this.f17632i = aVar;
        this.f17633v = qVar;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        boolean z5;
        if (!this.f17630d) {
            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
            byte[] bArr = qs.b.a;
            Intrinsics.checkNotNullParameter(this, "<this>");
            Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
            try {
                z5 = qs.b.t(this, 100);
            } catch (IOException unused) {
                z5 = false;
            }
            if (!z5) {
                this.f17630d = true;
                this.f17632i.i();
            }
        }
        this.f17631e.close();
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        try {
            long read = this.f17631e.read(sink, j);
            q qVar = this.f17633v;
            if (read != -1) {
                sink.g(qVar.f8270e, sink.f16114e - read, read);
                qVar.c();
                return read;
            }
            if (!this.f17630d) {
                this.f17630d = true;
                qVar.close();
            }
            return -1L;
        } catch (IOException e9) {
            if (this.f17630d) {
                throw e9;
            }
            this.f17630d = true;
            this.f17632i.i();
            throw e9;
        }
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f17631e.timeout();
    }
}
