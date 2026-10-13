package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.image.EncodedImage;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n extends p {
    public final ma.c k;

    /* renamed from: l, reason: collision with root package name */
    public final gj.c f4777l;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(q qVar, Consumer consumer, ProducerContext producerContext, ma.c progressiveJpegParser, gj.c progressiveJpegConfig, int i5) {
        super(qVar, consumer, producerContext, i5);
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        Intrinsics.checkNotNullParameter(progressiveJpegParser, "progressiveJpegParser");
        Intrinsics.checkNotNullParameter(progressiveJpegConfig, "progressiveJpegConfig");
        this.k = progressiveJpegParser;
        this.f4777l = progressiveJpegConfig;
        this.f4788i = 0;
    }

    @Override // com.facebook.imagepipeline.producers.p
    public final int m(EncodedImage encodedImage) {
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        return this.k.f14422f;
    }

    @Override // com.facebook.imagepipeline.producers.p
    public final oa.j n() {
        int i5 = this.k.f14421e;
        Object obj = this.f4777l.f9329e;
        boolean z5 = i5 >= 0;
        oa.j jVar = new oa.j();
        jVar.a = i5;
        jVar.f15815b = z5;
        jVar.f15816c = false;
        Intrinsics.checkNotNullExpressionValue(jVar, "getQualityInfo(...)");
        return jVar;
    }

    @Override // com.facebook.imagepipeline.producers.p
    public final synchronized boolean q(EncodedImage encodedImage, int i5) {
        int i6;
        if (encodedImage == null) {
            return false;
        }
        try {
            boolean e9 = this.f4787h.e(encodedImage, i5);
            if (!c.e(i5)) {
                if (c.k(i5, 8)) {
                }
                return e9;
            }
            if (!c.k(i5, 4) && EncodedImage.isValid(encodedImage) && encodedImage.getImageFormat() == aa.b.a) {
                if (!this.k.b(encodedImage)) {
                    return false;
                }
                int i10 = this.k.f14421e;
                int i11 = this.f4788i;
                if (i10 <= i11) {
                    return false;
                }
                Object obj = this.f4777l.f9329e;
                List list = Collections.EMPTY_LIST;
                if (list != null && !list.isEmpty()) {
                    int i12 = 0;
                    while (true) {
                        if (i12 >= list.size()) {
                            i6 = Integer.MAX_VALUE;
                            break;
                        }
                        if (((Integer) list.get(i12)).intValue() > i11) {
                            i6 = ((Integer) list.get(i12)).intValue();
                            break;
                        }
                        i12++;
                    }
                    if (i10 >= i6 && !this.k.f14423g) {
                        return false;
                    }
                    this.f4788i = i10;
                }
                i6 = i11 + 1;
                if (i10 >= i6) {
                }
                this.f4788i = i10;
            }
            return e9;
        } catch (Throwable th2) {
            throw th2;
        }
    }
}
