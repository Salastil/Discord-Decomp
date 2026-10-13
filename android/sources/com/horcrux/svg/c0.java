package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.imagehelper.ImageSource;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c0 extends RenderableView {
    public String E;
    public int F;
    public final AtomicBoolean G;

    /* renamed from: d, reason: collision with root package name */
    public r0 f6312d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6313e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6314i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6315v;

    /* renamed from: w, reason: collision with root package name */
    public String f6316w;

    /* renamed from: x, reason: collision with root package name */
    public int f6317x;

    /* renamed from: y, reason: collision with root package name */
    public int f6318y;

    public c0(ThemedReactContext themedReactContext) {
        super(themedReactContext);
        this.G = new AtomicBoolean(false);
    }

    public final void c(Canvas canvas, Paint paint, Bitmap bitmap, float f2) {
        if (this.f6317x == 0 || this.f6318y == 0) {
            this.f6317x = bitmap.getWidth();
            this.f6318y = bitmap.getHeight();
        }
        RectF d6 = d();
        RectF rectF = new RectF(0.0f, 0.0f, this.f6317x, this.f6318y);
        io.sentry.config.a.t(rectF, d6, this.E, this.F).mapRect(rectF);
        canvas.clipPath(getPath(canvas, paint));
        Path clipPath = getClipPath(canvas, paint);
        if (clipPath != null) {
            canvas.clipPath(clipPath);
        }
        Paint paint2 = new Paint();
        paint2.setAlpha((int) (f2 * 255.0f));
        canvas.drawBitmap(bitmap, (Rect) null, rectF, paint2);
        this.mCTM.mapRect(rectF);
        setClientRect(rectF);
    }

    public final RectF d() {
        double relativeOnWidth = relativeOnWidth(this.f6312d);
        double relativeOnHeight = relativeOnHeight(this.f6313e);
        double relativeOnWidth2 = relativeOnWidth(this.f6314i);
        double relativeOnHeight2 = relativeOnHeight(this.f6315v);
        if (relativeOnWidth2 == 0.0d) {
            relativeOnWidth2 = this.f6317x * this.mScale;
        }
        if (relativeOnHeight2 == 0.0d) {
            relativeOnHeight2 = this.f6318y * this.mScale;
        }
        return new RectF((float) relativeOnWidth, (float) relativeOnHeight, (float) (relativeOnWidth + relativeOnWidth2), (float) (relativeOnHeight + relativeOnHeight2));
    }

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final void draw(Canvas canvas, Paint paint, float f2) {
        boolean t5;
        if (this.G.get()) {
            return;
        }
        ImagePipeline r5 = d9.a.r();
        ImageRequest imageRequest = ImageRequest.fromUri(new ImageSource(this.mContext, this.f6316w).getUri());
        if (imageRequest == null) {
            r5.getClass();
            t5 = false;
        } else {
            CacheKey bitmapCacheKey = r5.f4603h.getBitmapCacheKey(imageRequest, null);
            ha.i iVar = r5.f4601f;
            Intrinsics.checkNotNull(bitmapCacheKey);
            CloseableReference closeableReference = iVar.get(bitmapCacheKey);
            try {
                t5 = CloseableReference.t(closeableReference);
            } finally {
                CloseableReference.l(closeableReference);
            }
        }
        if (!t5) {
            this.G.set(true);
            r5.a(imageRequest, this.mContext, null, null, null).d(new b0(this), m8.e.f());
            return;
        }
        float f10 = f2 * this.mOpacity;
        ReactContext reactContext = this.mContext;
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        ImageRequest.RequestLevel lowestPermittedRequestLevelOnSubmit = ImageRequest.RequestLevel.BITMAP_MEMORY_CACHE;
        Intrinsics.checkNotNullParameter(lowestPermittedRequestLevelOnSubmit, "lowestPermittedRequestLevelOnSubmit");
        CancellationException cancellationException = ImagePipeline.k;
        y8.a a = r5.a(imageRequest, reactContext, lowestPermittedRequestLevelOnSubmit, null, null);
        try {
            try {
                CloseableReference closeableReference2 = (CloseableReference) a.getResult();
                try {
                    if (closeableReference2 == null) {
                        a.close();
                        return;
                    }
                    try {
                        oa.c cVar = (oa.c) closeableReference2.q();
                        if (!(cVar instanceof oa.d)) {
                            closeableReference2.close();
                            a.close();
                            return;
                        }
                        Bitmap bitmap = ((oa.g) ((oa.d) cVar)).f15806w;
                        if (bitmap == null) {
                            closeableReference2.close();
                            a.close();
                        } else {
                            c(canvas, paint, bitmap, f10);
                            closeableReference2.close();
                            a.close();
                        }
                    } catch (Exception e9) {
                        throw new IllegalStateException(e9);
                    }
                } catch (Throwable th2) {
                    closeableReference2.close();
                    throw th2;
                }
            } catch (Throwable th3) {
                a.close();
                throw th3;
            }
        } catch (Exception e10) {
            throw new IllegalStateException(e10);
        }
    }

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final Path getPath(Canvas canvas, Paint paint) {
        Path path = new Path();
        this.mPath = path;
        path.addRect(d(), Path.Direction.CW);
        return this.mPath;
    }
}
