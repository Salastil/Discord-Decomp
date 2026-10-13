package vs;

import java.io.IOException;
import java.net.ProtocolException;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import ts.k;

/* loaded from: classes3.dex */
public final class d extends a {

    /* renamed from: v, reason: collision with root package name */
    public long f19582v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ aj.a f19583w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(aj.a this$0, long j) {
        super(this$0);
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f19583w = this$0;
        this.f19582v = j;
        if (j == 0) {
            c();
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        boolean z5;
        if (this.f19573e) {
            return;
        }
        if (this.f19582v != 0) {
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
                ((k) this.f19583w.f636d).k();
                c();
            }
        }
        this.f19573e = true;
    }

    @Override // vs.a, okio.Source
    public final long read(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j < 0) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("byteCount < 0: ", Long.valueOf(j)).toString());
        }
        if (this.f19573e) {
            throw new IllegalStateException("closed");
        }
        long j5 = this.f19582v;
        if (j5 == 0) {
            return -1L;
        }
        long read = super.read(sink, Math.min(j5, j));
        if (read == -1) {
            ((k) this.f19583w.f636d).k();
            ProtocolException protocolException = new ProtocolException("unexpected end of stream");
            c();
            throw protocolException;
        }
        long j7 = this.f19582v - read;
        this.f19582v = j7;
        if (j7 == 0) {
            c();
        }
        return read;
    }
}
