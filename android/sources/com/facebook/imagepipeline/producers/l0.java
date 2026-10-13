package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import android.content.res.AssetFileDescriptor;
import android.media.ExifInterface;
import android.net.Uri;
import android.util.Pair;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imageutils.BitmapUtil;
import com.facebook.imageutils.JfifUtil;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l0 extends e1 {

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ ImageRequest f4773x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ m0 f4774y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l0(m0 m0Var, Consumer consumer, a1 a1Var, ProducerContext producerContext, ImageRequest imageRequest) {
        super(consumer, a1Var, producerContext, "LocalExifThumbnailProducer");
        this.f4774y = m0Var;
        this.f4773x = imageRequest;
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final void b(Object obj) {
        EncodedImage.closeSafely((EncodedImage) obj);
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final Map c(Object obj) {
        return o8.e.a("createdThumbnail", Boolean.toString(((EncodedImage) obj) != null));
    }

    /* JADX WARN: Removed duplicated region for block: B:45:0x0040 A[Catch: IOException -> 0x0011, StackOverflowError -> 0x004e, TRY_ENTER, TRY_LEAVE, TryCatch #6 {IOException -> 0x0011, StackOverflowError -> 0x004e, blocks: (B:36:0x0013, B:38:0x001e, B:40:0x0024, B:41:0x002a, B:48:0x0036, B:45:0x0040), top: B:35:0x0013 }] */
    @Override // com.facebook.imagepipeline.producers.e1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object d() {
        AssetFileDescriptor openAssetFileDescriptor;
        ExifInterface exifInterface;
        Uri sourceUri = this.f4773x.getSourceUri();
        m0 m0Var = this.f4774y;
        ContentResolver contentResolver = m0Var.f4776c;
        String a = w8.a.a(contentResolver, sourceUri);
        if (a != null) {
            try {
                File file = new File(a);
                if (file.exists() && file.canRead()) {
                    exifInterface = new ExifInterface(a);
                } else {
                    if ("content".equals(w8.a.b(sourceUri))) {
                        try {
                            openAssetFileDescriptor = contentResolver.openAssetFileDescriptor(sourceUri, "r");
                        } catch (FileNotFoundException unused) {
                        }
                        if (openAssetFileDescriptor != null) {
                            ExifInterface exifInterface2 = new ExifInterface(openAssetFileDescriptor.getFileDescriptor());
                            openAssetFileDescriptor.close();
                            exifInterface = exifInterface2;
                        }
                    }
                    openAssetFileDescriptor = null;
                    if (openAssetFileDescriptor != null) {
                    }
                }
            } catch (IOException unused2) {
            } catch (StackOverflowError unused3) {
                p8.a.d(m0.class, "StackOverflowError in ExifInterface constructor");
            }
            if (exifInterface == null && exifInterface.hasThumbnail()) {
                byte[] bytes = exifInterface.getThumbnail();
                bytes.getClass();
                e4.c cVar = m0Var.f4775b;
                cVar.getClass();
                Intrinsics.checkNotNullParameter(bytes, "bytes");
                qa.r rVar = new qa.r((qa.p) cVar.f7939e, bytes.length);
                try {
                    try {
                        rVar.write(bytes, 0, bytes.length);
                        qa.q f2 = rVar.f();
                        rVar.close();
                        Pair<Integer, Integer> decodeDimensions = BitmapUtil.decodeDimensions(new r8.f(f2));
                        String attribute = exifInterface.getAttribute("Orientation");
                        attribute.getClass();
                        int autoRotateAngleFromOrientation = JfifUtil.getAutoRotateAngleFromOrientation(Integer.parseInt(attribute));
                        int intValue = decodeDimensions != null ? ((Integer) decodeDimensions.first).intValue() : -1;
                        int intValue2 = decodeDimensions != null ? ((Integer) decodeDimensions.second).intValue() : -1;
                        s8.b A = CloseableReference.A(f2);
                        try {
                            EncodedImage encodedImage = new EncodedImage(A);
                            CloseableReference.l(A);
                            encodedImage.setImageFormat(aa.b.a);
                            encodedImage.setRotationAngle(autoRotateAngleFromOrientation);
                            encodedImage.setWidth(intValue);
                            encodedImage.setHeight(intValue2);
                            return encodedImage;
                        } catch (Throwable th2) {
                            CloseableReference.l(A);
                            throw th2;
                        }
                    } catch (Throwable th3) {
                        rVar.close();
                        throw th3;
                    }
                } catch (IOException e9) {
                    o8.h.h(e9);
                    throw null;
                }
            }
        }
        exifInterface = null;
        return exifInterface == null ? null : null;
    }
}
