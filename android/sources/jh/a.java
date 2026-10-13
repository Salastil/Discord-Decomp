package jh;

import android.R;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.os.Build;
import android.util.Log;
import b1.c;

/* loaded from: classes3.dex */
public abstract class a {
    public static final int[] a = {R.attr.state_pressed};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f12772b = {R.attr.state_focused};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f12773c = {R.attr.state_selected, R.attr.state_pressed};

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f12774d = {R.attr.state_selected};

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f12775e = {R.attr.state_enabled, R.attr.state_pressed};

    /* renamed from: f, reason: collision with root package name */
    public static final String f12776f = a.class.getSimpleName();

    public static int a(ColorStateList colorStateList, int[] iArr) {
        int colorForState = colorStateList != null ? colorStateList.getColorForState(iArr, colorStateList.getDefaultColor()) : 0;
        return c.e(colorForState, Math.min(Color.alpha(colorForState) * 2, 255));
    }

    public static ColorStateList b(ColorStateList colorStateList) {
        if (colorStateList == null) {
            return ColorStateList.valueOf(0);
        }
        if (Build.VERSION.SDK_INT <= 27 && Color.alpha(colorStateList.getDefaultColor()) == 0 && Color.alpha(colorStateList.getColorForState(f12775e, 0)) != 0) {
            Log.w(f12776f, "Use a non-transparent color for the default color as it will be used to finish ripple animations.");
        }
        return colorStateList;
    }
}
