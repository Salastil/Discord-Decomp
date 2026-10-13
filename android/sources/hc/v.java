package hc;

import android.content.Context;
import android.media.metrics.LogSessionId;
import android.media.metrics.MediaMetricsManager;

/* loaded from: classes3.dex */
public abstract class v {
    public static ic.c0 a(Context context, com.google.android.exoplayer2.d dVar, boolean z5) {
        LogSessionId logSessionId;
        MediaMetricsManager mediaMetricsManager = (MediaMetricsManager) context.getSystemService("media_metrics");
        ic.x xVar = mediaMetricsManager == null ? null : new ic.x(context, mediaMetricsManager.createPlaybackSession());
        if (xVar == null) {
            ke.b.N("ExoPlayerImpl", "MediaMetricsService unavailable.");
            logSessionId = LogSessionId.LOG_SESSION_ID_NONE;
            return new ic.c0(logSessionId);
        }
        if (z5) {
            ic.u uVar = (ic.u) dVar.f5368q;
            uVar.getClass();
            uVar.f10548x.a(xVar);
        }
        return new ic.c0(xVar.f10565c.getSessionId());
    }
}
