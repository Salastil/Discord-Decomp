package com.facebook.animated.gif;

import android.graphics.Bitmap;
import ba.c;

/* loaded from: classes3.dex */
public class GifFrame implements c {

    @o8.c
    private long mNativeContext;

    @o8.c
    public GifFrame(long j) {
        this.mNativeContext = j;
    }

    @o8.c
    private native void nativeDispose();

    @o8.c
    private native void nativeFinalize();

    @o8.c
    private native int nativeGetDisposalMode();

    @o8.c
    private native int nativeGetDurationMs();

    @o8.c
    private native int nativeGetHeight();

    @o8.c
    private native int nativeGetTransparentPixelColor();

    @o8.c
    private native int nativeGetWidth();

    @o8.c
    private native int nativeGetXOffset();

    @o8.c
    private native int nativeGetYOffset();

    @o8.c
    private native boolean nativeHasTransparency();

    @o8.c
    private native void nativeRenderFrame(int i5, int i6, Bitmap bitmap);

    @Override // ba.c
    public final void a(int i5, int i6, Bitmap bitmap) {
        nativeRenderFrame(i5, i6, bitmap);
    }

    @Override // ba.c
    public final int b() {
        return nativeGetXOffset();
    }

    @Override // ba.c
    public final int c() {
        return nativeGetYOffset();
    }

    public final int d() {
        return nativeGetDisposalMode();
    }

    @Override // ba.c
    public final void dispose() {
        nativeDispose();
    }

    public final void finalize() {
        nativeFinalize();
    }

    @Override // ba.c
    public final int getHeight() {
        return nativeGetHeight();
    }

    @Override // ba.c
    public final int getWidth() {
        return nativeGetWidth();
    }
}
