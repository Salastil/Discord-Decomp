package com.facebook.react.views.imagehelper;

import android.net.Uri;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.imagepipeline.core.c;
import com.facebook.react.modules.fresco.ImageCacheControl;
import hc.m;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import o8.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001:\u0001\u000eB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J&\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00072\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\nH\u0007J.\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00072\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\n2\u0006\u0010\f\u001a\u00020\rH\u0007¨\u0006\u000f"}, d2 = {"Lcom/facebook/react/views/imagehelper/MultiSourceHelper;", "", "<init>", "()V", "getBestSourceForSize", "Lcom/facebook/react/views/imagehelper/MultiSourceHelper$MultiSourceResult;", "width", "", "height", "sources", "", "Lcom/facebook/react/views/imagehelper/ImageSource;", "multiplier", "", "MultiSourceResult", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class MultiSourceHelper {

    @NotNull
    public static final MultiSourceHelper INSTANCE = new MultiSourceHelper();

    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u001b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0005\u0010\u0006R\u0012\u0010\u0002\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\u0004\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lcom/facebook/react/views/imagehelper/MultiSourceHelper$MultiSourceResult;", "", "bestResult", "Lcom/facebook/react/views/imagehelper/ImageSource;", "bestResultInCache", "<init>", "(Lcom/facebook/react/views/imagehelper/ImageSource;Lcom/facebook/react/views/imagehelper/ImageSource;)V", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class MultiSourceResult {
        public final ImageSource bestResult;
        public final ImageSource bestResultInCache;

        public MultiSourceResult(ImageSource imageSource, ImageSource imageSource2) {
            this.bestResult = imageSource;
            this.bestResultInCache = imageSource2;
        }
    }

    private MultiSourceHelper() {
    }

    @NotNull
    public static final MultiSourceResult getBestSourceForSize(int width, int height, @NotNull List<? extends ImageSource> sources) {
        Intrinsics.checkNotNullParameter(sources, "sources");
        return getBestSourceForSize(width, height, sources, 1.0d);
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x00ba, code lost:
    
        if ((r1.d(r2, com.facebook.imagepipeline.request.ImageRequest.CacheChoice.f4846d) || r1.d(r2, com.facebook.imagepipeline.request.ImageRequest.CacheChoice.f4847e) || r1.d(r2, com.facebook.imagepipeline.request.ImageRequest.CacheChoice.f4848i)) != false) goto L40;
     */
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final MultiSourceResult getBestSourceForSize(int width, int height, @NotNull List<? extends ImageSource> sources, double multiplier) {
        Intrinsics.checkNotNullParameter(sources, "sources");
        if (sources.isEmpty()) {
            return new MultiSourceResult(null, null);
        }
        if (sources.size() == 1) {
            return new MultiSourceResult(sources.get(0), null);
        }
        if (width <= 0 || height <= 0) {
            return new MultiSourceResult(null, null);
        }
        c cVar = c.f4653p;
        h.d(cVar, "ImagePipelineFactory was not initialized!");
        ImagePipeline e9 = cVar.e();
        Intrinsics.checkNotNullExpressionValue(e9, "getImagePipeline(...)");
        double d6 = width * height * multiplier;
        double d7 = Double.MAX_VALUE;
        ImageSource imageSource = null;
        ImageSource imageSource2 = null;
        double d8 = Double.MAX_VALUE;
        for (ImageSource imageSource3 : sources) {
            double abs = Math.abs(1.0d - (imageSource3.getSize() / d6));
            if (abs < d7 && !imageSource3.getIsForceCached()) {
                imageSource2 = imageSource3;
                d7 = abs;
            }
            if (abs < d8 && imageSource3.getCacheControl() != ImageCacheControl.RELOAD) {
                Uri uri = imageSource3.getUri();
                e9.getClass();
                if (!(uri == null ? false : e9.f4601f.g0(new m(25, uri)))) {
                    Uri uri2 = imageSource3.getUri();
                }
                imageSource = imageSource3;
                d8 = abs;
            }
            if (imageSource3.getIsForceCached()) {
                d8 = 0.0d;
                imageSource = imageSource3;
            }
        }
        return new MultiSourceResult(imageSource2, (imageSource == null || imageSource2 == null || !Intrinsics.areEqual(imageSource.getSource(), imageSource2.getSource())) ? imageSource : null);
    }
}
