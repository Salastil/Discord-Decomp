package vs;

import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;

/* loaded from: classes3.dex */
public final class e extends a {

    /* renamed from: v, reason: collision with root package name */
    public boolean f19584v;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f19573e) {
            return;
        }
        if (!this.f19584v) {
            c();
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
        if (this.f19584v) {
            return -1L;
        }
        long read = super.read(sink, j);
        if (read != -1) {
            return read;
        }
        this.f19584v = true;
        c();
        return -1L;
    }
}
