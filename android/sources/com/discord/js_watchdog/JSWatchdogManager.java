package com.discord.js_watchdog;

import android.content.Context;
import com.discord.logging.Log;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.uimanager.ViewProps;
import java.io.File;
import java.util.Timer;
import java.util.TimerTask;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;
import nr.r0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0017J.\u0010\u0018\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\u000b2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\t2\u0006\u0010\u001e\u001a\u00020\u001fJ\b\u0010 \u001a\u0004\u0018\u00010!J\u0006\u0010\"\u001a\u00020\u0015J\u0006\u0010#\u001a\u00020\u0015J\b\u0010$\u001a\u00020\u0015H\u0002J \u0010%\u001a\u00020\u00152\u0006\u0010\u001a\u001a\u00020\u000b2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\tH\u0002J \u0010&\u001a\u00020\u00152\u0006\u0010'\u001a\u00020(2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\tH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\fR\u0012\u0010\r\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\fR\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u0004\u0018\u00010\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006)"}, d2 = {"Lcom/discord/js_watchdog/JSWatchdogManager;", "", "<init>", "()V", "storage", "Lcom/discord/js_watchdog/JSWatchdogStorage;", "cacheDir", "Ljava/io/File;", ViewProps.ENABLED, "", "recentPingTS", "", "Ljava/lang/Long;", "previousPingTS", "freezeTimer", "Ljava/util/TimerTask;", "pingCoroutineJob", "Lkotlinx/coroutines/Job;", "timerInstance", "Ljava/util/Timer;", "initialize", "", "context", "Landroid/content/Context;", "ping", "resetTimestamps", "sentTimestamp", "sessionId", "", "enableTrace", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "checkForExistingReport", "Lcom/discord/js_watchdog/StallReport;", "enable", "disable", "cancelExistingJobs", "updateStallTime", "saveStallReport", "stallTime", "", "js_watchdog_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class JSWatchdogManager {
    private static File cacheDir;
    private static boolean enabled;
    private static TimerTask freezeTimer;
    private static Job pingCoroutineJob;
    private static Long previousPingTS;
    private static Long recentPingTS;
    private static JSWatchdogStorage storage;

    @NotNull
    public static final JSWatchdogManager INSTANCE = new JSWatchdogManager();

    @NotNull
    private static Timer timerInstance = new Timer();

    private JSWatchdogManager() {
    }

    private final void cancelExistingJobs() {
        Job job = pingCoroutineJob;
        if (job != null) {
            job.f(null);
        }
        pingCoroutineJob = null;
        TimerTask timerTask = freezeTimer;
        if (timerTask != null) {
            timerTask.cancel();
        }
        freezeTimer = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0037  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void saveStallReport(int stallTime, String sessionId, boolean enableTrace) {
        String str;
        JSWatchdogStorage jSWatchdogStorage;
        JSWatchdogStorage jSWatchdogStorage2 = storage;
        if (jSWatchdogStorage2 == null) {
            return;
        }
        JSWatchdogStorage jSWatchdogStorage3 = null;
        if (enableTrace) {
            if (jSWatchdogStorage2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("storage");
                jSWatchdogStorage2 = null;
            }
            String trace = jSWatchdogStorage2.getTrace();
            if (trace == null || trace.length() == 0) {
                HermesSamplingProfilerUtil hermesSamplingProfilerUtil = HermesSamplingProfilerUtil.INSTANCE;
                File file = cacheDir;
                if (file == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("cacheDir");
                    file = null;
                }
                str = hermesSamplingProfilerUtil.findSampleTrace(file);
                jSWatchdogStorage = storage;
                if (jSWatchdogStorage != null) {
                    Intrinsics.throwUninitializedPropertyAccessException("storage");
                } else {
                    jSWatchdogStorage3 = jSWatchdogStorage;
                }
                jSWatchdogStorage3.update(stallTime, sessionId, str);
            }
        }
        str = null;
        jSWatchdogStorage = storage;
        if (jSWatchdogStorage != null) {
        }
        jSWatchdogStorage3.update(stallTime, sessionId, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateStallTime(long sentTimestamp, String sessionId, boolean enableTrace) {
        long currentTimeMillis = (System.currentTimeMillis() - sentTimestamp) - 500;
        Log.i$default(Log.INSTANCE, JSWatchdogManagerKt.LOG_TAG, d.j(currentTimeMillis, "updateStallTime: "), (Throwable) null, 4, (Object) null);
        saveStallReport((int) currentTimeMillis, sessionId, enableTrace);
    }

    public final StallReport checkForExistingReport() {
        JSWatchdogStorage jSWatchdogStorage = storage;
        if (jSWatchdogStorage == null) {
            return null;
        }
        if (jSWatchdogStorage == null) {
            Intrinsics.throwUninitializedPropertyAccessException("storage");
            jSWatchdogStorage = null;
        }
        return jSWatchdogStorage.getStallReportAndClear();
    }

    public final void disable() {
        enabled = false;
        cancelExistingJobs();
        Log.i$default(Log.INSTANCE, JSWatchdogManagerKt.LOG_TAG, "JS Watchdog disabled.", (Throwable) null, 4, (Object) null);
    }

    public final void enable() {
        enabled = true;
        Log.i$default(Log.INSTANCE, JSWatchdogManagerKt.LOG_TAG, "JS Watchdog enabled.", (Throwable) null, 4, (Object) null);
    }

    public final void initialize(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        synchronized (this) {
            storage = JSWatchdogStorage.INSTANCE.getInstance(context);
            cacheDir = context.getCacheDir();
            Unit unit = Unit.a;
        }
    }

    public final void ping(boolean resetTimestamps, long sentTimestamp, @NotNull String sessionId, boolean enableTrace, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(sessionId, "sessionId");
        Intrinsics.checkNotNullParameter(promise, "promise");
        cancelExistingJobs();
        pingCoroutineJob = x.t(r0.f15654d, null, new JSWatchdogManager$ping$1(resetTimestamps, sentTimestamp, promise, sessionId, enableTrace, null), 3);
    }
}
