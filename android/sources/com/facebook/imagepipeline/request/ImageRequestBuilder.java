package com.facebook.imagepipeline.request;

import ai.k;
import android.net.Uri;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.common.Priority;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.core.DownsampleMode;
import com.facebook.imagepipeline.listener.RequestListener;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.HashSet;
import java.util.Iterator;
import w8.a;

/* loaded from: classes3.dex */
public final class ImageRequestBuilder {

    /* renamed from: t, reason: collision with root package name */
    public static final HashSet f4855t = new HashSet();
    public Uri a;

    /* renamed from: b, reason: collision with root package name */
    public ImageRequest.RequestLevel f4856b;

    /* renamed from: c, reason: collision with root package name */
    public int f4857c;

    /* renamed from: d, reason: collision with root package name */
    public ResizeOptions f4858d;

    /* renamed from: e, reason: collision with root package name */
    public RotationOptions f4859e;

    /* renamed from: f, reason: collision with root package name */
    public ImageDecodeOptions f4860f;

    /* renamed from: g, reason: collision with root package name */
    public ImageRequest.CacheChoice f4861g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f4862h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f4863i;
    public boolean j;
    public Priority k;

    /* renamed from: l, reason: collision with root package name */
    public Postprocessor f4864l;

    /* renamed from: m, reason: collision with root package name */
    public Boolean f4865m;

    /* renamed from: n, reason: collision with root package name */
    public RequestListener f4866n;

    /* renamed from: o, reason: collision with root package name */
    public BytesRange f4867o;

    /* renamed from: p, reason: collision with root package name */
    public Boolean f4868p;

    /* renamed from: q, reason: collision with root package name */
    public DownsampleMode f4869q;

    /* renamed from: r, reason: collision with root package name */
    public int f4870r;

    /* renamed from: s, reason: collision with root package name */
    public String f4871s;

    public static ImageRequestBuilder b(ImageRequest imageRequest) {
        ImageRequestBuilder d6 = d(imageRequest.getSourceUri());
        d6.f4860f = imageRequest.getImageDecodeOptions();
        d6.f4867o = imageRequest.getBytesRange();
        d6.f4861g = imageRequest.getCacheChoice();
        d6.f4863i = imageRequest.getLocalThumbnailPreviewsEnabled();
        d6.j = imageRequest.getLoadThumbnailOnlyForAndroidSdkAboveQ();
        d6.f4856b = imageRequest.getLowestPermittedRequestLevel();
        d6.f4857c = imageRequest.getCachesDisabled();
        if (d6.f4861g != ImageRequest.CacheChoice.f4848i) {
            d6.f4871s = null;
        }
        d6.f4864l = imageRequest.getPostprocessor();
        d6.f4862h = imageRequest.getProgressiveRenderingEnabled();
        d6.k = imageRequest.getPriority();
        d6.f4858d = imageRequest.getResizeOptions();
        d6.f4866n = imageRequest.getRequestListener();
        d6.f4859e = imageRequest.getRotationOptions();
        d6.f4865m = imageRequest.shouldDecodePrefetches();
        d6.f4870r = imageRequest.getDelayMs();
        d6.f4871s = imageRequest.getDiskCacheId();
        d6.f4869q = imageRequest.getDownsampleOverride();
        d6.f4868p = imageRequest.getResizingAllowedOverride();
        return d6;
    }

    public static boolean c(Uri uri) {
        HashSet hashSet = f4855t;
        if (hashSet == null || uri == null) {
            return false;
        }
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            if (((String) it.next()).equals(uri.getScheme())) {
                return true;
            }
        }
        return false;
    }

    public static ImageRequestBuilder d(Uri uri) {
        ImageRequestBuilder imageRequestBuilder = new ImageRequestBuilder();
        imageRequestBuilder.a = null;
        imageRequestBuilder.f4856b = ImageRequest.RequestLevel.FULL_FETCH;
        imageRequestBuilder.f4857c = 0;
        imageRequestBuilder.f4858d = null;
        imageRequestBuilder.f4859e = null;
        imageRequestBuilder.f4860f = ImageDecodeOptions.f4577c;
        imageRequestBuilder.f4861g = ImageRequest.CacheChoice.f4847e;
        imageRequestBuilder.f4862h = false;
        imageRequestBuilder.f4863i = false;
        imageRequestBuilder.j = false;
        imageRequestBuilder.k = Priority.f4582v;
        imageRequestBuilder.f4864l = null;
        imageRequestBuilder.f4865m = null;
        imageRequestBuilder.f4867o = null;
        imageRequestBuilder.f4868p = null;
        imageRequestBuilder.f4869q = null;
        imageRequestBuilder.f4871s = null;
        uri.getClass();
        imageRequestBuilder.a = uri;
        return imageRequestBuilder;
    }

    public final ImageRequest a() {
        Uri uri = this.a;
        if (uri == null) {
            throw new k("Source must be set!");
        }
        if ("res".equals(a.b(uri))) {
            if (!this.a.isAbsolute()) {
                throw new k("Resource URI path must be absolute.");
            }
            if (this.a.getPath().isEmpty()) {
                throw new k("Resource URI must not be empty");
            }
            try {
                Integer.parseInt(this.a.getPath().substring(1));
            } catch (NumberFormatException unused) {
                throw new k("Resource URI path must be a resource id.");
            }
        }
        if (!"asset".equals(a.b(this.a)) || this.a.isAbsolute()) {
            return new ImageRequest(this);
        }
        throw new k("Asset URI path must be absolute.");
    }
}
