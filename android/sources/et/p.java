package et;

import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public final class p implements Source {

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSource f8263d;

    /* renamed from: e, reason: collision with root package name */
    public final Buffer f8264e;

    /* renamed from: i, reason: collision with root package name */
    public s f8265i;

    /* renamed from: v, reason: collision with root package name */
    public int f8266v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f8267w;

    /* renamed from: x, reason: collision with root package name */
    public long f8268x;

    public p(BufferedSource upstream) {
        Intrinsics.checkNotNullParameter(upstream, "upstream");
        this.f8263d = upstream;
        Buffer h6 = upstream.h();
        this.f8264e = h6;
        s sVar = h6.f16113d;
        this.f8265i = sVar;
        this.f8266v = sVar != null ? sVar.f8275b : -1;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f8267w = true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0021, code lost:
    
        if (r3 == r5.f8275b) goto L15;
     */
    @Override // okio.Source
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long read(Buffer sink, long j) {
        s sVar;
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j < 0) {
            throw new IllegalArgumentException(k0.d.j(j, "byteCount < 0: ").toString());
        }
        if (this.f8267w) {
            throw new IllegalStateException("closed");
        }
        s sVar2 = this.f8265i;
        Buffer buffer = this.f8264e;
        if (sVar2 != null) {
            s sVar3 = buffer.f16113d;
            if (sVar2 == sVar3) {
                int i5 = this.f8266v;
                Intrinsics.checkNotNull(sVar3);
            }
            throw new IllegalStateException("Peek source is invalid because upstream source was used");
        }
        if (j == 0) {
            return 0L;
        }
        if (!this.f8263d.N(this.f8268x + 1)) {
            return -1L;
        }
        if (this.f8265i == null && (sVar = buffer.f16113d) != null) {
            this.f8265i = sVar;
            Intrinsics.checkNotNull(sVar);
            this.f8266v = sVar.f8275b;
        }
        long min = Math.min(j, buffer.f16114e - this.f8268x);
        this.f8264e.g(sink, this.f8268x, min);
        this.f8268x += min;
        return min;
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f8263d.timeout();
    }
}
