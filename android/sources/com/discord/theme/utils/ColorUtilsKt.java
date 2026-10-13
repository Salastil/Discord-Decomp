package com.discord.theme.utils;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Color;
import android.graphics.PorterDuff;
import android.view.View;
import android.widget.ImageView;
import com.discord.theme.DiscordThemeObject;
import com.discord.theme.ThemeManager;
import com.discord.theme.ThemeManagerKt;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import uo.c;
import yo.j;

@Metadata(d1 = {"\u0000H\n\u0000\n\u0002\u0010\u0014\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\u001a\u0016\u0010\u0002\u001a\u00020\u0003*\u00020\u00042\b\b\u0001\u0010\u0005\u001a\u00020\u0003H\u0007\u001a\"\u0010\u0002\u001a\u00020\u0003*\u00020\u00062\b\b\u0001\u0010\u0005\u001a\u00020\u00032\n\u0010\u0007\u001a\u00060\bR\u00020\u0006H\u0007\u001a\u0016\u0010\u0002\u001a\u00020\u0003*\u00020\t2\b\b\u0001\u0010\n\u001a\u00020\u0003H\u0007\u001a\u001b\u0010\u000b\u001a\u00020\f*\u00020\r2\n\b\u0001\u0010\u000e\u001a\u0004\u0018\u00010\u0003¢\u0006\u0002\u0010\u000f\u001a\u001b\u0010\u000b\u001a\u00020\f*\u00020\u00102\n\b\u0001\u0010\u000e\u001a\u0004\u0018\u00010\u0003¢\u0006\u0002\u0010\u0011\u001a\u0010\u0010\u0012\u001a\u00020\u00032\u0006\u0010\u0013\u001a\u00020\u0003H\u0002\u001a\u001a\u0010\u0014\u001a\u00020\u00032\b\b\u0001\u0010\u0013\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\u0016H\u0007\u001a \u0010\u0017\u001a\u00020\u0003*\u00020\u00042\b\b\u0001\u0010\u0018\u001a\u00020\u00032\b\b\u0001\u0010\u0019\u001a\u00020\u0003H\u0007\u001a(\u0010\u0017\u001a\u00020\u0003*\u00020\u00042\b\b\u0001\u0010\u0018\u001a\u00020\u00032\b\b\u0001\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\u001aH\u0007\u001a8\u0010\u001b\u001a\u00020\u00032\b\b\u0001\u0010\u001c\u001a\u00020\u00032\b\b\u0001\u0010\u001d\u001a\u00020\u00032\u0006\u0010\u001e\u001a\u00020\u00162\b\b\u0002\u0010\u001f\u001a\u00020\u00162\b\b\u0002\u0010 \u001a\u00020\u0016H\u0007\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006!"}, d2 = {"hsv", "", "getColorCompat", "", "Landroid/content/Context;", StackTraceHelper.ID_KEY, "Landroid/content/res/Resources;", "theme", "Landroid/content/res/Resources$Theme;", "Landroid/view/View;", "colorRes", "setTintColor", "", "Landroid/widget/ImageView;", "colorInt", "(Landroid/widget/ImageView;Ljava/lang/Integer;)V", "Lcom/facebook/drawee/view/SimpleDraweeView;", "(Lcom/facebook/drawee/view/SimpleDraweeView;Ljava/lang/Integer;)V", "applySaturationFactor", ViewProps.COLOR, "argbWithAdjustedAlpha", "alpha", "", "getThemeColor", "lightColorRes", "darkColorRes", "Lcom/discord/theme/DiscordThemeObject;", "interpolateColors", "colorA", "colorB", "t", "minT", "maxT", "theme_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nColorUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ColorUtils.kt\ncom/discord/theme/utils/ColorUtilsKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,132:1\n1#2:133\n*E\n"})
/* loaded from: classes3.dex */
public final class ColorUtilsKt {

    @NotNull
    private static final float[] hsv = new float[3];

    private static final int applySaturationFactor(int i5) {
        float saturationFactor = ThemeManager.INSTANCE.getSaturationFactor();
        if (saturationFactor == 1.0f) {
            return i5;
        }
        float[] fArr = hsv;
        Color.colorToHSV(i5, fArr);
        float f2 = fArr[1];
        float f10 = fArr[2];
        float f11 = f10 * f2;
        float f12 = 2;
        float f13 = f10 - (f11 / f12);
        if (f13 != 0.0f && f13 != 1.0f) {
            f2 = f11 / (1 - Math.abs((2.0f * f13) - 1.0f));
        }
        float min = (Math.min(1.0f, 1.0f - f13) * f2 * saturationFactor) + f13;
        fArr[1] = min != 0.0f ? (1.0f - (f13 / min)) * f12 : 0.0f;
        fArr[2] = min;
        return Color.HSVToColor(Color.alpha(i5), fArr);
    }

    public static final int argbWithAdjustedAlpha(int i5, float f2) {
        return Color.argb(c.b(Color.alpha(i5) * f2), Color.red(i5), Color.green(i5), Color.blue(i5));
    }

    public static final int getColorCompat(@NotNull Context context, int i5) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        return applySaturationFactor(context.getColor(i5));
    }

    public static final int getThemeColor(@NotNull Context context, int i5, int i6) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        return getThemeColor(context, i5, i6, ThemeManagerKt.getTheme());
    }

    public static final int interpolateColors(int i5, int i6, float f2, float f10, float f11) {
        if (f2 <= f10) {
            return i5;
        }
        if (f2 >= f11) {
            return i6;
        }
        int red = Color.red(i5);
        int green = Color.green(i5);
        int blue = Color.blue(i5);
        int alpha = Color.alpha(i5);
        int red2 = Color.red(i6);
        int green2 = Color.green(i6);
        int blue2 = Color.blue(i6);
        int alpha2 = Color.alpha(i6);
        float f12 = (f2 - f10) / (f11 - f10);
        return Color.argb(j.d((int) (((alpha2 - alpha) * f12) + alpha), 0, 255), j.d((int) (((red2 - red) * f12) + red), 0, 255), j.d((int) (((green2 - green) * f12) + green), 0, 255), j.d((int) (((blue2 - blue) * f12) + blue), 0, 255));
    }

    public static /* synthetic */ int interpolateColors$default(int i5, int i6, float f2, float f10, float f11, int i10, Object obj) {
        if ((i10 & 8) != 0) {
            f10 = 0.0f;
        }
        if ((i10 & 16) != 0) {
            f11 = 1.0f;
        }
        return interpolateColors(i5, i6, f2, f10, f11);
    }

    public static final void setTintColor(@NotNull ImageView imageView, Integer num) {
        Intrinsics.checkNotNullParameter(imageView, "<this>");
        imageView.setImageTintList(num != null ? ColorStateList.valueOf(num.intValue()) : null);
    }

    public static final int getColorCompat(@NotNull Resources resources, int i5, @NotNull Resources.Theme theme) {
        Intrinsics.checkNotNullParameter(resources, "<this>");
        Intrinsics.checkNotNullParameter(theme, "theme");
        return applySaturationFactor(resources.getColor(i5, theme));
    }

    public static final int getThemeColor(@NotNull Context context, int i5, int i6, @NotNull DiscordThemeObject theme) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        Intrinsics.checkNotNullParameter(theme, "theme");
        return getColorCompat(context, theme.getColorRes(i5, i6));
    }

    public static final int getColorCompat(@NotNull View view, int i5) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Context context = view.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        return getColorCompat(context, i5);
    }

    public static final void setTintColor(@NotNull SimpleDraweeView simpleDraweeView, Integer num) {
        Intrinsics.checkNotNullParameter(simpleDraweeView, "<this>");
        if (num == null) {
            simpleDraweeView.clearColorFilter();
        } else {
            simpleDraweeView.setColorFilter(num.intValue(), PorterDuff.Mode.SRC_IN);
        }
    }
}
