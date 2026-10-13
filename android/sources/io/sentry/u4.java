package io.sentry;

import io.sentry.android.replay.BuildConfig;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArraySet;

/* loaded from: classes3.dex */
public final class u4 {

    /* renamed from: c, reason: collision with root package name */
    public static volatile u4 f12033c;

    /* renamed from: d, reason: collision with root package name */
    public static final io.sentry.util.a f12034d = new io.sentry.util.a();

    /* renamed from: e, reason: collision with root package name */
    public static volatile Boolean f12035e = null;

    /* renamed from: f, reason: collision with root package name */
    public static final io.sentry.util.a f12036f = new io.sentry.util.a();
    public final CopyOnWriteArraySet a = new CopyOnWriteArraySet();

    /* renamed from: b, reason: collision with root package name */
    public final CopyOnWriteArraySet f12037b = new CopyOnWriteArraySet();

    public static u4 d() {
        if (f12033c == null) {
            r a = f12034d.a();
            try {
                if (f12033c == null) {
                    f12033c = new u4();
                }
                a.close();
            } catch (Throwable th2) {
                try {
                    a.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        return f12033c;
    }

    public final void a(String str) {
        d9.a.L(str, "integration is required.");
        this.a.add(str);
    }

    public final void b(String str, String str2) {
        d9.a.L(str, "name is required.");
        d9.a.L(str2, "version is required.");
        this.f12037b.add(new io.sentry.protocol.w(str, str2));
        r a = f12036f.a();
        try {
            f12035e = null;
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final boolean c(ILogger iLogger) {
        Boolean bool = f12035e;
        if (bool != null) {
            return bool.booleanValue();
        }
        r a = f12036f.a();
        try {
            Iterator it = this.f12037b.iterator();
            boolean z5 = false;
            while (it.hasNext()) {
                io.sentry.protocol.w wVar = (io.sentry.protocol.w) it.next();
                if (wVar.f11897d.startsWith("maven:io.sentry:") && !BuildConfig.VERSION_NAME.equalsIgnoreCase(wVar.f11898e)) {
                    iLogger.u(SentryLevel.ERROR, "The Sentry SDK has been configured with mixed versions. Expected %s to match core SDK version %s but was %s", wVar.f11897d, BuildConfig.VERSION_NAME, wVar.f11898e);
                    z5 = true;
                }
            }
            if (z5) {
                SentryLevel sentryLevel = SentryLevel.ERROR;
                iLogger.u(sentryLevel, "^^^^^^^^^^^^^^^^^^^^^^^^^^^^", new Object[0]);
                iLogger.u(sentryLevel, "^^^^^^^^^^^^^^^^^^^^^^^^^^^^", new Object[0]);
                iLogger.u(sentryLevel, "^^^^^^^^^^^^^^^^^^^^^^^^^^^^", new Object[0]);
                iLogger.u(sentryLevel, "^^^^^^^^^^^^^^^^^^^^^^^^^^^^", new Object[0]);
            }
            f12035e = Boolean.valueOf(z5);
            a.close();
            return z5;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
