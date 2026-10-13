package io.sentry.android.replay.screenshot;

import android.graphics.SurfaceTexture;
import android.media.MediaMuxer;
import java.io.FileDescriptor;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class a {
    public static /* synthetic */ SurfaceTexture a() {
        return new SurfaceTexture(false);
    }

    public static /* synthetic */ MediaMuxer b(FileDescriptor fileDescriptor, int i5) {
        return new MediaMuxer(fileDescriptor, i5);
    }
}
