package org.webrtc;

import android.content.Context;

/* loaded from: classes4.dex */
public class ApplicationContextProvider {
    @CalledByNative
    public static Context getApplicationContext() {
        return ContextUtils.getApplicationContext();
    }
}
