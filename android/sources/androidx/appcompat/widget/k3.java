package androidx.appcompat.widget;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.View;

/* loaded from: classes.dex */
public abstract class k3 {
    public static final ThreadLocal a = new ThreadLocal();

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f1017b = {-16842910};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f1018c = {R.attr.state_focused};

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f1019d = {R.attr.state_pressed};

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f1020e = {R.attr.state_checked};

    /* renamed from: f, reason: collision with root package name */
    public static final int[] f1021f = new int[0];

    /* renamed from: g, reason: collision with root package name */
    public static final int[] f1022g = new int[1];

    public static void a(View view, Context context) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(h.a.j);
        try {
            if (!obtainStyledAttributes.hasValue(117)) {
                Log.e("ThemeUtils", "View " + view.getClass() + " is an AppCompat widget that can only be used with a Theme.AppCompat theme (or descendant).");
            }
        } finally {
            obtainStyledAttributes.recycle();
        }
    }

    public static int b(Context context, int i5) {
        ColorStateList d6 = d(context, i5);
        if (d6 != null && d6.isStateful()) {
            return d6.getColorForState(f1017b, d6.getDefaultColor());
        }
        ThreadLocal threadLocal = a;
        TypedValue typedValue = (TypedValue) threadLocal.get();
        if (typedValue == null) {
            typedValue = new TypedValue();
            threadLocal.set(typedValue);
        }
        context.getTheme().resolveAttribute(R.attr.disabledAlpha, typedValue, true);
        float f2 = typedValue.getFloat();
        return b1.c.e(c(context, i5), Math.round(Color.alpha(r4) * f2));
    }

    public static int c(Context context, int i5) {
        int[] iArr = f1022g;
        iArr[0] = i5;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes((AttributeSet) null, iArr);
        try {
            return obtainStyledAttributes.getColor(0, 0);
        } finally {
            obtainStyledAttributes.recycle();
        }
    }

    public static ColorStateList d(Context context, int i5) {
        ColorStateList colorStateList;
        int resourceId;
        int[] iArr = f1022g;
        iArr[0] = i5;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes((AttributeSet) null, iArr);
        try {
            if (!obtainStyledAttributes.hasValue(0) || (resourceId = obtainStyledAttributes.getResourceId(0, 0)) == 0 || (colorStateList = y0.b.c(context, resourceId)) == null) {
                colorStateList = obtainStyledAttributes.getColorStateList(0);
            }
            return colorStateList;
        } finally {
            obtainStyledAttributes.recycle();
        }
    }
}
