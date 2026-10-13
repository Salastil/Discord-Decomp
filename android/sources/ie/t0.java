package ie;

import android.net.Uri;
import com.google.android.exoplayer2.upstream.DataSource;
import java.io.IOException;
import java.io.OutputStream;
import java.util.Map;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class t0 implements DataSource {

    /* renamed from: d, reason: collision with root package name */
    public final DataSource f10765d;

    /* renamed from: e, reason: collision with root package name */
    public final je.d f10766e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f10767i;

    /* renamed from: v, reason: collision with root package name */
    public long f10768v;

    public t0(DataSource dataSource, je.d dVar) {
        dataSource.getClass();
        this.f10765d = dataSource;
        this.f10766e = dVar;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        je.d dVar = this.f10766e;
        try {
            this.f10765d.close();
            if (this.f10767i) {
                this.f10767i = false;
                if (dVar.f12718d == null) {
                    return;
                }
                try {
                    dVar.a();
                } catch (IOException e9) {
                    throw new je.c(e9);
                }
            }
        } catch (Throwable th2) {
            if (this.f10767i) {
                this.f10767i = false;
                if (dVar.f12718d != null) {
                    try {
                        dVar.a();
                    } catch (IOException e10) {
                        throw new je.c(e10);
                    }
                }
            }
            throw th2;
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
        u0Var.getClass();
        this.f10765d.n(u0Var);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        long o6 = this.f10765d.o(pVar);
        this.f10768v = o6;
        if (o6 == 0) {
            return 0L;
        }
        if (pVar.f10716g == -1 && o6 != -1) {
            pVar = pVar.d(0L, o6);
        }
        int i5 = pVar.f10718i;
        this.f10767i = true;
        pVar.f10717h.getClass();
        long j = pVar.f10716g;
        je.d dVar = this.f10766e;
        if (j == -1 && (i5 & 2) == 2) {
            dVar.f12718d = null;
        } else {
            dVar.f12718d = pVar;
            dVar.f12719e = (i5 & 4) == 4 ? dVar.f12716b : LongCompanionObject.MAX_VALUE;
            dVar.f12723i = 0L;
            try {
                dVar.b(pVar);
            } catch (IOException e9) {
                throw new je.c(e9);
            }
        }
        return this.f10768v;
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (this.f10768v == 0) {
            return -1;
        }
        int read = this.f10765d.read(bArr, i5, i6);
        if (read > 0) {
            je.d dVar = this.f10766e;
            p pVar = dVar.f12718d;
            if (pVar != null) {
                int i10 = 0;
                while (i10 < read) {
                    try {
                        if (dVar.f12722h == dVar.f12719e) {
                            dVar.a();
                            dVar.b(pVar);
                        }
                        int min = (int) Math.min(read - i10, dVar.f12719e - dVar.f12722h);
                        OutputStream outputStream = dVar.f12721g;
                        int i11 = ke.d0.a;
                        outputStream.write(bArr, i5 + i10, min);
                        i10 += min;
                        long j = min;
                        dVar.f12722h += j;
                        dVar.f12723i += j;
                    } catch (IOException e9) {
                        throw new je.c(e9);
                    }
                }
            }
            long j5 = this.f10768v;
            if (j5 != -1) {
                this.f10768v = j5 - read;
            }
        }
        return read;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        return this.f10765d.s();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f10765d.x();
    }
}
