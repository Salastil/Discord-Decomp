package io.sentry;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.Charset;
import java.util.Date;

/* loaded from: classes3.dex */
public final class b3 implements Runnable {

    /* renamed from: e, reason: collision with root package name */
    public static final Charset f11394e = Charset.forName("UTF-8");

    /* renamed from: d, reason: collision with root package name */
    public final v5 f11395d;

    public b3(v5 v5Var) {
        this.f11395d = v5Var;
    }

    public final Date a(File file) {
        v5 v5Var = this.f11395d;
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), f11394e));
            try {
                String readLine = bufferedReader.readLine();
                v5Var.getLogger().u(SentryLevel.DEBUG, "Crash marker file has %s timestamp.", readLine);
                Date t5 = ki.b.t(readLine);
                bufferedReader.close();
                return t5;
            } finally {
            }
        } catch (IOException e9) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Error reading the crash marker file.", e9);
            return null;
        } catch (IllegalArgumentException e10) {
            v5Var.getLogger().i(SentryLevel.ERROR, e10, "Error converting the crash timestamp.", new Object[0]);
            return null;
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        BufferedReader bufferedReader;
        v5 v5Var = this.f11395d;
        String cacheDirPath = v5Var.getCacheDirPath();
        if (cacheDirPath == null) {
            v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, not finalizing the previous session.", new Object[0]);
            return;
        }
        if (!v5Var.isEnableAutoSessionTracking()) {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Session tracking is disabled, bailing from previous session finalizer.", new Object[0]);
            return;
        }
        io.sentry.cache.d envelopeDiskCache = v5Var.getEnvelopeDiskCache();
        if ((envelopeDiskCache instanceof io.sentry.cache.c) && !((io.sentry.cache.c) envelopeDiskCache).i()) {
            v5Var.getLogger().u(SentryLevel.WARNING, "Timed out waiting to flush previous session to its own file in session finalizer.", new Object[0]);
            return;
        }
        int i5 = io.sentry.cache.c.G;
        File file = new File(cacheDirPath, "previous_session.json");
        c1 serializer = v5Var.getSerializer();
        if (file.exists()) {
            v5Var.getLogger().u(SentryLevel.WARNING, "Current session is not ended, we'd need to end it.", new Object[0]);
            try {
                bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), f11394e));
            } catch (Throwable th2) {
                v5Var.getLogger().k(SentryLevel.ERROR, "Error processing previous session.", th2);
            }
            try {
                g6 g6Var = (g6) serializer.c(bufferedReader, g6.class);
                if (g6Var == null) {
                    v5Var.getLogger().u(SentryLevel.ERROR, "Stream from path %s resulted in a null envelope.", file.getAbsolutePath());
                } else {
                    File file2 = new File(v5Var.getCacheDirPath(), ".sentry-native/last_crash");
                    f6 f6Var = g6Var.f11573y;
                    f6 f6Var2 = f6.Crashed;
                    if (f6Var == f6Var2) {
                        h4 h4Var = h4.f11586d;
                        r a = h4Var.f11588c.a();
                        try {
                            h4Var.a = false;
                            h4Var.f11587b = null;
                            a.close();
                            h4Var.a(true);
                        } finally {
                        }
                    } else if (file2.exists()) {
                        v5Var.getLogger().u(SentryLevel.INFO, "Crash marker file exists, last Session is gonna be Crashed.", new Object[0]);
                        Date a10 = a(file2);
                        g6Var.d(f6Var2, null, true, null);
                        g6Var.b(a10);
                    } else if (g6Var.K == null) {
                        g6Var.b(ki.b.r());
                    }
                    if (file2.exists() && !file2.delete()) {
                        v5Var.getLogger().u(SentryLevel.ERROR, "Failed to delete the crash marker file. %s.", file2.getAbsolutePath());
                    }
                    c4.f().h(new io.sentry.internal.debugmeta.c((io.sentry.protocol.v) null, v5Var.getSdkVersion(), o4.d(serializer, g6Var)), new Hint());
                }
                bufferedReader.close();
                if (file.delete()) {
                    return;
                }
                v5Var.getLogger().u(SentryLevel.WARNING, "Failed to delete the previous session file.", new Object[0]);
            } finally {
            }
        }
    }
}
