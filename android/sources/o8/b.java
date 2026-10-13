package o8;

import java.io.FilterOutputStream;

/* loaded from: classes3.dex */
public final class b extends FilterOutputStream {

    /* renamed from: d, reason: collision with root package name */
    public long f15793d;

    @Override // java.io.FilterOutputStream, java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        ((FilterOutputStream) this).out.close();
    }

    @Override // java.io.FilterOutputStream, java.io.OutputStream
    public final void write(byte[] bArr, int i5, int i6) {
        ((FilterOutputStream) this).out.write(bArr, i5, i6);
        this.f15793d += i6;
    }

    @Override // java.io.FilterOutputStream, java.io.OutputStream
    public final void write(int i5) {
        ((FilterOutputStream) this).out.write(i5);
        this.f15793d++;
    }
}
