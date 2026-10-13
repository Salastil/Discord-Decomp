package androidx.appcompat.widget;

import android.widget.TextView;

/* loaded from: classes.dex */
public abstract class x0 {
    public static int a(TextView textView) {
        return textView.getAutoSizeStepGranularity();
    }

    public static void b(TextView textView, int i5, int i6, int i10, int i11) {
        textView.setAutoSizeTextTypeUniformWithConfiguration(i5, i6, i10, i11);
    }

    public static void c(TextView textView, int[] iArr, int i5) {
        textView.setAutoSizeTextTypeUniformWithPresetSizes(iArr, i5);
    }

    public static boolean d(TextView textView, String str) {
        return textView.setFontVariationSettings(str);
    }
}
