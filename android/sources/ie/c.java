package ie;

import android.content.Context;
import android.content.res.AssetManager;
import android.net.Uri;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class c extends h {
    public long E;
    public boolean F;

    /* renamed from: w, reason: collision with root package name */
    public final AssetManager f10654w;

    /* renamed from: x, reason: collision with root package name */
    public Uri f10655x;

    /* renamed from: y, reason: collision with root package name */
    public InputStream f10656y;

    public c(Context context) {
        super(false);
        this.f10654w = context.getAssets();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.f10655x = null;
        try {
            try {
                InputStream inputStream = this.f10656y;
                if (inputStream != null) {
                    inputStream.close();
                }
            } catch (IOException e9) {
                throw new b(2000, e9);
            }
        } finally {
            this.f10656y = null;
            if (this.F) {
                this.F = false;
                c();
            }
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        try {
            Uri uri = pVar.a;
            long j = pVar.f10715f;
            this.f10655x = uri;
            String path = uri.getPath();
            path.getClass();
            if (path.startsWith("/android_asset/")) {
                path = path.substring(15);
            } else if (path.startsWith("/")) {
                path = path.substring(1);
            }
            d();
            InputStream open = this.f10654w.open(path, 1);
            this.f10656y = open;
            if (open.skip(j) < j) {
                throw new b(2008, null);
            }
            long j5 = pVar.f10716g;
            if (j5 != -1) {
                this.E = j5;
            } else {
                long available = this.f10656y.available();
                this.E = available;
                if (available == 2147483647L) {
                    this.E = -1L;
                }
            }
            this.F = true;
            e(pVar);
            return this.E;
        } catch (b e9) {
            throw e9;
        } catch (IOException e10) {
            throw new b(e10 instanceof FileNotFoundException ? 2005 : 2000, e10);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        long j = this.E;
        if (j != 0) {
            if (j != -1) {
                try {
                    i6 = (int) Math.min(j, i6);
                } catch (IOException e9) {
                    throw new b(2000, e9);
                }
            }
            InputStream inputStream = this.f10656y;
            int i10 = ke.d0.a;
            int read = inputStream.read(bArr, i5, i6);
            if (read != -1) {
                long j5 = this.E;
                if (j5 != -1) {
                    this.E = j5 - read;
                }
                b(read);
                return read;
            }
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f10655x;
    }
}
