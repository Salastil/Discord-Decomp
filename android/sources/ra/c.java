package ra;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.facebook.imageutils.BitmapUtil;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends b {
    @Override // ra.b
    public final int d(int i5, int i6, BitmapFactory.Options options) {
        Intrinsics.checkNotNullParameter(options, "options");
        Bitmap.Config config = options.outConfig;
        if (config == null) {
            config = Bitmap.Config.ARGB_8888;
        }
        return BitmapUtil.getSizeInByteForBitmap(i5, i6, config);
    }
}
