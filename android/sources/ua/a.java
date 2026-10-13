package ua;

import android.graphics.ColorSpace;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import qa.r;

/* loaded from: classes3.dex */
public interface a {
    String a();

    p9.d b(EncodedImage encodedImage, r rVar, RotationOptions rotationOptions, ResizeOptions resizeOptions, ColorSpace colorSpace);

    boolean c(EncodedImage encodedImage, RotationOptions rotationOptions, ResizeOptions resizeOptions);

    boolean d(aa.c cVar);
}
