package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.image.EncodedImage;

/* loaded from: classes3.dex */
public final class k1 extends r {

    /* renamed from: c, reason: collision with root package name */
    public final ProducerContext f4768c;

    /* renamed from: d, reason: collision with root package name */
    public final int f4769d;

    /* renamed from: e, reason: collision with root package name */
    public final ResizeOptions f4770e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ b f4771f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k1(b bVar, Consumer consumer, ProducerContext producerContext, int i5) {
        super(consumer);
        this.f4771f = bVar;
        this.f4768c = producerContext;
        this.f4769d = i5;
        this.f4770e = producerContext.g().getResizeOptions();
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void g(Throwable th2) {
        int i5 = this.f4769d + 1;
        ProducerContext producerContext = this.f4768c;
        b bVar = this.f4771f;
        Consumer consumer = this.f4801b;
        if (bVar.c(i5, consumer, producerContext)) {
            return;
        }
        consumer.onFailure(th2);
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        EncodedImage encodedImage = (EncodedImage) obj;
        Consumer consumer = this.f4801b;
        if (encodedImage != null && (c.e(i5) || a5.k0.F(encodedImage, this.f4770e))) {
            consumer.b(i5, encodedImage);
            return;
        }
        if (c.d(i5)) {
            EncodedImage.closeSafely(encodedImage);
            if (this.f4771f.c(this.f4769d + 1, consumer, this.f4768c)) {
                return;
            }
            consumer.b(1, null);
        }
    }
}
