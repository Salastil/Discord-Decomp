package u8;

import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class a extends FilterInputStream {

    /* renamed from: d, reason: collision with root package name */
    public int f18813d;

    /* renamed from: e, reason: collision with root package name */
    public int f18814e;

    public a(InputStream inputStream, int i5) {
        super(inputStream);
        if (i5 < 0) {
            throw new IllegalArgumentException("limit must be >= 0");
        }
        this.f18813d = i5;
        this.f18814e = -1;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int available() {
        return Math.min(((FilterInputStream) this).in.available(), this.f18813d);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final void mark(int i5) {
        if (((FilterInputStream) this).in.markSupported()) {
            ((FilterInputStream) this).in.mark(i5);
            this.f18814e = this.f18813d;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        if (this.f18813d == 0) {
            return -1;
        }
        int read = ((FilterInputStream) this).in.read();
        if (read != -1) {
            this.f18813d--;
        }
        return read;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final void reset() {
        if (!((FilterInputStream) this).in.markSupported()) {
            throw new IOException("mark is not supported");
        }
        if (this.f18814e == -1) {
            throw new IOException("mark not set");
        }
        ((FilterInputStream) this).in.reset();
        this.f18813d = this.f18814e;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final long skip(long j) {
        long skip = ((FilterInputStream) this).in.skip(Math.min(j, this.f18813d));
        this.f18813d = (int) (this.f18813d - skip);
        return skip;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        int i10 = this.f18813d;
        if (i10 == 0) {
            return -1;
        }
        int read = ((FilterInputStream) this).in.read(bArr, i5, Math.min(i6, i10));
        if (read > 0) {
            this.f18813d -= read;
        }
        return read;
    }
}
