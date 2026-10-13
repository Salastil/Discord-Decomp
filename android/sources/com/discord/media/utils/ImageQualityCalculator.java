package com.discord.media.utils;

import a3.e;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import no.c;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import yo.j;

@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u0006\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0015\n\u0002\b\u0005\n\u0002\u0010\u0014\n\u0002\b\u0011\bÆ\u0002\u0018\u00002\u00020\u0001:\u00014B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J \u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0015H\u0086@¢\u0006\u0002\u0010\u0017J \u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u0019H\u0086@¢\u0006\u0002\u0010\u001bJ(\u0010\u001c\u001a\u00020\u000f2\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020\u001e2\u0006\u0010 \u001a\u00020\b2\u0006\u0010!\u001a\u00020\bH\u0002J(\u0010\"\u001a\u00020\u000f2\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020\u001e2\u0006\u0010 \u001a\u00020\b2\u0006\u0010!\u001a\u00020\bH\u0002J \u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020\u001e2\u0006\u0010 \u001a\u00020\b2\u0006\u0010!\u001a\u00020\bH\u0002J(\u0010&\u001a\u00020\u000f2\u0006\u0010'\u001a\u00020$2\u0006\u0010(\u001a\u00020$2\u0006\u0010 \u001a\u00020\b2\u0006\u0010!\u001a\u00020\bH\u0002JH\u0010)\u001a\u00020\u000f2\u0006\u0010'\u001a\u00020$2\u0006\u0010(\u001a\u00020$2\u0006\u0010 \u001a\u00020\b2\u0006\u0010*\u001a\u00020\b2\u0006\u0010+\u001a\u00020\b2\u0006\u0010,\u001a\u00020\b2\u0006\u0010-\u001a\u00020\u00052\u0006\u0010.\u001a\u00020\u0005H\u0002J\u0012\u0010/\u001a\u0004\u0018\u00010\u00192\u0006\u00100\u001a\u00020\u0015H\u0002J \u00101\u001a\u00020\b2\u0006\u0010 \u001a\u00020\b2\u0006\u0010!\u001a\u00020\b2\u0006\u00102\u001a\u00020\bH\u0002J\u0010\u00103\u001a\u00020\u001e2\u0006\u0010%\u001a\u00020\u001eH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u000fX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000¨\u00065"}, d2 = {"Lcom/discord/media/utils/ImageQualityCalculator;", "", "<init>", "()V", "SSIM_C1", "", "SSIM_C2", "SSIM_WINDOW_SIZE", "", "SSIM_WINDOW_STRIDE", "RGB_TO_GRAYSCALE_RED_WEIGHT", "RGB_TO_GRAYSCALE_GREEN_WEIGHT", "RGB_TO_GRAYSCALE_BLUE_WEIGHT", "MAX_PROCESSING_DIMENSION", "MAX_PIXEL_VALUE_8BIT", "", "PSNR_DECIBEL_COEFFICIENT", "RGB_CHANNEL_COUNT", "calculateQualityMetrics", "Lcom/discord/media/utils/ImageQualityCalculator$ImageQualityMetrics;", "originalData", "", "compressedData", "([B[BLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "originalBitmap", "Landroid/graphics/Bitmap;", "compressedBitmap", "(Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "calculatePSNR", "originalPixels", "", "compressedPixels", "width", "height", "calculateSSIM", "convertToGrayscale", "", "pixels", "calculateSSIMFromGrayscale", "original", "compressed", "calculateWindowSSIM", "startX", "startY", "windowSize", "c1", "c2", "decodeByteArraySafely", "data", "calculateInSampleSize", "maxDimension", "unpremultiplyPixels", "ImageQualityMetrics", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ImageQualityCalculator {

    @NotNull
    public static final ImageQualityCalculator INSTANCE = new ImageQualityCalculator();
    private static final double MAX_PIXEL_VALUE_8BIT = 255.0d;
    private static final int MAX_PROCESSING_DIMENSION = 4096;
    private static final double PSNR_DECIBEL_COEFFICIENT = 20.0d;
    private static final int RGB_CHANNEL_COUNT = 3;
    private static final float RGB_TO_GRAYSCALE_BLUE_WEIGHT = 0.114f;
    private static final float RGB_TO_GRAYSCALE_GREEN_WEIGHT = 0.587f;
    private static final float RGB_TO_GRAYSCALE_RED_WEIGHT = 0.299f;
    private static final float SSIM_C1 = 6.5025f;
    private static final float SSIM_C2 = 58.5225f;
    private static final int SSIM_WINDOW_SIZE = 8;
    private static final int SSIM_WINDOW_STRIDE = 4;

    @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u000f\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0006HÆ\u0003J1\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0019HÖ\u0001J\t\u0010\u001a\u001a\u00020\u001bHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u000bR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000e¨\u0006\u001c"}, d2 = {"Lcom/discord/media/utils/ImageQualityCalculator$ImageQualityMetrics;", "", "psnr", "", "ssim", "psnrCalculationTimeMs", "", "ssimCalculationTimeMs", "<init>", "(DDJJ)V", "getPsnr", "()D", "getSsim", "getPsnrCalculationTimeMs", "()J", "getSsimCalculationTimeMs", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class ImageQualityMetrics {
        private final double psnr;
        private final long psnrCalculationTimeMs;
        private final double ssim;
        private final long ssimCalculationTimeMs;

        public ImageQualityMetrics(double d6, double d7, long j, long j5) {
            this.psnr = d6;
            this.ssim = d7;
            this.psnrCalculationTimeMs = j;
            this.ssimCalculationTimeMs = j5;
        }

        public static /* synthetic */ ImageQualityMetrics copy$default(ImageQualityMetrics imageQualityMetrics, double d6, double d7, long j, long j5, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                d6 = imageQualityMetrics.psnr;
            }
            double d8 = d6;
            if ((i5 & 2) != 0) {
                d7 = imageQualityMetrics.ssim;
            }
            double d10 = d7;
            if ((i5 & 4) != 0) {
                j = imageQualityMetrics.psnrCalculationTimeMs;
            }
            return imageQualityMetrics.copy(d8, d10, j, (i5 & 8) != 0 ? imageQualityMetrics.ssimCalculationTimeMs : j5);
        }

        /* renamed from: component1, reason: from getter */
        public final double getPsnr() {
            return this.psnr;
        }

        /* renamed from: component2, reason: from getter */
        public final double getSsim() {
            return this.ssim;
        }

        /* renamed from: component3, reason: from getter */
        public final long getPsnrCalculationTimeMs() {
            return this.psnrCalculationTimeMs;
        }

        /* renamed from: component4, reason: from getter */
        public final long getSsimCalculationTimeMs() {
            return this.ssimCalculationTimeMs;
        }

        @NotNull
        public final ImageQualityMetrics copy(double psnr, double ssim, long psnrCalculationTimeMs, long ssimCalculationTimeMs) {
            return new ImageQualityMetrics(psnr, ssim, psnrCalculationTimeMs, ssimCalculationTimeMs);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof ImageQualityMetrics)) {
                return false;
            }
            ImageQualityMetrics imageQualityMetrics = (ImageQualityMetrics) other;
            return Double.compare(this.psnr, imageQualityMetrics.psnr) == 0 && Double.compare(this.ssim, imageQualityMetrics.ssim) == 0 && this.psnrCalculationTimeMs == imageQualityMetrics.psnrCalculationTimeMs && this.ssimCalculationTimeMs == imageQualityMetrics.ssimCalculationTimeMs;
        }

        public final double getPsnr() {
            return this.psnr;
        }

        public final long getPsnrCalculationTimeMs() {
            return this.psnrCalculationTimeMs;
        }

        public final double getSsim() {
            return this.ssim;
        }

        public final long getSsimCalculationTimeMs() {
            return this.ssimCalculationTimeMs;
        }

        public int hashCode() {
            return Long.hashCode(this.ssimCalculationTimeMs) + com.discord.chat.bridge.botuikit.a.g(this.psnrCalculationTimeMs, com.discord.chat.bridge.botuikit.a.c(Double.hashCode(this.psnr) * 31, this.ssim, 31), 31);
        }

        @NotNull
        public String toString() {
            double d6 = this.psnr;
            double d7 = this.ssim;
            long j = this.psnrCalculationTimeMs;
            long j5 = this.ssimCalculationTimeMs;
            StringBuilder sb2 = new StringBuilder("ImageQualityMetrics(psnr=");
            sb2.append(d6);
            sb2.append(", ssim=");
            sb2.append(d7);
            sb2.append(", psnrCalculationTimeMs=");
            sb2.append(j);
            sb2.append(", ssimCalculationTimeMs=");
            return e.m(sb2, j5, ")");
        }
    }

    private ImageQualityCalculator() {
    }

    private final int calculateInSampleSize(int width, int height, int maxDimension) {
        int i5 = 1;
        if (height <= maxDimension && width <= maxDimension) {
            return 1;
        }
        int i6 = height / 2;
        int i10 = width / 2;
        while (i6 / i5 >= maxDimension && i10 / i5 >= maxDimension) {
            i5 *= 2;
        }
        return i5;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final double calculatePSNR(int[] originalPixels, int[] compressedPixels, int width, int height) {
        int i5 = width * height;
        double d6 = 0.0d;
        for (int i6 = 0; i6 < i5; i6++) {
            int i10 = originalPixels[i6];
            int i11 = compressedPixels[i6];
            double d7 = ((i10 >> 16) & 255) - ((i11 >> 16) & 255);
            double d8 = ((i10 >> 8) & 255) - ((i11 >> 8) & 255);
            double d10 = (i10 & 255) - (i11 & 255);
            d6 += (d10 * d10) + (d8 * d8) + (d7 * d7);
        }
        double d11 = d6 / (i5 * 3.0d);
        if (d11 == 0.0d) {
            return Double.POSITIVE_INFINITY;
        }
        return Math.log10(MAX_PIXEL_VALUE_8BIT / Math.sqrt(d11)) * PSNR_DECIBEL_COEFFICIENT;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final double calculateSSIM(int[] originalPixels, int[] compressedPixels, int width, int height) {
        return calculateSSIMFromGrayscale(convertToGrayscale(originalPixels, width, height), convertToGrayscale(compressedPixels, width, height), width, height);
    }

    private final double calculateSSIMFromGrayscale(float[] original, float[] compressed, int width, int height) {
        double d6;
        int i5;
        int i6 = 0;
        int a = c.a(0, height - 8, 4);
        if (a >= 0) {
            int i10 = 0;
            int i11 = 0;
            d6 = 0.0d;
            while (true) {
                int a10 = c.a(i6, width - 8, 4);
                if (a10 >= 0) {
                    int i12 = i6;
                    while (true) {
                        int i13 = a10;
                        double calculateWindowSSIM = calculateWindowSSIM(original, compressed, width, i12, i11, 8, SSIM_C1, SSIM_C2);
                        if (Math.abs(calculateWindowSSIM) <= Double.MAX_VALUE) {
                            d6 += calculateWindowSSIM;
                            i10++;
                        }
                        if (i12 == i13) {
                            break;
                        }
                        i12 += 4;
                        a10 = i13;
                    }
                }
                if (i11 == a) {
                    break;
                }
                i11 += 4;
                i6 = 0;
            }
            i5 = i10;
        } else {
            d6 = 0.0d;
            i5 = 0;
        }
        if (i5 > 0) {
            return d6 / i5;
        }
        return 0.0d;
    }

    private final double calculateWindowSSIM(float[] original, float[] compressed, int width, int startX, int startY, int windowSize, float c12, float c22) {
        int i5 = windowSize * windowSize;
        int i6 = 0;
        double d6 = 0.0d;
        double d7 = 0.0d;
        double d8 = 0.0d;
        double d10 = 0.0d;
        double d11 = 0.0d;
        while (i6 < windowSize) {
            int i10 = 0;
            while (i10 < windowSize) {
                int i11 = startX + i10 + ((startY + i6) * width);
                double d12 = original[i11];
                float f2 = compressed[i11];
                int i12 = i10;
                double d13 = f2;
                d6 += d12;
                d7 += d13;
                d8 = (d12 * d12) + d8;
                d10 = (d13 * d13) + d10;
                d11 += d12 * d13;
                i10 = i12 + 1;
                i6 = i6;
            }
            i6++;
        }
        double d14 = i5;
        double d15 = d6 / d14;
        double d16 = d7 / d14;
        double d17 = (d8 - (d6 * d15)) / d14;
        double d18 = (d10 - (d7 * d16)) / d14;
        double d19 = (d11 - (d6 * d16)) / d14;
        double d20 = c12;
        double d21 = c22;
        double d22 = ((d19 * 2.0d) + d21) * ((d15 * 2.0d * d16) + d20);
        double d23 = (d17 + d18 + d21) * ((d16 * d16) + (d15 * d15) + d20);
        if (d23 > 0.0d) {
            return d22 / d23;
        }
        return 0.0d;
    }

    private final float[] convertToGrayscale(int[] pixels, int width, int height) {
        int i5 = width * height;
        float[] fArr = new float[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            int i10 = pixels[i6];
            fArr[i6] = ((i10 & 255) * RGB_TO_GRAYSCALE_BLUE_WEIGHT) + (((i10 >> 8) & 255) * RGB_TO_GRAYSCALE_GREEN_WEIGHT) + (((i10 >> 16) & 255) * RGB_TO_GRAYSCALE_RED_WEIGHT);
        }
        return fArr;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Bitmap decodeByteArraySafely(byte[] data) {
        int i5;
        try {
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            BitmapFactory.decodeByteArray(data, 0, data.length, options);
            int i6 = options.outWidth;
            if (i6 > 0 && (i5 = options.outHeight) > 0) {
                int calculateInSampleSize = calculateInSampleSize(i6, i5, 4096);
                BitmapFactory.Options options2 = new BitmapFactory.Options();
                options2.inSampleSize = calculateInSampleSize;
                options2.inPreferredConfig = Bitmap.Config.ARGB_8888;
                options2.inPremultiplied = false;
                options2.inScaled = false;
                return BitmapFactory.decodeByteArray(data, 0, data.length, options2);
            }
        } catch (Exception unused) {
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final int[] unpremultiplyPixels(int[] pixels) {
        int[] iArr = new int[pixels.length];
        int length = pixels.length;
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = pixels[i5];
            int i10 = (i6 >> 24) & 255;
            if (i10 == 0) {
                iArr[i5] = 0;
            } else if (i10 != 255) {
                iArr[i5] = j.d(((i6 & 255) * 255) / i10, 0, 255) | (i10 << 24) | (j.d((((i6 >> 16) & 255) * 255) / i10, 0, 255) << 16) | (j.d((((i6 >> 8) & 255) * 255) / i10, 0, 255) << 8);
            } else {
                iArr[i5] = i6;
            }
        }
        return iArr;
    }

    public final Object calculateQualityMetrics(@NotNull Bitmap bitmap, @NotNull Bitmap bitmap2, @NotNull Continuation continuation) {
        return x.A(g0.a, new ImageQualityCalculator$calculateQualityMetrics$4(bitmap, bitmap2, null), continuation);
    }

    public final Object calculateQualityMetrics(@NotNull byte[] bArr, @NotNull byte[] bArr2, @NotNull Continuation continuation) {
        return x.A(g0.a, new ImageQualityCalculator$calculateQualityMetrics$2(bArr, bArr2, null), continuation);
    }
}
