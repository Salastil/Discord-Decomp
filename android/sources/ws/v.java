package ws;

import java.io.IOException;
import java.io.InterruptedIOException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Source;
import okio.Timeout;

/* loaded from: classes3.dex */
public final class v implements Source {

    /* renamed from: d, reason: collision with root package name */
    public final long f20141d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f20142e;

    /* renamed from: i, reason: collision with root package name */
    public final Buffer f20143i;

    /* renamed from: v, reason: collision with root package name */
    public final Buffer f20144v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f20145w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ w f20146x;

    public v(w this$0, long j, boolean z5) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f20146x = this$0;
        this.f20141d = j;
        this.f20142e = z5;
        this.f20143i = new Buffer();
        this.f20144v = new Buffer();
    }

    public final void c(long j) {
        byte[] bArr = qs.b.a;
        this.f20146x.f20147b.o(j);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        long j;
        w wVar = this.f20146x;
        synchronized (wVar) {
            this.f20145w = true;
            Buffer buffer = this.f20144v;
            j = buffer.f16114e;
            buffer.c();
            wVar.notifyAll();
            Unit unit = Unit.a;
        }
        if (j > 0) {
            c(j);
        }
        this.f20146x.a();
    }

    @Override // okio.Source
    public final long read(Buffer sink, long j) {
        Throwable th2;
        boolean z5;
        long j5;
        Intrinsics.checkNotNullParameter(sink, "sink");
        long j7 = 0;
        if (j < 0) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("byteCount < 0: ", Long.valueOf(j)).toString());
        }
        while (true) {
            w wVar = this.f20146x;
            synchronized (wVar) {
                wVar.k.i();
                try {
                    if (wVar.f() == null || this.f20142e) {
                        th2 = null;
                    } else {
                        th2 = wVar.f20157n;
                        if (th2 == null) {
                            b f2 = wVar.f();
                            Intrinsics.checkNotNull(f2);
                            th2 = new b0(f2);
                        }
                    }
                    if (this.f20145w) {
                        throw new IOException("stream closed");
                    }
                    Buffer buffer = this.f20144v;
                    long j10 = buffer.f16114e;
                    z5 = false;
                    if (j10 > j7) {
                        j5 = buffer.read(sink, Math.min(j, j10));
                        long j11 = wVar.f20148c + j5;
                        wVar.f20148c = j11;
                        long j12 = j11 - wVar.f20149d;
                        if (th2 == null && j12 >= wVar.f20147b.M.a() / 2) {
                            wVar.f20147b.t(wVar.a, j12);
                            wVar.f20149d = wVar.f20148c;
                        }
                    } else {
                        if (!this.f20142e && th2 == null) {
                            try {
                                wVar.wait();
                                z5 = true;
                            } catch (InterruptedException unused) {
                                Thread.currentThread().interrupt();
                                throw new InterruptedIOException();
                            }
                        }
                        j5 = -1;
                    }
                    wVar.k.l();
                    Unit unit = Unit.a;
                } catch (Throwable th3) {
                    wVar.k.l();
                    throw th3;
                }
            }
            if (!z5) {
                if (j5 != -1) {
                    c(j5);
                    return j5;
                }
                if (th2 == null) {
                    return -1L;
                }
                throw th2;
            }
            j7 = 0;
        }
    }

    @Override // okio.Source
    public final Timeout timeout() {
        return this.f20146x.k;
    }
}
