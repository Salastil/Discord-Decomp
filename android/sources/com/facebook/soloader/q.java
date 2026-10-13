package com.facebook.soloader;

import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.nio.channels.FileLock;

/* loaded from: classes3.dex */
public final class q implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5122d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final Object f5123e;

    /* renamed from: i, reason: collision with root package name */
    public final AutoCloseable f5124i;

    public q(File file) {
        FileOutputStream fileOutputStream = new FileOutputStream(file);
        this.f5123e = fileOutputStream;
        try {
            FileLock lock = fileOutputStream.getChannel().lock();
            if (lock == null) {
                fileOutputStream.close();
            }
            this.f5124i = lock;
        } catch (Throwable th2) {
            ((FileOutputStream) this.f5123e).close();
            throw th2;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f5122d) {
            case 0:
                FileOutputStream fileOutputStream = (FileOutputStream) this.f5123e;
                try {
                    FileLock fileLock = (FileLock) this.f5124i;
                    if (fileLock != null) {
                        fileLock.release();
                    }
                    return;
                } finally {
                    fileOutputStream.close();
                }
            default:
                ((InputStream) this.f5124i).close();
                return;
        }
    }

    public q(g0 g0Var, InputStream inputStream) {
        this.f5123e = g0Var;
        this.f5124i = inputStream;
    }
}
