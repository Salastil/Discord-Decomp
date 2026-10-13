package com.discord.image.color_quantizer;

import android.graphics.Bitmap;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
final class Palette {
    private static final int CALCULATE_BITMAP_MIN_DIMENSION = 100;
    private static final int DEFAULT_CALCULATE_NUMBER_COLORS = 16;
    private static final float MAX_DARK_LUMA = 0.45f;
    private static final float MAX_MUTED_SATURATION = 0.4f;
    private static final float MAX_NORMAL_LUMA = 0.7f;
    private static final float MIN_LIGHT_LUMA = 0.55f;
    private static final float MIN_NORMAL_LUMA = 0.3f;
    private static final float MIN_VIBRANT_SATURATION = 0.35f;
    private static final float TARGET_DARK_LUMA = 0.26f;
    private static final float TARGET_LIGHT_LUMA = 0.74f;
    private static final float TARGET_MUTED_SATURATION = 0.3f;
    private static final float TARGET_NORMAL_LUMA = 0.5f;
    private static final float TARGET_VIBRANT_SATURATION = 1.0f;
    private final List<Swatch> mSwatches;
    private final int mHighestPopulation = findMaxPopulation();
    private Swatch mVibrantSwatch = findColor(TARGET_NORMAL_LUMA, 0.3f, MAX_NORMAL_LUMA, 1.0f, MIN_VIBRANT_SATURATION, 1.0f);
    private Swatch mLightVibrantSwatch = findColor(TARGET_LIGHT_LUMA, MIN_LIGHT_LUMA, 1.0f, 1.0f, MIN_VIBRANT_SATURATION, 1.0f);
    private Swatch mDarkVibrantSwatch = findColor(TARGET_DARK_LUMA, 0.0f, MAX_DARK_LUMA, 1.0f, MIN_VIBRANT_SATURATION, 1.0f);
    private Swatch mMutedSwatch = findColor(TARGET_NORMAL_LUMA, 0.3f, MAX_NORMAL_LUMA, 0.3f, 0.0f, MAX_MUTED_SATURATION);
    private Swatch mLightMutedColor = findColor(TARGET_LIGHT_LUMA, MIN_LIGHT_LUMA, 1.0f, 0.3f, 0.0f, MAX_MUTED_SATURATION);
    private Swatch mDarkMutedSwatch = findColor(TARGET_DARK_LUMA, 0.0f, MAX_DARK_LUMA, 0.3f, 0.0f, MAX_MUTED_SATURATION);

    private Palette(List<Swatch> list) {
        this.mSwatches = list;
        generateEmptySwatches();
    }

    private static void checkBitmapParam(Bitmap bitmap) {
        if (bitmap == null) {
            throw new IllegalArgumentException("bitmap can not be null");
        }
        if (bitmap.isRecycled()) {
            throw new IllegalArgumentException("bitmap can not be recycled");
        }
    }

    private static void checkNumberColorsParam(int i5) {
        if (i5 < 1) {
            throw new IllegalArgumentException("numColors must be 1 of greater");
        }
    }

    private static float[] copyHslValues(Swatch swatch) {
        float[] fArr = new float[3];
        System.arraycopy(swatch.getHsl(), 0, fArr, 0, 3);
        return fArr;
    }

    private static float createComparisonValue(float f2, float f10, float f11, float f12, int i5, int i6) {
        return weightedMean(invertDiff(f2, f10), 3.0f, invertDiff(f11, f12), 6.5f, i5 / i6, TARGET_NORMAL_LUMA);
    }

    private Swatch findColor(float f2, float f10, float f11, float f12, float f13, float f14) {
        Swatch swatch = null;
        float f15 = 0.0f;
        for (Swatch swatch2 : this.mSwatches) {
            float f16 = swatch2.getHsl()[1];
            float f17 = swatch2.getHsl()[2];
            if (f16 >= f13 && f16 <= f14 && f17 >= f10 && f17 <= f11 && !isAlreadySelected(swatch2)) {
                float createComparisonValue = createComparisonValue(f16, f12, f17, f2, swatch2.getPopulation(), this.mHighestPopulation);
                if (swatch == null || createComparisonValue > f15) {
                    swatch = swatch2;
                    f15 = createComparisonValue;
                }
            }
        }
        return swatch;
    }

    private int findMaxPopulation() {
        Iterator<Swatch> it = this.mSwatches.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            i5 = Math.max(i5, it.next().getPopulation());
        }
        return i5;
    }

    public static Palette generate(Bitmap bitmap) {
        return generate(bitmap, 16);
    }

    private void generateEmptySwatches() {
        Swatch swatch;
        Swatch swatch2;
        if (this.mVibrantSwatch == null && (swatch2 = this.mDarkVibrantSwatch) != null) {
            float[] copyHslValues = copyHslValues(swatch2);
            copyHslValues[2] = 0.5f;
            this.mVibrantSwatch = new Swatch(ColorUtils.HSLtoRGB(copyHslValues), 0);
        }
        if (this.mDarkVibrantSwatch != null || (swatch = this.mVibrantSwatch) == null) {
            return;
        }
        float[] copyHslValues2 = copyHslValues(swatch);
        copyHslValues2[2] = 0.26f;
        this.mDarkVibrantSwatch = new Swatch(ColorUtils.HSLtoRGB(copyHslValues2), 0);
    }

    private static float invertDiff(float f2, float f10) {
        return 1.0f - Math.abs(f2 - f10);
    }

    private boolean isAlreadySelected(Swatch swatch) {
        return this.mVibrantSwatch == swatch || this.mDarkVibrantSwatch == swatch || this.mLightVibrantSwatch == swatch || this.mMutedSwatch == swatch || this.mDarkMutedSwatch == swatch || this.mLightMutedColor == swatch;
    }

    private static Bitmap scaleBitmapDown(Bitmap bitmap) {
        int min = Math.min(bitmap.getWidth(), bitmap.getHeight());
        if (min <= 100) {
            return bitmap;
        }
        float f2 = 100.0f / min;
        return Bitmap.createScaledBitmap(bitmap, Math.round(bitmap.getWidth() * f2), Math.round(bitmap.getHeight() * f2), false);
    }

    private static float weightedMean(float... fArr) {
        float f2 = 0.0f;
        float f10 = 0.0f;
        for (int i5 = 0; i5 < fArr.length; i5 += 2) {
            float f11 = fArr[i5];
            float f12 = fArr[i5 + 1];
            f2 += f11 * f12;
            f10 += f12;
        }
        return f2 / f10;
    }

    public int getDarkMutedColor(int i5) {
        Swatch swatch = this.mDarkMutedSwatch;
        return swatch != null ? swatch.getRgb() : i5;
    }

    public Swatch getDarkMutedSwatch() {
        return this.mDarkMutedSwatch;
    }

    public int getDarkVibrantColor(int i5) {
        Swatch swatch = this.mDarkVibrantSwatch;
        return swatch != null ? swatch.getRgb() : i5;
    }

    public Swatch getDarkVibrantSwatch() {
        return this.mDarkVibrantSwatch;
    }

    public int getLightMutedColor(int i5) {
        Swatch swatch = this.mLightMutedColor;
        return swatch != null ? swatch.getRgb() : i5;
    }

    public Swatch getLightMutedSwatch() {
        return this.mLightMutedColor;
    }

    public int getLightVibrantColor(int i5) {
        Swatch swatch = this.mLightVibrantSwatch;
        return swatch != null ? swatch.getRgb() : i5;
    }

    public Swatch getLightVibrantSwatch() {
        return this.mLightVibrantSwatch;
    }

    public int getMutedColor(int i5) {
        Swatch swatch = this.mMutedSwatch;
        return swatch != null ? swatch.getRgb() : i5;
    }

    public Swatch getMutedSwatch() {
        return this.mMutedSwatch;
    }

    public List<Swatch> getSwatches() {
        return Collections.unmodifiableList(this.mSwatches);
    }

    public int getVibrantColor(int i5) {
        Swatch swatch = this.mVibrantSwatch;
        return swatch != null ? swatch.getRgb() : i5;
    }

    public Swatch getVibrantSwatch() {
        return this.mVibrantSwatch;
    }

    public static Palette generate(Bitmap bitmap, int i5) {
        checkBitmapParam(bitmap);
        checkNumberColorsParam(i5);
        Bitmap scaleBitmapDown = scaleBitmapDown(bitmap);
        ColorCutQuantizer fromBitmap = ColorCutQuantizer.fromBitmap(scaleBitmapDown, i5);
        if (scaleBitmapDown != bitmap) {
            scaleBitmapDown.recycle();
        }
        return new Palette(fromBitmap.getQuantizedColors());
    }
}
