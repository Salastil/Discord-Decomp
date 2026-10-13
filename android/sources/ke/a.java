package ke;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;

/* loaded from: classes3.dex */
public final class a extends OutputStream {

    /* renamed from: d, reason: collision with root package name */
    public final FileOutputStream f13273d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f13274e = false;

    public a(File file) {
        this.f13273d = new FileOutputStream(file);
    }

    @Override // java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        FileOutputStream fileOutputStream = this.f13273d;
        if (this.f13274e) {
            return;
        }
        this.f13274e = true;
        flush();
        try {
            fileOutputStream.getFD().sync();
        } catch (IOException e9) {
            b.O("AtomicFile", "Failed to sync file descriptor:", e9);
        }
        fileOutputStream.close();
    }

    @Override // java.io.OutputStream, java.io.Flushable
    public final void flush() {
        this.f13273d.flush();
    }

    @Override // java.io.OutputStream
    public final void write(int i5) {
        this.f13273d.write(i5);
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bArr) {
        this.f13273d.write(bArr);
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bArr, int i5, int i6) {
        this.f13273d.write(bArr, i5, i6);
    }
}
