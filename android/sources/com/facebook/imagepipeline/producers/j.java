package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.image.ImageInfo;

/* loaded from: classes3.dex */
public class j implements z0 {
    public final ha.i a;

    /* renamed from: b, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4754b;

    /* renamed from: c, reason: collision with root package name */
    public final z0 f4755c;

    public j(ha.i iVar, DefaultCacheKeyFactory defaultCacheKeyFactory, z0 z0Var) {
        this.a = iVar;
        this.f4754b = defaultCacheKeyFactory;
        this.f4755c = z0Var;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        try {
            ta.a.D();
            a1 C = producerContext.C();
            C.c(producerContext, d());
            CacheKey bitmapCacheKey = this.f4754b.getBitmapCacheKey(producerContext.g(), producerContext.c());
            CloseableReference closeableReference = producerContext.g().isCacheEnabled(1) ? this.a.get(bitmapCacheKey) : null;
            if (closeableReference != null) {
                producerContext.q(((ImageInfo) closeableReference.q()).getExtras());
                boolean z5 = ((oa.j) ((oa.c) closeableReference.q()).G()).f15816c;
                if (z5) {
                    C.i(producerContext, d(), C.f(producerContext, d()) ? o8.e.a("cached_value_found", "true") : null);
                    C.b(producerContext, d(), true);
                    producerContext.o("memory_bitmap", c());
                    consumer.c(1.0f);
                }
                consumer.b(z5 ? 1 : 0, closeableReference);
                closeableReference.close();
                if (z5) {
                    return;
                }
            }
            if (producerContext.Q().f4854d >= 4) {
                C.i(producerContext, d(), C.f(producerContext, d()) ? o8.e.a("cached_value_found", "false") : null);
                C.b(producerContext, d(), false);
                producerContext.o("memory_bitmap", c());
                consumer.b(1, null);
                return;
            }
            Consumer e9 = e(consumer, bitmapCacheKey, producerContext.g().isCacheEnabled(2));
            C.i(producerContext, d(), C.f(producerContext, d()) ? o8.e.a("cached_value_found", "false") : null);
            ta.a.D();
            this.f4755c.b(e9, producerContext);
            ta.a.D();
        } finally {
            ta.a.D();
        }
    }

    public String c() {
        return "pipe_bg";
    }

    public String d() {
        return "BitmapMemoryCacheProducer";
    }

    public Consumer e(Consumer consumer, CacheKey cacheKey, boolean z5) {
        return new i(this, consumer, cacheKey, z5);
    }
}
