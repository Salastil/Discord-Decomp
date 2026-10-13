package com.discord.media.utils;

import android.graphics.Bitmap;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/discord/media/utils/ImageQualityCalculator$ImageQualityMetrics;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.utils.ImageQualityCalculator$calculateQualityMetrics$2", f = "ImageQualityCalculator.kt", l = {135}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ImageQualityCalculator$calculateQualityMetrics$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ byte[] $compressedData;
    final /* synthetic */ byte[] $originalData;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ImageQualityCalculator$calculateQualityMetrics$2(byte[] bArr, byte[] bArr2, Continuation continuation) {
        super(2, continuation);
        this.$originalData = bArr;
        this.$compressedData = bArr2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ImageQualityCalculator$calculateQualityMetrics$2(this.$originalData, this.$compressedData, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Bitmap decodeByteArraySafely;
        Bitmap decodeByteArraySafely2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 != 0) {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
            return obj;
        }
        b.R(obj);
        ImageQualityCalculator imageQualityCalculator = ImageQualityCalculator.INSTANCE;
        decodeByteArraySafely = imageQualityCalculator.decodeByteArraySafely(this.$originalData);
        decodeByteArraySafely2 = imageQualityCalculator.decodeByteArraySafely(this.$compressedData);
        if (decodeByteArraySafely != null && decodeByteArraySafely2 != null) {
            this.label = 1;
            Object calculateQualityMetrics = imageQualityCalculator.calculateQualityMetrics(decodeByteArraySafely, decodeByteArraySafely2, this);
            return calculateQualityMetrics == aVar ? aVar : calculateQualityMetrics;
        }
        return null;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ImageQualityCalculator$calculateQualityMetrics$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
