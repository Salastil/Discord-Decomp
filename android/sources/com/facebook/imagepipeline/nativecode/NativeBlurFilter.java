package com.facebook.imagepipeline.nativecode;

import android.graphics.Bitmap;

@o8.c
/* loaded from: classes3.dex */
public class NativeBlurFilter {
    static {
        jb.a.C("native-filters");
    }

    public static void a(int i5, int i6, Bitmap bitmap) {
        bitmap.getClass();
        if (!(i5 > 0)) {
            throw new IllegalArgumentException();
        }
        if (!(i6 > 0)) {
            throw new IllegalArgumentException();
        }
        nativeIterativeBoxBlur(bitmap, i5, i6);
    }

    @o8.c
    private static native void nativeIterativeBoxBlur(Bitmap bitmap, int i5, int i6);
}
