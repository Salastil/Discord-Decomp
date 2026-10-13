package th;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.util.Enumeration;

/* loaded from: classes3.dex */
public final class y0 extends InputStream {

    /* renamed from: d, reason: collision with root package name */
    public final Enumeration f18628d;

    /* renamed from: e, reason: collision with root package name */
    public FileInputStream f18629e;

    public y0(Enumeration enumeration) {
        this.f18628d = enumeration;
        c();
    }

    public final void c() {
        FileInputStream fileInputStream = this.f18629e;
        if (fileInputStream != null) {
            fileInputStream.close();
        }
        Enumeration enumeration = this.f18628d;
        if (enumeration.hasMoreElements()) {
            this.f18629e = new FileInputStream((File) enumeration.nextElement());
        } else {
            this.f18629e = null;
        }
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        super.close();
        FileInputStream fileInputStream = this.f18629e;
        if (fileInputStream != null) {
            fileInputStream.close();
            this.f18629e = null;
        }
    }

    @Override // java.io.InputStream
    public final int read() {
        while (true) {
            FileInputStream fileInputStream = this.f18629e;
            if (fileInputStream == null) {
                return -1;
            }
            int read = fileInputStream.read();
            if (read != -1) {
                return read;
            }
            c();
        }
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        if (this.f18629e == null) {
            return -1;
        }
        bArr.getClass();
        if (i5 < 0 || i6 < 0 || i6 > bArr.length - i5) {
            throw new IndexOutOfBoundsException();
        }
        if (i6 == 0) {
            return 0;
        }
        do {
            int read = this.f18629e.read(bArr, i5, i6);
            if (read > 0) {
                return read;
            }
            c();
        } while (this.f18629e != null);
        return -1;
    }
}
