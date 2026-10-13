package com.facebook.imagepipeline.common;

import android.graphics.Bitmap;
import com.discord.chat.bridge.botuikit.a;
import e4.l;
import k2.r;
import o8.h;

/* loaded from: classes3.dex */
public final class ImageDecodeOptions {

    /* renamed from: c, reason: collision with root package name */
    public static final ImageDecodeOptions f4577c;
    public final Bitmap.Config a;

    /* renamed from: b, reason: collision with root package name */
    public final Bitmap.Config f4578b;

    static {
        l lVar = new l(11);
        Bitmap.Config config = Bitmap.Config.ARGB_8888;
        lVar.f7959e = config;
        lVar.f7960i = config;
        f4577c = new ImageDecodeOptions(lVar);
    }

    public ImageDecodeOptions(l lVar) {
        this.a = (Bitmap.Config) lVar.f7959e;
        this.f4578b = (Bitmap.Config) lVar.f7960i;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || ImageDecodeOptions.class != obj.getClass()) {
            return false;
        }
        ImageDecodeOptions imageDecodeOptions = (ImageDecodeOptions) obj;
        return this.a == imageDecodeOptions.a && this.f4578b == imageDecodeOptions.f4578b;
    }

    public final int hashCode() {
        int ordinal = (this.a.ordinal() - 552645669) * 31;
        Bitmap.Config config = this.f4578b;
        return (ordinal + (config != null ? config.ordinal() : 0)) * 29791;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ImageDecodeOptions{");
        r j = h.j(this);
        j.f(100, "minDecodeIntervalMs");
        j.f(Integer.MAX_VALUE, "maxDimensionPx");
        j.g("decodePreviewFrame", false);
        j.g("useLastFrameForPreview", false);
        j.g("useEncodedImageForPreview", false);
        j.g("decodeAllFrames", false);
        j.g("forceStaticImage", false);
        j.h(this.a.name(), "bitmapConfigName");
        j.h(this.f4578b.name(), "animatedBitmapConfigName");
        j.h(null, "customImageDecoder");
        j.h(null, "bitmapTransformation");
        j.h(null, "colorSpace");
        return a.j(sb2, j.toString(), "}");
    }
}
