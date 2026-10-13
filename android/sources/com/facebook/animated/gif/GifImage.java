package com.facebook.animated.gif;

import android.graphics.Bitmap;
import ba.b;
import ca.a;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import java.nio.ByteBuffer;
import o8.c;
import o8.h;

@c
/* loaded from: classes3.dex */
public class GifImage implements b, a {

    /* renamed from: b, reason: collision with root package name */
    public static volatile boolean f4397b;
    public Bitmap.Config a = null;

    @c
    private long mNativeContext;

    @c
    public GifImage() {
    }

    public static synchronized void c() {
        synchronized (GifImage.class) {
            if (!f4397b) {
                f4397b = true;
                jb.a.C("gifimage");
            }
        }
    }

    @c
    private static native GifImage nativeCreateFromDirectByteBuffer(ByteBuffer byteBuffer, int i5, boolean z5);

    @c
    private static native GifImage nativeCreateFromFileDescriptor(int i5, int i6, boolean z5);

    @c
    private static native GifImage nativeCreateFromNativeMemory(long j, int i5, int i6, boolean z5);

    @c
    private native void nativeDispose();

    @c
    private native void nativeFinalize();

    @c
    private native int nativeGetDuration();

    @c
    private native GifFrame nativeGetFrame(int i5);

    @c
    private native int nativeGetFrameCount();

    @c
    private native int[] nativeGetFrameDurations();

    @c
    private native int nativeGetHeight();

    @c
    private native int nativeGetLoopCount();

    @c
    private native int nativeGetSizeInBytes();

    @c
    private native int nativeGetWidth();

    @c
    private native boolean nativeIsAnimated();

    @Override // ca.a
    public final b a(ByteBuffer byteBuffer, ImageDecodeOptions imageDecodeOptions) {
        c();
        byteBuffer.rewind();
        imageDecodeOptions.getClass();
        GifImage nativeCreateFromDirectByteBuffer = nativeCreateFromDirectByteBuffer(byteBuffer, Integer.MAX_VALUE, false);
        nativeCreateFromDirectByteBuffer.a = imageDecodeOptions.f4578b;
        return nativeCreateFromDirectByteBuffer;
    }

    @Override // ca.a
    public final b b(long j, int i5, ImageDecodeOptions imageDecodeOptions) {
        c();
        h.a(Boolean.valueOf(j != 0));
        imageDecodeOptions.getClass();
        GifImage nativeCreateFromNativeMemory = nativeCreateFromNativeMemory(j, i5, Integer.MAX_VALUE, false);
        nativeCreateFromNativeMemory.a = imageDecodeOptions.f4578b;
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
        return false;
    }

    @Override // ba.b
    public final ba.a o(int i5) {
        GifFrame nativeGetFrame = nativeGetFrame(i5);
        try {
            int b10 = nativeGetFrame.b();
            int c6 = nativeGetFrame.c();
            int width = nativeGetFrame.getWidth();
            int height = nativeGetFrame.getHeight();
            int d6 = nativeGetFrame.d();
            int i6 = 1;
            if (d6 != 0 && d6 != 1) {
                int i10 = 2;
                if (d6 != 2) {
                    i10 = 3;
                    if (d6 == 3) {
                    }
                }
                i6 = i10;
            }
            return new ba.a(b10, c6, width, height, 1, i6);
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
        int nativeGetLoopCount = nativeGetLoopCount();
        if (nativeGetLoopCount == -1) {
            return 1;
        }
        if (nativeGetLoopCount != 0) {
            return nativeGetLoopCount + 1;
        }
        return 0;
    }

    @c
    public GifImage(long j) {
        this.mNativeContext = j;
    }
}
