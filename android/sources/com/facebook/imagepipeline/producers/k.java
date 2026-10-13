package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;

/* loaded from: classes3.dex */
public final class k extends r {

    /* renamed from: c, reason: collision with root package name */
    public final ProducerContext f4761c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ f1 f4762d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(f1 f1Var, Consumer consumer, ProducerContext producerContext) {
        super(consumer);
        this.f4762d = f1Var;
        this.f4761c = producerContext;
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void g(Throwable th2) {
        ((j1) this.f4762d.f4734c).b(this.f4801b, this.f4761c);
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        EncodedImage encodedImage = (EncodedImage) obj;
        ProducerContext producerContext = this.f4761c;
        ImageRequest g6 = producerContext.g();
        boolean d6 = c.d(i5);
        boolean F = a5.k0.F(encodedImage, g6.getResizeOptions());
        Consumer consumer = this.f4801b;
        if (encodedImage != null && (F || g6.getLocalThumbnailPreviewsEnabled())) {
            if (d6 && F) {
                consumer.b(i5, encodedImage);
            } else {
                consumer.b(i5 & (-2), encodedImage);
            }
        }
        if (!d6 || F || g6.getLoadThumbnailOnlyForAndroidSdkAboveQ()) {
            return;
        }
        EncodedImage.closeSafely(encodedImage);
        ((j1) this.f4762d.f4734c).b(consumer, producerContext);
    }
}
