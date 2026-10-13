package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class u implements z0 {
    public final Supplier a;

    /* renamed from: b, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4816b;

    /* renamed from: c, reason: collision with root package name */
    public final w f4817c;

    public u(Supplier supplier, DefaultCacheKeyFactory defaultCacheKeyFactory, w wVar) {
        this.a = supplier;
        this.f4816b = defaultCacheKeyFactory;
        this.f4817c = wVar;
    }

    public static Map c(a1 a1Var, ProducerContext producerContext, boolean z5, int i5) {
        if (a1Var.f(producerContext, "DiskCacheProducer")) {
            return z5 ? o8.e.b("cached_value_found", String.valueOf(z5), "encodedImageSize", String.valueOf(i5)) : o8.e.a("cached_value_found", String.valueOf(z5));
        }
        return null;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        j4.e b10;
        boolean z5;
        w wVar = this.f4817c;
        ImageRequest g6 = producerContext.g();
        int i5 = 1;
        if (!producerContext.g().isCacheEnabled(16)) {
            if (producerContext.Q().f4854d < 2) {
                wVar.b(consumer, producerContext);
                return;
            } else {
                producerContext.o("disk", "nil-result_read");
                consumer.b(1, null);
                return;
            }
        }
        producerContext.C().c(producerContext, "DiskCacheProducer");
        CacheKey key = this.f4816b.getEncodedCacheKey(g6, producerContext.c());
        ja.c cVar = (ja.c) this.a.get();
        ha.b a = s.a(g6, cVar.c(), cVar.b(), cVar.a());
        if (a == null) {
            producerContext.C().k(producerContext, "DiskCacheProducer", new ap.a("Got no disk cache for CacheChoice: " + Integer.valueOf(g6.getCacheChoice().ordinal()).toString(), 3), null);
            if (producerContext.Q().f4854d < 2) {
                wVar.b(consumer, producerContext);
                return;
            } else {
                producerContext.o("disk", "nil-result_read");
                consumer.b(1, null);
                return;
            }
        }
        AtomicBoolean isCancelled = new AtomicBoolean(false);
        a.getClass();
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(isCancelled, "isCancelled");
        ta.a.D();
        EncodedImage S = a.f9598g.S(key);
        if (S != null) {
            p8.a.q("Found image for %s in staging area", key.c(), ha.b.class);
            a.f9597f.getClass();
            b10 = new j4.e();
            if (!b10.g(S)) {
                throw new IllegalStateException("Cannot set the result of a completed task.");
            }
            Intrinsics.checkNotNullExpressionValue(b10, "forResult(...)");
        } else {
            try {
                b10 = j4.e.a(new com.facebook.react.runtime.p(isCancelled, a, key, i5), a.f9595d);
            } catch (Exception e9) {
                p8.a.u(e9, "Failed to schedule disk-cache read for %s", key.c());
                b10 = j4.e.b(e9);
            }
        }
        t tVar = new t(this, producerContext.C(), producerContext, consumer);
        b10.getClass();
        h4.a aVar = j4.e.f12416h;
        ve.i iVar = new ve.i(20);
        synchronized (b10.a) {
            try {
                synchronized (b10.a) {
                    z5 = b10.f12418b;
                }
                if (!z5) {
                    b10.f12422f.add(new j4.d(iVar, tVar, aVar));
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (z5) {
            try {
                aVar.execute(new a5.s(iVar, tVar, b10, 9));
            } catch (Exception e10) {
                iVar.q(new ai.k(e10));
            }
        }
        producerContext.i(new o(1, isCancelled));
    }
}
