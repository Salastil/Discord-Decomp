package com.facebook.imagepipeline.postprocessors;

import a3.e;
import android.graphics.Bitmap;
import com.facebook.cache.common.CacheKey;
import com.facebook.imagepipeline.nativecode.NativeBlurFilter;
import com.facebook.imagepipeline.request.BasePostprocessor;
import j8.d;

/* loaded from: classes3.dex */
public final class IterativeBoxBlurPostProcessor extends BasePostprocessor {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f4689b;

    /* renamed from: c, reason: collision with root package name */
    public d f4690c;

    public IterativeBoxBlurPostProcessor(int i5) {
        if (!(i5 > 0)) {
            throw new IllegalArgumentException();
        }
        this.a = 2;
        this.f4689b = i5;
    }

    @Override // com.facebook.imagepipeline.request.BasePostprocessor, com.facebook.imagepipeline.request.Postprocessor
    public final CacheKey getPostprocessorCacheKey() {
        if (this.f4690c == null) {
            this.f4690c = new d(e.f(this.a, this.f4689b, "i", "r"));
        }
        return this.f4690c;
    }

    @Override // com.facebook.imagepipeline.request.BasePostprocessor
    public final void process(Bitmap bitmap) {
        NativeBlurFilter.a(this.a, this.f4689b, bitmap);
    }
}
