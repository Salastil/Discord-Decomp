package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.Postprocessor;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class x0 implements z0 {
    public final /* synthetic */ int a = 1;

    /* renamed from: b, reason: collision with root package name */
    public final Object f4830b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f4831c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f4832d;

    public x0(ha.i iVar, DefaultCacheKeyFactory defaultCacheKeyFactory, x0 x0Var) {
        this.f4830b = iVar;
        this.f4831c = defaultCacheKeyFactory;
        this.f4832d = x0Var;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        switch (this.a) {
            case 0:
                ha.i iVar = (ha.i) this.f4830b;
                x0 x0Var = (x0) this.f4832d;
                a1 C = producerContext.C();
                ImageRequest g6 = producerContext.g();
                Object c6 = producerContext.c();
                Postprocessor postprocessor = g6.getPostprocessor();
                if (postprocessor != null && postprocessor.getPostprocessorCacheKey() != null) {
                    C.c(producerContext, "PostprocessedBitmapMemoryCacheProducer");
                    CacheKey postprocessedBitmapCacheKey = ((DefaultCacheKeyFactory) this.f4831c).getPostprocessedBitmapCacheKey(g6, c6);
                    CloseableReference closeableReference = producerContext.g().isCacheEnabled(1) ? iVar.get(postprocessedBitmapCacheKey) : null;
                    if (closeableReference == null) {
                        i iVar2 = new i(consumer, postprocessedBitmapCacheKey, iVar, producerContext.g().isCacheEnabled(2));
                        C.i(producerContext, "PostprocessedBitmapMemoryCacheProducer", C.f(producerContext, "PostprocessedBitmapMemoryCacheProducer") ? o8.e.a("cached_value_found", "false") : null);
                        x0Var.b(iVar2, producerContext);
                        break;
                    } else {
                        C.i(producerContext, "PostprocessedBitmapMemoryCacheProducer", C.f(producerContext, "PostprocessedBitmapMemoryCacheProducer") ? o8.e.a("cached_value_found", "true") : null);
                        C.b(producerContext, "PostprocessedBitmapMemoryCacheProducer", true);
                        producerContext.o("memory_bitmap", "postprocessed");
                        consumer.c(1.0f);
                        consumer.b(1, closeableReference);
                        closeableReference.close();
                        break;
                    }
                } else {
                    x0Var.b(consumer, producerContext);
                    break;
                }
                break;
            default:
                a1 C2 = producerContext.C();
                Postprocessor postprocessor2 = producerContext.g().getPostprocessor();
                postprocessor2.getClass();
                ((z0) this.f4830b).b(new a(new y0(this, consumer, C2, postprocessor2, producerContext), 1), producerContext);
                break;
        }
    }

    public x0(z0 z0Var, PlatformBitmapFactory platformBitmapFactory, Executor executor) {
        z0Var.getClass();
        this.f4830b = z0Var;
        this.f4831c = platformBitmapFactory;
        executor.getClass();
        this.f4832d = executor;
    }
}
