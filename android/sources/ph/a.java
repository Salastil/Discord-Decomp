package ph;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import androidx.appcompat.view.ContextThemeWrapper;

/* loaded from: classes3.dex */
public abstract class a {
    public static final int[] a = {R.attr.theme, com.discord.R.attr.theme};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f16397b = {com.discord.R.attr.materialThemeOverlay};

    public static Context a(Context context, AttributeSet attributeSet, int i5, int i6) {
        return b(context, attributeSet, i5, i6, new int[0]);
    }

    public static Context b(Context context, AttributeSet attributeSet, int i5, int i6, int[] iArr) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, f16397b, i5, i6);
        int[] iArr2 = {obtainStyledAttributes.getResourceId(0, 0)};
        obtainStyledAttributes.recycle();
        int i10 = iArr2[0];
        boolean z5 = (context instanceof ContextThemeWrapper) && ((ContextThemeWrapper) context).a == i10;
        if (i10 == 0 || z5) {
            return context;
        }
        ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, i10);
        int length = iArr.length;
        int[] iArr3 = new int[length];
        if (iArr.length > 0) {
            TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(attributeSet, iArr, i5, i6);
            for (int i11 = 0; i11 < iArr.length; i11++) {
                iArr3[i11] = obtainStyledAttributes2.getResourceId(i11, 0);
            }
            obtainStyledAttributes2.recycle();
        }
        for (int i12 = 0; i12 < length; i12++) {
            int i13 = iArr3[i12];
            if (i13 != 0) {
                contextThemeWrapper.getTheme().applyStyle(i13, true);
            }
        }
        TypedArray obtainStyledAttributes3 = context.obtainStyledAttributes(attributeSet, a);
        int resourceId = obtainStyledAttributes3.getResourceId(0, 0);
        int resourceId2 = obtainStyledAttributes3.getResourceId(1, 0);
        obtainStyledAttributes3.recycle();
        if (resourceId == 0) {
            resourceId = resourceId2;
        }
        if (resourceId != 0) {
            contextThemeWrapper.getTheme().applyStyle(resourceId, true);
        }
        return contextThemeWrapper;
    }
}
