package io.sentry.android.core.internal.util;

import android.view.FrameMetrics;
import android.view.Window;
import androidx.metrics.performance.JankStats;
import io.sentry.android.core.j0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements Window.OnFrameMetricsAvailableListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f11244b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f11245c;

    public /* synthetic */ m(int i5, Object obj, Object obj2) {
        this.a = i5;
        this.f11244b = obj;
        this.f11245c = obj2;
    }

    @Override // android.view.Window.OnFrameMetricsAvailableListener
    public final void onFrameMetricsAvailable(Window window, FrameMetrics frameMetrics, int i5) {
        switch (this.a) {
            case 0:
                o.a((o) this.f11244b, (j0) this.f11245c, window, frameMetrics);
                break;
            default:
                x2.e this$0 = (x2.e) this.f11244b;
                JankStats jankStats = (JankStats) this.f11245c;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(jankStats, "$jankStats");
                Intrinsics.checkNotNullExpressionValue(frameMetrics, "frameMetrics");
                long max = Math.max(this$0.o(frameMetrics), this$0.f20260i);
                if (max >= this$0.f20259h && max != this$0.f20258g) {
                    x2.c volatileFrameData = this$0.n(max, (long) (this$0.m(frameMetrics) * jankStats.f2250c), frameMetrics);
                    Intrinsics.checkNotNullParameter(volatileFrameData, "volatileFrameData");
                    jankStats.a.a(volatileFrameData);
                    this$0.f20258g = max;
                    break;
                }
                break;
        }
    }
}
