package je;

import java.io.BufferedOutputStream;
import java.io.OutputStream;
import ke.d0;

/* loaded from: classes3.dex */
public final class r extends BufferedOutputStream {

    /* renamed from: d, reason: collision with root package name */
    public boolean f12752d;

    public final void c(OutputStream outputStream) {
        ke.b.k(this.f12752d);
        ((BufferedOutputStream) this).out = outputStream;
        ((BufferedOutputStream) this).count = 0;
        this.f12752d = false;
    }

    @Override // java.io.FilterOutputStream, java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f12752d = true;
        try {
            flush();
            th = null;
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            ((BufferedOutputStream) this).out.close();
        } catch (Throwable th3) {
            if (th == null) {
                th = th3;
            }
        }
        if (th == null) {
            return;
        }
        int i5 = d0.a;
        throw th;
    }
}
