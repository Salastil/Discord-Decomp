package jc;

import android.media.AudioTrack;
import android.media.metrics.LogSessionId;

/* loaded from: classes3.dex */
public abstract class d0 {
    public static void a(AudioTrack audioTrack, ic.c0 c0Var) {
        LogSessionId logSessionId;
        ic.b0 b0Var = c0Var.a;
        b0Var.getClass();
        LogSessionId logSessionId2 = b0Var.a;
        logSessionId = LogSessionId.LOG_SESSION_ID_NONE;
        if (logSessionId2.equals(logSessionId)) {
            return;
        }
        audioTrack.setLogSessionId(logSessionId2);
    }
}
