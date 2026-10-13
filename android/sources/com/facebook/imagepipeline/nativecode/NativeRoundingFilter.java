package com.facebook.imagepipeline.nativecode;

import android.graphics.Bitmap;

@o8.c
/* loaded from: classes3.dex */
public class NativeRoundingFilter {
    static {
        jb.a.C("native-filters");
    }

    @o8.c
    private static native void nativeAddRoundedCornersFilter(Bitmap bitmap, int i5, int i6, int i10, int i11);

    @o8.c
    private static native void nativeToCircleFastFilter(Bitmap bitmap, boolean z5);

    @o8.c
    private static native void nativeToCircleFilter(Bitmap bitmap, boolean z5);

    @o8.c
    private static native void nativeToCircleWithBorderFilter(Bitmap bitmap, int i5, int i6, boolean z5);

    @o8.c
    public static void toCircle(Bitmap bitmap, boolean z5) {
        bitmap.getClass();
        if (bitmap.getWidth() < 3 || bitmap.getHeight() < 3) {
            return;
        }
        nativeToCircleFilter(bitmap, z5);
    }

    @o8.c
    public static void toCircleFast(Bitmap bitmap, boolean z5) {
        bitmap.getClass();
        if (bitmap.getWidth() < 3 || bitmap.getHeight() < 3) {
            return;
        }
        nativeToCircleFastFilter(bitmap, z5);
    }
}
