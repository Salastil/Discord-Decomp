package com.google.firebase.messaging;

import java.io.BufferedInputStream;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class d extends FilterInputStream {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6225d = 1;

    /* renamed from: e, reason: collision with root package name */
    public long f6226e;

    /* renamed from: i, reason: collision with root package name */
    public long f6227i;

    public d(InputStream inputStream) {
        super(inputStream);
        this.f6227i = -1L;
        this.f6226e = 1048577L;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public int available() {
        switch (this.f6225d) {
            case 0:
                return (int) Math.min(((FilterInputStream) this).in.available(), this.f6226e);
            default:
                return super.available();
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public synchronized void mark(int i5) {
        switch (this.f6225d) {
            case 0:
                synchronized (this) {
                    ((FilterInputStream) this).in.mark(i5);
                    this.f6227i = this.f6226e;
                }
                return;
            default:
                super.mark(i5);
                return;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read() {
        switch (this.f6225d) {
            case 0:
                if (this.f6226e == 0) {
                    return -1;
                }
                int read = ((FilterInputStream) this).in.read();
                if (read != -1) {
                    this.f6226e--;
                }
                return read;
            default:
                int read2 = super.read();
                if (read2 != -1) {
                    this.f6227i++;
                }
                return read2;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public synchronized void reset() {
        switch (this.f6225d) {
            case 0:
                synchronized (this) {
                    if (!((FilterInputStream) this).in.markSupported()) {
                        throw new IOException("Mark not supported");
                    }
                    if (this.f6227i == -1) {
                        throw new IOException("Mark not set");
                    }
                    ((FilterInputStream) this).in.reset();
                    this.f6226e = this.f6227i;
                }
                return;
            default:
                super.reset();
                return;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public long skip(long j) {
        switch (this.f6225d) {
            case 0:
                long skip = ((FilterInputStream) this).in.skip(Math.min(j, this.f6226e));
                this.f6226e -= skip;
                return skip;
            default:
                return super.skip(j);
        }
    }

    public d(BufferedInputStream bufferedInputStream, long j) {
        super(bufferedInputStream);
        this.f6226e = j;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        switch (this.f6225d) {
            case 0:
                long j = this.f6226e;
                if (j == 0) {
                    return -1;
                }
                int read = ((FilterInputStream) this).in.read(bArr, i5, (int) Math.min(i6, j));
                if (read != -1) {
                    this.f6226e -= read;
                }
                return read;
            default:
                int read2 = super.read(bArr, i5, i6);
                if (read2 != -1) {
                    this.f6227i += read2;
                }
                return read2;
        }
    }
}
