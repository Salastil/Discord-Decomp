package ws;

import java.io.InterruptedIOException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.Sink;
import okio.Timeout;

/* loaded from: classes3.dex */
public final class u implements Sink {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f20137d;

    /* renamed from: e, reason: collision with root package name */
    public final Buffer f20138e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f20139i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ w f20140v;

    public u(w this$0, boolean z5) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f20140v = this$0;
        this.f20137d = z5;
        this.f20138e = new Buffer();
    }

    @Override // okio.Sink
    public final void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        byte[] bArr = qs.b.a;
        Buffer buffer = this.f20138e;
        buffer.H(source, j);
        while (buffer.f16114e >= 16384) {
            c(false);
        }
    }

    /* JADX WARN: Finally extract failed */
    public final void c(boolean z5) {
        long min;
        boolean z6;
        w wVar = this.f20140v;
        synchronized (wVar) {
            try {
                wVar.f20155l.i();
                while (wVar.f20150e >= wVar.f20151f && !this.f20137d && !this.f20139i && wVar.f() == null) {
                    try {
                        try {
                            wVar.wait();
                        } catch (InterruptedException unused) {
                            Thread.currentThread().interrupt();
                            throw new InterruptedIOException();
                        }
                    } catch (Throwable th2) {
                        wVar.f20155l.l();
                        throw th2;
                    }
                }
                wVar.f20155l.l();
                wVar.b();
                min = Math.min(wVar.f20151f - wVar.f20150e, this.f20138e.f16114e);
                wVar.f20150e += min;
                z6 = z5 && min == this.f20138e.f16114e;
                Unit unit = Unit.a;
            } catch (Throwable th3) {
                throw th3;
            }
        }
        this.f20140v.f20155l.i();
        try {
            w wVar2 = this.f20140v;
            wVar2.f20147b.q(wVar2.a, z6, this.f20138e, min);
        } finally {
            this.f20140v.f20155l.l();
        }
    }

    @Override // okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        w wVar = this.f20140v;
        byte[] bArr = qs.b.a;
        synchronized (wVar) {
            if (this.f20139i) {
                return;
            }
            boolean z5 = wVar.f() == null;
            Unit unit = Unit.a;
            w wVar2 = this.f20140v;
            if (!wVar2.j.f20137d) {
                if (this.f20138e.f16114e > 0) {
                    while (this.f20138e.f16114e > 0) {
                        c(true);
                    }
                } else if (z5) {
                    wVar2.f20147b.q(wVar2.a, true, null, 0L);
                }
            }
            synchronized (this.f20140v) {
                this.f20139i = true;
                Unit unit2 = Unit.a;
            }
            this.f20140v.f20147b.flush();
            this.f20140v.a();
        }
    }

    @Override // okio.Sink, java.io.Flushable
    public final void flush() {
        w wVar = this.f20140v;
        byte[] bArr = qs.b.a;
        synchronized (wVar) {
            wVar.b();
            Unit unit = Unit.a;
        }
        while (this.f20138e.f16114e > 0) {
            c(false);
            this.f20140v.f20147b.flush();
        }
    }

    @Override // okio.Sink
    public final Timeout timeout() {
        return this.f20140v.f20155l;
    }
}
