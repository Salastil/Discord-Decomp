package co;

import android.graphics.Bitmap;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class b {
    public static final /* synthetic */ int[] a;

    static {
        int[] iArr = new int[Bitmap.CompressFormat.values().length];
        a = iArr;
        iArr[Bitmap.CompressFormat.PNG.ordinal()] = 1;
        iArr[Bitmap.CompressFormat.WEBP.ordinal()] = 2;
    }
}
