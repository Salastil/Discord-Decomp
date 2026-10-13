package com.facebook.imagepipeline.nativecode;

import android.graphics.ColorSpace;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import java.io.InputStream;
import java.io.OutputStream;
import o8.d;
import o8.h;
import qa.r;

@o8.c
/* loaded from: classes3.dex */
public class NativeJpegTranscoder implements ua.a {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public int f4671b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f4672c;

    public static void e(InputStream inputStream, r rVar, int i5, int i6, int i10) {
        b.m();
        if (!(i6 >= 1)) {
            throw new IllegalArgumentException();
        }
        if (!(i6 <= 16)) {
            throw new IllegalArgumentException();
        }
        if (!(i10 >= 0)) {
            throw new IllegalArgumentException();
        }
        if (!(i10 <= 100)) {
            throw new IllegalArgumentException();
        }
        d dVar = ua.c.a;
        if (!(i5 >= 0 && i5 <= 270 && i5 % 90 == 0)) {
            throw new IllegalArgumentException();
        }
        h.b("no transformation requested", (i6 == 8 && i5 == 0) ? false : true);
        nativeTranscodeJpeg(inputStream, rVar, i5, i6, i10);
    }

    public static void f(InputStream inputStream, r rVar, int i5, int i6, int i10) {
        boolean z5;
        b.m();
        if (!(i6 >= 1)) {
            throw new IllegalArgumentException();
        }
        if (!(i6 <= 16)) {
            throw new IllegalArgumentException();
        }
        if (!(i10 >= 0)) {
            throw new IllegalArgumentException();
        }
        if (!(i10 <= 100)) {
            throw new IllegalArgumentException();
        }
        d dVar = ua.c.a;
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                z5 = true;
                break;
            default:
                z5 = false;
                break;
        }
        if (!z5) {
            throw new IllegalArgumentException();
        }
        h.b("no transformation requested", (i6 == 8 && i5 == 1) ? false : true);
        nativeTranscodeJpegWithExifOrientation(inputStream, rVar, i5, i6, i10);
    }

    @o8.c
    private static native void nativeTranscodeJpeg(InputStream inputStream, OutputStream outputStream, int i5, int i6, int i10);

    @o8.c
    private static native void nativeTranscodeJpegWithExifOrientation(InputStream inputStream, OutputStream outputStream, int i5, int i6, int i10);

    @Override // ua.a
    public final String a() {
        return "NativeJpegTranscoder";
    }

    @Override // ua.a
    public final p9.d b(EncodedImage encodedImage, r rVar, RotationOptions rotationOptions, ResizeOptions resizeOptions, ColorSpace colorSpace) {
        Integer num = 85;
        if (rotationOptions == null) {
            rotationOptions = RotationOptions.f4585c;
        }
        int F = ys.d.F(rotationOptions, resizeOptions, encodedImage, this.f4671b);
        try {
            int c6 = ua.c.c(rotationOptions, resizeOptions, encodedImage, this.a);
            int max = Math.max(1, 8 / F);
            if (this.f4672c) {
                c6 = max;
            }
            InputStream inputStream = encodedImage.getInputStream();
            if (ua.c.a.contains(Integer.valueOf(encodedImage.getExifOrientation()))) {
                int a = ua.c.a(rotationOptions, encodedImage);
                h.d(inputStream, "Cannot transcode from null input stream!");
                f(inputStream, rVar, a, c6, num.intValue());
            } else {
                int b10 = ua.c.b(rotationOptions, encodedImage);
                h.d(inputStream, "Cannot transcode from null input stream!");
                e(inputStream, rVar, b10, c6, num.intValue());
            }
            o8.a.b(inputStream);
            return new p9.d(F != 1 ? 0 : 1, 8);
        } catch (Throwable th2) {
            o8.a.b(null);
            throw th2;
        }
    }

    @Override // ua.a
    public final boolean c(EncodedImage encodedImage, RotationOptions rotationOptions, ResizeOptions resizeOptions) {
        if (rotationOptions == null) {
            rotationOptions = RotationOptions.f4585c;
        }
        return ua.c.c(rotationOptions, resizeOptions, encodedImage, this.a) < 8;
    }

    @Override // ua.a
    public final boolean d(aa.c cVar) {
        return cVar == aa.b.a;
    }
}
