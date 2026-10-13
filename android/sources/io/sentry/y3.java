package io.sentry;

/* loaded from: classes3.dex */
public interface y3 {
    static boolean y(String str, ILogger iLogger) {
        if (str != null && !str.isEmpty()) {
            return true;
        }
        iLogger.u(SentryLevel.INFO, "No cached dir path is defined in options.", new Object[0]);
        return false;
    }

    x3 k(x0 x0Var, v5 v5Var);
}
