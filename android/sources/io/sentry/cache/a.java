package io.sentry.cache;

import io.sentry.SentryLevel;
import io.sentry.v5;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;

/* loaded from: classes3.dex */
public abstract class a {
    public static final Charset a = Charset.forName("UTF-8");

    public static void a(v5 v5Var, String str, String str2) {
        File b10 = b(v5Var, str);
        if (b10 == null) {
            v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, cannot delete from scope cache", new Object[0]);
            return;
        }
        File file = new File(b10, str2);
        v5Var.getLogger().u(SentryLevel.DEBUG, "Deleting %s from scope cache", str2);
        if (file.delete()) {
            return;
        }
        v5Var.getLogger().u(SentryLevel.INFO, "Failed to delete: %s", file.getAbsolutePath());
    }

    public static File b(v5 v5Var, String str) {
        String cacheDirPath = v5Var.getCacheDirPath();
        if (cacheDirPath == null) {
            return null;
        }
        File file = new File(cacheDirPath, str);
        file.mkdirs();
        return file;
    }

    public static Object c(v5 v5Var, String str, String str2, Class cls) {
        File b10 = b(v5Var, str);
        if (b10 == null) {
            v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, cannot read from scope cache", new Object[0]);
            return null;
        }
        File file = new File(b10, str2);
        if (!file.exists()) {
            v5Var.getLogger().u(SentryLevel.DEBUG, "No entry stored for %s", str2);
            return null;
        }
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), a));
            try {
                Object c6 = v5Var.getSerializer().c(bufferedReader, cls);
                bufferedReader.close();
                return c6;
            } finally {
            }
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Error reading entity from scope cache: %s", str2);
            return null;
        }
    }

    public static void d(v5 v5Var, Object obj, String str, String str2) {
        File b10 = b(v5Var, str);
        if (b10 == null) {
            v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, cannot store in scope cache", new Object[0]);
            return;
        }
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(new File(b10, str2));
            try {
                BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(fileOutputStream, a));
                try {
                    v5Var.getSerializer().a(obj, bufferedWriter);
                    bufferedWriter.close();
                    fileOutputStream.close();
                } finally {
                }
            } finally {
            }
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Error persisting entity: %s", str2);
        }
    }
}
