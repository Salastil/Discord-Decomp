package com.facebook.imagepipeline.platform;

import android.annotation.TargetApi;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.nativecode.DalvikPurgeableDecoder;
import o8.c;
import qa.m;
import qa.q;

@c
@TargetApi(19)
/* loaded from: classes3.dex */
public class KitKatPurgeableDecoder extends DalvikPurgeableDecoder {
    @c
    public KitKatPurgeableDecoder(m mVar) {
    }

    @Override // com.facebook.imagepipeline.nativecode.DalvikPurgeableDecoder
    public final Bitmap c(CloseableReference closeableReference, BitmapFactory.Options options) {
        ((q) closeableReference.q()).o();
        throw null;
    }

    @Override // com.facebook.imagepipeline.nativecode.DalvikPurgeableDecoder
    public final Bitmap d(CloseableReference closeableReference, int i5, BitmapFactory.Options options) {
        DalvikPurgeableDecoder.e(i5, closeableReference);
        if (i5 <= ((q) closeableReference.q()).o()) {
            throw null;
        }
        throw new IllegalArgumentException();
    }
}
