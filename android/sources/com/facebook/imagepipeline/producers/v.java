package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.HashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends r {

    /* renamed from: c, reason: collision with root package name */
    public final ProducerContext f4821c;

    /* renamed from: d, reason: collision with root package name */
    public final Supplier f4822d;

    /* renamed from: e, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4823e;

    public v(Consumer consumer, ProducerContext producerContext, Supplier supplier, DefaultCacheKeyFactory defaultCacheKeyFactory) {
        super(consumer);
        this.f4821c = producerContext;
        this.f4822d = supplier;
        this.f4823e = defaultCacheKeyFactory;
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        EncodedImage encodedImage = (EncodedImage) obj;
        Consumer consumer = this.f4801b;
        ProducerContext producerContext = this.f4821c;
        producerContext.C().c(producerContext, "DiskCacheWriteProducer");
        if (c.e(i5) || encodedImage == null || (i5 & 10) != 0 || encodedImage.getImageFormat() == aa.c.f275c) {
            producerContext.C().i(producerContext, "DiskCacheWriteProducer", null);
            consumer.b(i5, encodedImage);
            return;
        }
        ImageRequest g6 = producerContext.g();
        CacheKey key = this.f4823e.getEncodedCacheKey(g6, producerContext.c());
        ja.c cVar = (ja.c) this.f4822d.get();
        ha.b a = s.a(g6, cVar.c(), cVar.b(), cVar.a());
        if (a == null) {
            producerContext.C().k(producerContext, "DiskCacheWriteProducer", new ap.a("Got no disk cache for CacheChoice: " + Integer.valueOf(g6.getCacheChoice().ordinal()).toString(), 3), null);
            consumer.b(i5, encodedImage);
            return;
        }
        ha.l lVar = a.f9598g;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        ta.a.D();
        if (!EncodedImage.isValid(encodedImage)) {
            throw new IllegalStateException("Check failed.");
        }
        synchronized (lVar) {
            key.getClass();
            if (!EncodedImage.isValid(encodedImage)) {
                throw new IllegalArgumentException();
            }
            EncodedImage.closeSafely((EncodedImage) ((HashMap) lVar.f9613d).put(key, EncodedImage.cloneOrNull(encodedImage)));
            lVar.V();
        }
        EncodedImage cloneOrNull = EncodedImage.cloneOrNull(encodedImage);
        try {
            a.f9596e.execute(new androidx.fragment.app.e(a, key, cloneOrNull, 16));
        } catch (Exception e9) {
            p8.a.u(e9, "Failed to schedule disk-cache write for %s", key.c());
            lVar.Y(key, encodedImage);
            EncodedImage.closeSafely(cloneOrNull);
        }
        producerContext.C().i(producerContext, "DiskCacheWriteProducer", null);
        consumer.b(i5, encodedImage);
    }
}
