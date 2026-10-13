package com.facebook.animated.webp;

import android.graphics.Bitmap;
import ba.b;
import ca.a;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import java.nio.ByteBuffer;
import o8.c;
import o8.h;

@c
/* loaded from: classes3.dex */
public class WebPImage implements b, a {
    public Bitmap.Config a = null;

    @c
    private long mNativeContext;

    @c
    public WebPImage() {
    }

    private static native WebPImage nativeCreateFromDirectByteBuffer(ByteBuffer byteBuffer);

    private static native WebPImage nativeCreateFromNativeMemory(long j, int i5);

    private native void nativeDispose();

    private native void nativeFinalize();

    private native int nativeGetDuration();

    private native WebPFrame nativeGetFrame(int i5);

    private native int nativeGetFrameCount();

    private native int[] nativeGetFrameDurations();

    private native int nativeGetHeight();

    private native int nativeGetLoopCount();

    private native int nativeGetSizeInBytes();

    private native int nativeGetWidth();

    @Override // ca.a
    public final b a(ByteBuffer byteBuffer, ImageDecodeOptions imageDecodeOptions) {
        com.facebook.imagepipeline.nativecode.c.r();
        byteBuffer.rewind();
        WebPImage nativeCreateFromDirectByteBuffer = nativeCreateFromDirectByteBuffer(byteBuffer);
        if (imageDecodeOptions != null) {
            nativeCreateFromDirectByteBuffer.a = imageDecodeOptions.f4578b;
        }
        return nativeCreateFromDirectByteBuffer;
    }

    @Override // ca.a
    public final b b(long j, int i5, ImageDecodeOptions imageDecodeOptions) {
        com.facebook.imagepipeline.nativecode.c.r();
        h.a(Boolean.valueOf(j != 0));
        WebPImage nativeCreateFromNativeMemory = nativeCreateFromNativeMemory(j, i5);
        if (imageDecodeOptions != null) {
            nativeCreateFromNativeMemory.a = imageDecodeOptions.f4578b;
        }
        return nativeCreateFromNativeMemory;
    }

    public final void finalize() {
        nativeFinalize();
    }

    @Override // ba.b
    public final int getHeight() {
        return nativeGetHeight();
    }

    @Override // ba.b
    public final int getWidth() {
        return nativeGetWidth();
    }

    @Override // ba.b
    public final int j() {
        return nativeGetSizeInBytes();
    }

    @Override // ba.b
    public final int k() {
        return nativeGetFrameCount();
    }

    @Override // ba.b
    public final Bitmap.Config l() {
        return this.a;
    }

    @Override // ba.b
    public final ba.c m(int i5) {
        return nativeGetFrame(i5);
    }

    @Override // ba.b
    public final boolean n() {
        return true;
    }

    @Override // ba.b
    public final ba.a o(int i5) {
        WebPFrame nativeGetFrame = nativeGetFrame(i5);
        try {
            int b10 = nativeGetFrame.b();
            int c6 = nativeGetFrame.c();
            int width = nativeGetFrame.getWidth();
            int height = nativeGetFrame.getHeight();
            int i6 = 2;
            int i10 = nativeGetFrame.d() ? 1 : 2;
            if (!nativeGetFrame.e()) {
                i6 = 1;
            }
            return new ba.a(b10, c6, width, height, i10, i6);
        } finally {
            nativeGetFrame.dispose();
        }
    }

    @Override // ba.b
    public final int[] p() {
        return nativeGetFrameDurations();
    }

    @Override // ba.b
    public final int q() {
        return nativeGetLoopCount();
    }

    @c
    public WebPImage(long j) {
        this.mNativeContext = j;
    }
}
