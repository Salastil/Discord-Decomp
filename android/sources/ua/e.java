package ua;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.ColorSpace;
import android.graphics.Matrix;
import android.os.Build;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import kotlin.jvm.internal.Intrinsics;
import qa.r;

/* loaded from: classes3.dex */
public final class e implements a {
    public final boolean a;

    public e(boolean z5) {
        this.a = z5;
    }

    @Override // ua.a
    public final String a() {
        return "SimpleImageTranscoder";
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00ed  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00c5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // ua.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final p9.d b(EncodedImage encodedImage, r outputStream, RotationOptions rotationOptions, ResizeOptions resizeOptions, ColorSpace colorSpace) {
        Matrix matrix;
        Bitmap bitmap;
        Integer num = 85;
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        Intrinsics.checkNotNullParameter(outputStream, "outputStream");
        RotationOptions rotationOptions2 = rotationOptions == null ? RotationOptions.f4585c : rotationOptions;
        int F = !this.a ? 1 : ys.d.F(rotationOptions2, resizeOptions, encodedImage, RecyclerView.ItemAnimator.FLAG_MOVED);
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inSampleSize = F;
        if (colorSpace != null && Build.VERSION.SDK_INT >= 26) {
            options.inPreferredColorSpace = colorSpace;
        }
        int i5 = 8;
        int i6 = 2;
        try {
            Matrix matrix2 = null;
            Bitmap decodeStream = BitmapFactory.decodeStream(encodedImage.getInputStream(), null, options);
            if (decodeStream == null) {
                p8.a.g("SimpleImageTranscoder", "Couldn't decode the EncodedImage InputStream ! ");
                return new p9.d(i6, i5);
            }
            o8.d dVar = c.a;
            Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
            Intrinsics.checkNotNullParameter(rotationOptions2, "rotationOptions");
            try {
                try {
                    if (c.a.contains(Integer.valueOf(encodedImage.getExifOrientation()))) {
                        int a = c.a(rotationOptions2, encodedImage);
                        Matrix matrix3 = new Matrix();
                        if (a == 2) {
                            matrix3.setScale(-1.0f, 1.0f);
                        } else if (a == 7) {
                            matrix3.setRotate(-90.0f);
                            matrix3.postScale(-1.0f, 1.0f);
                        } else if (a == 4) {
                            matrix3.setRotate(180.0f);
                            matrix3.postScale(-1.0f, 1.0f);
                        } else if (a == 5) {
                            matrix3.setRotate(90.0f);
                            matrix3.postScale(-1.0f, 1.0f);
                        }
                        matrix = matrix3;
                        if (matrix == null) {
                            try {
                                bitmap = Bitmap.createBitmap(decodeStream, 0, 0, decodeStream.getWidth(), decodeStream.getHeight(), matrix, false);
                            } catch (OutOfMemoryError e9) {
                                e = e9;
                                bitmap = decodeStream;
                                p8.a.h("SimpleImageTranscoder", "Out-Of-Memory during transcode", e);
                                p9.d dVar2 = new p9.d(i6, i5);
                                bitmap.recycle();
                                decodeStream.recycle();
                                return dVar2;
                            } catch (Throwable th2) {
                                th = th2;
                                bitmap = decodeStream;
                                bitmap.recycle();
                                decodeStream.recycle();
                                throw th;
                            }
                        } else {
                            bitmap = decodeStream;
                        }
                        bitmap.compress(Bitmap.CompressFormat.JPEG, num.intValue(), outputStream);
                        p9.d dVar3 = new p9.d(F > 1 ? 0 : 1, i5);
                        bitmap.recycle();
                        decodeStream.recycle();
                        return dVar3;
                    }
                    int b10 = c.b(rotationOptions2, encodedImage);
                    if (b10 != 0) {
                        matrix2 = new Matrix();
                        matrix2.setRotate(b10);
                    }
                    bitmap.compress(Bitmap.CompressFormat.JPEG, num.intValue(), outputStream);
                    p9.d dVar32 = new p9.d(F > 1 ? 0 : 1, i5);
                    bitmap.recycle();
                    decodeStream.recycle();
                    return dVar32;
                } catch (OutOfMemoryError e10) {
                    e = e10;
                    p8.a.h("SimpleImageTranscoder", "Out-Of-Memory during transcode", e);
                    p9.d dVar22 = new p9.d(i6, i5);
                    bitmap.recycle();
                    decodeStream.recycle();
                    return dVar22;
                }
            } catch (Throwable th3) {
                th = th3;
                bitmap.recycle();
                decodeStream.recycle();
                throw th;
            }
            matrix = matrix2;
            if (matrix == null) {
            }
        } catch (OutOfMemoryError e11) {
            p8.a.h("SimpleImageTranscoder", "Out-Of-Memory during transcode", e11);
            return new p9.d(i6, i5);
        }
    }

    @Override // ua.a
    public final boolean c(EncodedImage encodedImage, RotationOptions rotationOptions, ResizeOptions resizeOptions) {
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        if (rotationOptions == null) {
            rotationOptions = RotationOptions.f4585c;
        }
        return this.a && ys.d.F(rotationOptions, resizeOptions, encodedImage, RecyclerView.ItemAnimator.FLAG_MOVED) > 1;
    }

    @Override // ua.a
    public final boolean d(aa.c imageFormat) {
        Intrinsics.checkNotNullParameter(imageFormat, "imageFormat");
        return imageFormat == aa.b.k || imageFormat == aa.b.a;
    }
}
