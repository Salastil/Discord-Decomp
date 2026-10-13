package n2;

import android.media.MediaDataSource;
import java.io.IOException;

/* loaded from: classes.dex */
public final class a extends MediaDataSource {

    /* renamed from: d, reason: collision with root package name */
    public long f14731d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g f14732e;

    public a(g gVar) {
        this.f14732e = gVar;
    }

    @Override // android.media.MediaDataSource
    public final long getSize() {
        return -1L;
    }

    @Override // android.media.MediaDataSource
    public final int readAt(long j, byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        if (j < 0) {
            return -1;
        }
        try {
            long j5 = this.f14731d;
            g gVar = this.f14732e;
            if (j5 != j) {
                if (j5 >= 0 && j >= j5 + gVar.f14733d.available()) {
                    return -1;
                }
                gVar.f(j);
                this.f14731d = j;
            }
            if (i6 > gVar.f14733d.available()) {
                i6 = gVar.f14733d.available();
            }
            int read = gVar.read(bArr, i5, i6);
            if (read >= 0) {
                this.f14731d += read;
                return read;
            }
        } catch (IOException unused) {
        }
        this.f14731d = -1L;
        return -1;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }
}
