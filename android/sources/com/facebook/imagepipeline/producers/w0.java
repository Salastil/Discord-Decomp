package com.facebook.imagepipeline.producers;

import android.os.SystemClock;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import com.facebook.imagepipeline.image.EncodedImage;
import java.util.Map;

/* loaded from: classes3.dex */
public final class w0 implements z0 {
    public final e4.c a;

    /* renamed from: b, reason: collision with root package name */
    public final qa.n f4827b;

    /* renamed from: c, reason: collision with root package name */
    public final NetworkFetcher f4828c;

    public w0(e4.c cVar, qa.n nVar, NetworkFetcher networkFetcher) {
        this.a = cVar;
        this.f4827b = nVar;
        this.f4828c = networkFetcher;
    }

    public static void e(qa.r rVar, int i5, BytesRange bytesRange, Consumer consumer) {
        EncodedImage encodedImage;
        s8.b A = CloseableReference.A(rVar.f());
        EncodedImage encodedImage2 = null;
        try {
            encodedImage = new EncodedImage(A);
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            encodedImage.setBytesRange(bytesRange);
            encodedImage.parseMetaData();
            consumer.b(i5, encodedImage);
            EncodedImage.closeSafely(encodedImage);
            CloseableReference.l(A);
        } catch (Throwable th3) {
            th = th3;
            encodedImage2 = encodedImage;
            EncodedImage.closeSafely(encodedImage2);
            CloseableReference.l(A);
            throw th;
        }
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        producerContext.C().c(producerContext, "NetworkFetchProducer");
        NetworkFetcher networkFetcher = this.f4828c;
        FetchState createFetchState = networkFetcher.createFetchState(consumer, producerContext);
        networkFetcher.fetch(createFetchState, new v0(this, createFetchState));
    }

    public final void c(qa.r rVar, FetchState fetchState) {
        int i5 = rVar.f16715i;
        a1 C = fetchState.f4691b.C();
        ProducerContext producerContext = fetchState.f4691b;
        Map extraMap = !C.f(producerContext, "NetworkFetchProducer") ? null : this.f4828c.getExtraMap(fetchState, i5);
        a1 C2 = producerContext.C();
        C2.i(producerContext, "NetworkFetchProducer", extraMap);
        C2.b(producerContext, "NetworkFetchProducer", true);
        producerContext.x("network");
        e(rVar, 1 | fetchState.f4693d, fetchState.f4694e, fetchState.a);
    }

    public final void d(qa.r rVar, FetchState fetchState) {
        ProducerContext producerContext = fetchState.f4691b;
        boolean z5 = false;
        if (((ImagePipelineConfig) producerContext.l()).f4616o != null && producerContext.P()) {
            z5 = this.f4828c.shouldPropagate(fetchState);
        }
        if (z5) {
            long uptimeMillis = SystemClock.uptimeMillis();
            if (uptimeMillis - fetchState.f4692c >= 100) {
                fetchState.f4692c = uptimeMillis;
                producerContext.C().a(producerContext);
                e(rVar, fetchState.f4693d, fetchState.f4694e, fetchState.a);
            }
        }
    }
}
