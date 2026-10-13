package co.discord.media_engine;

import androidx.annotation.NonNull;
import org.webrtc.EglBase;
import org.webrtc.EglHelper;

/* loaded from: classes.dex */
public final class SharedEglBaseContext {
    private static EglBase eglBase_;

    @NonNull
    public static synchronized EglBase.Context getEglContext() {
        EglBase.Context eglBaseContext;
        synchronized (SharedEglBaseContext.class) {
            try {
                if (eglBase_ == null) {
                    eglBase_ = EglHelper.create();
                }
                eglBaseContext = eglBase_.getEglBaseContext();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return eglBaseContext;
    }
}
