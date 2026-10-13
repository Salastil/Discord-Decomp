package com.discord.jank_stats;

import android.view.Window;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eJ\u000e\u0010\u000f\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eJ\u0006\u0010\u0010\u001a\u00020\fJ\u0006\u0010\u0011\u001a\u00020\fJ\u0006\u0010\u0012\u001a\u00020\fJ\u0018\u0010\u0013\u001a\u00020\f2\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0015H\u0002J\u0006\u0010\u0017\u001a\u00020\u0018R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lcom/discord/jank_stats/FrameMetricsAggregator;", "", "<init>", "()V", "tracker", "Lcom/discord/jank_stats/FrameMetricsFrameTracker;", "numFrames", "", "numJankFrames", "reportWindowOpen", "", "initialize", "", "window", "Landroid/view/Window;", "bindTo", "enableTracking", "disableTracking", "closeReportWindow", "recordFrame", "totalDurationNanos", "", "deadlineNanos", "issueReport", "Lcom/discord/jank_stats/FrameMetricsReport;", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FrameMetricsAggregator {
    private static int numFrames;
    private static int numJankFrames;
    private static FrameMetricsFrameTracker tracker;

    @NotNull
    public static final FrameMetricsAggregator INSTANCE = new FrameMetricsAggregator();
    private static boolean reportWindowOpen = true;

    private FrameMetricsAggregator() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void recordFrame(long totalDurationNanos, long deadlineNanos) {
        boolean z5 = totalDurationNanos > deadlineNanos;
        synchronized (this) {
            try {
                if (reportWindowOpen) {
                    numFrames++;
                    if (z5) {
                        numJankFrames++;
                    }
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        JankSessionRecorder.INSTANCE.recordFrame(z5, totalDurationNanos);
    }

    public final void bindTo(@NotNull Window window) {
        Intrinsics.checkNotNullParameter(window, "window");
        synchronized (this) {
            FrameMetricsFrameTracker frameMetricsFrameTracker = tracker;
            if (frameMetricsFrameTracker == null || !frameMetricsFrameTracker.isBoundTo(window)) {
                FrameMetricsFrameTracker frameMetricsFrameTracker2 = tracker;
                tracker = new FrameMetricsFrameTracker(window, new FrameMetricsAggregator$bindTo$previous$1$1(INSTANCE));
                if (frameMetricsFrameTracker2 != null) {
                    frameMetricsFrameTracker2.stop();
                }
            }
        }
    }

    public final void closeReportWindow() {
        synchronized (this) {
            reportWindowOpen = false;
            Unit unit = Unit.a;
        }
    }

    public final void disableTracking() {
        FrameMetricsFrameTracker frameMetricsFrameTracker = tracker;
        if (frameMetricsFrameTracker != null) {
            frameMetricsFrameTracker.stop();
        }
        JankSessionRecorder.INSTANCE.onTrackingDisabled();
    }

    public final void enableTracking() {
        synchronized (this) {
            reportWindowOpen = true;
            Unit unit = Unit.a;
        }
        FrameMetricsFrameTracker frameMetricsFrameTracker = tracker;
        if (frameMetricsFrameTracker != null) {
            frameMetricsFrameTracker.start();
        }
    }

    public final void initialize(@NotNull Window window) {
        Intrinsics.checkNotNullParameter(window, "window");
        bindTo(window);
    }

    @NotNull
    public final FrameMetricsReport issueReport() {
        FrameMetricsReport frameMetricsReport;
        synchronized (this) {
            frameMetricsReport = new FrameMetricsReport(numFrames, numJankFrames);
            numFrames = 0;
            numJankFrames = 0;
        }
        return frameMetricsReport;
    }
}
