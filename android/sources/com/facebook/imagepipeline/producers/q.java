package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.core.DownsampleMode;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q implements z0 {
    public final qa.n a;

    /* renamed from: b, reason: collision with root package name */
    public final Executor f4791b;

    /* renamed from: c, reason: collision with root package name */
    public final ma.b f4792c;

    /* renamed from: d, reason: collision with root package name */
    public final gj.c f4793d;

    /* renamed from: e, reason: collision with root package name */
    public final DownsampleMode f4794e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f4795f;

    /* renamed from: g, reason: collision with root package name */
    public final z0 f4796g;

    /* renamed from: h, reason: collision with root package name */
    public final int f4797h;

    /* renamed from: i, reason: collision with root package name */
    public final ha.l f4798i;

    public q(qa.n byteArrayPool, Executor executor, ma.b imageDecoder, gj.c progressiveJpegConfig, DownsampleMode downsampleMode, boolean z5, z0 inputProducer, int i5, ha.l closeableReferenceFactory) {
        Intrinsics.checkNotNullParameter(byteArrayPool, "byteArrayPool");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(imageDecoder, "imageDecoder");
        Intrinsics.checkNotNullParameter(progressiveJpegConfig, "progressiveJpegConfig");
        Intrinsics.checkNotNullParameter(downsampleMode, "downsampleMode");
        Intrinsics.checkNotNullParameter(inputProducer, "inputProducer");
        Intrinsics.checkNotNullParameter(closeableReferenceFactory, "closeableReferenceFactory");
        o8.g recoverFromDecoderOOM = o8.h.f15794b;
        Intrinsics.checkNotNullParameter(recoverFromDecoderOOM, "recoverFromDecoderOOM");
        this.a = byteArrayPool;
        this.f4791b = executor;
        this.f4792c = imageDecoder;
        this.f4793d = progressiveJpegConfig;
        this.f4794e = downsampleMode;
        this.f4795f = z5;
        this.f4796g = inputProducer;
        this.f4797h = i5;
        this.f4798i = closeableReferenceFactory;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        q qVar;
        ProducerContext producerContext2;
        Consumer nVar;
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        Intrinsics.checkNotNullParameter(producerContext, "context");
        ta.a.D();
        ImageRequest g6 = producerContext.g();
        if (w8.a.c(g6.getSourceUri()) || ImageRequestBuilder.c(g6.getSourceUri())) {
            qVar = this;
            producerContext2 = producerContext;
            nVar = new n(qVar, consumer, producerContext2, new ma.c(this.a), this.f4793d, this.f4797h);
        } else {
            Intrinsics.checkNotNullParameter(consumer, "consumer");
            Intrinsics.checkNotNullParameter(producerContext, "producerContext");
            nVar = new m(this, consumer, producerContext, this.f4797h);
            qVar = this;
            producerContext2 = producerContext;
        }
        qVar.f4796g.b(nVar, producerContext2);
    }
}
