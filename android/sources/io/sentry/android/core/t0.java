package io.sentry.android.core;

import android.content.Context;
import java.io.File;
import java.io.FileOutputStream;
import java.io.RandomAccessFile;
import java.nio.charset.Charset;

/* loaded from: classes3.dex */
public abstract class t0 {
    public static String a;

    /* renamed from: b, reason: collision with root package name */
    public static final Charset f11330b = Charset.forName("UTF-8");

    /* renamed from: c, reason: collision with root package name */
    public static final io.sentry.util.a f11331c = new io.sentry.util.a();

    public static String a(Context context) {
        io.sentry.r a10 = f11331c.a();
        try {
            if (a == null) {
                File file = new File(context.getFilesDir(), "INSTALLATION");
                try {
                    boolean exists = file.exists();
                    Charset charset = f11330b;
                    if (!exists) {
                        FileOutputStream fileOutputStream = new FileOutputStream(file);
                        try {
                            String q5 = nt.a.q();
                            fileOutputStream.write(q5.getBytes(charset));
                            fileOutputStream.flush();
                            fileOutputStream.close();
                            a = q5;
                            a10.close();
                            return q5;
                        } finally {
                        }
                    }
                    RandomAccessFile randomAccessFile = new RandomAccessFile(file, "r");
                    try {
                        byte[] bArr = new byte[(int) randomAccessFile.length()];
                        randomAccessFile.readFully(bArr);
                        String str = new String(bArr, charset);
                        randomAccessFile.close();
                        a = str;
                    } finally {
                    }
                } catch (Throwable th2) {
                    throw new RuntimeException(th2);
                }
            }
            String str2 = a;
            a10.close();
            return str2;
        } catch (Throwable th3) {
            try {
                a10.close();
            } catch (Throwable th4) {
                th3.addSuppressed(th4);
            }
            throw th3;
        }
    }
}
