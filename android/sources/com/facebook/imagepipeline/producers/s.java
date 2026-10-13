package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.request.ImageRequest;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class s {
    public static final ha.b a(ImageRequest imageRequest, ha.b bVar, ha.b bVar2, o8.e eVar) {
        String diskCacheId;
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        if (imageRequest.getCacheChoice() == ImageRequest.CacheChoice.f4846d) {
            return bVar;
        }
        if (imageRequest.getCacheChoice() == ImageRequest.CacheChoice.f4847e) {
            return bVar2;
        }
        if (imageRequest.getCacheChoice() != ImageRequest.CacheChoice.f4848i || eVar == null || (diskCacheId = imageRequest.getDiskCacheId()) == null) {
            return null;
        }
        return (ha.b) eVar.get(diskCacheId);
    }
}
