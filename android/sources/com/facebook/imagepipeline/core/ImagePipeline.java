package com.facebook.imagepipeline.core;

import android.net.Uri;
import android.os.StrictMode;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.common.Priority;
import com.facebook.imagepipeline.listener.RequestListener;
import com.facebook.imagepipeline.producers.d1;
import com.facebook.imagepipeline.producers.e0;
import com.facebook.imagepipeline.producers.g1;
import com.facebook.imagepipeline.producers.z0;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import fo.n;
import ha.i;
import ja.f;
import ja.j;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicLong;
import kotlin.jvm.internal.Intrinsics;
import o8.g;

/* loaded from: classes3.dex */
public final class ImagePipeline {
    public static final CancellationException k = new CancellationException("Prefetching is not enabled");

    /* renamed from: l, reason: collision with root package name */
    public static final CancellationException f4596l;
    public final j a;

    /* renamed from: b, reason: collision with root package name */
    public final Supplier f4597b;

    /* renamed from: c, reason: collision with root package name */
    public final Supplier f4598c;

    /* renamed from: d, reason: collision with root package name */
    public final pa.c f4599d;

    /* renamed from: e, reason: collision with root package name */
    public final pa.b f4600e;

    /* renamed from: f, reason: collision with root package name */
    public final i f4601f;

    /* renamed from: g, reason: collision with root package name */
    public final i f4602g;

    /* renamed from: h, reason: collision with root package name */
    public final DefaultCacheKeyFactory f4603h;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicLong f4604i;
    public final f j;

    static {
        new CancellationException("ImageRequest is null");
        f4596l = new CancellationException("Modified URL is null");
    }

    public ImagePipeline(j producerSequenceFactory, Set requestListeners, Set requestListener2s, Supplier isPrefetchEnabledSupplier, e4.c bitmapMemoryCache, e4.c encodedMemoryCache, Supplier diskCachesStoreSupplier, DefaultCacheKeyFactory cacheKeyFactory, g1 threadHandoffProducerQueue, k8.c suppressBitmapPrefetchingSupplier, g lazyDataSource, f config) {
        Intrinsics.checkNotNullParameter(producerSequenceFactory, "producerSequenceFactory");
        Intrinsics.checkNotNullParameter(requestListeners, "requestListeners");
        Intrinsics.checkNotNullParameter(requestListener2s, "requestListener2s");
        Intrinsics.checkNotNullParameter(isPrefetchEnabledSupplier, "isPrefetchEnabledSupplier");
        Intrinsics.checkNotNullParameter(bitmapMemoryCache, "bitmapMemoryCache");
        Intrinsics.checkNotNullParameter(encodedMemoryCache, "encodedMemoryCache");
        Intrinsics.checkNotNullParameter(diskCachesStoreSupplier, "diskCachesStoreSupplier");
        Intrinsics.checkNotNullParameter(cacheKeyFactory, "cacheKeyFactory");
        Intrinsics.checkNotNullParameter(threadHandoffProducerQueue, "threadHandoffProducerQueue");
        Intrinsics.checkNotNullParameter(suppressBitmapPrefetchingSupplier, "suppressBitmapPrefetchingSupplier");
        Intrinsics.checkNotNullParameter(lazyDataSource, "lazyDataSource");
        Intrinsics.checkNotNullParameter(config, "config");
        this.a = producerSequenceFactory;
        this.f4597b = isPrefetchEnabledSupplier;
        this.f4598c = diskCachesStoreSupplier;
        this.f4599d = new pa.c(requestListeners);
        this.f4600e = new pa.b(requestListener2s);
        this.f4604i = new AtomicLong();
        this.f4601f = bitmapMemoryCache;
        this.f4602g = encodedMemoryCache;
        this.f4603h = cacheKeyFactory;
        this.j = config;
    }

    public final y8.a a(ImageRequest imageRequest, Object obj, ImageRequest.RequestLevel requestLevel, RequestListener requestListener, String str) {
        if (imageRequest == null) {
            y8.g r5 = com.facebook.imagepipeline.nativecode.b.r(new NullPointerException());
            Intrinsics.checkNotNullExpressionValue(r5, "immediateFailedDataSource(...)");
            return r5;
        }
        try {
            j jVar = this.a;
            jVar.getClass();
            Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
            ta.a.D();
            z0 a = jVar.a(imageRequest);
            if (imageRequest.getPostprocessor() != null) {
                a = jVar.d(a);
            }
            z0 z0Var = a;
            if (requestLevel == null) {
                requestLevel = ImageRequest.RequestLevel.FULL_FETCH;
            }
            return f(z0Var, imageRequest, requestLevel, obj, requestListener, str);
        } catch (Exception e9) {
            return com.facebook.imagepipeline.nativecode.b.r(e9);
        }
    }

    public final y8.a b(ImageRequest imageRequest, Object obj) {
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        if (imageRequest.getSourceUri() == null) {
            throw new IllegalStateException("Required value was null.");
        }
        try {
            z0 c6 = this.a.c(imageRequest);
            if (imageRequest.getResizeOptions() != null) {
                ImageRequestBuilder b10 = ImageRequestBuilder.b(imageRequest);
                b10.f4858d = null;
                imageRequest = b10.a();
            }
            return f(c6, imageRequest, ImageRequest.RequestLevel.FULL_FETCH, obj, null, null);
        } catch (Exception e9) {
            return com.facebook.imagepipeline.nativecode.b.r(e9);
        }
    }

    public final pa.c c(ImageRequest imageRequest, RequestListener requestListener) {
        if (imageRequest == null) {
            throw new IllegalStateException("Required value was null.");
        }
        pa.c cVar = this.f4599d;
        return requestListener == null ? imageRequest.getRequestListener() == null ? cVar : new pa.c(cVar, imageRequest.getRequestListener()) : imageRequest.getRequestListener() == null ? new pa.c(cVar, requestListener) : new pa.c(cVar, requestListener, imageRequest.getRequestListener());
    }

    public final boolean d(Uri uri, ImageRequest.CacheChoice cacheChoice) {
        boolean b10;
        ImageRequestBuilder d6 = ImageRequestBuilder.d(uri);
        d6.f4861g = cacheChoice;
        ImageRequest imageRequest = d6.a();
        Intrinsics.checkNotNull(imageRequest);
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        Object obj = this.f4598c.get();
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        ja.c cVar = (ja.c) obj;
        CacheKey encodedCacheKey = this.f4603h.getEncodedCacheKey(imageRequest, null);
        ImageRequest.CacheChoice cacheChoice2 = imageRequest.getCacheChoice();
        Intrinsics.checkNotNullExpressionValue(cacheChoice2, "getCacheChoice(...)");
        StrictMode.ThreadPolicy allowThreadDiskReads = StrictMode.allowThreadDiskReads();
        try {
            int ordinal = cacheChoice2.ordinal();
            if (ordinal == 0) {
                ha.b c6 = cVar.c();
                Intrinsics.checkNotNull(encodedCacheKey);
                b10 = c6.b(encodedCacheKey);
            } else if (ordinal == 1) {
                ha.b b11 = cVar.b();
                Intrinsics.checkNotNull(encodedCacheKey);
                b10 = b11.b(encodedCacheKey);
            } else {
                if (ordinal != 2) {
                    throw new n();
                }
                b10 = e(imageRequest);
            }
            StrictMode.setThreadPolicy(allowThreadDiskReads);
            return b10;
        } catch (Throwable th2) {
            StrictMode.setThreadPolicy(allowThreadDiskReads);
            throw th2;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final boolean e(ImageRequest imageRequest) {
        Object obj = this.f4598c.get();
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        ja.c cVar = (ja.c) obj;
        CacheKey encodedCacheKey = this.f4603h.getEncodedCacheKey(imageRequest, null);
        String diskCacheId = imageRequest.getDiskCacheId();
        if (diskCacheId != null) {
            ha.b bVar = (ha.b) cVar.a().get(diskCacheId);
            if (bVar == null) {
                return false;
            }
            Intrinsics.checkNotNull(encodedCacheKey);
            return bVar.b(encodedCacheKey);
        }
        Iterator it = cVar.a().entrySet().iterator();
        while (it.hasNext()) {
            ha.b bVar2 = (ha.b) ((Map.Entry) it.next()).getValue();
            Intrinsics.checkNotNull(encodedCacheKey);
            if (bVar2.b(encodedCacheKey)) {
                return true;
            }
        }
        return false;
    }

    public final y8.a f(z0 z0Var, ImageRequest imageRequest, ImageRequest.RequestLevel requestLevel, Object obj, RequestListener requestListener, String str) {
        boolean z5;
        ta.a.D();
        e0 e0Var = new e0(c(imageRequest, requestListener), this.f4600e);
        try {
            ImageRequest.RequestLevel lowestPermittedRequestLevel = imageRequest.getLowestPermittedRequestLevel();
            ImageRequest.RequestLevel requestLevel2 = lowestPermittedRequestLevel.f4854d > requestLevel.f4854d ? lowestPermittedRequestLevel : requestLevel;
            Intrinsics.checkNotNullExpressionValue(requestLevel2, "getMax(...)");
            String valueOf = String.valueOf(this.f4604i.getAndIncrement());
            if (!imageRequest.getProgressiveRenderingEnabled() && w8.a.c(imageRequest.getSourceUri())) {
                z5 = false;
                d1 d1Var = new d1(imageRequest, valueOf, str, e0Var, obj, requestLevel2, false, z5, imageRequest.getPriority(), this.j);
                ta.a.D();
                ka.b bVar = new ka.b(z0Var, d1Var, e0Var, 0);
                ta.a.D();
                return bVar;
            }
            z5 = true;
            d1 d1Var2 = new d1(imageRequest, valueOf, str, e0Var, obj, requestLevel2, false, z5, imageRequest.getPriority(), this.j);
            ta.a.D();
            ka.b bVar2 = new ka.b(z0Var, d1Var2, e0Var, 0);
            ta.a.D();
            return bVar2;
        } catch (Exception e9) {
            return com.facebook.imagepipeline.nativecode.b.r(e9);
        }
    }

    public final y8.a g(z0 producer, ImageRequest imageRequest, Object obj) {
        Priority priority = Priority.f4581i;
        e0 listener = new e0(c(imageRequest, null), this.f4600e);
        Uri uri = imageRequest.getSourceUri();
        Intrinsics.checkNotNullExpressionValue(uri, "getSourceUri(...)");
        Intrinsics.checkNotNullParameter(uri, "uri");
        if (uri == null) {
            y8.g r5 = com.facebook.imagepipeline.nativecode.b.r(f4596l);
            Intrinsics.checkNotNullExpressionValue(r5, "immediateFailedDataSource(...)");
            return r5;
        }
        if (!Intrinsics.areEqual(uri, uri)) {
            ImageRequestBuilder b10 = ImageRequestBuilder.b(imageRequest);
            b10.a = uri;
            imageRequest = b10.a();
        }
        ImageRequest imageRequest2 = imageRequest;
        try {
            ImageRequest.RequestLevel lowestPermittedRequestLevel = imageRequest2.getLowestPermittedRequestLevel();
            if (lowestPermittedRequestLevel.f4854d <= 1) {
                lowestPermittedRequestLevel = ImageRequest.RequestLevel.FULL_FETCH;
            }
            ImageRequest.RequestLevel requestLevel = lowestPermittedRequestLevel;
            Intrinsics.checkNotNullExpressionValue(requestLevel, "getMax(...)");
            String valueOf = String.valueOf(this.f4604i.getAndIncrement());
            f fVar = this.j;
            b bVar = ((ImagePipelineConfig) fVar).f4622u;
            d1 settableProducerContext = new d1(imageRequest2, valueOf, null, listener, obj, requestLevel, true, false, priority, fVar);
            Intrinsics.checkNotNullParameter(producer, "producer");
            Intrinsics.checkNotNullParameter(settableProducerContext, "settableProducerContext");
            Intrinsics.checkNotNullParameter(listener, "listener");
            return new ka.b(producer, settableProducerContext, listener, 1);
        } catch (Exception e9) {
            return com.facebook.imagepipeline.nativecode.b.r(e9);
        }
    }
}
