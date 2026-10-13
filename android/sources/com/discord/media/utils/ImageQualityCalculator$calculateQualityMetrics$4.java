package com.discord.media.utils;

import android.graphics.Bitmap;
import com.discord.media.utils.ImageQualityCalculator;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/discord/media/utils/ImageQualityCalculator$ImageQualityMetrics;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.utils.ImageQualityCalculator$calculateQualityMetrics$4", f = "ImageQualityCalculator.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ImageQualityCalculator$calculateQualityMetrics$4 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Bitmap $compressedBitmap;
    final /* synthetic */ Bitmap $originalBitmap;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ImageQualityCalculator$calculateQualityMetrics$4(Bitmap bitmap, Bitmap bitmap2, Continuation continuation) {
        super(2, continuation);
        this.$originalBitmap = bitmap;
        this.$compressedBitmap = bitmap2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ImageQualityCalculator$calculateQualityMetrics$4(this.$originalBitmap, this.$compressedBitmap, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        double calculatePSNR;
        double calculateSSIM;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            if (this.$originalBitmap.getWidth() == this.$compressedBitmap.getWidth() && this.$originalBitmap.getHeight() == this.$compressedBitmap.getHeight()) {
                int width = this.$originalBitmap.getWidth();
                int height = this.$originalBitmap.getHeight();
                int i5 = width * height;
                int[] iArr = new int[i5];
                int[] iArr2 = new int[i5];
                this.$originalBitmap.getPixels(iArr, 0, width, 0, 0, width, height);
                this.$compressedBitmap.getPixels(iArr2, 0, width, 0, 0, width, height);
                int[] unpremultiplyPixels = this.$originalBitmap.isPremultiplied() ? ImageQualityCalculator.INSTANCE.unpremultiplyPixels(iArr) : iArr;
                int[] unpremultiplyPixels2 = this.$compressedBitmap.isPremultiplied() ? ImageQualityCalculator.INSTANCE.unpremultiplyPixels(iArr2) : iArr2;
                long nanoTime = System.nanoTime();
                ImageQualityCalculator imageQualityCalculator = ImageQualityCalculator.INSTANCE;
                calculatePSNR = imageQualityCalculator.calculatePSNR(unpremultiplyPixels, unpremultiplyPixels2, width, height);
                long nanoTime2 = (System.nanoTime() - nanoTime) / 1000000;
                long nanoTime3 = System.nanoTime();
                calculateSSIM = imageQualityCalculator.calculateSSIM(unpremultiplyPixels, unpremultiplyPixels2, width, height);
                return new ImageQualityCalculator.ImageQualityMetrics(calculatePSNR, calculateSSIM, nanoTime2, (System.nanoTime() - nanoTime3) / 1000000);
            }
        } catch (Exception unused) {
        }
        return null;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ImageQualityCalculator$calculateQualityMetrics$4) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
