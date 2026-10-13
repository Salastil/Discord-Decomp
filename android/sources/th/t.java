package th;

import java.io.FileInputStream;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class t extends InputStream {

    /* renamed from: d, reason: collision with root package name */
    public final FileInputStream f18580d;

    /* renamed from: e, reason: collision with root package name */
    public long f18581e;

    public t(FileInputStream fileInputStream, long j) {
        this.f18580d = fileInputStream;
        this.f18581e = j;
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        super.close();
        this.f18580d.close();
        this.f18581e = 0L;
    }

    @Override // java.io.InputStream
    public final int read() {
        long j = this.f18581e;
        if (j <= 0) {
            return -1;
        }
        this.f18581e = j - 1;
        return this.f18580d.read();
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        long j = this.f18581e;
        if (j <= 0) {
            return -1;
        }
        int read = this.f18580d.read(bArr, i5, (int) Math.min(i6, j));
        if (read != -1) {
            this.f18581e -= read;
        }
        return read;
    }
}
