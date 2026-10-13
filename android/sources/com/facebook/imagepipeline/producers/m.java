package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.image.EncodedImage;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends p {
    @Override // com.facebook.imagepipeline.producers.p
    public final int m(EncodedImage encodedImage) {
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        return encodedImage.getSize();
    }

    @Override // com.facebook.imagepipeline.producers.p
    public final oa.j n() {
        oa.j jVar = new oa.j();
        jVar.a = 0;
        jVar.f15815b = false;
        jVar.f15816c = false;
        Intrinsics.checkNotNullExpressionValue(jVar, "of(...)");
        return jVar;
    }

    @Override // com.facebook.imagepipeline.producers.p
    public final synchronized boolean q(EncodedImage encodedImage, int i5) {
        return c.e(i5) ? false : this.f4787h.e(encodedImage, i5);
    }
}
