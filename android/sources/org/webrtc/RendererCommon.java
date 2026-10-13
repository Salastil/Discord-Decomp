package org.webrtc;

import android.graphics.Matrix;
import android.graphics.Point;
import android.view.View;

/* loaded from: classes4.dex */
public class RendererCommon {
    private static final float BALANCED_VISIBLE_FRACTION = 0.5625f;

    public interface GlDrawer {
        void drawOes(int i5, float[] fArr, int i6, int i10, int i11, int i12, int i13, int i14);

        void drawRgb(int i5, float[] fArr, int i6, int i10, int i11, int i12, int i13, int i14);

        void drawYuv(int[] iArr, float[] fArr, int i5, int i6, int i10, int i11, int i12, int i13);

        void release();
    }

    public interface RendererEvents {
        void onFirstFrameRendered();

        void onFrameResolutionChanged(int i5, int i6, int i10);
    }

    public enum ScalingType {
        SCALE_ASPECT_FIT,
        SCALE_ASPECT_FILL,
        SCALE_ASPECT_BALANCED
    }

    public static class VideoLayoutMeasure {
        private float visibleFractionMatchOrientation;
        private float visibleFractionMismatchOrientation;

        public VideoLayoutMeasure() {
            ScalingType scalingType = ScalingType.SCALE_ASPECT_BALANCED;
            this.visibleFractionMatchOrientation = RendererCommon.convertScalingTypeToVisibleFraction(scalingType);
            this.visibleFractionMismatchOrientation = RendererCommon.convertScalingTypeToVisibleFraction(scalingType);
        }

        public Point measure(int i5, int i6, int i10, int i11) {
            int defaultSize = View.getDefaultSize(Integer.MAX_VALUE, i5);
            int defaultSize2 = View.getDefaultSize(Integer.MAX_VALUE, i6);
            if (i10 == 0 || i11 == 0 || defaultSize == 0 || defaultSize2 == 0) {
                return new Point(defaultSize, defaultSize2);
            }
            float f2 = i10 / i11;
            Point displaySize = RendererCommon.getDisplaySize(((f2 > 1.0f ? 1 : (f2 == 1.0f ? 0 : -1)) > 0) == (((float) defaultSize) / ((float) defaultSize2) > 1.0f) ? this.visibleFractionMatchOrientation : this.visibleFractionMismatchOrientation, f2, defaultSize, defaultSize2);
            if (View.MeasureSpec.getMode(i5) == 1073741824) {
                displaySize.x = defaultSize;
            }
            if (View.MeasureSpec.getMode(i6) == 1073741824) {
                displaySize.y = defaultSize2;
            }
            return displaySize;
        }

        public void setScalingType(ScalingType scalingType) {
            setScalingType(scalingType, scalingType);
        }

        public void setVisibleFraction(float f2, float f10) {
            this.visibleFractionMatchOrientation = f2;
            this.visibleFractionMismatchOrientation = f10;
        }

        public void setScalingType(ScalingType scalingType, ScalingType scalingType2) {
            this.visibleFractionMatchOrientation = RendererCommon.convertScalingTypeToVisibleFraction(scalingType);
            this.visibleFractionMismatchOrientation = RendererCommon.convertScalingTypeToVisibleFraction(scalingType2);
        }
    }

    private static void adjustOrigin(float[] fArr) {
        float f2 = fArr[12] - ((fArr[0] + fArr[4]) * 0.5f);
        fArr[12] = f2;
        float f10 = fArr[13] - ((fArr[1] + fArr[5]) * 0.5f);
        fArr[13] = f10;
        fArr[12] = f2 + 0.5f;
        fArr[13] = f10 + 0.5f;
    }

    public static float[] convertMatrixFromAndroidGraphicsMatrix(Matrix matrix) {
        float[] fArr = new float[9];
        matrix.getValues(fArr);
        return new float[]{fArr[0], fArr[3], 0.0f, fArr[6], fArr[1], fArr[4], 0.0f, fArr[7], 0.0f, 0.0f, 1.0f, 0.0f, fArr[2], fArr[5], 0.0f, fArr[8]};
    }

    public static Matrix convertMatrixToAndroidGraphicsMatrix(float[] fArr) {
        float[] fArr2 = {fArr[0], fArr[4], fArr[12], fArr[1], fArr[5], fArr[13], fArr[3], fArr[7], fArr[15]};
        Matrix matrix = new Matrix();
        matrix.setValues(fArr2);
        return matrix;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static float convertScalingTypeToVisibleFraction(ScalingType scalingType) {
        int ordinal = scalingType.ordinal();
        if (ordinal == 0) {
            return 1.0f;
        }
        if (ordinal == 1) {
            return 0.0f;
        }
        if (ordinal == 2) {
            return BALANCED_VISIBLE_FRACTION;
        }
        throw new IllegalArgumentException();
    }

    public static Point getDisplaySize(ScalingType scalingType, float f2, int i5, int i6) {
        return getDisplaySize(convertScalingTypeToVisibleFraction(scalingType), f2, i5, i6);
    }

    public static float[] getLayoutMatrix(boolean z5, float f2, float f10) {
        float f11;
        float f12;
        if (f10 > f2) {
            f12 = f2 / f10;
            f11 = 1.0f;
        } else {
            f11 = f10 / f2;
            f12 = 1.0f;
        }
        if (z5) {
            f11 *= -1.0f;
        }
        float[] fArr = new float[16];
        android.opengl.Matrix.setIdentityM(fArr, 0);
        android.opengl.Matrix.scaleM(fArr, 0, f11, f12, 1.0f);
        adjustOrigin(fArr);
        return fArr;
    }

    public static Point getDisplaySize(float f2, float f10, int i5, int i6) {
        return (f2 == 0.0f || f10 == 0.0f) ? new Point(i5, i6) : new Point(Math.min(i5, Math.round((i6 / f2) * f10)), Math.min(i6, Math.round((i5 / f2) / f10)));
    }
}
