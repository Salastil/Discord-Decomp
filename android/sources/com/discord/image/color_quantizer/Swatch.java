package com.discord.image.color_quantizer;

import android.graphics.Color;
import java.util.Arrays;

/* loaded from: classes.dex */
public final class Swatch {
    final int mBlue;
    final int mGreen;
    private float[] mHsl;
    final int mPopulation;
    final int mRed;
    final int mRgb;

    public Swatch(int i5, int i6) {
        this.mRed = Color.red(i5);
        this.mGreen = Color.green(i5);
        this.mBlue = Color.blue(i5);
        this.mRgb = i5;
        this.mPopulation = i6;
    }

    public float[] getHsl() {
        if (this.mHsl == null) {
            float[] fArr = new float[3];
            this.mHsl = fArr;
            ColorUtils.RGBtoHSL(this.mRed, this.mGreen, this.mBlue, fArr);
        }
        return this.mHsl;
    }

    public int getPopulation() {
        return this.mPopulation;
    }

    public int getRgb() {
        return this.mRgb;
    }

    public String toString() {
        StringBuilder sb2 = new StringBuilder("Swatch [");
        sb2.append(Integer.toHexString(getRgb()));
        sb2.append("][HSL: ");
        sb2.append(Arrays.toString(getHsl()));
        sb2.append("][Population: ");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.mPopulation, ']');
    }

    public Swatch(int i5, int i6, int i10, int i11) {
        this.mRed = i5;
        this.mGreen = i6;
        this.mBlue = i10;
        this.mRgb = Color.rgb(i5, i6, i10);
        this.mPopulation = i11;
    }
}
