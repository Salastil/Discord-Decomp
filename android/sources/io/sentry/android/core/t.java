package io.sentry.android.core;

import android.net.TrafficStats;
import android.util.Log;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.v5;

/* loaded from: classes3.dex */
public final class t implements io.sentry.d1, s0, ILogger, io.sentry.logger.b, io.sentry.metrics.b {

    /* renamed from: d, reason: collision with root package name */
    public static final t f11328d = new t();

    /* renamed from: e, reason: collision with root package name */
    public static final t f11329e = new t();

    @Override // io.sentry.d1
    public void a() {
        TrafficStats.clearThreadStatsTag();
    }

    @Override // io.sentry.d1
    public void b() {
        TrafficStats.setThreadStatsTag(61441);
    }

    @Override // io.sentry.logger.b
    public io.sentry.logger.a c(v5 v5Var, af.s sVar) {
        l lVar = new l(v5Var, sVar, 0);
        e0.f11119w.c(lVar);
        return lVar;
    }

    @Override // io.sentry.ILogger
    public void i(SentryLevel sentryLevel, Throwable th2, String str, Object... objArr) {
        if (objArr.length == 0) {
            k(sentryLevel, str, th2);
        } else {
            k(sentryLevel, String.format(str, objArr), th2);
        }
    }

    @Override // io.sentry.ILogger
    public void k(SentryLevel sentryLevel, String str, Throwable th2) {
        Log.wtf("Sentry", str, th2);
    }

    @Override // io.sentry.ILogger
    public void u(SentryLevel sentryLevel, String str, Object... objArr) {
        if (objArr.length == 0) {
            Log.println(7, "Sentry", str);
        } else {
            Log.println(7, "Sentry", String.format(str, objArr));
        }
    }

    @Override // io.sentry.ILogger
    public boolean w(SentryLevel sentryLevel) {
        return true;
    }

    @Override // io.sentry.metrics.b
    /* renamed from: c, reason: collision with other method in class */
    public io.sentry.metrics.a mo1279c(v5 v5Var, af.s sVar) {
        n nVar = new n(v5Var, sVar, 1);
        e0.f11119w.c(nVar);
        return nVar;
    }
}
