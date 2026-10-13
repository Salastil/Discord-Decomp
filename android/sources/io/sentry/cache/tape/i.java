package io.sentry.cache.tape;

import androidx.recyclerview.widget.RecyclerView;
import java.io.Closeable;
import java.io.EOFException;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class i implements Closeable, Iterable {
    public static final byte[] H = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
    public final int F;
    public boolean G;

    /* renamed from: d, reason: collision with root package name */
    public RandomAccessFile f11455d;

    /* renamed from: e, reason: collision with root package name */
    public final File f11456e;

    /* renamed from: i, reason: collision with root package name */
    public long f11457i;

    /* renamed from: v, reason: collision with root package name */
    public int f11458v;

    /* renamed from: w, reason: collision with root package name */
    public g f11459w;

    /* renamed from: x, reason: collision with root package name */
    public g f11460x;

    /* renamed from: y, reason: collision with root package name */
    public final byte[] f11461y = new byte[32];
    public int E = 0;

    public i(File file, RandomAccessFile randomAccessFile, int i5) {
        this.f11456e = file;
        this.f11455d = randomAccessFile;
        this.F = i5;
        V();
    }

    public static int X(byte[] bArr, int i5) {
        return ((bArr[i5] & 255) << 24) + ((bArr[i5 + 1] & 255) << 16) + ((bArr[i5 + 2] & 255) << 8) + (bArr[i5 + 3] & 255);
    }

    public static long b0(byte[] bArr, int i5) {
        return ((bArr[i5] & 255) << 56) + ((bArr[i5 + 1] & 255) << 48) + ((bArr[i5 + 2] & 255) << 40) + ((bArr[i5 + 3] & 255) << 32) + ((bArr[i5 + 4] & 255) << 24) + ((bArr[i5 + 5] & 255) << 16) + ((bArr[i5 + 6] & 255) << 8) + (bArr[i5 + 7] & 255);
    }

    public static RandomAccessFile i(File file) {
        if (!file.exists()) {
            File file2 = new File(file.getPath() + ".tmp");
            RandomAccessFile randomAccessFile = new RandomAccessFile(file2, "rwd");
            try {
                randomAccessFile.setLength(4096L);
                randomAccessFile.seek(0L);
                randomAccessFile.writeInt(-2147483647);
                randomAccessFile.writeLong(4096L);
                randomAccessFile.close();
                if (!file2.renameTo(file)) {
                    throw new IOException("Rename failed!");
                }
            } catch (Throwable th2) {
                randomAccessFile.close();
                throw th2;
            }
        }
        return new RandomAccessFile(file, "rwd");
    }

    public static void p0(byte[] bArr, int i5, int i6) {
        bArr[i5] = (byte) (i6 >> 24);
        bArr[i5 + 1] = (byte) (i6 >> 16);
        bArr[i5 + 2] = (byte) (i6 >> 8);
        bArr[i5 + 3] = (byte) i6;
    }

    public static void q0(long j, byte[] bArr, int i5) {
        bArr[i5] = (byte) (j >> 56);
        bArr[i5 + 1] = (byte) (j >> 48);
        bArr[i5 + 2] = (byte) (j >> 40);
        bArr[i5 + 3] = (byte) (j >> 32);
        bArr[i5 + 4] = (byte) (j >> 24);
        bArr[i5 + 5] = (byte) (j >> 16);
        bArr[i5 + 6] = (byte) (j >> 8);
        bArr[i5 + 7] = (byte) j;
    }

    public final void V() {
        this.f11455d.seek(0L);
        RandomAccessFile randomAccessFile = this.f11455d;
        byte[] bArr = this.f11461y;
        randomAccessFile.readFully(bArr);
        this.f11457i = b0(bArr, 4);
        this.f11458v = X(bArr, 12);
        long b02 = b0(bArr, 16);
        long b03 = b0(bArr, 24);
        if (this.f11457i <= this.f11455d.length()) {
            if (this.f11457i <= 32) {
                throw new IOException(a3.e.m(new StringBuilder("File is corrupt; length stored in header ("), this.f11457i, ") is invalid."));
            }
            this.f11459w = x(b02);
            this.f11460x = x(b03);
            return;
        }
        throw new IOException("File is truncated. Expected length: " + this.f11457i + ", Actual length: " + this.f11455d.length());
    }

    public final void clear() {
        if (this.G) {
            throw new IllegalStateException("closed");
        }
        o0(4096L, 0, 0L, 0L);
        this.f11455d.seek(32L);
        this.f11455d.write(H, 0, 4064);
        this.f11458v = 0;
        g gVar = g.f11449c;
        this.f11459w = gVar;
        this.f11460x = gVar;
        if (this.f11457i > 4096) {
            this.f11455d.setLength(4096L);
            this.f11455d.getChannel().force(true);
        }
        this.f11457i = 4096L;
        this.E++;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.G = true;
        this.f11455d.close();
    }

    public final void d0(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException(s4.h.e(i5, "Cannot remove negative (", ") number of elements."));
        }
        if (i5 == 0) {
            return;
        }
        int i6 = this.f11458v;
        if (i5 == i6) {
            clear();
            return;
        }
        if (i6 == 0) {
            throw new NoSuchElementException();
        }
        if (i5 > i6) {
            throw new IllegalArgumentException(k0.d.m(a3.e.r(i5, "Cannot remove more elements (", ") than present in queue ("), this.f11458v, ")."));
        }
        g gVar = this.f11459w;
        long j = gVar.a;
        int i10 = gVar.f11450b;
        long j5 = j;
        long j7 = 0;
        for (int i11 = 0; i11 < i5; i11++) {
            j7 += i10 + 4;
            j5 = n0(j5 + 4 + i10);
            byte[] bArr = this.f11461y;
            if (!l0(j5, bArr, 4)) {
                return;
            }
            i10 = X(bArr, 0);
        }
        o0(this.f11457i, this.f11458v - i5, j5, this.f11460x.a);
        this.f11458v -= i5;
        this.E++;
        this.f11459w = new g(j5, i10);
        while (j7 > 0) {
            int min = (int) Math.min(j7, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
            m0(j, H, min);
            long j10 = min;
            j7 -= j10;
            j += j10;
        }
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new h(this);
    }

    public final void j0() {
        this.f11455d.close();
        File file = this.f11456e;
        file.delete();
        this.f11455d = i(file);
        V();
    }

    public final boolean l0(long j, byte[] bArr, int i5) {
        try {
            long n02 = n0(j);
            long j5 = i5 + n02;
            long j7 = this.f11457i;
            if (j5 <= j7) {
                this.f11455d.seek(n02);
                this.f11455d.readFully(bArr, 0, i5);
                return true;
            }
            int i6 = (int) (j7 - n02);
            this.f11455d.seek(n02);
            this.f11455d.readFully(bArr, 0, i6);
            this.f11455d.seek(32L);
            this.f11455d.readFully(bArr, i6, i5 - i6);
            return true;
        } catch (EOFException unused) {
            j0();
            return false;
        } catch (IOException e9) {
            throw e9;
        } catch (Throwable unused2) {
            j0();
            return false;
        }
    }

    public final void m0(long j, byte[] bArr, int i5) {
        long n02 = n0(j);
        long j5 = i5 + n02;
        long j7 = this.f11457i;
        if (j5 <= j7) {
            this.f11455d.seek(n02);
            this.f11455d.write(bArr, 0, i5);
            return;
        }
        int i6 = (int) (j7 - n02);
        this.f11455d.seek(n02);
        this.f11455d.write(bArr, 0, i6);
        this.f11455d.seek(32L);
        this.f11455d.write(bArr, i6, i5 - i6);
    }

    public final long n0(long j) {
        long j5 = this.f11457i;
        return j < j5 ? j : (j + 32) - j5;
    }

    public final void o0(long j, int i5, long j5, long j7) {
        this.f11455d.seek(0L);
        byte[] bArr = this.f11461y;
        p0(bArr, 0, -2147483647);
        q0(j, bArr, 4);
        p0(bArr, 12, i5);
        q0(j5, bArr, 16);
        q0(j7, bArr, 24);
        this.f11455d.write(bArr, 0, 32);
    }

    public final String toString() {
        return "QueueFile{file=" + this.f11456e + ", zero=true, length=" + this.f11457i + ", size=" + this.f11458v + ", first=" + this.f11459w + ", last=" + this.f11460x + '}';
    }

    public final g x(long j) {
        if (j != 0) {
            byte[] bArr = this.f11461y;
            if (l0(j, bArr, 4)) {
                return new g(j, X(bArr, 0));
            }
        }
        return g.f11449c;
    }
}
