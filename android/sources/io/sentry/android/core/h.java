package io.sentry.android.core;

import android.os.SystemClock;
import android.system.Os;
import android.system.OsConstants;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.a3;
import java.io.File;
import java.io.IOException;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class h implements io.sentry.u0 {

    /* renamed from: g, reason: collision with root package name */
    public final ILogger f11157g;
    public long a = 0;

    /* renamed from: b, reason: collision with root package name */
    public long f11152b = 0;

    /* renamed from: c, reason: collision with root package name */
    public long f11153c = 1;

    /* renamed from: d, reason: collision with root package name */
    public long f11154d = 1;

    /* renamed from: e, reason: collision with root package name */
    public double f11155e = 1.0E9d / 1;

    /* renamed from: f, reason: collision with root package name */
    public final File f11156f = new File("/proc/self/stat");

    /* renamed from: h, reason: collision with root package name */
    public boolean f11158h = false;

    /* renamed from: i, reason: collision with root package name */
    public final Pattern f11159i = Pattern.compile("[\n\t\r ]");

    public h(ILogger iLogger) {
        d9.a.L(iLogger, "Logger is required.");
        this.f11157g = iLogger;
    }

    @Override // io.sentry.u0
    public final void a(a3 a3Var) {
        if (this.f11158h) {
            long elapsedRealtimeNanos = SystemClock.elapsedRealtimeNanos();
            long j = elapsedRealtimeNanos - this.a;
            this.a = elapsedRealtimeNanos;
            long b10 = b();
            long j5 = b10 - this.f11152b;
            this.f11152b = b10;
            a3Var.a = Double.valueOf(((j5 / j) / this.f11154d) * 100.0d);
        }
    }

    public final long b() {
        String str;
        ILogger iLogger = this.f11157g;
        try {
            str = m3.n.H0(this.f11156f);
        } catch (IOException e9) {
            this.f11158h = false;
            iLogger.k(SentryLevel.WARNING, "Unable to read /proc/self/stat file. Disabling cpu collection.", e9);
            str = null;
        }
        if (str != null) {
            String[] split = this.f11159i.split(str.trim());
            try {
                long parseLong = Long.parseLong(split[13]);
                long parseLong2 = Long.parseLong(split[14]);
                return (long) ((parseLong + parseLong2 + Long.parseLong(split[15]) + Long.parseLong(split[16])) * this.f11155e);
            } catch (ArrayIndexOutOfBoundsException | NumberFormatException e10) {
                iLogger.k(SentryLevel.ERROR, "Error parsing /proc/self/stat file.", e10);
            }
        }
        return 0L;
    }

    @Override // io.sentry.u0
    public final void c() {
        this.f11158h = true;
        this.f11153c = Os.sysconf(OsConstants._SC_CLK_TCK);
        this.f11154d = Os.sysconf(OsConstants._SC_NPROCESSORS_CONF);
        this.f11155e = 1.0E9d / this.f11153c;
        this.f11152b = b();
    }
}
