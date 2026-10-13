package co;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.media.ExifInterface;
import fo.w;
import java.io.File;
import java.io.FileOutputStream;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public abstract class c {
    public static final String a = File.separator;

    public static final Bitmap.CompressFormat a(File compressFormat) {
        Intrinsics.checkParameterIsNotNull(compressFormat, "$this$compressFormat");
        Intrinsics.checkNotNullParameter(compressFormat, "<this>");
        String name = compressFormat.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        String W = StringsKt.W('.', name, "");
        if (W == null) {
            throw new w("null cannot be cast to non-null type java.lang.String");
        }
        String lowerCase = W.toLowerCase();
        Intrinsics.checkExpressionValueIsNotNull(lowerCase, "(this as java.lang.String).toLowerCase()");
        int hashCode = lowerCase.hashCode();
        if (hashCode != 111145) {
            if (hashCode != 3198679) {
                if (hashCode == 3645340 && lowerCase.equals("webp")) {
                    return Bitmap.CompressFormat.WEBP;
                }
            } else if (lowerCase.equals("heic")) {
                return null;
            }
        } else if (lowerCase.equals("png")) {
            return Bitmap.CompressFormat.PNG;
        }
        return Bitmap.CompressFormat.JPEG;
    }

    public static final Bitmap b(File imageFile) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        BitmapFactory.Options options = new BitmapFactory.Options();
        int i5 = 1;
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeFile(imageFile.getAbsolutePath(), options);
        Intrinsics.checkParameterIsNotNull(options, "options");
        int i6 = options.outHeight;
        int i10 = options.outWidth;
        if (i6 > 816 || i10 > 612) {
            int i11 = i6 / 2;
            int i12 = i10 / 2;
            while (i11 / i5 >= 816 && i12 / i5 >= 612) {
                i5 *= 2;
            }
        }
        options.inSampleSize = i5;
        options.inJustDecodeBounds = false;
        Bitmap decodeFile = BitmapFactory.decodeFile(imageFile.getAbsolutePath(), options);
        Intrinsics.checkExpressionValueIsNotNull(decodeFile, "BitmapFactory.decodeFile…eFile.absolutePath, this)");
        Intrinsics.checkExpressionValueIsNotNull(decodeFile, "BitmapFactory.Options().…absolutePath, this)\n    }");
        return decodeFile;
    }

    public static final Bitmap c(File imageFile, Bitmap bitmap) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        Intrinsics.checkParameterIsNotNull(bitmap, "bitmap");
        int attributeInt = new ExifInterface(imageFile.getAbsolutePath()).getAttributeInt("Orientation", 0);
        Matrix matrix = new Matrix();
        if (attributeInt == 3) {
            matrix.postRotate(180.0f);
        } else if (attributeInt == 6) {
            matrix.postRotate(90.0f);
        } else if (attributeInt == 8) {
            matrix.postRotate(270.0f);
        }
        Bitmap createBitmap = Bitmap.createBitmap(bitmap, 0, 0, bitmap.getWidth(), bitmap.getHeight(), matrix, true);
        Intrinsics.checkExpressionValueIsNotNull(createBitmap, "Bitmap.createBitmap(bitm…map.height, matrix, true)");
        return createBitmap;
    }

    public static final Bitmap d(File imageFile) {
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        Bitmap decodeFile = BitmapFactory.decodeFile(imageFile.getAbsolutePath());
        if (decodeFile != null) {
            return c(imageFile, decodeFile);
        }
        throw new IllegalArgumentException(("Failed to load bitmap from " + imageFile).toString());
    }

    public static File e(File imageFile, Bitmap bitmap, int i5, int i6) {
        File destination;
        FileOutputStream fileOutputStream;
        Throwable th2;
        Bitmap.CompressFormat a10;
        Bitmap.CompressFormat extension = Bitmap.CompressFormat.JPEG;
        if ((i6 & 4) != 0 && (a10 = a(imageFile)) != null) {
            extension = a10;
        }
        if ((i6 & 8) != 0) {
            i5 = 100;
        }
        Intrinsics.checkParameterIsNotNull(imageFile, "imageFile");
        Intrinsics.checkParameterIsNotNull(bitmap, "bitmap");
        Intrinsics.checkParameterIsNotNull(extension, "format");
        if (extension == a(imageFile)) {
            destination = imageFile;
        } else {
            StringBuilder sb2 = new StringBuilder();
            String absolutePath = imageFile.getAbsolutePath();
            Intrinsics.checkExpressionValueIsNotNull(absolutePath, "imageFile.absolutePath");
            sb2.append(StringsKt.Z(absolutePath, absolutePath));
            sb2.append('.');
            Intrinsics.checkParameterIsNotNull(extension, "$this$extension");
            int i10 = b.a[extension.ordinal()];
            sb2.append(i10 != 1 ? i10 != 2 ? "jpg" : "webp" : "png");
            destination = new File(sb2.toString());
        }
        imageFile.delete();
        Intrinsics.checkParameterIsNotNull(bitmap, "bitmap");
        Intrinsics.checkParameterIsNotNull(destination, "destination");
        Intrinsics.checkParameterIsNotNull(extension, "format");
        File parentFile = destination.getParentFile();
        if (parentFile != null) {
            parentFile.mkdirs();
        }
        try {
            fileOutputStream = new FileOutputStream(destination.getAbsolutePath());
            try {
                bitmap.compress(extension, i5, fileOutputStream);
                fileOutputStream.flush();
                fileOutputStream.close();
                return destination;
            } catch (Throwable th3) {
                th2 = th3;
                if (fileOutputStream != null) {
                    fileOutputStream.flush();
                    fileOutputStream.close();
                }
                throw th2;
            }
        } catch (Throwable th4) {
            fileOutputStream = null;
            th2 = th4;
        }
    }
}
