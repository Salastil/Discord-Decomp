package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import android.database.Cursor;
import android.graphics.Rect;
import android.media.ExifInterface;
import android.net.Uri;
import android.provider.MediaStore;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class k0 extends o0 implements l1 {

    /* renamed from: d, reason: collision with root package name */
    public static final String[] f4763d = {"_id", "_data"};

    /* renamed from: e, reason: collision with root package name */
    public static final String[] f4764e = {"_data"};

    /* renamed from: f, reason: collision with root package name */
    public static final Rect f4765f = new Rect(0, 0, IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, 384);

    /* renamed from: g, reason: collision with root package name */
    public static final Rect f4766g = new Rect(0, 0, 96, 96);

    /* renamed from: c, reason: collision with root package name */
    public final ContentResolver f4767c;

    public k0(Executor executor, e4.c cVar, ContentResolver contentResolver) {
        super(executor, cVar);
        this.f4767c = contentResolver;
    }

    @Override // com.facebook.imagepipeline.producers.l1
    public final boolean a(ResizeOptions resizeOptions) {
        Rect rect = f4765f;
        return a5.k0.E(rect.width(), rect.height(), resizeOptions);
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final EncodedImage d(ImageRequest imageRequest) {
        ResizeOptions resizeOptions;
        Cursor query;
        EncodedImage f2;
        int autoRotateAngleFromOrientation;
        Uri sourceUri = imageRequest.getSourceUri();
        Uri uri = w8.a.a;
        String uri2 = sourceUri.toString();
        if ((!uri2.startsWith(MediaStore.Images.Media.EXTERNAL_CONTENT_URI.toString()) && !uri2.startsWith(MediaStore.Images.Media.INTERNAL_CONTENT_URI.toString())) || (resizeOptions = imageRequest.getResizeOptions()) == null || (query = this.f4767c.query(sourceUri, f4763d, null, null, null)) == null) {
            return null;
        }
        try {
            if (!query.moveToFirst() || (f2 = f(resizeOptions, query.getLong(query.getColumnIndex("_id")))) == null) {
                query.close();
                return null;
            }
            int columnIndex = query.getColumnIndex("_data");
            if (columnIndex >= 0) {
                String string = query.getString(columnIndex);
                if (string != null) {
                    try {
                        autoRotateAngleFromOrientation = JfifUtil.getAutoRotateAngleFromOrientation(new ExifInterface(string).getAttributeInt("Orientation", 1));
                    } catch (IOException e9) {
                        if (p8.a.a.isLoggable(6)) {
                            p8.a.a.e(k0.class.getSimpleName(), "Unable to retrieve thumbnail rotation for ".concat(string), e9);
                        }
                    }
                    f2.setRotationAngle(autoRotateAngleFromOrientation);
                }
                autoRotateAngleFromOrientation = 0;
                f2.setRotationAngle(autoRotateAngleFromOrientation);
            }
            query.close();
            return f2;
        } catch (Throwable th2) {
            query.close();
            throw th2;
        }
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final String e() {
        return "LocalContentUriThumbnailFetchProducer";
    }

    public final EncodedImage f(ResizeOptions resizeOptions, long j) {
        int i5;
        Cursor queryMiniThumbnail;
        int columnIndex;
        Rect rect = f4766g;
        if (a5.k0.E(rect.width(), rect.height(), resizeOptions)) {
            i5 = 3;
        } else {
            Rect rect2 = f4765f;
            i5 = a5.k0.E(rect2.width(), rect2.height(), resizeOptions) ? 1 : 0;
        }
        if (i5 == 0 || (queryMiniThumbnail = MediaStore.Images.Thumbnails.queryMiniThumbnail(this.f4767c, j, i5, f4764e)) == null) {
            return null;
        }
        try {
            if (queryMiniThumbnail.moveToFirst() && (columnIndex = queryMiniThumbnail.getColumnIndex("_data")) >= 0) {
                String string = queryMiniThumbnail.getString(columnIndex);
                string.getClass();
                if (new File(string).exists()) {
                    return c(new FileInputStream(string), (int) new File(string).length());
                }
            }
            return null;
        } finally {
            queryMiniThumbnail.close();
        }
    }
}
