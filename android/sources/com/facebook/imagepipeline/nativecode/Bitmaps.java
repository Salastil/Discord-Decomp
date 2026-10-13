package com.facebook.imagepipeline.nativecode;

import android.graphics.Bitmap;
import java.util.List;
import o8.h;

@o8.c
/* loaded from: classes3.dex */
public class Bitmaps {
    public static final /* synthetic */ int a = 0;

    static {
        List list = a.a;
        jb.a.C("imagepipeline");
    }

    @o8.c
    public static void copyBitmap(Bitmap bitmap, Bitmap bitmap2) {
        h.a(Boolean.valueOf(bitmap2.getConfig() == bitmap.getConfig()));
        h.a(Boolean.valueOf(bitmap.isMutable()));
        h.a(Boolean.valueOf(bitmap.getWidth() == bitmap2.getWidth()));
        h.a(Boolean.valueOf(bitmap.getHeight() == bitmap2.getHeight()));
        nativeCopyBitmap(bitmap, bitmap.getRowBytes(), bitmap2, bitmap2.getRowBytes(), bitmap.getHeight());
    }

    @o8.c
    private static native void nativeCopyBitmap(Bitmap bitmap, int i5, Bitmap bitmap2, int i6, int i10);
}
