package oa;

import android.graphics.Bitmap;
import com.facebook.common.references.CloseableReference;
import com.facebook.imageutils.BitmapUtil;

/* loaded from: classes3.dex */
public final class g extends a implements d {
    public static final /* synthetic */ int F = 0;
    public final int E;

    /* renamed from: v, reason: collision with root package name */
    public CloseableReference f15805v;

    /* renamed from: w, reason: collision with root package name */
    public volatile Bitmap f15806w;

    /* renamed from: x, reason: collision with root package name */
    public final k f15807x;

    /* renamed from: y, reason: collision with root package name */
    public final int f15808y;

    public g(Bitmap bitmap, s8.c cVar, k kVar) {
        this.f15806w = bitmap;
        Bitmap bitmap2 = this.f15806w;
        cVar.getClass();
        this.f15805v = CloseableReference.C(bitmap2, cVar, CloseableReference.f4407x);
        this.f15807x = kVar;
        this.f15808y = 0;
        this.E = 0;
    }

    @Override // oa.a, oa.c
    public final k G() {
        return this.f15807x;
    }

    @Override // oa.c, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        CloseableReference closeableReference;
        synchronized (this) {
            closeableReference = this.f15805v;
            this.f15805v = null;
            this.f15806w = null;
        }
        if (closeableReference != null) {
            closeableReference.close();
        }
    }

    public final void finalize() {
        if (isClosed()) {
            return;
        }
        p8.a.x("DefaultCloseableStaticBitmap", "finalize: %s %x still open.", g.class.getSimpleName(), Integer.valueOf(System.identityHashCode(this)));
        try {
            close();
        } finally {
            super.finalize();
        }
    }

    @Override // oa.c, com.facebook.imagepipeline.image.ImageInfo
    public final int getHeight() {
        int i5;
        if (this.f15808y % 180 != 0 || (i5 = this.E) == 5 || i5 == 7) {
            Bitmap bitmap = this.f15806w;
            if (bitmap == null) {
                return 0;
            }
            return bitmap.getWidth();
        }
        Bitmap bitmap2 = this.f15806w;
        if (bitmap2 == null) {
            return 0;
        }
        return bitmap2.getHeight();
    }

    @Override // oa.c, com.facebook.imagepipeline.image.ImageInfo
    public final int getWidth() {
        int i5;
        if (this.f15808y % 180 != 0 || (i5 = this.E) == 5 || i5 == 7) {
            Bitmap bitmap = this.f15806w;
            if (bitmap == null) {
                return 0;
            }
            return bitmap.getHeight();
        }
        Bitmap bitmap2 = this.f15806w;
        if (bitmap2 == null) {
            return 0;
        }
        return bitmap2.getWidth();
    }

    @Override // oa.c
    public final synchronized boolean isClosed() {
        return this.f15805v == null;
    }

    @Override // oa.c
    public final int j() {
        return BitmapUtil.getSizeInBytes(this.f15806w);
    }

    public g(CloseableReference closeableReference, k kVar, int i5, int i6) {
        CloseableReference f2 = closeableReference.f();
        f2.getClass();
        this.f15805v = f2;
        this.f15806w = (Bitmap) f2.q();
        this.f15807x = kVar;
        this.f15808y = i5;
        this.E = i6;
    }
}
