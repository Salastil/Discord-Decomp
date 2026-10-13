package r8;

import java.io.IOException;
import java.io.InputStream;
import o8.h;

/* loaded from: classes3.dex */
public final class e extends InputStream {

    /* renamed from: d, reason: collision with root package name */
    public final InputStream f17140d;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f17141e;

    /* renamed from: i, reason: collision with root package name */
    public final s8.c f17142i;

    /* renamed from: v, reason: collision with root package name */
    public int f17143v;

    /* renamed from: w, reason: collision with root package name */
    public int f17144w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f17145x;

    public e(InputStream inputStream, byte[] bArr, s8.c cVar) {
        inputStream.getClass();
        this.f17140d = inputStream;
        bArr.getClass();
        this.f17141e = bArr;
        cVar.getClass();
        this.f17142i = cVar;
        this.f17143v = 0;
        this.f17144w = 0;
        this.f17145x = false;
    }

    @Override // java.io.InputStream
    public final int available() {
        h.e(this.f17144w <= this.f17143v);
        c();
        return this.f17140d.available() + (this.f17143v - this.f17144w);
    }

    public final void c() {
        if (this.f17145x) {
            throw new IOException("stream already closed");
        }
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f17145x) {
            return;
        }
        this.f17145x = true;
        this.f17142i.release(this.f17141e);
        super.close();
    }

    public final void finalize() {
        if (!this.f17145x) {
            p8.a.g("PooledByteInputStream", "Finalized without closing");
            close();
        }
        super.finalize();
    }

    @Override // java.io.InputStream
    public final int read() {
        h.e(this.f17144w <= this.f17143v);
        c();
        int i5 = this.f17144w;
        int i6 = this.f17143v;
        byte[] bArr = this.f17141e;
        if (i5 >= i6) {
            int read = this.f17140d.read(bArr);
            if (read <= 0) {
                return -1;
            }
            this.f17143v = read;
            this.f17144w = 0;
        }
        int i10 = this.f17144w;
        this.f17144w = i10 + 1;
        return bArr[i10] & 255;
    }

    @Override // java.io.InputStream
    public final long skip(long j) {
        h.e(this.f17144w <= this.f17143v);
        c();
        int i5 = this.f17143v;
        int i6 = this.f17144w;
        long j5 = i5 - i6;
        if (j5 >= j) {
            this.f17144w = (int) (i6 + j);
            return j;
        }
        this.f17144w = i5;
        return this.f17140d.skip(j - j5) + j5;
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        h.e(this.f17144w <= this.f17143v);
        c();
        int i10 = this.f17144w;
        int i11 = this.f17143v;
        byte[] bArr2 = this.f17141e;
        if (i10 >= i11) {
            int read = this.f17140d.read(bArr2);
            if (read <= 0) {
                return -1;
            }
            this.f17143v = read;
            this.f17144w = 0;
        }
        int min = Math.min(this.f17143v - this.f17144w, i6);
        System.arraycopy(bArr2, this.f17144w, bArr, i5, min);
        this.f17144w += min;
        return min;
    }
}
