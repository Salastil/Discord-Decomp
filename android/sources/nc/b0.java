package nc;

import android.media.MediaDrm;
import android.media.metrics.LogSessionId;

/* loaded from: classes3.dex */
public abstract class b0 {
    public static boolean a(MediaDrm mediaDrm, String str) {
        return mediaDrm.requiresSecureDecoder(str);
    }

    public static void b(MediaDrm mediaDrm, byte[] bArr, ic.c0 c0Var) {
        LogSessionId logSessionId;
        ic.b0 b0Var = c0Var.a;
        b0Var.getClass();
        LogSessionId logSessionId2 = b0Var.a;
        logSessionId = LogSessionId.LOG_SESSION_ID_NONE;
        if (logSessionId2.equals(logSessionId)) {
            return;
        }
        MediaDrm.PlaybackComponent playbackComponent = mediaDrm.getPlaybackComponent(bArr);
        playbackComponent.getClass();
        playbackComponent.setLogSessionId(logSessionId2);
    }
}
