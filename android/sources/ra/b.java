package ra;

import af.h0;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.ColorSpace;
import android.os.Build;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.platform.PreverificationHelper;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import lh.f;
import qa.e;
import qa.l;
import qa.s;

/* loaded from: classes3.dex */
public abstract class b implements d {

    /* renamed from: d, reason: collision with root package name */
    public static final byte[] f17175d = {-1, -39};
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final PreverificationHelper f17176b;

    /* renamed from: c, reason: collision with root package name */
    public final k1.b f17177c;

    public b(e eVar, k1.b bVar, s sVar) {
        this.f17176b = Build.VERSION.SDK_INT >= 26 ? new PreverificationHelper() : null;
        this.a = eVar;
        if (eVar instanceof l) {
            sVar.getClass();
        }
        this.f17177c = bVar;
    }

    public static BitmapFactory.Options e(EncodedImage encodedImage, Bitmap.Config config) {
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inSampleSize = encodedImage.getSampleSize();
        options.inJustDecodeBounds = true;
        options.inDither = true;
        boolean z5 = Build.VERSION.SDK_INT >= 26 && config == Bitmap.Config.HARDWARE;
        if (!z5) {
            options.inPreferredConfig = config;
        }
        options.inMutable = true;
        BitmapFactory.decodeStream(encodedImage.getInputStream(), null, options);
        if (options.outWidth == -1 || options.outHeight == -1) {
            throw new IllegalArgumentException();
        }
        if (z5) {
            options.inPreferredConfig = config;
        }
        options.inJustDecodeBounds = false;
        return options;
    }

    @Override // ra.d
    public final CloseableReference a(EncodedImage encodedImage, Bitmap.Config config) {
        BitmapFactory.Options e9 = e(encodedImage, config);
        boolean z5 = e9.inPreferredConfig != Bitmap.Config.ARGB_8888;
        try {
            InputStream inputStream = encodedImage.getInputStream();
            inputStream.getClass();
            return c(inputStream, e9, null);
        } catch (RuntimeException e10) {
            if (z5) {
                return a(encodedImage, Bitmap.Config.ARGB_8888);
            }
            throw e10;
        }
    }

    @Override // ra.d
    public final CloseableReference b(EncodedImage encodedImage, Bitmap.Config config, int i5, ColorSpace colorSpace) {
        boolean isCompleteAt = encodedImage.isCompleteAt(i5);
        BitmapFactory.Options e9 = e(encodedImage, config);
        InputStream inputStream = encodedImage.getInputStream();
        inputStream.getClass();
        if (encodedImage.getSize() > i5) {
            inputStream = new u8.a(inputStream, i5);
        }
        if (!isCompleteAt) {
            inputStream = new u8.b(inputStream, f17175d);
        }
        boolean z5 = e9.inPreferredConfig != Bitmap.Config.ARGB_8888;
        try {
            try {
                s8.b c6 = c(inputStream, e9, colorSpace);
                try {
                    return c6;
                } catch (IOException e10) {
                    return c6;
                }
            } catch (RuntimeException e11) {
                if (!z5) {
                    throw e11;
                }
                CloseableReference b10 = b(encodedImage, Bitmap.Config.ARGB_8888, i5, colorSpace);
                try {
                    inputStream.close();
                } catch (IOException e12) {
                    e12.printStackTrace();
                }
                return b10;
            }
        } finally {
            try {
                inputStream.close();
            } catch (IOException e102) {
                e102.printStackTrace();
            }
        }
    }

    public final s8.b c(InputStream inputStream, BitmapFactory.Options options, ColorSpace colorSpace) {
        Bitmap bitmap;
        PreverificationHelper preverificationHelper;
        j8.b bVar = CloseableReference.f4407x;
        int i5 = options.outWidth;
        int i6 = options.outHeight;
        int i10 = Build.VERSION.SDK_INT;
        e eVar = this.a;
        if (i10 < 26 || (preverificationHelper = this.f17176b) == null || !preverificationHelper.shouldUseHardwareBitmapConfig(options.inPreferredConfig)) {
            bitmap = (Bitmap) eVar.get(d(i5, i6, options));
            if (bitmap == null) {
                throw new NullPointerException("BitmapPool.get returned null");
            }
        } else {
            options.inMutable = false;
            bitmap = null;
        }
        options.inBitmap = bitmap;
        if (i10 >= 26) {
            if (colorSpace == null) {
                colorSpace = ColorSpace.get(ColorSpace.Named.SRGB);
            }
            options.inPreferredColorSpace = colorSpace;
        }
        k1.b bVar2 = this.f17177c;
        ByteBuffer byteBuffer = (ByteBuffer) bVar2.acquire();
        if (byteBuffer == null) {
            h0 h0Var = r8.a.a;
            byteBuffer = ByteBuffer.allocate(16384);
        }
        try {
            try {
                try {
                    options.inTempStorage = byteBuffer.array();
                    Bitmap decodeStream = BitmapFactory.decodeStream(inputStream, null, options);
                    bVar2.release(byteBuffer);
                    if (bitmap == null || bitmap == decodeStream) {
                        return CloseableReference.C(decodeStream, eVar, bVar);
                    }
                    eVar.release(bitmap);
                    if (decodeStream != null) {
                        decodeStream.recycle();
                    }
                    throw new IllegalStateException();
                } catch (IllegalArgumentException e9) {
                    if (bitmap != null) {
                        eVar.release(bitmap);
                    }
                    try {
                        inputStream.reset();
                        Bitmap decodeStream2 = BitmapFactory.decodeStream(inputStream);
                        if (decodeStream2 == null) {
                            throw e9;
                        }
                        s8.b C = CloseableReference.C(decodeStream2, f.g(), bVar);
                        bVar2.release(byteBuffer);
                        return C;
                    } catch (IOException unused) {
                        throw e9;
                    }
                }
            } catch (RuntimeException e10) {
                if (bitmap != null) {
                    eVar.release(bitmap);
                }
                throw e10;
            }
        } catch (Throwable th2) {
            bVar2.release(byteBuffer);
            throw th2;
        }
    }

    public abstract int d(int i5, int i6, BitmapFactory.Options options);
}
