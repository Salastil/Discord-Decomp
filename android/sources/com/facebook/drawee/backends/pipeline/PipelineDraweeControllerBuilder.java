package com.facebook.drawee.backends.pipeline;

import android.content.Context;
import android.content.res.Resources;
import androidx.appcompat.widget.b4;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Supplier;
import com.facebook.drawee.controller.AbstractDraweeControllerBuilder;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.imagepipeline.cache.DefaultCacheKeyFactory;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.imagepipeline.request.ImageRequest;
import d9.b;
import f0.e;
import ha.i;
import ha.k;
import k8.c;
import th.t1;
import y8.a;

/* loaded from: classes3.dex */
public final class PipelineDraweeControllerBuilder extends AbstractDraweeControllerBuilder {
    public final ImagePipeline k;

    /* renamed from: l, reason: collision with root package name */
    public final b4 f4412l;

    public PipelineDraweeControllerBuilder(Context context, b4 b4Var, ImagePipeline imagePipeline) {
        c();
        this.k = imagePipeline;
        this.f4412l = b4Var;
    }

    @Override // com.facebook.drawee.controller.AbstractDraweeControllerBuilder
    public final a b(b bVar, String str, Object obj, Object obj2, int i5) {
        ImageRequest.RequestLevel requestLevel;
        ImageRequest imageRequest = (ImageRequest) obj;
        ImagePipeline imagePipeline = this.k;
        int b10 = e.b(i5);
        if (b10 == 0) {
            requestLevel = ImageRequest.RequestLevel.FULL_FETCH;
        } else if (b10 == 1) {
            requestLevel = ImageRequest.RequestLevel.DISK_CACHE;
        } else {
            if (b10 != 2) {
                StringBuilder sb2 = new StringBuilder("Cache level");
                sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? "null" : "BITMAP_MEMORY_CACHE" : "DISK_CACHE" : "FULL_FETCH");
                sb2.append("is not supported. ");
                throw new RuntimeException(sb2.toString());
            }
            requestLevel = ImageRequest.RequestLevel.BITMAP_MEMORY_CACHE;
        }
        ImageRequest.RequestLevel requestLevel2 = requestLevel;
        synchronized (bVar) {
        }
        return imagePipeline.a(imageRequest, obj2, requestLevel2, null, str);
    }

    @Override // com.facebook.drawee.controller.AbstractDraweeControllerBuilder
    public final b d() {
        b bVar;
        ta.a.D();
        try {
            DraweeController draweeController = this.f4420g;
            String valueOf = String.valueOf(AbstractDraweeControllerBuilder.j.getAndIncrement());
            if (draweeController instanceof b) {
                bVar = (b) draweeController;
            } else {
                b4 b4Var = this.f4412l;
                bVar = new b((Resources) b4Var.f927d, (f9.b) b4Var.f928e, (t1) b4Var.f929i, (k) b4Var.f930v, (m8.e) b4Var.f931w, (i) b4Var.f932x);
                c cVar = (c) b4Var.f933y;
                if (cVar != null) {
                    bVar.f7452y = ((Boolean) cVar.f13206b).booleanValue();
                }
            }
            Supplier e9 = e(bVar, valueOf);
            ImageRequest imageRequest = this.f4415b;
            DefaultCacheKeyFactory defaultCacheKeyFactory = this.k.f4603h;
            CacheKey postprocessedBitmapCacheKey = (defaultCacheKeyFactory == null || imageRequest == null) ? null : imageRequest.getPostprocessor() != null ? defaultCacheKeyFactory.getPostprocessedBitmapCacheKey(imageRequest, this.a) : defaultCacheKeyFactory.getBitmapCacheKey(imageRequest, this.a);
            Object obj = this.a;
            ta.a.D();
            bVar.f(obj, valueOf);
            bVar.f9136p = false;
            bVar.f7451x = e9;
            bVar.q(null);
            bVar.f7450w = postprocessedBitmapCacheKey;
            bVar.q(null);
            ta.a.D();
            synchronized (bVar) {
                bVar.f7453z = this.f4415b;
                bVar.A = this.f4416c;
            }
            ta.a.D();
            return bVar;
        } catch (Throwable th2) {
            ta.a.D();
            throw th2;
        }
    }
}
