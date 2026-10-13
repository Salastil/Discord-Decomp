package org.webrtc;

import android.content.Context;

/* loaded from: classes4.dex */
public interface VideoCapturer {
    void changeCaptureFormat(int i5, int i6, int i10);

    void dispose();

    void initialize(SurfaceTextureHelper surfaceTextureHelper, Context context, CapturerObserver capturerObserver);

    boolean isScreencast();

    void startCapture(int i5, int i6, int i10);

    void stopCapture();
}
