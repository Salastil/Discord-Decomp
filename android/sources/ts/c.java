package ts;

import java.io.IOException;
import java.net.ProtocolException;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Sink;

/* loaded from: classes3.dex */
public final class c extends et.h {

    /* renamed from: e, reason: collision with root package name */
    public final long f18704e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f18705i;

    /* renamed from: v, reason: collision with root package name */
    public long f18706v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f18707w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ hc.k f18708x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(hc.k this$0, Sink delegate, long j) {
        super(delegate);
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f18708x = this$0;
        this.f18704e = j;
    }

    @Override // et.h, okio.Sink
    public final void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (this.f18707w) {
            throw new IllegalStateException("closed");
        }
        long j5 = this.f18704e;
        if (j5 != -1 && this.f18706v + j > j5) {
            StringBuilder n6 = k0.d.n(j5, "expected ", " bytes but received ");
            n6.append(this.f18706v + j);
            throw new ProtocolException(n6.toString());
        }
        try {
            super.H(source, j);
            this.f18706v += j;
        } catch (IOException e9) {
            throw c(e9);
        }
    }

    public final IOException c(IOException iOException) {
        if (this.f18705i) {
            return iOException;
        }
        this.f18705i = true;
        return this.f18708x.c(false, true, iOException);
    }

    @Override // et.h, okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f18707w) {
            return;
        }
        this.f18707w = true;
        long j = this.f18704e;
        if (j != -1 && this.f18706v != j) {
            throw new ProtocolException("unexpected end of stream");
        }
        try {
            super.close();
            c(null);
        } catch (IOException e9) {
            throw c(e9);
        }
    }

    @Override // et.h, okio.Sink, java.io.Flushable
    public final void flush() {
        try {
            super.flush();
        } catch (IOException e9) {
            throw c(e9);
        }
    }
}
