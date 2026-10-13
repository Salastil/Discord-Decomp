package com.facebook.animated.webp;

import android.graphics.Bitmap;
import ba.c;

/* loaded from: classes3.dex */
public class WebPFrame implements c {

    @o8.c
    private long mNativeContext;

    @o8.c
    public WebPFrame(long j) {
        this.mNativeContext = j;
    }

    private native void nativeDispose();

    private native void nativeFinalize();

    private native int nativeGetDurationMs();

    private native int nativeGetHeight();

    private native int nativeGetWidth();

    private native int nativeGetXOffset();

    private native int nativeGetYOffset();

    private native boolean nativeIsBlendWithPreviousFrame();

    private native void nativeRenderFrame(int i5, int i6, Bitmap bitmap);

    private native boolean nativeShouldDisposeToBackgroundColor();

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

    public final boolean d() {
        return nativeIsBlendWithPreviousFrame();
    }

    @Override // ba.c
    public final void dispose() {
        nativeDispose();
    }

    public final boolean e() {
        return nativeShouldDisposeToBackgroundColor();
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
