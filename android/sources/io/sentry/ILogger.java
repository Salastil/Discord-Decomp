package io.sentry;

/* loaded from: classes3.dex */
public interface ILogger {
    void i(SentryLevel sentryLevel, Throwable th2, String str, Object... objArr);

    void k(SentryLevel sentryLevel, String str, Throwable th2);

    void u(SentryLevel sentryLevel, String str, Object... objArr);

    boolean w(SentryLevel sentryLevel);
}
