package com.mkuczera.haptic;

import a5.t;
import android.os.Process;
import android.view.Choreographer;
import android.view.View;
import android.view.ViewParent;
import androidx.activity.ComponentActivity;
import androidx.activity.OnBackPressedDispatcher;
import androidx.core.view.m;
import androidx.work.impl.workers.ConstraintTrackingWorker;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.fabric.FabricUIManager;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.common.util.concurrent.ListenableFuture;
import com.swmansion.reanimated.ReanimatedModule;
import com.swmansion.reanimated.layoutReanimation.SharedTransitionManager;
import f4.l;
import f4.q;
import g4.j;
import hc.b0;
import hc.i1;
import hc.m1;
import hc.s1;
import hc.w;
import hc.y;
import ic.p;
import ic.u;
import io.sentry.Breadcrumb;
import io.sentry.ILogger;
import io.sentry.ISpan;
import io.sentry.SentryLevel;
import io.sentry.SpotlightIntegration;
import io.sentry.a1;
import io.sentry.android.core.ActivityLifecycleIntegration;
import io.sentry.android.core.AnrIntegration;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.e0;
import io.sentry.android.core.internal.util.o;
import io.sentry.android.replay.capture.BufferCaptureStrategy;
import io.sentry.android.replay.util.ReplayExecutorService;
import io.sentry.cache.g;
import io.sentry.cache.tape.f;
import io.sentry.i6;
import io.sentry.j4;
import io.sentry.ndk.NativeScope;
import io.sentry.protocol.h0;
import io.sentry.protocol.v;
import io.sentry.r;
import io.sentry.react.RNSentryTimeToDisplay;
import io.sentry.u3;
import io.sentry.util.h;
import io.sentry.v5;
import java.io.File;
import java.io.IOException;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.ConcurrentHashMap;
import java.util.zip.GZIPOutputStream;
import ke.d0;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import nd.s;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6612d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f6613e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f6614i;

    public /* synthetic */ a(int i5, Object obj, Object obj2) {
        this.f6612d = i5;
        this.f6613e = obj;
        this.f6614i = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        long j;
        boolean z5;
        boolean z6 = true;
        int i5 = 0;
        switch (this.f6612d) {
            case 0:
                ((View) this.f6613e).performHapticFeedback(((Integer) this.f6614i).intValue());
                return;
            case 1:
                ((ReanimatedModule) this.f6613e).lambda$initialize$2((FabricUIManager) this.f6614i);
                return;
            case 2:
                ((ReanimatedModule) this.f6613e).lambda$initialize$3((ReactApplicationContext) this.f6614i);
                return;
            case 3:
                ((SharedTransitionManager) this.f6613e).lambda$finishSharedAnimation$1((ViewParent) this.f6614i);
                return;
            case 4:
                r0.getLifecycle().a(new m(1, (OnBackPressedDispatcher) this.f6614i, (ComponentActivity) this.f6613e));
                return;
            case 5:
                q qVar = (q) this.f6613e;
                j jVar = (j) this.f6614i;
                if (qVar.f8358d.f9110d instanceof g4.a) {
                    jVar.cancel(true);
                    return;
                } else {
                    jVar.l(qVar.f8361v.a());
                    return;
                }
            case 6:
                com.google.android.exoplayer2.d dVar = (com.google.android.exoplayer2.d) this.f6613e;
                b0 b0Var = (b0) this.f6614i;
                int i6 = dVar.F - b0Var.f9627c;
                dVar.F = i6;
                if (b0Var.f9628d) {
                    dVar.G = b0Var.f9629e;
                    dVar.H = true;
                }
                if (b0Var.f9630f) {
                    dVar.I = b0Var.f9631g;
                }
                if (i6 == 0) {
                    Timeline timeline = b0Var.f9626b.a;
                    if (!dVar.f5359g0.a.p() && timeline.p()) {
                        dVar.h0 = -1;
                        dVar.f5362i0 = 0L;
                    }
                    if (!timeline.p()) {
                        List asList = Arrays.asList(((m1) timeline).F);
                        ke.b.k(asList.size() == dVar.f5366o.size());
                        for (int i10 = 0; i10 < asList.size(); i10++) {
                            ((y) dVar.f5366o.get(i10)).f9942b = (Timeline) asList.get(i10);
                        }
                    }
                    long j5 = -9223372036854775807L;
                    if (dVar.H) {
                        if (b0Var.f9626b.f9732b.equals(dVar.f5359g0.f9732b) && b0Var.f9626b.f9734d == dVar.f5359g0.f9746r) {
                            z6 = false;
                        }
                        if (z6) {
                            if (timeline.p() || b0Var.f9626b.f9732b.a()) {
                                j5 = b0Var.f9626b.f9734d;
                            } else {
                                i1 i1Var = b0Var.f9626b;
                                s sVar = i1Var.f9732b;
                                long j7 = i1Var.f9734d;
                                Object obj = sVar.a;
                                s1 s1Var = dVar.f5365n;
                                timeline.g(obj, s1Var);
                                j5 = j7 + s1Var.f9873w;
                            }
                        }
                        j = j5;
                        z5 = z6;
                    } else {
                        j = -9223372036854775807L;
                        z5 = false;
                    }
                    dVar.H = false;
                    dVar.v0(b0Var.f9626b, 1, dVar.I, z5, dVar.G, j, -1, false);
                    return;
                }
                return;
            case 7:
                l lVar = (l) this.f6613e;
                Runnable runnable = (Runnable) this.f6614i;
                lVar.getClass();
                try {
                    runnable.run();
                    return;
                } finally {
                    lVar.a();
                }
            case 8:
                ConstraintTrackingWorker this$0 = (ConstraintTrackingWorker) this.f6613e;
                ListenableFuture innerFuture = (ListenableFuture) this.f6614i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(innerFuture, "$innerFuture");
                synchronized (this$0.f2597x) {
                    try {
                        if (this$0.f2598y) {
                            j future = this$0.E;
                            Intrinsics.checkNotNullExpressionValue(future, "future");
                            String str = i4.a.a;
                            future.j(new v3.l());
                        } else {
                            this$0.E.l(innerFuture);
                        }
                        Unit unit = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return;
            case 9:
                ((a1) this.f6614i).a(((u3) this.f6613e).l().getShutdownTimeoutMillis());
                return;
            case 10:
                SpotlightIntegration spotlightIntegration = (SpotlightIntegration) this.f6613e;
                io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) this.f6614i;
                try {
                    v5 v5Var = spotlightIntegration.f10988d;
                    if (v5Var == null) {
                        throw new IllegalArgumentException("SentryOptions are required to send envelopes.");
                    }
                    HttpURLConnection f2 = SpotlightIntegration.f(v5Var.getSpotlightConnectionUrl() != null ? spotlightIntegration.f10988d.getSpotlightConnectionUrl() : h.a ? "http://10.0.2.2:8969/stream" : "http://localhost:8969/stream");
                    try {
                        OutputStream outputStream = f2.getOutputStream();
                        try {
                            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(outputStream);
                            try {
                                spotlightIntegration.f10988d.getSerializer().e(cVar, gZIPOutputStream);
                                gZIPOutputStream.close();
                                if (outputStream != null) {
                                    outputStream.close();
                                }
                                spotlightIntegration.f10989e.u(SentryLevel.DEBUG, "Envelope sent to spotlight: %d", Integer.valueOf(f2.getResponseCode()));
                            } finally {
                            }
                        } finally {
                        }
                    } catch (Throwable th3) {
                        try {
                            spotlightIntegration.f10989e.k(SentryLevel.ERROR, "An exception occurred while submitting the envelope to the Sentry server.", th3);
                            spotlightIntegration.f10989e.u(SentryLevel.DEBUG, "Envelope sent to spotlight: %d", Integer.valueOf(f2.getResponseCode()));
                        } catch (Throwable th4) {
                            spotlightIntegration.f10989e.u(SentryLevel.DEBUG, "Envelope sent to spotlight: %d", Integer.valueOf(f2.getResponseCode()));
                            SpotlightIntegration.c(f2);
                            throw th4;
                        }
                    }
                    SpotlightIntegration.c(f2);
                    return;
                } catch (Exception e9) {
                    spotlightIntegration.f10989e.k(SentryLevel.ERROR, "An exception occurred while creating the connection to spotlight.", e9);
                    return;
                }
            case 11:
                ActivityLifecycleIntegration.f((ISpan) this.f6613e, (ISpan) this.f6614i);
                return;
            case 12:
                AnrIntegration anrIntegration = (AnrIntegration) this.f6613e;
                SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) this.f6614i;
                r a = anrIntegration.f11031i.a();
                try {
                    if (!anrIntegration.f11030e) {
                        anrIntegration.c(sentryAndroidOptions);
                    }
                    a.close();
                    return;
                } finally {
                }
            case 13:
                ((e0) this.f6613e).f((ILogger) this.f6614i);
                return;
            case 14:
                o oVar = (o) this.f6613e;
                ILogger iLogger = (ILogger) this.f6614i;
                try {
                    oVar.G = Choreographer.getInstance();
                    return;
                } catch (Throwable th5) {
                    iLogger.k(SentryLevel.ERROR, "Error retrieving Choreographer instance. Slow and frozen frames will not be reported.", th5);
                    return;
                }
            case 15:
                io.sentry.android.ndk.d dVar2 = (io.sentry.android.ndk.d) this.f6613e;
                Breadcrumb breadcrumb = (Breadcrumb) this.f6614i;
                v5 v5Var2 = dVar2.a;
                SentryLevel sentryLevel = breadcrumb.F;
                String str2 = null;
                String lowerCase = sentryLevel != null ? sentryLevel.name().toLowerCase(Locale.ROOT) : null;
                String F = ki.b.F(breadcrumb.b());
                try {
                    ConcurrentHashMap concurrentHashMap = breadcrumb.f10977x;
                    if (!concurrentHashMap.isEmpty()) {
                        str2 = v5Var2.getSerializer().b(concurrentHashMap);
                    }
                } catch (Throwable th6) {
                    v5Var2.getLogger().i(SentryLevel.ERROR, th6, "Breadcrumb data is not serializable.", new Object[0]);
                }
                String str3 = str2;
                NativeScope nativeScope = dVar2.f11375b;
                String str4 = breadcrumb.f10975v;
                String str5 = breadcrumb.f10978y;
                String str6 = breadcrumb.f10976w;
                nativeScope.getClass();
                NativeScope.nativeAddBreadcrumb(lowerCase, str4, str5, str6, F, str3);
                return;
            case 16:
                io.sentry.android.ndk.d dVar3 = (io.sentry.android.ndk.d) this.f6613e;
                h0 h0Var = (h0) this.f6614i;
                NativeScope nativeScope2 = dVar3.f11375b;
                if (h0Var == null) {
                    nativeScope2.getClass();
                    NativeScope.nativeRemoveUser();
                    return;
                }
                String str7 = h0Var.f11797e;
                String str8 = h0Var.f11796d;
                String str9 = h0Var.f11799v;
                String str10 = h0Var.f11798i;
                nativeScope2.getClass();
                NativeScope.nativeSetUser(str7, str8, str9, str10);
                return;
            case 17:
                io.sentry.android.ndk.d dVar4 = (io.sentry.android.ndk.d) this.f6613e;
                i6 i6Var = (i6) this.f6614i;
                NativeScope nativeScope3 = dVar4.f11375b;
                String vVar = i6Var.f11610d.toString();
                String k6Var = i6Var.f11611e.toString();
                nativeScope3.getClass();
                NativeScope.nativeSetTrace(vVar, k6Var);
                return;
            case 18:
                BufferCaptureStrategy.stop$lambda$0((File) this.f6613e, (BufferCaptureStrategy) this.f6614i);
                return;
            case 19:
                ReplayExecutorService.submit$lambda$0((Runnable) this.f6613e, (ReplayExecutorService) this.f6614i);
                return;
            case 20:
                ((g) this.f6613e).r((v) this.f6614i, "replay.json");
                return;
            case 21:
                g gVar = (g) this.f6613e;
                String str11 = (String) this.f6614i;
                if (str11 == null) {
                    gVar.o("transaction.json");
                    return;
                } else {
                    gVar.r(str11, "transaction.json");
                    return;
                }
            case 22:
                g gVar2 = (g) this.f6613e;
                h0 h0Var2 = (h0) this.f6614i;
                if (h0Var2 == null) {
                    gVar2.o("user.json");
                    return;
                } else {
                    gVar2.r(h0Var2, "user.json");
                    return;
                }
            case 23:
                ((g) this.f6613e).r((Collection) this.f6614i, "fingerprint.json");
                return;
            case 24:
                g gVar3 = (g) this.f6613e;
                try {
                    ((f) gVar3.f11442b.a()).i((Breadcrumb) this.f6614i);
                    return;
                } catch (IOException e10) {
                    gVar3.a.getLogger().k(SentryLevel.ERROR, "Failed to add breadcrumb to file queue", e10);
                    return;
                }
            case 25:
                ((g) this.f6613e).r((io.sentry.protocol.c) this.f6614i, "contexts.json");
                return;
            case 26:
                g gVar4 = (g) this.f6613e;
                try {
                    ((Runnable) this.f6614i).run();
                    return;
                } catch (Throwable th7) {
                    gVar4.a.getLogger().k(SentryLevel.ERROR, "Serialization task failed", th7);
                    return;
                }
            case 27:
                RNSentryTimeToDisplay.lambda$getTimeToDisplay$1((j4) this.f6613e, (Promise) this.f6614i);
                return;
            case 28:
                t this$02 = (t) this.f6613e;
                Runnable runnable2 = (Runnable) this.f6614i;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                Intrinsics.checkNotNullParameter(runnable2, "$runnable");
                try {
                    this$02.getClass();
                    Process.setThreadPriority(10);
                } catch (Throwable unused) {
                }
                runnable2.run();
                return;
            default:
                e4.c cVar2 = (e4.c) this.f6613e;
                String str12 = (String) this.f6614i;
                w wVar = (w) cVar2.f7940i;
                int i11 = d0.a;
                u uVar = (u) wVar.f9929d.f5368q;
                AnalyticsListener$EventTime j10 = uVar.j();
                uVar.k(j10, 1012, new p(j10, str12, i5));
                return;
        }
    }

    public /* synthetic */ a(ActivityLifecycleIntegration activityLifecycleIntegration, ISpan iSpan, ISpan iSpan2) {
        this.f6612d = 11;
        this.f6613e = iSpan;
        this.f6614i = iSpan2;
    }
}
