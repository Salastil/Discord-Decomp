package ga;

import android.graphics.Bitmap;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imageutils.BitmapUtil;
import gj.c;
import ha.l;
import kotlin.jvm.internal.Intrinsics;
import qa.e;
import s8.b;

/* loaded from: classes3.dex */
public final class a extends PlatformBitmapFactory {
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final l f9145b;

    public a(e bitmapPool, l closeableReferenceFactory) {
        Intrinsics.checkNotNullParameter(bitmapPool, "bitmapPool");
        Intrinsics.checkNotNullParameter(closeableReferenceFactory, "closeableReferenceFactory");
        this.a = bitmapPool;
        this.f9145b = closeableReferenceFactory;
    }

    @Override // com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory
    public final CloseableReference a(int i5, int i6, Bitmap.Config bitmapConfig) {
        Intrinsics.checkNotNullParameter(bitmapConfig, "bitmapConfig");
        int sizeInByteForBitmap = BitmapUtil.getSizeInByteForBitmap(i5, i6, bitmapConfig);
        e eVar = this.a;
        Bitmap bitmap = (Bitmap) eVar.get(sizeInByteForBitmap);
        if (bitmap.getAllocationByteCount() < BitmapUtil.getPixelSizeForBitmapConfig(bitmapConfig) * i5 * i6) {
            throw new IllegalStateException("Check failed.");
        }
        bitmap.reconfigure(i5, i6, bitmapConfig);
        b C = CloseableReference.C(bitmap, eVar, (c) this.f9145b.f9613d);
        Intrinsics.checkNotNullExpressionValue(C, "create(...)");
        return C;
    }
}
