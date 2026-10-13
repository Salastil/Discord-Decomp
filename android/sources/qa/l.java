package qa;

import android.graphics.Bitmap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l implements e {
    @Override // r8.d
    public final Object get(int i5) {
        Bitmap createBitmap = Bitmap.createBitmap(1, (int) Math.ceil(i5 / 2.0d), Bitmap.Config.RGB_565);
        Intrinsics.checkNotNullExpressionValue(createBitmap, "createBitmap(...)");
        return createBitmap;
    }

    @Override // s8.c
    public final void release(Object obj) {
        Bitmap value = (Bitmap) obj;
        Intrinsics.checkNotNullParameter(value, "value");
        value.recycle();
    }
}
