package com.discord.crash_reporting;

import io.sentry.Hint;
import io.sentry.c4;
import io.sentry.x0;

/* loaded from: classes.dex */
class WebrtcCrashReporting {
    public static String reportWebrtcException(Throwable th2) {
        x0 f2 = c4.f();
        f2.getClass();
        f2.s(th2, new Hint());
        return th2.toString();
    }
}
