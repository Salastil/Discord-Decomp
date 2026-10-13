package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;

/* loaded from: classes3.dex */
public final class y extends r {

    /* renamed from: c, reason: collision with root package name */
    public final ha.i f4833c;

    /* renamed from: d, reason: collision with root package name */
    public final CacheKey f4834d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f4835e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f4836f;

    public y(Consumer consumer, ha.i iVar, CacheKey cacheKey, boolean z5, boolean z6) {
        super(consumer);
        this.f4833c = iVar;
        this.f4834d = cacheKey;
        this.f4835e = z5;
        this.f4836f = z6;
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        EncodedImage encodedImage = (EncodedImage) obj;
        try {
            ta.a.D();
            boolean e9 = c.e(i5);
            Consumer consumer = this.f4801b;
            if (!e9 && encodedImage != null) {
                if (!((i5 & 10) != 0) && encodedImage.getImageFormat() != aa.c.f275c) {
                    CloseableReference byteBufferRef = encodedImage.getByteBufferRef();
                    if (byteBufferRef != null) {
                        try {
                            CloseableReference q5 = (this.f4836f && this.f4835e) ? this.f4833c.q(this.f4834d, byteBufferRef) : null;
                            if (q5 != null) {
                                try {
                                    EncodedImage encodedImage2 = new EncodedImage(q5);
                                    encodedImage2.copyMetaDataFrom(encodedImage);
                                    try {
                                        consumer.c(1.0f);
                                        consumer.b(i5, encodedImage2);
                                        return;
                                    } finally {
                                        EncodedImage.closeSafely(encodedImage2);
                                    }
                                } finally {
                                    q5.close();
                                }
                            }
                        } finally {
                            byteBufferRef.close();
                        }
                    }
                    consumer.b(i5, encodedImage);
                    return;
                }
            }
            consumer.b(i5, encodedImage);
        } finally {
            ta.a.D();
        }
    }
}
