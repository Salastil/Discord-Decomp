package ie;

import com.google.android.exoplayer2.upstream.DataSource;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class n extends InputStream {

    /* renamed from: d, reason: collision with root package name */
    public final DataSource f10692d;

    /* renamed from: e, reason: collision with root package name */
    public final p f10693e;

    /* renamed from: v, reason: collision with root package name */
    public boolean f10695v = false;

    /* renamed from: w, reason: collision with root package name */
    public boolean f10696w = false;

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f10694i = new byte[1];

    public n(DataSource dataSource, p pVar) {
        this.f10692d = dataSource;
        this.f10693e = pVar;
    }

    public final void c() {
        if (this.f10695v) {
            return;
        }
        this.f10692d.o(this.f10693e);
        this.f10695v = true;
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f10696w) {
            return;
        }
        this.f10692d.close();
        this.f10696w = true;
    }

    @Override // java.io.InputStream
    public final int read() {
        byte[] bArr = this.f10694i;
        if (read(bArr, 0, bArr.length) == -1) {
            return -1;
        }
        return bArr[0] & 255;
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        ke.b.k(!this.f10696w);
        c();
        int read = this.f10692d.read(bArr, i5, i6);
        if (read == -1) {
            return -1;
        }
        return read;
    }
}
