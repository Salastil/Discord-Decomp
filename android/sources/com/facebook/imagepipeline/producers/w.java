package com.facebook.imagepipeline.producers;

import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;

/* loaded from: classes3.dex */
public final class w implements z0 {
    public final Supplier a;

    /* renamed from: b, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4825b;

    /* renamed from: c, reason: collision with root package name */
    public final z0 f4826c;

    public w(Supplier supplier, DefaultCacheKeyFactory defaultCacheKeyFactory, z0 z0Var) {
        this.a = supplier;
        this.f4825b = defaultCacheKeyFactory;
        this.f4826c = z0Var;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        if (producerContext.Q().f4854d >= 2) {
            producerContext.o("disk", "nil-result_write");
            consumer.b(1, null);
        } else {
            if (producerContext.g().isCacheEnabled(32)) {
                consumer = new v(consumer, producerContext, this.a, this.f4825b);
            }
            this.f4826c.b(consumer, producerContext);
        }
    }
}
