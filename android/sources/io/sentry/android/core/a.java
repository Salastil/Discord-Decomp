package io.sentry.android.core;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Debug;
import android.os.Handler;
import android.os.SystemClock;
import io.sentry.ILogger;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.c4;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class a extends Thread {
    public volatile long E;
    public final AtomicBoolean F;
    public final Context G;
    public final com.google.firebase.messaging.s H;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f11086d;

    /* renamed from: e, reason: collision with root package name */
    public final w f11087e;

    /* renamed from: i, reason: collision with root package name */
    public final l0 f11088i;

    /* renamed from: v, reason: collision with root package name */
    public final i7.a f11089v;

    /* renamed from: w, reason: collision with root package name */
    public final long f11090w;

    /* renamed from: x, reason: collision with root package name */
    public final long f11091x;

    /* renamed from: y, reason: collision with root package name */
    public final ILogger f11092y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(long j, boolean z5, w wVar, ILogger iLogger, Context context) {
        super("|ANR-WatchDog|");
        i7.a aVar = new i7.a(14);
        l0 l0Var = new l0(3);
        this.E = 0L;
        this.F = new AtomicBoolean(false);
        this.f11089v = aVar;
        this.f11091x = j;
        this.f11090w = 500L;
        this.f11086d = z5;
        this.f11087e = wVar;
        this.f11092y = iLogger;
        this.f11088i = l0Var;
        this.G = context;
        this.H = new com.google.firebase.messaging.s(this, aVar);
        if (j < 1000) {
            throw new IllegalArgumentException(String.format("ANRWatchDog: timeoutIntervalMillis has to be at least %d ms", 1000L));
        }
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        List<ActivityManager.ProcessErrorStateInfo> list;
        this.H.run();
        while (!isInterrupted()) {
            ((Handler) this.f11088i.f11266d).post(this.H);
            try {
                Thread.sleep(this.f11090w);
                this.f11089v.getClass();
                if (SystemClock.uptimeMillis() - this.E > this.f11091x) {
                    if (this.f11086d || !(Debug.isDebuggerConnected() || Debug.waitingForDebugger())) {
                        ActivityManager activityManager = (ActivityManager) this.G.getSystemService("activity");
                        if (activityManager != null) {
                            try {
                                list = activityManager.getProcessesInErrorState();
                            } catch (Throwable th2) {
                                this.f11092y.k(SentryLevel.ERROR, "Error getting ActivityManager#getProcessesInErrorState.", th2);
                                list = null;
                            }
                            if (list != null) {
                                Iterator<ActivityManager.ProcessErrorStateInfo> it = list.iterator();
                                while (it.hasNext()) {
                                    if (it.next().condition == 2) {
                                    }
                                }
                            }
                        }
                        if (this.F.compareAndSet(false, true)) {
                            ApplicationNotResponding applicationNotResponding = new ApplicationNotResponding(a3.e.m(new StringBuilder("Application Not Responding for at least "), this.f11091x, " ms."), ((Handler) this.f11088i.f11266d).getLooper().getThread());
                            w wVar = this.f11087e;
                            Object obj = wVar.f11345e;
                            SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) wVar.f11346i;
                            a aVar = AnrIntegration.f11027w;
                            sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "ANR triggered with message: %s", applicationNotResponding.getMessage());
                            boolean equals = Boolean.TRUE.equals(e0.f11119w.f11123v);
                            String str = "ANR for at least " + sentryAndroidOptions.getAnrTimeoutIntervalMillis() + " ms.";
                            if (equals) {
                                str = a3.e.k("Background ", str);
                            }
                            ApplicationNotResponding applicationNotResponding2 = new ApplicationNotResponding(str, applicationNotResponding.f11044d);
                            io.sentry.protocol.m mVar = new io.sentry.protocol.m();
                            mVar.f11835d = "ANR";
                            SentryEvent sentryEvent = new SentryEvent(new io.sentry.exception.a(mVar, applicationNotResponding2, applicationNotResponding2.f11044d, true));
                            sentryEvent.R = SentryLevel.ERROR;
                            c4.f().x(sentryEvent, a5.k0.q(new x(equals)));
                        }
                    } else {
                        this.f11092y.u(SentryLevel.DEBUG, "An ANR was detected but ignored because the debugger is connected.", new Object[0]);
                        this.F.set(true);
                    }
                }
            } catch (InterruptedException e9) {
                try {
                    Thread.currentThread().interrupt();
                    this.f11092y.u(SentryLevel.WARNING, "Interrupted: %s", e9.getMessage());
                    return;
                } catch (SecurityException unused) {
                    this.f11092y.u(SentryLevel.WARNING, "Failed to interrupt due to SecurityException: %s", e9.getMessage());
                    return;
                }
            }
        }
    }
}
