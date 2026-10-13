package com.discord.jank_stats;

import android.view.FrameMetrics;
import android.view.Window;
import com.facebook.react.devsupport.inspector.FrameTimingsObserver;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Window.OnFrameMetricsAvailableListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f4198b;

    public /* synthetic */ a(int i5, Object obj) {
        this.a = i5;
        this.f4198b = obj;
    }

    @Override // android.view.Window.OnFrameMetricsAvailableListener
    public final void onFrameMetricsAvailable(Window window, FrameMetrics frameMetrics, int i5) {
        switch (this.a) {
            case 0:
                FrameMetricsFrameTracker.listener$lambda$0((FrameMetricsFrameTracker) this.f4198b, window, frameMetrics, i5);
                break;
            default:
                FrameTimingsObserver.frameMetricsListener$lambda$0((FrameTimingsObserver) this.f4198b, window, frameMetrics, i5);
                break;
        }
    }
}
