package ie;

import android.net.Uri;
import android.text.TextUtils;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.RandomAccessFile;

/* loaded from: classes3.dex */
public final class z extends h {
    public boolean E;

    /* renamed from: w, reason: collision with root package name */
    public RandomAccessFile f10777w;

    /* renamed from: x, reason: collision with root package name */
    public Uri f10778x;

    /* renamed from: y, reason: collision with root package name */
    public long f10779y;

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.f10778x = null;
        try {
            try {
                RandomAccessFile randomAccessFile = this.f10777w;
                if (randomAccessFile != null) {
                    randomAccessFile.close();
                }
            } catch (IOException e9) {
                throw new y(2000, e9);
            }
        } finally {
            this.f10777w = null;
            if (this.E) {
                this.E = false;
                c();
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0088, code lost:
    
        if (r1 != false) goto L39;
     */
    @Override // com.google.android.exoplayer2.upstream.DataSource
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long o(p pVar) {
        boolean b10;
        Uri uri = pVar.a;
        long j = pVar.f10715f;
        this.f10778x = uri;
        d();
        int i5 = 2006;
        try {
            String path = uri.getPath();
            path.getClass();
            RandomAccessFile randomAccessFile = new RandomAccessFile(path, "r");
            this.f10777w = randomAccessFile;
            try {
                randomAccessFile.seek(j);
                long j5 = pVar.f10716g;
                if (j5 == -1) {
                    j5 = this.f10777w.length() - j;
                }
                this.f10779y = j5;
                if (j5 < 0) {
                    throw new y(null, null, 2008);
                }
                this.E = true;
                e(pVar);
                return this.f10779y;
            } catch (IOException e9) {
                throw new y(2000, e9);
            }
        } catch (FileNotFoundException e10) {
            if (TextUtils.isEmpty(uri.getQuery()) && TextUtils.isEmpty(uri.getFragment())) {
                if (ke.d0.a >= 21) {
                    b10 = x.b(e10.getCause());
                }
                i5 = 2005;
                throw new y(i5, e10);
            }
            String path2 = uri.getPath();
            String query = uri.getQuery();
            String fragment = uri.getFragment();
            StringBuilder t5 = a3.e.t("uri has query and/or fragment, which are not supported. Did you call Uri.parse() on a string containing '?' or '#'? Use Uri.fromFile(new File(path)) to avoid this. path=", path2, ",query=", query, ",fragment=");
            t5.append(fragment);
            throw new y(t5.toString(), e10, 1004);
        } catch (SecurityException e11) {
            throw new y(2006, e11);
        } catch (RuntimeException e12) {
            throw new y(2000, e12);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        long j = this.f10779y;
        if (j == 0) {
            return -1;
        }
        try {
            RandomAccessFile randomAccessFile = this.f10777w;
            int i10 = ke.d0.a;
            int read = randomAccessFile.read(bArr, i5, (int) Math.min(j, i6));
            if (read > 0) {
                this.f10779y -= read;
                b(read);
            }
            return read;
        } catch (IOException e9) {
            throw new y(2000, e9);
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f10778x;
    }
}
