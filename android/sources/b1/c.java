package b1;

import android.graphics.Color;

/* loaded from: classes.dex */
public abstract class c {
    public static final ThreadLocal a = new ThreadLocal();

    public static int a(double d6, double d7, double d8) {
        double d10 = (((-0.4986d) * d8) + (((-1.5372d) * d7) + (3.2406d * d6))) / 100.0d;
        double d11 = ((0.0415d * d8) + ((1.8758d * d7) + ((-0.9689d) * d6))) / 100.0d;
        double d12 = ((1.057d * d8) + (((-0.204d) * d7) + (0.0557d * d6))) / 100.0d;
        double pow = d10 > 0.0031308d ? (Math.pow(d10, 0.4166666666666667d) * 1.055d) - 0.055d : d10 * 12.92d;
        double pow2 = d11 > 0.0031308d ? (Math.pow(d11, 0.4166666666666667d) * 1.055d) - 0.055d : d11 * 12.92d;
        double pow3 = d12 > 0.0031308d ? (Math.pow(d12, 0.4166666666666667d) * 1.055d) - 0.055d : d12 * 12.92d;
        int round = (int) Math.round(pow * 255.0d);
        int min = round < 0 ? 0 : Math.min(round, 255);
        int round2 = (int) Math.round(pow2 * 255.0d);
        int min2 = round2 < 0 ? 0 : Math.min(round2, 255);
        int round3 = (int) Math.round(pow3 * 255.0d);
        return Color.rgb(min, min2, round3 >= 0 ? Math.min(round3, 255) : 0);
    }

    public static int b(int i5, int i6, float f2) {
        float f10 = 1.0f - f2;
        return Color.argb((int) ((Color.alpha(i6) * f2) + (Color.alpha(i5) * f10)), (int) ((Color.red(i6) * f2) + (Color.red(i5) * f10)), (int) ((Color.green(i6) * f2) + (Color.green(i5) * f10)), (int) ((Color.blue(i6) * f2) + (Color.blue(i5) * f10)));
    }

    public static int c(int i5, int i6) {
        int alpha = Color.alpha(i6);
        int alpha2 = Color.alpha(i5);
        int i10 = 255 - (((255 - alpha2) * (255 - alpha)) / 255);
        return Color.argb(i10, d(Color.red(i5), alpha2, Color.red(i6), alpha, i10), d(Color.green(i5), alpha2, Color.green(i6), alpha, i10), d(Color.blue(i5), alpha2, Color.blue(i6), alpha, i10));
    }

    public static int d(int i5, int i6, int i10, int i11, int i12) {
        if (i12 == 0) {
            return 0;
        }
        return (((255 - i6) * (i10 * i11)) + ((i5 * 255) * i6)) / (i12 * 255);
    }

    public static int e(int i5, int i6) {
        if (i6 < 0 || i6 > 255) {
            throw new IllegalArgumentException("alpha must be between 0 and 255.");
        }
        return (i5 & 16777215) | (i6 << 24);
    }
}
