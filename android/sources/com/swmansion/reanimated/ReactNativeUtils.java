package com.swmansion.reanimated;

import android.view.View;
import com.facebook.react.views.image.ReactImageView;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* loaded from: classes3.dex */
public class ReactNativeUtils {
    private static Method getCornerRadiiMethod;
    private static Field mBorderRadiusField;

    public static class BorderRadii {
        public float bottomLeft;
        public float bottomRight;
        public float full;
        public float topLeft;
        public float topRight;

        public BorderRadii(float f2, float f10, float f11, float f12, float f13) {
            this.full = Float.isNaN(f2) ? 0.0f : f2;
            this.topLeft = Float.isNaN(f10) ? this.full : f10;
            this.topRight = Float.isNaN(f11) ? this.full : f11;
            this.bottomLeft = Float.isNaN(f12) ? this.full : f12;
            this.bottomRight = Float.isNaN(f13) ? this.full : f13;
        }
    }

    public static BorderRadii getBorderRadii(View view) {
        if (view.getBackground() != null) {
            return BorderRadiiDrawableUtils.getBorderRadii(view);
        }
        if (view instanceof ReactImageView) {
            try {
                if (mBorderRadiusField == null) {
                    Field declaredField = ReactImageView.class.getDeclaredField("mBorderRadius");
                    mBorderRadiusField = declaredField;
                    declaredField.setAccessible(true);
                }
                float f2 = mBorderRadiusField.getFloat(view);
                if (getCornerRadiiMethod == null) {
                    Method declaredMethod = ReactImageView.class.getDeclaredMethod("getCornerRadii", float[].class);
                    getCornerRadiiMethod = declaredMethod;
                    declaredMethod.setAccessible(true);
                }
                if (Float.isNaN(f2)) {
                    f2 = 0.0f;
                }
                float f10 = f2;
                float[] fArr = new float[4];
                getCornerRadiiMethod.invoke(view, fArr);
                return new BorderRadii(f10, fArr[0], fArr[1], fArr[2], fArr[3]);
            } catch (IllegalAccessException | NoSuchFieldException | NoSuchMethodException | NullPointerException | InvocationTargetException unused) {
            }
        }
        return new BorderRadii(0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }
}
