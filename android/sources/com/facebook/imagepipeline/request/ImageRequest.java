package com.facebook.imagepipeline.request;

import android.net.Uri;
import android.os.Build;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.internal.Fn;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.common.Priority;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.core.DownsampleMode;
import com.facebook.imagepipeline.listener.RequestListener;
import j8.c;
import java.io.File;
import java.util.HashMap;
import k2.r;
import kotlin.text.x;
import o8.h;
import w3.q;
import w8.a;

/* loaded from: classes3.dex */
public class ImageRequest {
    public static final Fn REQUEST_TO_URI_FN = new c();
    private static boolean sCacheHashcode;
    private static boolean sUseCachedHashcodeInEquals;
    private final BytesRange mBytesRange;
    private final CacheChoice mCacheChoice;
    protected int mCachesDisabled;
    private final Boolean mDecodePrefetches;
    private final int mDelayMs;
    private final String mDiskCacheId;
    private final DownsampleMode mDownsampleOverride;
    private int mHashcode;
    private final ImageDecodeOptions mImageDecodeOptions;
    private final boolean mIsDiskCacheEnabled;
    private final boolean mIsMemoryCacheEnabled;
    private final boolean mLoadThumbnailOnly;
    private final boolean mLocalThumbnailPreviewsEnabled;
    private final RequestLevel mLowestPermittedRequestLevel;
    private final Postprocessor mPostprocessor;
    private final boolean mProgressiveRenderingEnabled;
    private final RequestListener mRequestListener;
    private final Priority mRequestPriority;
    private final ResizeOptions mResizeOptions;
    private final Boolean mResizingAllowedOverride;
    private final RotationOptions mRotationOptions;
    private File mSourceFile;
    private final Uri mSourceUri;
    private final int mSourceUriType;

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    public static final class CacheChoice {

        /* renamed from: d, reason: collision with root package name */
        public static final CacheChoice f4846d;

        /* renamed from: e, reason: collision with root package name */
        public static final CacheChoice f4847e;

        /* renamed from: i, reason: collision with root package name */
        public static final CacheChoice f4848i;

        /* renamed from: v, reason: collision with root package name */
        public static final /* synthetic */ CacheChoice[] f4849v;

        static {
            CacheChoice cacheChoice = new CacheChoice("SMALL", 0);
            f4846d = cacheChoice;
            CacheChoice cacheChoice2 = new CacheChoice("DEFAULT", 1);
            f4847e = cacheChoice2;
            CacheChoice cacheChoice3 = new CacheChoice("DYNAMIC", 2);
            f4848i = cacheChoice3;
            f4849v = new CacheChoice[]{cacheChoice, cacheChoice2, cacheChoice3};
        }

        public static CacheChoice valueOf(String str) {
            return (CacheChoice) Enum.valueOf(CacheChoice.class, str);
        }

        public static CacheChoice[] values() {
            return (CacheChoice[]) f4849v.clone();
        }
    }

    public enum RequestLevel {
        FULL_FETCH(1),
        DISK_CACHE(2),
        /* JADX INFO: Fake field, exist only in values array */
        ENCODED_MEMORY_CACHE(3),
        BITMAP_MEMORY_CACHE(4);


        /* renamed from: d, reason: collision with root package name */
        public final int f4854d;

        RequestLevel(int i5) {
            this.f4854d = i5;
        }
    }

    public ImageRequest(ImageRequestBuilder imageRequestBuilder) {
        this.mCacheChoice = imageRequestBuilder.f4861g;
        Uri uri = imageRequestBuilder.a;
        this.mSourceUri = uri;
        int i5 = -1;
        if (uri != null) {
            if (a.c(uri)) {
                i5 = 0;
            } else if (uri.getPath() != null && "file".equals(a.b(uri))) {
                String a = q8.a.a(uri.getPath());
                i5 = a != null ? x.o(a, "video/", false) : false ? 2 : 3;
            } else if ("content".equals(a.b(uri))) {
                i5 = 4;
            } else if ("asset".equals(a.b(uri))) {
                i5 = 5;
            } else if ("res".equals(a.b(uri))) {
                i5 = 6;
            } else if ("data".equals(uri.getScheme())) {
                i5 = 7;
            } else if ("android.resource".equals(a.b(uri))) {
                i5 = 8;
            }
        }
        this.mSourceUriType = i5;
        this.mProgressiveRenderingEnabled = imageRequestBuilder.f4862h;
        this.mLocalThumbnailPreviewsEnabled = imageRequestBuilder.f4863i;
        this.mLoadThumbnailOnly = imageRequestBuilder.j;
        this.mImageDecodeOptions = imageRequestBuilder.f4860f;
        this.mResizeOptions = imageRequestBuilder.f4858d;
        RotationOptions rotationOptions = imageRequestBuilder.f4859e;
        this.mRotationOptions = rotationOptions == null ? RotationOptions.f4585c : rotationOptions;
        this.mBytesRange = imageRequestBuilder.f4867o;
        this.mRequestPriority = imageRequestBuilder.k;
        this.mLowestPermittedRequestLevel = imageRequestBuilder.f4856b;
        boolean z5 = (imageRequestBuilder.f4857c & 48) == 0 && (a.c(imageRequestBuilder.a) || ImageRequestBuilder.c(imageRequestBuilder.a));
        this.mIsDiskCacheEnabled = z5;
        int i6 = imageRequestBuilder.f4857c;
        this.mCachesDisabled = !z5 ? i6 | 48 : i6;
        this.mIsMemoryCacheEnabled = (i6 & 15) == 0;
        this.mDecodePrefetches = imageRequestBuilder.f4865m;
        this.mPostprocessor = imageRequestBuilder.f4864l;
        this.mRequestListener = imageRequestBuilder.f4866n;
        this.mResizingAllowedOverride = imageRequestBuilder.f4868p;
        this.mDownsampleOverride = imageRequestBuilder.f4869q;
        this.mDelayMs = imageRequestBuilder.f4870r;
        this.mDiskCacheId = imageRequestBuilder.f4871s;
    }

    public static int a(Object obj) {
        if (obj == null) {
            return 0;
        }
        return obj.hashCode();
    }

    public static ImageRequest fromFile(File file) {
        if (file == null) {
            return null;
        }
        Uri uri = a.a;
        return fromUri(Uri.fromFile(file));
    }

    public static ImageRequest fromUri(Uri uri) {
        if (uri == null) {
            return null;
        }
        return ImageRequestBuilder.d(uri).a();
    }

    public static void setCacheHashcode(boolean z5) {
        sCacheHashcode = z5;
    }

    public static void setUseCachedHashcodeInEquals(boolean z5) {
        sUseCachedHashcodeInEquals = z5;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof ImageRequest)) {
            return false;
        }
        ImageRequest imageRequest = (ImageRequest) obj;
        if (sUseCachedHashcodeInEquals) {
            int i5 = this.mHashcode;
            int i6 = imageRequest.mHashcode;
            if (i5 != 0 && i6 != 0 && i5 != i6) {
                return false;
            }
        }
        if (this.mLocalThumbnailPreviewsEnabled != imageRequest.mLocalThumbnailPreviewsEnabled || this.mIsDiskCacheEnabled != imageRequest.mIsDiskCacheEnabled || this.mIsMemoryCacheEnabled != imageRequest.mIsMemoryCacheEnabled || !h.f(this.mSourceUri, imageRequest.mSourceUri) || !h.f(this.mCacheChoice, imageRequest.mCacheChoice) || !h.f(this.mDiskCacheId, imageRequest.mDiskCacheId) || !h.f(this.mSourceFile, imageRequest.mSourceFile) || !h.f(this.mBytesRange, imageRequest.mBytesRange) || !h.f(this.mImageDecodeOptions, imageRequest.mImageDecodeOptions) || !h.f(this.mResizeOptions, imageRequest.mResizeOptions) || !h.f(this.mRequestPriority, imageRequest.mRequestPriority) || !h.f(this.mLowestPermittedRequestLevel, imageRequest.mLowestPermittedRequestLevel) || !h.f(Integer.valueOf(this.mCachesDisabled), Integer.valueOf(imageRequest.mCachesDisabled)) || !h.f(this.mDecodePrefetches, imageRequest.mDecodePrefetches) || !h.f(this.mResizingAllowedOverride, imageRequest.mResizingAllowedOverride) || !h.f(this.mDownsampleOverride, imageRequest.mDownsampleOverride) || !h.f(this.mRotationOptions, imageRequest.mRotationOptions) || this.mLoadThumbnailOnly != imageRequest.mLoadThumbnailOnly) {
            return false;
        }
        Postprocessor postprocessor = this.mPostprocessor;
        CacheKey postprocessorCacheKey = postprocessor != null ? postprocessor.getPostprocessorCacheKey() : null;
        Postprocessor postprocessor2 = imageRequest.mPostprocessor;
        return h.f(postprocessorCacheKey, postprocessor2 != null ? postprocessor2.getPostprocessorCacheKey() : null) && this.mDelayMs == imageRequest.mDelayMs;
    }

    @Deprecated
    public boolean getAutoRotateEnabled() {
        return this.mRotationOptions.a();
    }

    public BytesRange getBytesRange() {
        return this.mBytesRange;
    }

    public CacheChoice getCacheChoice() {
        return this.mCacheChoice;
    }

    public int getCachesDisabled() {
        return this.mCachesDisabled;
    }

    public int getDelayMs() {
        return this.mDelayMs;
    }

    public String getDiskCacheId() {
        return this.mDiskCacheId;
    }

    public DownsampleMode getDownsampleOverride() {
        return this.mDownsampleOverride;
    }

    public ImageDecodeOptions getImageDecodeOptions() {
        return this.mImageDecodeOptions;
    }

    public boolean getLoadThumbnailOnlyForAndroidSdkAboveQ() {
        return Build.VERSION.SDK_INT >= 29 && this.mLoadThumbnailOnly;
    }

    public boolean getLocalThumbnailPreviewsEnabled() {
        return this.mLocalThumbnailPreviewsEnabled;
    }

    public RequestLevel getLowestPermittedRequestLevel() {
        return this.mLowestPermittedRequestLevel;
    }

    public Postprocessor getPostprocessor() {
        return this.mPostprocessor;
    }

    public int getPreferredHeight() {
        ResizeOptions resizeOptions = this.mResizeOptions;
        return resizeOptions != null ? resizeOptions.f4584b : RecyclerView.ItemAnimator.FLAG_MOVED;
    }

    public int getPreferredWidth() {
        ResizeOptions resizeOptions = this.mResizeOptions;
        return resizeOptions != null ? resizeOptions.a : RecyclerView.ItemAnimator.FLAG_MOVED;
    }

    public Priority getPriority() {
        return this.mRequestPriority;
    }

    public boolean getProgressiveRenderingEnabled() {
        return this.mProgressiveRenderingEnabled;
    }

    public RequestListener getRequestListener() {
        return this.mRequestListener;
    }

    public ResizeOptions getResizeOptions() {
        return this.mResizeOptions;
    }

    public Boolean getResizingAllowedOverride() {
        return this.mResizingAllowedOverride;
    }

    public RotationOptions getRotationOptions() {
        return this.mRotationOptions;
    }

    public synchronized File getSourceFile() {
        try {
            if (this.mSourceFile == null) {
                this.mSourceUri.getPath().getClass();
                this.mSourceFile = new File(this.mSourceUri.getPath());
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return this.mSourceFile;
    }

    public Uri getSourceUri() {
        return this.mSourceUri;
    }

    public int getSourceUriType() {
        return this.mSourceUriType;
    }

    public int hashCode() {
        boolean z5 = sCacheHashcode;
        int i5 = z5 ? this.mHashcode : 0;
        if (i5 != 0) {
            return i5;
        }
        Postprocessor postprocessor = this.mPostprocessor;
        int k = q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(q.k(0, this.mCacheChoice), this.mSourceUri), Boolean.valueOf(this.mLocalThumbnailPreviewsEnabled)), this.mBytesRange), this.mRequestPriority), this.mLowestPermittedRequestLevel), Integer.valueOf(this.mCachesDisabled)), Boolean.valueOf(this.mIsDiskCacheEnabled)), Boolean.valueOf(this.mIsMemoryCacheEnabled)), this.mImageDecodeOptions), this.mDecodePrefetches), this.mResizeOptions), this.mRotationOptions), postprocessor != null ? postprocessor.getPostprocessorCacheKey() : null), this.mResizingAllowedOverride), this.mDownsampleOverride), Integer.valueOf(this.mDelayMs)), Boolean.valueOf(this.mLoadThumbnailOnly));
        if (z5) {
            this.mHashcode = k;
        }
        return k;
    }

    public boolean isCacheEnabled(int i5) {
        return (i5 & getCachesDisabled()) == 0;
    }

    public boolean isDiskCacheEnabled() {
        return this.mIsDiskCacheEnabled;
    }

    public boolean isMemoryCacheEnabled() {
        return this.mIsMemoryCacheEnabled;
    }

    public void recordHashCode(HashMap<String, Integer> hashMap) {
        Postprocessor postprocessor = this.mPostprocessor;
        CacheKey postprocessorCacheKey = postprocessor != null ? postprocessor.getPostprocessorCacheKey() : null;
        hashMap.put("ImageRequest", Integer.valueOf(hashCode()));
        hashMap.put("ImageRequest.mSourceUri", Integer.valueOf(a(this.mSourceUri)));
        hashMap.put("ImageRequest.mLocalThumbnailPreviewsEnabled", Integer.valueOf(Boolean.valueOf(this.mLocalThumbnailPreviewsEnabled).hashCode()));
        hashMap.put("ImageRequest.mBytesRange", Integer.valueOf(a(this.mBytesRange)));
        hashMap.put("ImageRequest.mRequestPriority", Integer.valueOf(a(this.mRequestPriority)));
        hashMap.put("ImageRequest.mLowestPermittedRequestLevel", Integer.valueOf(a(this.mLowestPermittedRequestLevel)));
        hashMap.put("ImageRequest.mCachesDisabled", Integer.valueOf(Integer.valueOf(this.mCachesDisabled).hashCode()));
        hashMap.put("ImageRequest.mIsDiskCacheEnabled", Integer.valueOf(Boolean.valueOf(this.mIsDiskCacheEnabled).hashCode()));
        hashMap.put("ImageRequest.mIsMemoryCacheEnabled", Integer.valueOf(Boolean.valueOf(this.mIsMemoryCacheEnabled).hashCode()));
        hashMap.put("ImageRequest.mImageDecodeOptions", Integer.valueOf(a(this.mImageDecodeOptions)));
        hashMap.put("ImageRequest.mDecodePrefetches", Integer.valueOf(a(this.mDecodePrefetches)));
        hashMap.put("ImageRequest.mSoumResizeOptionsrceUri", Integer.valueOf(a(this.mResizeOptions)));
        hashMap.put("ImageRequest.mRotationOptions", Integer.valueOf(a(this.mRotationOptions)));
        hashMap.put("ImageRequest.postprocessorCacheKey", Integer.valueOf(a(postprocessorCacheKey)));
        hashMap.put("ImageRequest.mResizingAllowedOverride", Integer.valueOf(a(this.mResizingAllowedOverride)));
        hashMap.put("ImageRequest.mDownsampleOverride", Integer.valueOf(a(this.mDownsampleOverride)));
        hashMap.put("ImageRequest.mDelayMs", Integer.valueOf(Integer.valueOf(this.mDelayMs).hashCode()));
        hashMap.put("ImageRequest.mLoadThumbnailOnly", Integer.valueOf(Boolean.valueOf(this.mLoadThumbnailOnly).hashCode()));
    }

    public Boolean shouldDecodePrefetches() {
        return this.mDecodePrefetches;
    }

    public String toString() {
        r j = h.j(this);
        j.h(this.mSourceUri, "uri");
        j.h(this.mCacheChoice, "cacheChoice");
        j.h(this.mImageDecodeOptions, "decodeOptions");
        j.h(this.mPostprocessor, "postprocessor");
        j.h(this.mRequestPriority, "priority");
        j.h(this.mResizeOptions, "resizeOptions");
        j.h(this.mRotationOptions, "rotationOptions");
        j.h(this.mBytesRange, "bytesRange");
        j.h(this.mResizingAllowedOverride, "resizingAllowedOverride");
        j.h(this.mDownsampleOverride, "downsampleOverride");
        j.g("progressiveRenderingEnabled", this.mProgressiveRenderingEnabled);
        j.g("localThumbnailPreviewsEnabled", this.mLocalThumbnailPreviewsEnabled);
        j.g("loadThumbnailOnly", this.mLoadThumbnailOnly);
        j.h(this.mLowestPermittedRequestLevel, "lowestPermittedRequestLevel");
        j.f(this.mCachesDisabled, "cachesDisabled");
        j.g("isDiskCacheEnabled", this.mIsDiskCacheEnabled);
        j.g("isMemoryCacheEnabled", this.mIsMemoryCacheEnabled);
        j.h(this.mDecodePrefetches, "decodePrefetches");
        j.f(this.mDelayMs, "delayMs");
        return j.toString();
    }

    public static ImageRequest fromUri(String str) {
        if (str == null || str.length() == 0) {
            return null;
        }
        return fromUri(Uri.parse(str));
    }
}
