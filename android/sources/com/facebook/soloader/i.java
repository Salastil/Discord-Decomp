package com.facebook.soloader;

import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* loaded from: classes3.dex */
public final class i implements g {

    /* renamed from: d, reason: collision with root package name */
    public InputStream f5104d;

    /* renamed from: e, reason: collision with root package name */
    public final ZipEntry f5105e;

    /* renamed from: i, reason: collision with root package name */
    public final ZipFile f5106i;

    /* renamed from: v, reason: collision with root package name */
    public final long f5107v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f5108w = true;

    /* renamed from: x, reason: collision with root package name */
    public long f5109x = 0;

    public i(ZipFile zipFile, ZipEntry zipEntry) {
        this.f5106i = zipFile;
        this.f5105e = zipEntry;
        this.f5107v = zipEntry.getSize();
        InputStream inputStream = zipFile.getInputStream(zipEntry);
        this.f5104d = inputStream;
        if (inputStream != null) {
            return;
        }
        throw new IOException(zipEntry.getName() + "'s InputStream is null");
    }

    @Override // java.nio.channels.Channel, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        InputStream inputStream = this.f5104d;
        if (inputStream != null) {
            inputStream.close();
            this.f5108w = false;
        }
    }

    @Override // java.nio.channels.Channel
    public final boolean isOpen() {
        return this.f5108w;
    }

    @Override // com.facebook.soloader.g
    public final int k(long j, ByteBuffer byteBuffer) {
        if (this.f5104d == null) {
            throw new IOException("InputStream is null");
        }
        int remaining = byteBuffer.remaining();
        long j5 = this.f5107v;
        long j7 = j5 - j;
        if (j7 <= 0) {
            return -1;
        }
        int i5 = (int) j7;
        if (remaining > i5) {
            remaining = i5;
        }
        InputStream inputStream = this.f5104d;
        ZipEntry zipEntry = this.f5105e;
        if (inputStream == null) {
            throw new IOException(zipEntry.getName() + "'s InputStream is null");
        }
        long j10 = this.f5109x;
        if (j != j10) {
            if (j > j5) {
                j = j5;
            }
            if (j >= j10) {
                inputStream.skip(j - j10);
            } else {
                inputStream.close();
                InputStream inputStream2 = this.f5106i.getInputStream(zipEntry);
                this.f5104d = inputStream2;
                if (inputStream2 == null) {
                    throw new IOException(zipEntry.getName() + "'s InputStream is null");
                }
                inputStream2.skip(j);
            }
            this.f5109x = j;
        }
        if (byteBuffer.hasArray()) {
            this.f5104d.read(byteBuffer.array(), 0, remaining);
            byteBuffer.position(byteBuffer.position() + remaining);
        } else {
            byte[] bArr = new byte[remaining];
            this.f5104d.read(bArr, 0, remaining);
            byteBuffer.put(bArr, 0, remaining);
        }
        this.f5109x += remaining;
        return remaining;
    }

    @Override // java.nio.channels.ReadableByteChannel
    public final int read(ByteBuffer byteBuffer) {
        return k(this.f5109x, byteBuffer);
    }

    @Override // java.nio.channels.WritableByteChannel
    public final int write(ByteBuffer byteBuffer) {
        throw new UnsupportedOperationException("ElfZipFileChannel doesn't support write");
    }
}
