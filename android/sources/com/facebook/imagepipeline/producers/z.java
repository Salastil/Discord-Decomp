package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import com.facebook.imagepipeline.image.EncodedImage;

/* loaded from: classes3.dex */
public final class z implements z0 {
    public final ha.i a;

    /* renamed from: b, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4844b;

    /* renamed from: c, reason: collision with root package name */
    public final z0 f4845c;

    public z(ha.i iVar, DefaultCacheKeyFactory defaultCacheKeyFactory, z0 z0Var) {
        this.a = iVar;
        this.f4844b = defaultCacheKeyFactory;
        this.f4845c = z0Var;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        try {
            ta.a.D();
            a1 C = producerContext.C();
            C.c(producerContext, "EncodedMemoryCacheProducer");
            CacheKey encodedCacheKey = this.f4844b.getEncodedCacheKey(producerContext.g(), producerContext.c());
            CloseableReference closeableReference = producerContext.g().isCacheEnabled(4) ? this.a.get(encodedCacheKey) : null;
            try {
                if (closeableReference != null) {
                    EncodedImage encodedImage = new EncodedImage(closeableReference);
                    try {
                        C.i(producerContext, "EncodedMemoryCacheProducer", C.f(producerContext, "EncodedMemoryCacheProducer") ? o8.e.a("cached_value_found", "true") : null);
                        C.b(producerContext, "EncodedMemoryCacheProducer", true);
                        producerContext.x("memory_encoded");
                        consumer.c(1.0f);
                        consumer.b(1, encodedImage);
                        EncodedImage.closeSafely(encodedImage);
                        closeableReference.close();
                        ta.a.D();
                        return;
                    } catch (Throwable th2) {
                        EncodedImage.closeSafely(encodedImage);
                        throw th2;
                    }
                }
                if (producerContext.Q().f4854d < 3) {
                    y yVar = new y(consumer, this.a, encodedCacheKey, producerContext.g().isCacheEnabled(8), ((ImagePipelineConfig) producerContext.l()).f4622u.f4648e);
                    C.i(producerContext, "EncodedMemoryCacheProducer", C.f(producerContext, "EncodedMemoryCacheProducer") ? o8.e.a("cached_value_found", "false") : null);
                    this.f4845c.b(yVar, producerContext);
                    CloseableReference.l(closeableReference);
                    ta.a.D();
                    return;
                }
                C.i(producerContext, "EncodedMemoryCacheProducer", C.f(producerContext, "EncodedMemoryCacheProducer") ? o8.e.a("cached_value_found", "false") : null);
                C.b(producerContext, "EncodedMemoryCacheProducer", false);
                producerContext.o("memory_encoded", "nil-result");
                consumer.b(1, null);
                CloseableReference.l(closeableReference);
                ta.a.D();
            } catch (Throwable th3) {
                CloseableReference.l(closeableReference);
                throw th3;
            }
        } catch (Throwable th4) {
            ta.a.D();
            throw th4;
        }
    }
}
