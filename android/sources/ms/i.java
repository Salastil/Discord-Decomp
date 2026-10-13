package ms;

import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PushbackInputStream;
import java.io.Reader;

/* loaded from: classes3.dex */
public final class i extends Reader {

    /* renamed from: d, reason: collision with root package name */
    public final PushbackInputStream f14602d;

    /* renamed from: e, reason: collision with root package name */
    public BufferedReader f14603e = null;

    public i(InputStream inputStream) {
        this.f14602d = new PushbackInputStream(inputStream, 3);
    }

    public final void c() {
        if (this.f14603e != null) {
            return;
        }
        byte[] bArr = new byte[3];
        PushbackInputStream pushbackInputStream = this.f14602d;
        int read = pushbackInputStream.read(bArr, 0, 3);
        if ((read != 3 || bArr[0] != -17 || bArr[1] != -69 || bArr[2] != -65) && read > 0) {
            pushbackInputStream.unread(bArr, 0, read);
        }
        this.f14603e = new BufferedReader(new InputStreamReader(pushbackInputStream, "UTF-8"));
    }

    @Override // java.io.Reader, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        BufferedReader bufferedReader = this.f14603e;
        if (bufferedReader == null) {
            this.f14602d.close();
        } else {
            bufferedReader.close();
        }
    }

    @Override // java.io.Reader
    public final int read(char[] cArr, int i5, int i6) {
        c();
        return this.f14603e.read(cArr, i5, i6);
    }

    @Override // java.io.Reader
    public final boolean ready() {
        c();
        return this.f14603e.ready();
    }
}
