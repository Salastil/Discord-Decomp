package ts;

import java.io.IOException;
import java.net.ProtocolException;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Source;

/* loaded from: classes3.dex */
public final class d extends et.i {

    /* renamed from: d, reason: collision with root package name */
    public final long f18709d;

    /* renamed from: e, reason: collision with root package name */
    public long f18710e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f18711i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f18712v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f18713w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ hc.k f18714x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(hc.k this$0, Source delegate, long j) {
        super(delegate);
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f18714x = this$0;
        this.f18709d = j;
        this.f18711i = true;
        if (j == 0) {
            c(null);
        }
    }

    public final IOException c(IOException iOException) {
        if (this.f18712v) {
            return iOException;
        }
        this.f18712v = true;
        hc.k kVar = this.f18714x;
        if (iOException == null && this.f18711i) {
            this.f18711i = false;
            h call = (h) kVar.f9762i;
            Intrinsics.checkNotNullParameter(call, "call");
        }
        return kVar.c(true, false, iOException);
    }

    @Override // et.i, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f18713w) {
            return;
        }
        this.f18713w = true;
        try {
            super.close();
            c(null);
        } catch (IOException e9) {
            throw c(e9);
        }
    }

    @Override // et.i, okio.Source
    public final long read(Buffer sink, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (this.f18713w) {
            throw new IllegalStateException("closed");
        }
        try {
            long read = delegate().read(sink, j);
            if (this.f18711i) {
                this.f18711i = false;
                h call = (h) this.f18714x.f9762i;
                Intrinsics.checkNotNullParameter(call, "call");
            }
            if (read == -1) {
                c(null);
                return -1L;
            }
            long j5 = this.f18710e + read;
            long j7 = this.f18709d;
            if (j7 == -1 || j5 <= j7) {
                this.f18710e = j5;
                if (j5 == j7) {
                    c(null);
                }
                return read;
            }
            throw new ProtocolException("expected " + j7 + " bytes but received " + j5);
        } catch (IOException e9) {
            throw c(e9);
        }
    }
}
