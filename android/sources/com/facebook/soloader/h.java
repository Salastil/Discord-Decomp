package com.facebook.soloader;

import java.io.File;
import java.io.FileInputStream;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;

/* loaded from: classes3.dex */
public final class h implements g {

    /* renamed from: d, reason: collision with root package name */
    public File f5101d;

    /* renamed from: e, reason: collision with root package name */
    public FileInputStream f5102e;

    /* renamed from: i, reason: collision with root package name */
    public FileChannel f5103i;

    @Override // java.nio.channels.Channel, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f5102e.close();
    }

    @Override // java.nio.channels.Channel
    public final boolean isOpen() {
        return this.f5103i.isOpen();
    }

    @Override // com.facebook.soloader.g
    public final int k(long j, ByteBuffer byteBuffer) {
        return this.f5103i.read(byteBuffer, j);
    }

    @Override // java.nio.channels.ReadableByteChannel
    public final int read(ByteBuffer byteBuffer) {
        return this.f5103i.read(byteBuffer);
    }

    @Override // java.nio.channels.WritableByteChannel
    public final int write(ByteBuffer byteBuffer) {
        return this.f5103i.write(byteBuffer);
    }
}
