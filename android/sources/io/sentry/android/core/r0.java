package io.sentry.android.core;

import android.os.FileObserver;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.z2;
import java.io.File;

/* loaded from: classes3.dex */
public final class r0 extends FileObserver {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final z2 f11313b;

    /* renamed from: c, reason: collision with root package name */
    public final ILogger f11314c;

    /* renamed from: d, reason: collision with root package name */
    public final long f11315d;

    public r0(String str, z2 z2Var, ILogger iLogger, long j) {
        super(str);
        this.a = str;
        this.f11313b = z2Var;
        d9.a.L(iLogger, "Logger is required.");
        this.f11314c = iLogger;
        this.f11315d = j;
    }

    @Override // android.os.FileObserver
    public final void onEvent(int i5, String str) {
        if (str == null || i5 != 8) {
            return;
        }
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        Integer valueOf = Integer.valueOf(i5);
        String str2 = this.a;
        ILogger iLogger = this.f11314c;
        iLogger.u(sentryLevel, "onEvent fired for EnvelopeFileObserver with event type %d on path: %s for file %s.", valueOf, str2, str);
        Hint q5 = a5.k0.q(new q0(this.f11315d, iLogger));
        StringBuilder o6 = k0.d.o(str2);
        o6.append(File.separator);
        o6.append(str);
        String sb2 = o6.toString();
        z2 z2Var = this.f11313b;
        z2Var.getClass();
        d9.a.L(sb2, "Path is required.");
        z2Var.b(new File(sb2), q5);
    }
}
