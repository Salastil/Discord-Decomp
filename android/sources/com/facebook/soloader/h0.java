package com.facebook.soloader;

import android.util.Log;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;

/* loaded from: classes3.dex */
public abstract class h0 implements Closeable {
    public static void c(q qVar, byte[] bArr, File file) {
        RandomAccessFile randomAccessFile;
        int read;
        StringBuilder sb2 = new StringBuilder("extracting DSO ");
        g0 g0Var = (g0) qVar.f5123e;
        InputStream inputStream = (InputStream) qVar.f5124i;
        sb2.append(g0Var.f5099d);
        String sb3 = sb2.toString();
        if (r.f("fb-UnpackingSoSource", 4)) {
            Log.i("fb-UnpackingSoSource", sb3);
        }
        File file2 = new File(file, g0Var.f5099d);
        try {
            try {
                RandomAccessFile randomAccessFile2 = new RandomAccessFile(file2, "rw");
                try {
                    int available = inputStream.available();
                    if (available > 1) {
                        randomAccessFile = randomAccessFile2;
                        try {
                            SysUtil$LollipopSysdeps.fallocateIfSupported(randomAccessFile2.getFD(), available);
                        } catch (Throwable th2) {
                            th = th2;
                            Throwable th3 = th;
                            try {
                                randomAccessFile.close();
                                throw th3;
                            } catch (Throwable th4) {
                                th3.addSuppressed(th4);
                                throw th3;
                            }
                        }
                    } else {
                        randomAccessFile = randomAccessFile2;
                    }
                    int i5 = 0;
                    while (i5 < Integer.MAX_VALUE && (read = inputStream.read(bArr, 0, Math.min(bArr.length, Integer.MAX_VALUE - i5))) != -1) {
                        randomAccessFile.write(bArr, 0, read);
                        i5 += read;
                    }
                    randomAccessFile.setLength(randomAccessFile.getFilePointer());
                    if (!file2.setExecutable(true, false)) {
                        throw new IOException("cannot make file executable: " + file2);
                    }
                    randomAccessFile.close();
                    if (!file2.exists() || file2.setWritable(false)) {
                        return;
                    }
                    Log.e("SoLoader", "Error removing " + file2 + " write permission from directory " + file + " (writable: " + file.canWrite() + ")");
                } catch (Throwable th5) {
                    th = th5;
                    randomAccessFile = randomAccessFile2;
                }
            } catch (IOException e9) {
                Log.e("fb-UnpackingSoSource", "error extracting dso  " + file2 + " due to: " + e9);
                c0.b(file2);
                throw e9;
            }
        } catch (Throwable th6) {
            if (file2.exists() && !file2.setWritable(false)) {
                Log.e("SoLoader", "Error removing " + file2 + " write permission from directory " + file + " (writable: " + file.canWrite() + ")");
            }
            throw th6;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    public abstract g0[] f();

    public abstract void g(File file);
}
