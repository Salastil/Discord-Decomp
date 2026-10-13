package io.sentry.android.core.cache;

import android.os.SystemClock;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.internal.util.d;
import io.sentry.android.core.k1;
import io.sentry.android.core.performance.f;
import io.sentry.android.core.performance.g;
import io.sentry.android.core.y;
import io.sentry.cache.c;
import io.sentry.r6;
import io.sentry.v5;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.Arrays;
import java.util.List;
import m3.n;
import s4.h;

/* loaded from: classes3.dex */
public final class b extends c {
    public static final List I = Arrays.asList(new a(y.class, "ANR", "last_anr_report", new i7.a(24)), new a(k1.class, "Tombstone", "last_tombstone_report", new i7.a(25)));
    public final d H;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(SentryAndroidOptions sentryAndroidOptions) {
        super(sentryAndroidOptions, r0, sentryAndroidOptions.getMaxCacheItems());
        String cacheDirPath = sentryAndroidOptions.getCacheDirPath();
        d9.a.L(cacheDirPath, "cacheDirPath must not be null");
        this.H = d.f11221d;
    }

    public static Long k(v5 v5Var, String str, String str2) {
        String cacheDirPath = v5Var.getCacheDirPath();
        d9.a.L(cacheDirPath, "Cache dir path should be set for getting " + str2 + "s reported");
        File file = new File(cacheDirPath, str);
        try {
            String H0 = n.H0(file);
            if (H0 != null && !H0.equals("null")) {
                return Long.valueOf(Long.parseLong(H0.trim()));
            }
            return null;
        } catch (Throwable th2) {
            if (th2 instanceof FileNotFoundException) {
                v5Var.getLogger().u(SentryLevel.DEBUG, h.f("Last ", str2, " marker does not exist. %s."), file.getAbsolutePath());
                return null;
            }
            v5Var.getLogger().k(SentryLevel.ERROR, h.f("Error reading last ", str2, " marker"), th2);
            return null;
        }
    }

    @Override // io.sentry.cache.c, io.sentry.cache.d
    public final boolean t(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        Long valueOf;
        boolean t5 = super.t(cVar, hint);
        v5 v5Var = this.f11431d;
        SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) v5Var;
        g gVar = f.b().f11292v;
        if (r6.class.isInstance(hint.b("sentry:typeCheckHint")) && gVar.c()) {
            this.H.getClass();
            long uptimeMillis = SystemClock.uptimeMillis() - gVar.f11298i;
            if (uptimeMillis <= sentryAndroidOptions.getStartupCrashDurationThresholdMillis()) {
                ILogger logger = sentryAndroidOptions.getLogger();
                SentryLevel sentryLevel = SentryLevel.DEBUG;
                logger.u(sentryLevel, "Startup Crash detected %d milliseconds after SDK init. Writing a startup crash marker file to disk.", Long.valueOf(uptimeMillis));
                String outboxPath = v5Var.getOutboxPath();
                if (outboxPath == null) {
                    v5Var.getLogger().u(sentryLevel, "Outbox path is null, the startup crash marker file will not be written", new Object[0]);
                } else {
                    try {
                        new File(outboxPath, "startup_crash").createNewFile();
                    } catch (Throwable th2) {
                        v5Var.getLogger().k(SentryLevel.ERROR, "Error writing the startup crash marker file to the disk", th2);
                    }
                }
            }
        }
        for (a aVar : I) {
            Class cls = aVar.a;
            bc.a aVar2 = new bc.a(aVar, sentryAndroidOptions, this, 9);
            Object b10 = hint.b("sentry:typeCheckHint");
            if (cls.isInstance(hint.b("sentry:typeCheckHint")) && b10 != null) {
                a aVar3 = (a) aVar2.f2769e;
                SentryAndroidOptions sentryAndroidOptions2 = (SentryAndroidOptions) aVar2.f2770i;
                b bVar = (b) aVar2.f2771v;
                switch (aVar3.f11109d.f10463d) {
                    case 24:
                        valueOf = Long.valueOf(((y) b10).f11355v);
                        break;
                    default:
                        valueOf = Long.valueOf(((k1) b10).f11263v);
                        break;
                }
                ILogger logger2 = sentryAndroidOptions2.getLogger();
                SentryLevel sentryLevel2 = SentryLevel.DEBUG;
                String str = aVar3.f11107b;
                logger2.u(sentryLevel2, "Writing last reported %s marker with timestamp %d", str, valueOf);
                String str2 = aVar3.f11108c;
                v5 v5Var2 = bVar.f11431d;
                String cacheDirPath = v5Var2.getCacheDirPath();
                if (cacheDirPath == null) {
                    v5Var2.getLogger().u(sentryLevel2, h.f("Cache dir path is null, the ", str, " marker will not be written"), new Object[0]);
                } else {
                    try {
                        FileOutputStream fileOutputStream = new FileOutputStream(new File(cacheDirPath, str2));
                        try {
                            fileOutputStream.write(String.valueOf(valueOf).getBytes(c.F));
                            fileOutputStream.flush();
                            fileOutputStream.close();
                        } catch (Throwable th3) {
                            try {
                                fileOutputStream.close();
                            } catch (Throwable th4) {
                                th3.addSuppressed(th4);
                            }
                            throw th3;
                        }
                    } catch (Throwable th5) {
                        v5Var2.getLogger().k(SentryLevel.ERROR, h.f("Error writing the ", str, " marker to the disk"), th5);
                    }
                }
            }
        }
        return t5;
    }
}
