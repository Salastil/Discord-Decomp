package oa;

import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public final class h extends f implements e {

    /* renamed from: v, reason: collision with root package name */
    public Drawable f15809v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f15810w;

    @Override // oa.c, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f15809v = null;
        this.f15810w = true;
    }

    @Override // oa.c, com.facebook.imagepipeline.image.ImageInfo
    public final int getHeight() {
        Drawable drawable = this.f15809v;
        if (drawable == null) {
            return 0;
        }
        Integer valueOf = Integer.valueOf(drawable.getIntrinsicHeight());
        if (valueOf.intValue() < 0) {
            valueOf = null;
        }
        if (valueOf != null) {
            return valueOf.intValue();
        }
        return 0;
    }

    @Override // oa.c, com.facebook.imagepipeline.image.ImageInfo
    public final int getWidth() {
        Drawable drawable = this.f15809v;
        if (drawable == null) {
            return 0;
        }
        Integer valueOf = Integer.valueOf(drawable.getIntrinsicWidth());
        if (valueOf.intValue() < 0) {
            valueOf = null;
        }
        if (valueOf != null) {
            return valueOf.intValue();
        }
        return 0;
    }

    @Override // oa.c
    public final boolean isClosed() {
        return this.f15810w;
    }

    @Override // oa.c
    public final int j() {
        return getHeight() * getWidth() * 4;
    }
}
