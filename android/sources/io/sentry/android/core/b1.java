package io.sentry.android.core;

import android.content.IntentFilter;
import android.os.Handler;
import android.os.HandlerThread;
import androidx.appcompat.widget.b4;
import io.sentry.SentryLevel;
import io.sentry.c3;
import io.sentry.d3;
import io.sentry.v5;
import io.sentry.x3;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final /* synthetic */ class b1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11099d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f11100e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f11101i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f11102v;

    public /* synthetic */ b1(SystemEventsBreadcrumbsIntegration systemEventsBreadcrumbsIntegration, io.sentry.x0 x0Var, SentryAndroidOptions sentryAndroidOptions) {
        this.f11099d = 4;
        this.f11100e = systemEventsBreadcrumbsIntegration;
        this.f11102v = x0Var;
        this.f11101i = sentryAndroidOptions;
    }

    /* JADX WARN: Finally extract failed */
    @Override // java.lang.Runnable
    public final void run() {
        io.sentry.r a;
        switch (this.f11099d) {
            case 0:
                SendCachedEnvelopeIntegration sendCachedEnvelopeIntegration = (SendCachedEnvelopeIntegration) this.f11100e;
                SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) this.f11101i;
                io.sentry.x0 x0Var = (io.sentry.x0) this.f11102v;
                try {
                    if (sendCachedEnvelopeIntegration.F.get()) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "SendCachedEnvelopeIntegration, not trying to send after closing.", new Object[0]);
                        return;
                    }
                    if (!sendCachedEnvelopeIntegration.E.getAndSet(true)) {
                        io.sentry.m0 connectionStatusProvider = sentryAndroidOptions.getConnectionStatusProvider();
                        sendCachedEnvelopeIntegration.f11061v = connectionStatusProvider;
                        connectionStatusProvider.M(sendCachedEnvelopeIntegration);
                        sendCachedEnvelopeIntegration.f11064y = sendCachedEnvelopeIntegration.f11058d.k(x0Var, sentryAndroidOptions);
                    }
                    io.sentry.m0 m0Var = sendCachedEnvelopeIntegration.f11061v;
                    if (m0Var != null && m0Var.I() == io.sentry.k0.DISCONNECTED) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "SendCachedEnvelopeIntegration, no connection.", new Object[0]);
                        return;
                    }
                    io.sentry.transport.p d6 = x0Var.d();
                    if (d6 != null && d6.f(io.sentry.l.All)) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "SendCachedEnvelopeIntegration, rate limiting active.", new Object[0]);
                        return;
                    }
                    x3 x3Var = sendCachedEnvelopeIntegration.f11064y;
                    if (x3Var == null) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "SendCachedEnvelopeIntegration factory is null.", new Object[0]);
                        return;
                    } else {
                        x3Var.a();
                        return;
                    }
                } catch (Throwable th2) {
                    sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed trying to send cached events.", th2);
                    return;
                }
            case 1:
                b4 b4Var = (b4) this.f11100e;
                Runnable runnable = (Runnable) this.f11101i;
                String str = (String) this.f11102v;
                b4Var.getClass();
                try {
                    runnable.run();
                    return;
                } catch (Throwable unused) {
                    if (str != null) {
                        ((SentryAndroidOptions) b4Var.f928e).getLogger().u(SentryLevel.WARNING, "Failed to execute ".concat(str), new Object[0]);
                        return;
                    }
                    return;
                }
            case 2:
                g gVar = (g) this.f11100e;
                v5 v5Var = (v5) this.f11101i;
                io.sentry.x0 x0Var2 = (io.sentry.x0) this.f11102v;
                ArrayList arrayList = gVar.J;
                if (gVar.M.get()) {
                    return;
                }
                ArrayList arrayList2 = new ArrayList(arrayList.size());
                a = gVar.T.a();
                try {
                    Iterator it = arrayList.iterator();
                    while (it.hasNext()) {
                        c3 c3Var = (c3) it.next();
                        arrayList2.add(new d3(c3Var.a, c3Var.f11416b, c3Var.f11418d, c3Var.f11417c, Double.valueOf(c3Var.f11419e), c3Var.f11420f, v5Var));
                    }
                    arrayList.clear();
                    a.close();
                    Iterator it2 = arrayList2.iterator();
                    while (it2.hasNext()) {
                        x0Var2.i((d3) it2.next());
                    }
                    return;
                } catch (Throwable th3) {
                }
            case 3:
                EnvelopeFileObserverIntegration envelopeFileObserverIntegration = (EnvelopeFileObserverIntegration) this.f11100e;
                v5 v5Var2 = (v5) this.f11101i;
                String str2 = (String) this.f11102v;
                a = envelopeFileObserverIntegration.f11048v.a();
                try {
                    if (!envelopeFileObserverIntegration.f11047i) {
                        envelopeFileObserverIntegration.c(v5Var2, str2);
                    }
                    a.close();
                    return;
                } finally {
                    try {
                        a.close();
                        throw th3;
                    } catch (Throwable th4) {
                        th3.addSuppressed(th4);
                    }
                }
            default:
                SystemEventsBreadcrumbsIntegration systemEventsBreadcrumbsIntegration = (SystemEventsBreadcrumbsIntegration) this.f11100e;
                io.sentry.x0 x0Var3 = (io.sentry.x0) this.f11102v;
                SentryAndroidOptions sentryAndroidOptions2 = (SentryAndroidOptions) this.f11101i;
                a = systemEventsBreadcrumbsIntegration.H.a();
                try {
                    if (!systemEventsBreadcrumbsIntegration.f11074x && !systemEventsBreadcrumbsIntegration.f11075y && systemEventsBreadcrumbsIntegration.f11070e == null) {
                        systemEventsBreadcrumbsIntegration.f11070e = new j1(systemEventsBreadcrumbsIntegration, x0Var3, sentryAndroidOptions2);
                        if (systemEventsBreadcrumbsIntegration.E == null) {
                            systemEventsBreadcrumbsIntegration.E = new IntentFilter();
                            for (String str3 : systemEventsBreadcrumbsIntegration.f11073w) {
                                systemEventsBreadcrumbsIntegration.E.addAction(str3);
                            }
                        }
                        if (systemEventsBreadcrumbsIntegration.F == null) {
                            systemEventsBreadcrumbsIntegration.F = new HandlerThread("SystemEventsReceiver", 10);
                            systemEventsBreadcrumbsIntegration.F.start();
                        }
                        try {
                            k0.j(systemEventsBreadcrumbsIntegration.f11069d, new j0(sentryAndroidOptions2.getLogger()), systemEventsBreadcrumbsIntegration.f11070e, systemEventsBreadcrumbsIntegration.E, new Handler(systemEventsBreadcrumbsIntegration.F.getLooper()));
                            if (!systemEventsBreadcrumbsIntegration.G.getAndSet(true)) {
                                sentryAndroidOptions2.getLogger().u(SentryLevel.DEBUG, "SystemEventsBreadcrumbsIntegration installed.", new Object[0]);
                                com.facebook.imagepipeline.nativecode.b.a("SystemEventsBreadcrumbs");
                            }
                        } catch (Throwable th5) {
                            sentryAndroidOptions2.setEnableSystemEventBreadcrumbs(false);
                            sentryAndroidOptions2.getLogger().k(SentryLevel.ERROR, "Failed to initialize SystemEventsBreadcrumbsIntegration.", th5);
                        }
                    }
                    a.close();
                    return;
                } finally {
                }
        }
    }

    public /* synthetic */ b1(Object obj, Object obj2, Object obj3, int i5) {
        this.f11099d = i5;
        this.f11100e = obj;
        this.f11101i = obj2;
        this.f11102v = obj3;
    }
}
