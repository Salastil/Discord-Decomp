package io.sentry.android.core;

import android.app.Application;
import android.content.Context;
import android.os.Build;
import androidx.appcompat.widget.b4;
import io.sentry.SentryLevel;
import io.sentry.android.core.EnvelopeFileObserverIntegration;
import io.sentry.android.distribution.DistributionIntegration;
import io.sentry.android.fragment.FragmentLifecycleIntegration;
import io.sentry.android.replay.DefaultReplayBreadcrumbConverter;
import io.sentry.android.replay.ReplayIntegration;
import io.sentry.android.timber.SentryTimberIntegration;
import io.sentry.compose.gestures.ComposeGestureTargetLocator;
import io.sentry.compose.viewhierarchy.ComposeViewHierarchyExporter;
import io.sentry.d2;
import io.sentry.e2;
import io.sentry.f2;
import io.sentry.f5;
import io.sentry.g2;
import io.sentry.l2;
import io.sentry.s2;
import io.sentry.x2;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public abstract class o {
    public static void a(SentryAndroidOptions sentryAndroidOptions, Context context, j0 j0Var, io.sentry.util.f fVar, b4 b4Var, boolean z5) {
        if (sentryAndroidOptions.getCacheDirPath() != null && (sentryAndroidOptions.getEnvelopeDiskCache() instanceof io.sentry.transport.i)) {
            sentryAndroidOptions.setEnvelopeDiskCache(new io.sentry.android.core.cache.b(sentryAndroidOptions));
        }
        if (sentryAndroidOptions.getConnectionStatusProvider() instanceof e2) {
            sentryAndroidOptions.setConnectionStatusProvider(new io.sentry.android.core.internal.util.c(context, j0Var, sentryAndroidOptions));
        }
        if (sentryAndroidOptions.getCacheDirPath() != null) {
            sentryAndroidOptions.addScopeObserver(new io.sentry.cache.g(sentryAndroidOptions));
            sentryAndroidOptions.addOptionsObserver(new io.sentry.cache.e(sentryAndroidOptions));
        }
        sentryAndroidOptions.addEventProcessor(new io.sentry.m(sentryAndroidOptions));
        sentryAndroidOptions.addEventProcessor(new m0(context, j0Var, sentryAndroidOptions));
        sentryAndroidOptions.addEventProcessor(new a1(sentryAndroidOptions, b4Var));
        sentryAndroidOptions.addEventProcessor(new ScreenshotEventProcessor(sentryAndroidOptions, j0Var));
        sentryAndroidOptions.addEventProcessor(new ViewHierarchyEventProcessor(sentryAndroidOptions));
        sentryAndroidOptions.addEventProcessor(new g0(context, j0Var, sentryAndroidOptions));
        if (sentryAndroidOptions.getTransportGate() instanceof io.sentry.transport.k) {
            sentryAndroidOptions.setTransportGate(new l0(sentryAndroidOptions));
        }
        io.sentry.android.core.performance.f b10 = io.sentry.android.core.performance.f.b();
        if (sentryAndroidOptions.getModulesLoader() instanceof io.sentry.internal.modules.e) {
            sentryAndroidOptions.setModulesLoader(new io.sentry.internal.modules.f(context, sentryAndroidOptions.getLogger()));
        }
        if (sentryAndroidOptions.getDebugMetaLoader() instanceof io.sentry.internal.debugmeta.b) {
            sentryAndroidOptions.setDebugMetaLoader(new e4.e(context, sentryAndroidOptions.getLogger()));
        }
        if (sentryAndroidOptions.getVersionDetector() instanceof x2) {
            sentryAndroidOptions.setVersionDetector(new ve.i(sentryAndroidOptions));
        }
        io.sentry.util.e eVar = new io.sentry.util.e(new f5(fVar, sentryAndroidOptions));
        boolean a = io.sentry.util.f.a(sentryAndroidOptions, "androidx.compose.ui.node.Owner");
        if (sentryAndroidOptions.getGestureTargetLocators().isEmpty()) {
            ArrayList arrayList = new ArrayList(2);
            arrayList.add(new io.sentry.android.core.internal.gestures.a(eVar));
            if (a && io.sentry.util.f.a(sentryAndroidOptions, "io.sentry.compose.gestures.ComposeGestureTargetLocator")) {
                arrayList.add(new ComposeGestureTargetLocator(sentryAndroidOptions.getLogger()));
            }
            sentryAndroidOptions.setGestureTargetLocators(arrayList);
        }
        if (sentryAndroidOptions.getViewHierarchyExporters().isEmpty() && a && io.sentry.util.f.a(sentryAndroidOptions, "io.sentry.compose.viewhierarchy.ComposeViewHierarchyExporter")) {
            ArrayList arrayList2 = new ArrayList(1);
            arrayList2.add(new ComposeViewHierarchyExporter(sentryAndroidOptions.getLogger()));
            sentryAndroidOptions.setViewHierarchyExporters(arrayList2);
        }
        if (sentryAndroidOptions.getThreadChecker() instanceof io.sentry.util.thread.b) {
            sentryAndroidOptions.setThreadChecker(io.sentry.android.core.internal.util.e.a);
        }
        if (sentryAndroidOptions.getSocketTagger() instanceof s2) {
            sentryAndroidOptions.setSocketTagger(t.f11328d);
        }
        if (sentryAndroidOptions.getPerformanceCollectors().isEmpty()) {
            sentryAndroidOptions.addPerformanceCollector(new m());
            sentryAndroidOptions.addPerformanceCollector(new h(sentryAndroidOptions.getLogger()));
            if (sentryAndroidOptions.isEnablePerformanceV2()) {
                io.sentry.android.core.internal.util.o frameMetricsCollector = sentryAndroidOptions.getFrameMetricsCollector();
                d9.a.L(frameMetricsCollector, "options.getFrameMetricsCollector is required");
                sentryAndroidOptions.addPerformanceCollector(new g1(sentryAndroidOptions, frameMetricsCollector));
            }
        }
        if (sentryAndroidOptions.getCompositePerformanceCollector() instanceof d2) {
            sentryAndroidOptions.setCompositePerformanceCollector(new io.sentry.q(sentryAndroidOptions));
        }
        if (z5 && (sentryAndroidOptions.getReplayController().getReplayBreadcrumbConverter() instanceof l2)) {
            sentryAndroidOptions.getReplayController().setBreadcrumbConverter(new DefaultReplayBreadcrumbConverter(sentryAndroidOptions));
        }
        io.sentry.r a10 = io.sentry.android.core.performance.f.N.a();
        try {
            io.sentry.g1 g1Var = b10.E;
            g gVar = b10.F;
            b10.E = null;
            b10.F = null;
            a10.close();
            io.sentry.k compositePerformanceCollector = sentryAndroidOptions.getCompositePerformanceCollector();
            if (sentryAndroidOptions.isProfilingEnabled() || sentryAndroidOptions.getProfilesSampleRate() != null) {
                sentryAndroidOptions.setContinuousProfiler(f2.f11542d);
                if (gVar != null) {
                    gVar.a(true);
                }
                if (g1Var != null) {
                    sentryAndroidOptions.setTransactionProfiler(g1Var);
                    return;
                }
                io.sentry.android.core.internal.util.o frameMetricsCollector2 = sentryAndroidOptions.getFrameMetricsCollector();
                d9.a.L(frameMetricsCollector2, "options.getFrameMetricsCollector is required");
                sentryAndroidOptions.setTransactionProfiler(new u(context, j0Var, frameMetricsCollector2, sentryAndroidOptions.getLogger(), sentryAndroidOptions.getProfilingTracesDirPath(), sentryAndroidOptions.isProfilingEnabled(), sentryAndroidOptions.getProfilingTracesHz(), sentryAndroidOptions.getExecutorService()));
                return;
            }
            sentryAndroidOptions.setTransactionProfiler(g2.f11558w);
            if (g1Var != null) {
                g1Var.close();
            }
            if (gVar == null) {
                io.sentry.android.core.internal.util.o frameMetricsCollector3 = sentryAndroidOptions.getFrameMetricsCollector();
                d9.a.L(frameMetricsCollector3, "options.getFrameMetricsCollector is required");
                sentryAndroidOptions.setContinuousProfiler(new g(j0Var, frameMetricsCollector3, sentryAndroidOptions.getLogger(), sentryAndroidOptions.getProfilingTracesDirPath(), sentryAndroidOptions.getProfilingTracesHz(), sentryAndroidOptions.getExecutorService()));
            } else {
                sentryAndroidOptions.setContinuousProfiler(gVar);
                io.sentry.protocol.v vVar = gVar.L;
                if (!gVar.F || vVar.equals(io.sentry.protocol.v.f11895e)) {
                    return;
                }
                compositePerformanceCollector.a(vVar.toString());
            }
        } finally {
        }
    }

    public static void b(Context context, SentryAndroidOptions sentryAndroidOptions, j0 j0Var, io.sentry.util.f fVar, b4 b4Var, boolean z5, boolean z6, boolean z7, boolean z8) {
        io.sentry.util.e eVar = new io.sentry.util.e(new com.discord.crash_reporting.b(sentryAndroidOptions));
        sentryAndroidOptions.addIntegration(new SendCachedEnvelopeIntegration(new u4.c(new com.discord.crash_reporting.b(sentryAndroidOptions)), eVar));
        sentryAndroidOptions.addIntegration(new NdkIntegration(io.sentry.util.f.c("io.sentry.android.ndk.SentryNdk", sentryAndroidOptions.getLogger())));
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 31) {
            sentryAndroidOptions.addIntegration(new TombstoneIntegration(context));
        }
        sentryAndroidOptions.addIntegration(new EnvelopeFileObserverIntegration.OutboxEnvelopeFileObserverIntegration(0));
        sentryAndroidOptions.addIntegration(new SendCachedEnvelopeIntegration(new ve.i(new com.discord.crash_reporting.b(sentryAndroidOptions)), eVar));
        sentryAndroidOptions.addIntegration(new AppLifecycleIntegration());
        sentryAndroidOptions.addIntegration(i5 >= 30 ? new AnrV2Integration(context) : new AnrIntegration(context));
        if (context instanceof Application) {
            Application application = (Application) context;
            sentryAndroidOptions.addIntegration(new ActivityLifecycleIntegration(application, j0Var, b4Var));
            sentryAndroidOptions.addIntegration(new ActivityBreadcrumbsIntegration(application));
            sentryAndroidOptions.addIntegration(new UserInteractionIntegration(application, fVar));
            if (z5) {
                sentryAndroidOptions.addIntegration(new FragmentLifecycleIntegration(application, true, true));
            }
        } else {
            sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "ActivityLifecycle, FragmentLifecycle and UserInteraction Integrations need an Application class to be installed.", new Object[0]);
        }
        if (z6) {
            sentryAndroidOptions.addIntegration(new SentryTimberIntegration());
        }
        sentryAndroidOptions.addIntegration(new AppComponentsBreadcrumbsIntegration(context));
        sentryAndroidOptions.addIntegration(new SystemEventsBreadcrumbsIntegration(context));
        sentryAndroidOptions.addIntegration(new NetworkBreadcrumbsIntegration(context, j0Var));
        if (z7) {
            ReplayIntegration replayIntegration = new ReplayIntegration(context, io.sentry.transport.d.f11998d);
            sentryAndroidOptions.addIntegration(replayIntegration);
            sentryAndroidOptions.setReplayController(replayIntegration);
        }
        if (z8) {
            DistributionIntegration distributionIntegration = new DistributionIntegration(context);
            sentryAndroidOptions.setDistributionController(distributionIntegration);
            sentryAndroidOptions.addIntegration(distributionIntegration);
        }
        sentryAndroidOptions.getFeedbackOptions().getClass();
    }
}
