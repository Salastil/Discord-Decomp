package com.facebook.imagepipeline.nativecode;

import a3.e;
import ai.k;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.ColorSpace;
import android.os.Build;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imageutils.BitmapUtil;
import com.facebook.soloader.f;
import java.util.List;
import java.util.Locale;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import o8.h;
import qa.q;
import ra.d;

@o8.c
/* loaded from: classes3.dex */
public abstract class DalvikPurgeableDecoder implements d {

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f4670b;
    public final qa.c a;

    @f
    public static class OreoUtils {
        private OreoUtils() {
        }

        public static void a(BitmapFactory.Options options, ColorSpace colorSpace) {
            ColorSpace.Named named;
            if (colorSpace == null) {
                named = ColorSpace.Named.SRGB;
                colorSpace = ColorSpace.get(named);
            }
            options.inPreferredColorSpace = colorSpace;
        }
    }

    static {
        List list = a.a;
        jb.a.C("imagepipeline");
        f4670b = new byte[]{-1, -39};
    }

    public DalvikPurgeableDecoder() {
        if (qa.d.f16701c == null) {
            synchronized (qa.d.class) {
                try {
                    if (qa.d.f16701c == null) {
                        qa.d.f16701c = new qa.c(qa.d.f16700b, qa.d.a);
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
        qa.c cVar = qa.d.f16701c;
        Intrinsics.checkNotNull(cVar);
        this.a = cVar;
    }

    public static boolean e(int i5, CloseableReference closeableReference) {
        q qVar = (q) closeableReference.q();
        return i5 >= 2 && qVar.i(i5 + (-2)) == -1 && qVar.i(i5 - 1) == -39;
    }

    @o8.c
    private static native void nativePinBitmap(Bitmap bitmap);

    @Override // ra.d
    public final CloseableReference a(EncodedImage encodedImage, Bitmap.Config config) {
        int sampleSize = encodedImage.getSampleSize();
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inDither = true;
        options.inPreferredConfig = config;
        options.inPurgeable = true;
        options.inInputShareable = true;
        options.inSampleSize = sampleSize;
        options.inMutable = true;
        if (Build.VERSION.SDK_INT >= 26) {
            OreoUtils.a(options, null);
        }
        CloseableReference byteBufferRef = encodedImage.getByteBufferRef();
        byteBufferRef.getClass();
        try {
            return f(c(byteBufferRef, options));
        } finally {
            byteBufferRef.close();
        }
    }

    @Override // ra.d
    public final CloseableReference b(EncodedImage encodedImage, Bitmap.Config config, int i5, ColorSpace colorSpace) {
        int sampleSize = encodedImage.getSampleSize();
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inDither = true;
        options.inPreferredConfig = config;
        options.inPurgeable = true;
        options.inInputShareable = true;
        options.inSampleSize = sampleSize;
        options.inMutable = true;
        if (Build.VERSION.SDK_INT >= 26) {
            OreoUtils.a(options, colorSpace);
        }
        CloseableReference byteBufferRef = encodedImage.getByteBufferRef();
        byteBufferRef.getClass();
        try {
            return f(d(byteBufferRef, i5, options));
        } finally {
            byteBufferRef.close();
        }
    }

    public abstract Bitmap c(CloseableReference closeableReference, BitmapFactory.Options options);

    public abstract Bitmap d(CloseableReference closeableReference, int i5, BitmapFactory.Options options);

    public final s8.b f(Bitmap bitmap) {
        int i5;
        long j;
        int i6;
        bitmap.getClass();
        try {
            nativePinBitmap(bitmap);
            qa.c cVar = this.a;
            synchronized (cVar) {
                int sizeInBytes = BitmapUtil.getSizeInBytes(bitmap);
                int i10 = cVar.a;
                if (i10 < cVar.f16697c) {
                    long j5 = cVar.f16696b + sizeInBytes;
                    if (j5 <= cVar.f16698d) {
                        cVar.a = i10 + 1;
                        cVar.f16696b = j5;
                        return CloseableReference.C(bitmap, this.a.f16699e, CloseableReference.f4407x);
                    }
                }
                int sizeInBytes2 = BitmapUtil.getSizeInBytes(bitmap);
                bitmap.recycle();
                Locale locale = Locale.US;
                qa.c cVar2 = this.a;
                synchronized (cVar2) {
                    i5 = cVar2.a;
                }
                qa.c cVar3 = this.a;
                synchronized (cVar3) {
                    j = cVar3.f16696b;
                }
                qa.c cVar4 = this.a;
                synchronized (cVar4) {
                    i6 = cVar4.f16697c;
                }
                int b10 = this.a.b();
                StringBuilder q5 = e.q(sizeInBytes2, "Attempted to pin a bitmap of size ", i5, " bytes. The current pool count is ", ", the current pool size is ");
                q5.append(j);
                q5.append(" bytes. The current pool max count is ");
                q5.append(i6);
                q5.append(", the current pool max size is ");
                q5.append(b10);
                q5.append(" bytes.");
                throw new k(q5.toString());
            }
        } catch (Exception e9) {
            bitmap.recycle();
            h.h(e9);
            throw null;
        }
    }
}
