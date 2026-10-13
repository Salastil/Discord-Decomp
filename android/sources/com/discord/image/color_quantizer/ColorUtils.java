package com.discord.image.color_quantizer;

import android.graphics.Color;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import uo.c;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0014\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J(\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u000bH\u0007J\u0010\u0010\f\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u000bH\u0007¨\u0006\r"}, d2 = {"Lcom/discord/image/color_quantizer/ColorUtils;", "", "<init>", "()V", "RGBtoHSL", "", "r", "", "g", "b", "hsl", "", "HSLtoRGB", "color_quantizer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ColorUtils {

    @NotNull
    public static final ColorUtils INSTANCE = new ColorUtils();

    private ColorUtils() {
    }

    public static final int HSLtoRGB(@NotNull float[] hsl) {
        int b10;
        int b11;
        int b12;
        int b13;
        Intrinsics.checkNotNullParameter(hsl, "hsl");
        float f2 = hsl[0];
        float f10 = hsl[1];
        float f11 = hsl[2];
        float abs = (1.0f - Math.abs((2 * f11) - 1.0f)) * f10;
        float f12 = f11 - (0.5f * abs);
        float abs2 = (1.0f - Math.abs(((f2 / 60.0f) % 2.0f) - 1.0f)) * abs;
        switch (((int) f2) / 60) {
            case 0:
                b10 = c.b((abs + f12) * 255.0f);
                b11 = c.b((abs2 + f12) * 255.0f);
                b12 = c.b(f12 * 255.0f);
                break;
            case 1:
                b10 = c.b((abs2 + f12) * 255.0f);
                b11 = c.b((abs + f12) * 255.0f);
                b12 = c.b(f12 * 255.0f);
                break;
            case 2:
                b10 = c.b(f12 * 255.0f);
                b11 = c.b((abs + f12) * 255.0f);
                b12 = c.b((abs2 + f12) * 255.0f);
                break;
            case 3:
                b10 = c.b(f12 * 255.0f);
                b13 = c.b((abs2 + f12) * 255.0f);
                b12 = c.b((abs + f12) * 255.0f);
                b11 = b13;
                break;
            case 4:
                b10 = c.b((abs2 + f12) * 255.0f);
                b13 = c.b(f12 * 255.0f);
                b12 = c.b((abs + f12) * 255.0f);
                b11 = b13;
                break;
            case 5:
            case 6:
                b10 = c.b((abs + f12) * 255.0f);
                b11 = c.b(f12 * 255.0f);
                b12 = c.b((abs2 + f12) * 255.0f);
                break;
            default:
                b12 = 0;
                b10 = 0;
                b11 = 0;
                break;
        }
        return Color.rgb(Math.max(0, Math.min(255, b10)), Math.max(0, Math.min(255, b11)), Math.max(0, Math.min(255, b12)));
    }

    public static final void RGBtoHSL(int r5, int g6, int b10, @NotNull float[] hsl) {
        float f2;
        float abs;
        Intrinsics.checkNotNullParameter(hsl, "hsl");
        float f10 = r5 / 255.0f;
        float f11 = g6 / 255.0f;
        float f12 = b10 / 255.0f;
        float max = Math.max(f10, Math.max(f11, f12));
        float min = Math.min(f10, Math.min(f11, f12));
        float f13 = max - min;
        float f14 = (max + min) / 2.0f;
        if (max == min) {
            f2 = 0.0f;
            abs = 0.0f;
        } else {
            f2 = max == f10 ? ((f11 - f12) / f13) % 6.0f : max == f11 ? ((f12 - f10) / f13) + 2.0f : ((f10 - f11) / f13) + 4.0f;
            abs = f13 / (1.0f - Math.abs((2.0f * f14) - 1.0f));
        }
        hsl[0] = (f2 * 60.0f) % 360.0f;
        hsl[1] = abs;
        hsl[2] = f14;
    }
}
