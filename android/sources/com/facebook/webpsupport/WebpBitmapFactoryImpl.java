package com.facebook.webpsupport;

import android.annotation.SuppressLint;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Rect;
import android.util.TypedValue;
import java.io.BufferedInputStream;
import java.io.FileDescriptor;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import o8.c;

@c
/* loaded from: classes3.dex */
public class WebpBitmapFactoryImpl {
    @c
    private static Bitmap createBitmap(int i5, int i6, BitmapFactory.Options options) {
        Bitmap bitmap;
        if (options != null && (bitmap = options.inBitmap) != null && bitmap.isMutable()) {
            return options.inBitmap;
        }
        Bitmap.Config config = Bitmap.Config.ARGB_8888;
        throw null;
    }

    @c
    private static byte[] getInTempStorageFromOptions(BitmapFactory.Options options) {
        byte[] bArr;
        return (options == null || (bArr = options.inTempStorage) == null) ? new byte[8192] : bArr;
    }

    @c
    private static float getScaleFromOptions(BitmapFactory.Options options) {
        if (options != null) {
            int i5 = options.inSampleSize;
            r0 = i5 > 1 ? 1.0f / i5 : 1.0f;
            if (options.inScaled) {
                int i6 = options.inDensity;
                int i10 = options.inTargetDensity;
                int i11 = options.inScreenDensity;
                if (i6 != 0 && i10 != 0 && i6 != i11) {
                    return i10 / i6;
                }
            }
        }
        return r0;
    }

    @c
    public static Bitmap hookDecodeByteArray(byte[] bArr, int i5, int i6, BitmapFactory.Options options) {
        com.facebook.imagepipeline.nativecode.c.r();
        return originalDecodeByteArray(bArr, i5, i6, options);
    }

    @c
    public static Bitmap hookDecodeFile(String str, BitmapFactory.Options options) {
        Bitmap bitmap = null;
        try {
            FileInputStream fileInputStream = new FileInputStream(str);
            try {
                bitmap = hookDecodeStream(fileInputStream, null, options);
                fileInputStream.close();
                return bitmap;
            } finally {
            }
        } catch (Exception unused) {
            return bitmap;
        }
    }

    @c
    public static Bitmap hookDecodeFileDescriptor(FileDescriptor fileDescriptor, Rect rect, BitmapFactory.Options options) {
        byte[] bArr;
        com.facebook.imagepipeline.nativecode.c.r();
        long nativeSeek = nativeSeek(fileDescriptor, 0L, false);
        if (nativeSeek == -1) {
            Bitmap hookDecodeStream = hookDecodeStream(new FileInputStream(fileDescriptor), rect, options);
            setPaddingDefaultValues(rect);
            return hookDecodeStream;
        }
        InputStream fileInputStream = new FileInputStream(fileDescriptor);
        if (!fileInputStream.markSupported()) {
            fileInputStream = new BufferedInputStream(fileInputStream, 20);
        }
        try {
            fileInputStream.mark(20);
            if (options == null || (bArr = options.inTempStorage) == null || bArr.length < 20) {
                bArr = new byte[20];
            }
            try {
                fileInputStream.read(bArr, 0, 20);
                fileInputStream.reset();
            } catch (IOException unused) {
            }
            nativeSeek(fileDescriptor, nativeSeek, true);
            return originalDecodeFileDescriptor(fileDescriptor, rect, options);
        } finally {
            try {
                fileInputStream.close();
            } catch (Throwable unused2) {
            }
        }
    }

    @c
    public static Bitmap hookDecodeResource(Resources resources, int i5, BitmapFactory.Options options) {
        TypedValue typedValue = new TypedValue();
        Bitmap bitmap = null;
        try {
            InputStream openRawResource = resources.openRawResource(i5, typedValue);
            try {
                bitmap = hookDecodeResourceStream(resources, typedValue, openRawResource, null, options);
                if (openRawResource != null) {
                    openRawResource.close();
                }
            } finally {
            }
        } catch (Exception unused) {
        }
        if (bitmap != null || options == null || options.inBitmap == null) {
            return bitmap;
        }
        throw new IllegalArgumentException("Problem decoding into existing bitmap");
    }

    @c
    public static Bitmap hookDecodeResourceStream(Resources resources, TypedValue typedValue, InputStream inputStream, Rect rect, BitmapFactory.Options options) {
        if (options == null) {
            options = new BitmapFactory.Options();
        }
        if (options.inDensity == 0 && typedValue != null) {
            int i5 = typedValue.density;
            if (i5 == 0) {
                options.inDensity = 160;
            } else if (i5 != 65535) {
                options.inDensity = i5;
            }
        }
        if (options.inTargetDensity == 0 && resources != null) {
            options.inTargetDensity = resources.getDisplayMetrics().densityDpi;
        }
        return hookDecodeStream(inputStream, rect, options);
    }

    @c
    public static Bitmap hookDecodeStream(InputStream inputStream, Rect rect, BitmapFactory.Options options) {
        com.facebook.imagepipeline.nativecode.c.r();
        if (!inputStream.markSupported()) {
            inputStream = new BufferedInputStream(inputStream, 20);
        }
        return originalDecodeStream(inputStream, rect, options);
    }

    @c
    private static native Bitmap nativeDecodeByteArray(byte[] bArr, int i5, int i6, BitmapFactory.Options options, float f2, byte[] bArr2);

    @c
    private static native Bitmap nativeDecodeStream(InputStream inputStream, BitmapFactory.Options options, float f2, byte[] bArr);

    @c
    private static native long nativeSeek(FileDescriptor fileDescriptor, long j, boolean z5);

    @c
    private static Bitmap originalDecodeByteArray(byte[] bArr, int i5, int i6, BitmapFactory.Options options) {
        return BitmapFactory.decodeByteArray(bArr, i5, i6, options);
    }

    @c
    private static Bitmap originalDecodeFile(String str, BitmapFactory.Options options) {
        return BitmapFactory.decodeFile(str, options);
    }

    @c
    private static Bitmap originalDecodeFileDescriptor(FileDescriptor fileDescriptor, Rect rect, BitmapFactory.Options options) {
        return BitmapFactory.decodeFileDescriptor(fileDescriptor, rect, options);
    }

    @c
    private static Bitmap originalDecodeResource(Resources resources, int i5, BitmapFactory.Options options) {
        return BitmapFactory.decodeResource(resources, i5, options);
    }

    @c
    private static Bitmap originalDecodeResourceStream(Resources resources, TypedValue typedValue, InputStream inputStream, Rect rect, BitmapFactory.Options options) {
        return BitmapFactory.decodeResourceStream(resources, typedValue, inputStream, rect, options);
    }

    @c
    private static Bitmap originalDecodeStream(InputStream inputStream, Rect rect, BitmapFactory.Options options) {
        return BitmapFactory.decodeStream(inputStream, rect, options);
    }

    @c
    private static void setBitmapSize(BitmapFactory.Options options, int i5, int i6) {
        if (options != null) {
            options.outWidth = i5;
            options.outHeight = i6;
        }
    }

    @c
    private static boolean setOutDimensions(BitmapFactory.Options options, int i5, int i6) {
        if (options == null || !options.inJustDecodeBounds) {
            return false;
        }
        options.outWidth = i5;
        options.outHeight = i6;
        return true;
    }

    @c
    private static void setPaddingDefaultValues(Rect rect) {
        if (rect != null) {
            rect.top = -1;
            rect.left = -1;
            rect.bottom = -1;
            rect.right = -1;
        }
    }

    @c
    @SuppressLint({"NewApi"})
    private static boolean shouldPremultiply(BitmapFactory.Options options) {
        if (options != null) {
            return options.inPremultiplied;
        }
        return true;
    }

    @c
    private static Bitmap originalDecodeByteArray(byte[] bArr, int i5, int i6) {
        return BitmapFactory.decodeByteArray(bArr, i5, i6);
    }

    @c
    private static Bitmap originalDecodeFile(String str) {
        return BitmapFactory.decodeFile(str);
    }

    @c
    private static Bitmap originalDecodeFileDescriptor(FileDescriptor fileDescriptor) {
        return BitmapFactory.decodeFileDescriptor(fileDescriptor);
    }

    @c
    private static Bitmap originalDecodeResource(Resources resources, int i5) {
        return BitmapFactory.decodeResource(resources, i5);
    }

    @c
    private static Bitmap originalDecodeStream(InputStream inputStream) {
        return BitmapFactory.decodeStream(inputStream);
    }

    @c
    public static Bitmap hookDecodeByteArray(byte[] bArr, int i5, int i6) {
        return hookDecodeByteArray(bArr, i5, i6, null);
    }

    @c
    public static Bitmap hookDecodeFile(String str) {
        return hookDecodeFile(str, null);
    }

    @c
    public static Bitmap hookDecodeStream(InputStream inputStream) {
        return hookDecodeStream(inputStream, null, null);
    }

    @c
    public static Bitmap hookDecodeResource(Resources resources, int i5) {
        return hookDecodeResource(resources, i5, null);
    }

    @c
    public static Bitmap hookDecodeFileDescriptor(FileDescriptor fileDescriptor) {
        return hookDecodeFileDescriptor(fileDescriptor, null, null);
    }
}
