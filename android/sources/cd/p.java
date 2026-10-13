package cd;

import android.media.metrics.LogSessionId;
import ic.b0;
import ic.c0;

/* loaded from: classes3.dex */
public abstract class p {
    public static void a(j jVar, c0 c0Var) {
        LogSessionId logSessionId;
        b0 b0Var = c0Var.a;
        b0Var.getClass();
        LogSessionId logSessionId2 = b0Var.a;
        logSessionId = LogSessionId.LOG_SESSION_ID_NONE;
        if (logSessionId2.equals(logSessionId)) {
            return;
        }
        jVar.f3436b.setString("log-session-id", logSessionId2.getStringId());
    }
}
