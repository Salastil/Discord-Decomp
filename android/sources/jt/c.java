package jt;

import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import org.chromium.net.UploadDataProvider;
import org.chromium.net.UploadDataSink;

/* loaded from: classes.dex */
public final class c extends UploadDataProvider {

    /* renamed from: d, reason: collision with root package name */
    public volatile FileChannel f13100d;

    /* renamed from: e, reason: collision with root package name */
    public final b f13101e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f13102i = new Object();

    public c(b bVar) {
        this.f13101e = bVar;
    }

    public final FileChannel c() {
        if (this.f13100d == null) {
            synchronized (this.f13102i) {
                try {
                    if (this.f13100d == null) {
                        this.f13100d = this.f13101e.d();
                    }
                } finally {
                }
            }
        }
        return this.f13100d;
    }

    @Override // org.chromium.net.UploadDataProvider, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        FileChannel fileChannel = this.f13100d;
        if (fileChannel != null) {
            fileChannel.close();
        }
    }

    @Override // org.chromium.net.UploadDataProvider
    public final long getLength() {
        return c().size();
    }

    @Override // org.chromium.net.UploadDataProvider
    public final void read(UploadDataSink uploadDataSink, ByteBuffer byteBuffer) {
        if (!byteBuffer.hasRemaining()) {
            throw new IllegalStateException("Cronet passed a buffer with no bytes remaining");
        }
        FileChannel c6 = c();
        int i5 = 0;
        while (i5 == 0) {
            int read = c6.read(byteBuffer);
            if (read == -1) {
                break;
            } else {
                i5 += read;
            }
        }
        uploadDataSink.onReadSucceeded(false);
    }

    @Override // org.chromium.net.UploadDataProvider
    public final void rewind(UploadDataSink uploadDataSink) {
        c().position(0L);
        uploadDataSink.onRewindSucceeded();
    }
}
