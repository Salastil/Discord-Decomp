package ua;

import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import java.util.Collections;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c {
    public static final o8.d a;

    static {
        o8.d dVar = new o8.d(4);
        Collections.addAll(dVar, 2, 7, 4, 5);
        Intrinsics.checkNotNullExpressionValue(dVar, "of(...)");
        a = dVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final int a(RotationOptions rotationOptions, EncodedImage encodedImage) {
        int i5;
        Intrinsics.checkNotNullParameter(rotationOptions, "rotationOptions");
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        Integer valueOf = Integer.valueOf(encodedImage.getExifOrientation());
        o8.d dVar = a;
        int indexOf = dVar.indexOf(valueOf);
        if (indexOf < 0) {
            throw new IllegalArgumentException("Only accepts inverted exif orientations");
        }
        if (rotationOptions.a()) {
            i5 = 0;
        } else {
            if (rotationOptions.a()) {
                throw new IllegalStateException("Rotation is set to use EXIF");
            }
            i5 = rotationOptions.a;
        }
        E e9 = dVar.get(((i5 / 90) + indexOf) % dVar.size());
        Intrinsics.checkNotNullExpressionValue(e9, "get(...)");
        return ((Number) e9).intValue();
    }

    public static final int b(RotationOptions rotationOptions, EncodedImage encodedImage) {
        Intrinsics.checkNotNullParameter(rotationOptions, "rotationOptions");
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        int i5 = rotationOptions.a;
        if (i5 == -2) {
            return 0;
        }
        int rotationAngle = encodedImage.getRotationAngle();
        int rotationAngle2 = (rotationAngle == 90 || rotationAngle == 180 || rotationAngle == 270) ? encodedImage.getRotationAngle() : 0;
        if (rotationOptions.a()) {
            return rotationAngle2;
        }
        if (rotationOptions.a()) {
            throw new IllegalStateException("Rotation is set to use EXIF");
        }
        return (i5 + rotationAngle2) % 360;
    }

    public static final int c(RotationOptions rotationOptions, ResizeOptions resizeOptions, EncodedImage encodedImage, boolean z5) {
        Intrinsics.checkNotNullParameter(rotationOptions, "rotationOptions");
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        if (z5 && resizeOptions != null) {
            int b10 = b(rotationOptions, encodedImage);
            int a10 = a.contains(Integer.valueOf(encodedImage.getExifOrientation())) ? a(rotationOptions, encodedImage) : 0;
            boolean z6 = b10 == 90 || b10 == 270 || a10 == 5 || a10 == 7;
            float height = z6 ? encodedImage.getHeight() : encodedImage.getWidth();
            float width = z6 ? encodedImage.getWidth() : encodedImage.getHeight();
            float max = Math.max(resizeOptions.a / height, resizeOptions.f4584b / width);
            if (height * max > 2048.0f) {
                max = 2048.0f / height;
            }
            if (width * max > 2048.0f) {
                max = 2048.0f / width;
            }
            int i5 = (int) ((max * 8) + 0.6666667f);
            if (i5 <= 8) {
                if (i5 < 1) {
                    return 1;
                }
                return i5;
            }
        }
        return 8;
    }
}
