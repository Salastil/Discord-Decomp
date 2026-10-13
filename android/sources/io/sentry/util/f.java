package io.sentry.util;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.v5;

/* loaded from: classes3.dex */
public final class f {
    public static boolean a(v5 v5Var, String str) {
        return b(str, v5Var != null ? v5Var.getLogger() : null);
    }

    public static boolean b(String str, ILogger iLogger) {
        return c(str, iLogger) != null;
    }

    public static Class c(String str, ILogger iLogger) {
        try {
            return Class.forName(str);
        } catch (ClassNotFoundException unused) {
            if (iLogger == null) {
                return null;
            }
            iLogger.u(SentryLevel.INFO, "Class not available: ".concat(str), new Object[0]);
            return null;
        } catch (UnsatisfiedLinkError e9) {
            if (iLogger == null) {
                return null;
            }
            iLogger.k(SentryLevel.ERROR, "Failed to load (UnsatisfiedLinkError) ".concat(str), e9);
            return null;
        } catch (Throwable th2) {
            if (iLogger == null) {
                return null;
            }
            iLogger.k(SentryLevel.ERROR, "Failed to initialize ".concat(str), th2);
            return null;
        }
    }
}
