package com.facebook.react.uimanager;

import com.swmansion.reanimated.layoutReanimation.Snapshot;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0013\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b*\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001;B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0005H\u0002J \u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\fH\u0007J\u0018\u0010\u000f\u001a\u00020\n2\u0006\u0010\u0010\u001a\u00020\f2\u0006\u0010\u0011\u001a\u00020\u0012H\u0007J\u0010\u0010\u0013\u001a\u00020\u00052\u0006\u0010\u0014\u001a\u00020\fH\u0007J\u0010\u0010\u0015\u001a\u00020\f2\u0006\u0010\u0014\u001a\u00020\fH\u0007J\u0010\u0010\u0016\u001a\u00020\f2\u0006\u0010\u0017\u001a\u00020\fH\u0007J \u0010\u0018\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\f2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u0010\u001a\u001a\u00020\fH\u0007J\u0010\u0010\u001b\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\fH\u0007J\u0018\u0010\u001c\u001a\u00020\f2\u0006\u0010\u001d\u001a\u00020\f2\u0006\u0010\u001e\u001a\u00020\u0005H\u0007J\u0018\u0010\u001f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\fH\u0007J(\u0010 \u001a\u00020\f2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\f2\u0006\u0010!\u001a\u00020\u00052\u0006\u0010\"\u001a\u00020\u0005H\u0007J\u0018\u0010#\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\fH\u0007J\u0010\u0010$\u001a\u00020\u00052\u0006\u0010%\u001a\u00020\u0005H\u0007J\b\u0010&\u001a\u00020\fH\u0007J\u0010\u0010'\u001a\u00020\u00052\u0006\u0010(\u001a\u00020\u0005H\u0007J\u0010\u0010)\u001a\u00020\n2\u0006\u0010\u0014\u001a\u00020\fH\u0007J\u0018\u0010*\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u0010+\u001a\u00020\u0005H\u0007J\u0018\u0010,\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u0010-\u001a\u00020\u0005H\u0007J\u0018\u0010.\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u0010-\u001a\u00020\u0005H\u0007J\u0016\u0010/\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u0010-\u001a\u00020\u0005J \u00100\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00101\u001a\u00020\u00052\u0006\u00102\u001a\u00020\u0005H\u0007J(\u00103\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00101\u001a\u00020\u00052\u0006\u00102\u001a\u00020\u00052\u0006\u00104\u001a\u00020\u0005H\u0007J\u0018\u00105\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00106\u001a\u00020\u0005H\u0007J\u0018\u00107\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00106\u001a\u00020\u0005H\u0007J\u0018\u00108\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00106\u001a\u00020\u0005H\u0007J\u0018\u00109\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00106\u001a\u00020\u0005H\u0007J\u0018\u0010:\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\f2\u0006\u00106\u001a\u00020\u0005H\u0007R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006<"}, d2 = {"Lcom/facebook/react/uimanager/MatrixMathHelper;", "", "<init>", "()V", "EPSILON", "", "isZero", "", "d", "multiplyInto", "", "out", "", "a", "b", "decomposeMatrix", Snapshot.TRANSFORM_MATRIX, "ctx", "Lcom/facebook/react/uimanager/MatrixMathHelper$MatrixDecompositionContext;", "determinant", "matrix", "inverse", "transpose", "m", "multiplyVectorByMatrix", "v", "result", "v3Length", "v3Normalize", "vector", "norm", "v3Dot", "v3Combine", "aScale", "bScale", "v3Cross", "roundTo3Places", "n", "createIdentityMatrix", "degreesToRadians", "degrees", "resetIdentityMatrix", "applyPerspective", "perspective", "applyScaleX", "factor", "applyScaleY", "applyScaleZ", "applyTranslate2D", "x", "y", "applyTranslate3D", "z", "applySkewX", "radians", "applySkewY", "applyRotateX", "applyRotateY", "applyRotateZ", "MatrixDecompositionContext", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class MatrixMathHelper {
    private static final double EPSILON = 1.0E-5d;

    @NotNull
    public static final MatrixMathHelper INSTANCE = new MatrixMathHelper();

    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0013\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0016\u0018\u0000 \f2\u00020\u0001:\u0001\fB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\n\u001a\u00020\u000bR\u0012\u0010\u0004\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u0006\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u0007\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\b\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\t\u001a\u00020\u00058\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/facebook/react/uimanager/MatrixMathHelper$MatrixDecompositionContext;", "", "<init>", "()V", "perspective", "", "scale", "skew", "translation", "rotationDegrees", "reset", "", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static class MatrixDecompositionContext {

        @NotNull
        private static final Companion Companion = new Companion(null);

        @NotNull
        public double[] perspective = new double[4];

        @NotNull
        public double[] scale = new double[3];

        @NotNull
        public double[] skew = new double[3];

        @NotNull
        public double[] translation = new double[3];

        @NotNull
        public double[] rotationDegrees = new double[3];

        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0013\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002¨\u0006\b"}, d2 = {"Lcom/facebook/react/uimanager/MatrixMathHelper$MatrixDecompositionContext$Companion;", "", "<init>", "()V", "resetArray", "", "arr", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            /* JADX INFO: Access modifiers changed from: private */
            public final void resetArray(double[] arr) {
                int length = arr.length;
                for (int i5 = 0; i5 < length; i5++) {
                    arr[i5] = 0.0d;
                }
            }

            private Companion() {
            }
        }

        public final void reset() {
            Companion companion = Companion;
            companion.resetArray(this.perspective);
            companion.resetArray(this.scale);
            companion.resetArray(this.skew);
            companion.resetArray(this.translation);
            companion.resetArray(this.rotationDegrees);
        }
    }

    private MatrixMathHelper() {
    }

    public static final void applyPerspective(@NotNull double[] m5, double perspective) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[11] = (-1) / perspective;
    }

    public static final void applyRotateX(@NotNull double[] m5, double radians) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[5] = Math.cos(radians);
        m5[6] = Math.sin(radians);
        m5[9] = -Math.sin(radians);
        m5[10] = Math.cos(radians);
    }

    public static final void applyRotateY(@NotNull double[] m5, double radians) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[0] = Math.cos(radians);
        m5[2] = -Math.sin(radians);
        m5[8] = Math.sin(radians);
        m5[10] = Math.cos(radians);
    }

    public static final void applyRotateZ(@NotNull double[] m5, double radians) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[0] = Math.cos(radians);
        m5[1] = Math.sin(radians);
        m5[4] = -Math.sin(radians);
        m5[5] = Math.cos(radians);
    }

    public static final void applyScaleX(@NotNull double[] m5, double factor) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[0] = factor;
    }

    public static final void applyScaleY(@NotNull double[] m5, double factor) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[5] = factor;
    }

    public static final void applySkewX(@NotNull double[] m5, double radians) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[4] = Math.tan(radians);
    }

    public static final void applySkewY(@NotNull double[] m5, double radians) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[1] = Math.tan(radians);
    }

    public static final void applyTranslate2D(@NotNull double[] m5, double x5, double y5) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[12] = x5;
        m5[13] = y5;
    }

    public static final void applyTranslate3D(@NotNull double[] m5, double x5, double y5, double z5) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[12] = x5;
        m5[13] = y5;
        m5[14] = z5;
    }

    @NotNull
    public static final double[] createIdentityMatrix() {
        double[] dArr = new double[16];
        resetIdentityMatrix(dArr);
        return dArr;
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00d0 A[LOOP:3: B:36:0x00ce->B:37:0x00d0, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00df A[LOOP:4: B:40:0x00dd->B:41:0x00df, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00ea A[LOOP:5: B:44:0x00e8->B:45:0x00ea, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x018f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void decomposeMatrix(@NotNull double[] transformMatrix, @NotNull MatrixDecompositionContext ctx) {
        char c6;
        int i5;
        double[][] dArr;
        int i6;
        int i10;
        double[] v3Normalize;
        Intrinsics.checkNotNullParameter(transformMatrix, "transformMatrix");
        Intrinsics.checkNotNullParameter(ctx, "ctx");
        io.sentry.config.a.d(transformMatrix.length == 16);
        double[] dArr2 = ctx.perspective;
        double[] dArr3 = ctx.scale;
        double[] dArr4 = ctx.skew;
        double[] dArr5 = ctx.translation;
        double[] dArr6 = ctx.rotationDegrees;
        if (INSTANCE.isZero(transformMatrix[15])) {
            return;
        }
        double[][] dArr7 = new double[4][];
        for (int i11 = 0; i11 < 4; i11++) {
            dArr7[i11] = new double[4];
        }
        double[] dArr8 = new double[16];
        for (int i12 = 0; i12 < 4; i12++) {
            for (int i13 = 0; i13 < 4; i13++) {
                int i14 = (i12 * 4) + i13;
                double d6 = transformMatrix[i14] / transformMatrix[15];
                dArr7[i12][i13] = d6;
                if (i13 == 3) {
                    d6 = 0.0d;
                }
                dArr8[i14] = d6;
            }
        }
        dArr8[15] = 1.0d;
        MatrixMathHelper matrixMathHelper = INSTANCE;
        if (matrixMathHelper.isZero(determinant(dArr8))) {
            return;
        }
        if (matrixMathHelper.isZero(dArr7[0][3])) {
            c6 = 2;
            if (matrixMathHelper.isZero(dArr7[1][3]) && matrixMathHelper.isZero(dArr7[2][3])) {
                dArr2[2] = 0.0d;
                dArr2[1] = 0.0d;
                dArr2[0] = 0.0d;
                dArr2[3] = 1.0d;
                for (i5 = 0; i5 < 3; i5++) {
                    dArr5[i5] = dArr7[3][i5];
                }
                dArr = new double[3][];
                for (i6 = 0; i6 < 3; i6++) {
                    dArr[i6] = new double[3];
                }
                for (i10 = 0; i10 < 3; i10++) {
                    double[] dArr9 = dArr[i10];
                    double[] dArr10 = dArr7[i10];
                    dArr9[0] = dArr10[0];
                    dArr9[1] = dArr10[1];
                    dArr9[c6] = dArr10[c6];
                }
                double v3Length = v3Length(dArr[0]);
                dArr3[0] = v3Length;
                double[] v3Normalize2 = v3Normalize(dArr[0], v3Length);
                dArr[0] = v3Normalize2;
                double v3Dot = v3Dot(v3Normalize2, dArr[1]);
                dArr4[0] = v3Dot;
                double[] v3Combine = v3Combine(dArr[1], dArr[0], 1.0d, -v3Dot);
                dArr[1] = v3Combine;
                double v3Length2 = v3Length(v3Combine);
                dArr3[1] = v3Length2;
                dArr[1] = v3Normalize(dArr[1], v3Length2);
                dArr4[0] = dArr4[0] / dArr3[1];
                double v3Dot2 = v3Dot(dArr[0], dArr[c6]);
                dArr4[1] = v3Dot2;
                double[] v3Combine2 = v3Combine(dArr[c6], dArr[0], 1.0d, -v3Dot2);
                dArr[c6] = v3Combine2;
                double v3Dot3 = v3Dot(dArr[1], v3Combine2);
                dArr4[c6] = v3Dot3;
                double[] v3Combine3 = v3Combine(dArr[c6], dArr[1], 1.0d, -v3Dot3);
                dArr[c6] = v3Combine3;
                double v3Length3 = v3Length(v3Combine3);
                dArr3[c6] = v3Length3;
                v3Normalize = v3Normalize(dArr[c6], v3Length3);
                dArr[c6] = v3Normalize;
                double d7 = dArr4[1];
                double d8 = dArr3[c6];
                dArr4[1] = d7 / d8;
                dArr4[c6] = dArr4[c6] / d8;
                if (v3Dot(dArr[0], v3Cross(dArr[1], v3Normalize)) < 0.0d) {
                    for (int i15 = 0; i15 < 3; i15++) {
                        dArr3[i15] = dArr3[i15] * (-1.0d);
                        double[] dArr11 = dArr[i15];
                        dArr11[0] = dArr11[0] * (-1.0d);
                        dArr11[1] = dArr11[1] * (-1.0d);
                        dArr11[c6] = dArr11[c6] * (-1.0d);
                    }
                }
                double[] dArr12 = dArr[c6];
                dArr6[0] = roundTo3Places((-Math.atan2(dArr12[1], dArr12[c6])) * 57.29577951308232d);
                double[] dArr13 = dArr[c6];
                double d10 = -dArr13[0];
                double d11 = dArr13[1];
                double d12 = dArr13[c6];
                dArr6[1] = roundTo3Places((-Math.atan2(d10, Math.sqrt((d12 * d12) + (d11 * d11)))) * 57.29577951308232d);
                dArr6[c6] = roundTo3Places((-Math.atan2(dArr[1][0], dArr[0][0])) * 57.29577951308232d);
            }
        } else {
            c6 = 2;
        }
        double d13 = dArr7[0][3];
        double d14 = dArr7[1][3];
        double d15 = dArr7[c6][3];
        double d16 = dArr7[3][3];
        double[] dArr14 = new double[4];
        dArr14[0] = d13;
        dArr14[1] = d14;
        dArr14[c6] = d15;
        dArr14[3] = d16;
        multiplyVectorByMatrix(dArr14, transpose(inverse(dArr8)), dArr2);
        while (i5 < 3) {
        }
        dArr = new double[3][];
        while (i6 < 3) {
        }
        while (i10 < 3) {
        }
        double v3Length4 = v3Length(dArr[0]);
        dArr3[0] = v3Length4;
        double[] v3Normalize22 = v3Normalize(dArr[0], v3Length4);
        dArr[0] = v3Normalize22;
        double v3Dot4 = v3Dot(v3Normalize22, dArr[1]);
        dArr4[0] = v3Dot4;
        double[] v3Combine4 = v3Combine(dArr[1], dArr[0], 1.0d, -v3Dot4);
        dArr[1] = v3Combine4;
        double v3Length22 = v3Length(v3Combine4);
        dArr3[1] = v3Length22;
        dArr[1] = v3Normalize(dArr[1], v3Length22);
        dArr4[0] = dArr4[0] / dArr3[1];
        double v3Dot22 = v3Dot(dArr[0], dArr[c6]);
        dArr4[1] = v3Dot22;
        double[] v3Combine22 = v3Combine(dArr[c6], dArr[0], 1.0d, -v3Dot22);
        dArr[c6] = v3Combine22;
        double v3Dot32 = v3Dot(dArr[1], v3Combine22);
        dArr4[c6] = v3Dot32;
        double[] v3Combine32 = v3Combine(dArr[c6], dArr[1], 1.0d, -v3Dot32);
        dArr[c6] = v3Combine32;
        double v3Length32 = v3Length(v3Combine32);
        dArr3[c6] = v3Length32;
        v3Normalize = v3Normalize(dArr[c6], v3Length32);
        dArr[c6] = v3Normalize;
        double d72 = dArr4[1];
        double d82 = dArr3[c6];
        dArr4[1] = d72 / d82;
        dArr4[c6] = dArr4[c6] / d82;
        if (v3Dot(dArr[0], v3Cross(dArr[1], v3Normalize)) < 0.0d) {
        }
        double[] dArr122 = dArr[c6];
        dArr6[0] = roundTo3Places((-Math.atan2(dArr122[1], dArr122[c6])) * 57.29577951308232d);
        double[] dArr132 = dArr[c6];
        double d102 = -dArr132[0];
        double d112 = dArr132[1];
        double d122 = dArr132[c6];
        dArr6[1] = roundTo3Places((-Math.atan2(d102, Math.sqrt((d122 * d122) + (d112 * d112)))) * 57.29577951308232d);
        dArr6[c6] = roundTo3Places((-Math.atan2(dArr[1][0], dArr[0][0])) * 57.29577951308232d);
    }

    public static final double degreesToRadians(double degrees) {
        return (degrees * 3.141592653589793d) / 180;
    }

    public static final double determinant(@NotNull double[] matrix) {
        Intrinsics.checkNotNullParameter(matrix, "matrix");
        double d6 = matrix[0];
        double d7 = matrix[1];
        double d8 = matrix[2];
        double d10 = matrix[3];
        double d11 = matrix[4];
        double d12 = matrix[5];
        double d13 = matrix[6];
        double d14 = matrix[7];
        double d15 = matrix[8];
        double d16 = matrix[9];
        double d17 = matrix[10];
        double d18 = matrix[11];
        double d19 = matrix[12];
        double d20 = matrix[13];
        double d21 = matrix[14];
        double d22 = matrix[15];
        double d23 = d10 * d13;
        double d24 = d8 * d14;
        double d25 = d10 * d12;
        double d26 = d7 * d14;
        double d27 = (d26 * d17 * d19) + ((((d23 * d16) * d19) - ((d24 * d16) * d19)) - ((d25 * d17) * d19));
        double d28 = d8 * d12;
        double d29 = (d28 * d18 * d19) + d27;
        double d30 = d7 * d13;
        double d31 = d10 * d11;
        double d32 = d14 * d6;
        double d33 = d8 * d11;
        double d34 = ((((d31 * d17) * d20) + (((d24 * d15) * d20) + ((d29 - ((d30 * d18) * d19)) - ((d23 * d15) * d20)))) - ((d32 * d17) * d20)) - ((d33 * d18) * d20);
        double d35 = d13 * d6;
        double d36 = d32 * d16 * d21;
        double d37 = d7 * d11;
        double d38 = d6 * d12;
        double d39 = d30 * d15 * d22;
        double d40 = d33 * d16 * d22;
        return (d38 * d17 * d22) + (((d40 + (d39 + (((((d37 * d18) * d21) + (d36 + (((((d25 * d15) * d21) + (((d35 * d18) * d20) + d34)) - ((d26 * d15) * d21)) - ((d31 * d16) * d21)))) - ((d18 * d38) * d21)) - ((d28 * d15) * d22)))) - ((d35 * d16) * d22)) - ((d37 * d17) * d22));
    }

    @NotNull
    public static final double[] inverse(@NotNull double[] matrix) {
        Intrinsics.checkNotNullParameter(matrix, "matrix");
        double determinant = determinant(matrix);
        if (INSTANCE.isZero(determinant)) {
            return matrix;
        }
        double d6 = matrix[0];
        double d7 = matrix[1];
        double d8 = matrix[2];
        double d10 = matrix[3];
        double d11 = matrix[4];
        double d12 = matrix[5];
        double d13 = matrix[6];
        double d14 = matrix[7];
        double d15 = matrix[8];
        double d16 = matrix[9];
        double d17 = matrix[10];
        double d18 = matrix[11];
        double d19 = matrix[12];
        double d20 = matrix[13];
        double d21 = matrix[14];
        double d22 = matrix[15];
        double d23 = d13 * d18;
        double d24 = d14 * d17;
        double d25 = d14 * d16;
        double d26 = d12 * d18;
        double d27 = d13 * d16;
        double d28 = d12 * d17;
        double d29 = ((d28 * d22) + ((((d25 * d21) + ((d23 * d20) - (d24 * d20))) - (d26 * d21)) - (d27 * d22))) / determinant;
        double d30 = d10 * d17;
        double d31 = d8 * d18;
        double d32 = d10 * d16;
        double d33 = d7 * d18;
        double d34 = d8 * d16;
        double d35 = (d34 * d22) + (d33 * d21) + (((d30 * d20) - (d31 * d20)) - (d32 * d21));
        double d36 = d7 * d17;
        double d37 = d8 * d14;
        double d38 = d10 * d13;
        double d39 = d10 * d12;
        double d40 = d7 * d14;
        double d41 = d8 * d12;
        double d42 = d7 * d13;
        double d43 = ((d42 * d22) + ((((d39 * d21) + ((d37 * d20) - (d38 * d20))) - (d40 * d21)) - (d41 * d22))) / determinant;
        double d44 = (((d41 * d18) + ((d40 * d17) + (((d38 * d16) - (d37 * d16)) - (d39 * d17)))) - (d42 * d18)) / determinant;
        double d45 = (d24 * d19) - (d23 * d19);
        double d46 = d14 * d15;
        double d47 = d11 * d18;
        double d48 = (d47 * d21) + (d45 - (d46 * d21));
        double d49 = d13 * d15;
        double d50 = (d49 * d22) + d48;
        double d51 = d11 * d17;
        double d52 = (d31 * d19) - (d30 * d19);
        double d53 = d10 * d15;
        double d54 = (d53 * d21) + d52;
        double d55 = d6 * d18;
        double d56 = d8 * d15;
        double d57 = d6 * d17;
        double d58 = ((d57 * d22) + ((d54 - (d55 * d21)) - (d56 * d22))) / determinant;
        double d59 = d10 * d11;
        double d60 = d14 * d6;
        double d61 = d8 * d11;
        double d62 = d13 * d6;
        double d63 = (((d61 * d22) + ((d60 * d21) + (((d38 * d19) - (d37 * d19)) - (d59 * d21)))) - (d62 * d22)) / determinant;
        double d64 = ((d62 * d18) + ((((d59 * d17) + ((d37 * d15) - (d38 * d15))) - (d60 * d17)) - (d61 * d18))) / determinant;
        double d65 = ((d46 * d20) + ((d26 * d19) - (d25 * d19))) - (d47 * d20);
        double d66 = d12 * d15;
        double d67 = d11 * d16;
        double d68 = ((d67 * d22) + (d65 - (d66 * d22))) / determinant;
        double d69 = d7 * d15;
        double d70 = (d69 * d22) + (d55 * d20) + (((d32 * d19) - (d33 * d19)) - (d53 * d20));
        double d71 = d6 * d16;
        double d72 = d7 * d11;
        double d73 = d6 * d12;
        return new double[]{d29, (d35 - (d36 * d22)) / determinant, d43, d44, (d50 - (d51 * d22)) / determinant, d58, d63, d64, d68, (d70 - (d71 * d22)) / determinant, ((d22 * d73) + ((((d59 * d20) + ((d40 * d19) - (d39 * d19))) - (d60 * d20)) - (d72 * d22))) / determinant, (((d72 * d18) + ((d60 * d16) + (((d39 * d15) - (d40 * d15)) - (d59 * d16)))) - (d18 * d73)) / determinant, (((d66 * d21) + ((d51 * d20) + (((d27 * d19) - (d28 * d19)) - (d49 * d20)))) - (d67 * d21)) / determinant, ((d71 * d21) + ((((d56 * d20) + ((d36 * d19) - (d34 * d19))) - (d57 * d20)) - (d69 * d21))) / determinant, (((d72 * d21) + ((d20 * d62) + (((d41 * d19) - (d19 * d42)) - (d61 * d20)))) - (d21 * d73)) / determinant, ((d73 * d17) + ((((d61 * d16) + ((d42 * d15) - (d41 * d15))) - (d62 * d16)) - (d72 * d17))) / determinant};
    }

    private final boolean isZero(double d6) {
        return !Double.isNaN(d6) && Math.abs(d6) < EPSILON;
    }

    public static final void multiplyInto(@NotNull double[] out, @NotNull double[] a, @NotNull double[] b10) {
        Intrinsics.checkNotNullParameter(out, "out");
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        double d6 = a[0];
        double d7 = a[1];
        double d8 = a[2];
        double d10 = a[3];
        double d11 = a[4];
        double d12 = a[5];
        double d13 = a[6];
        double d14 = a[7];
        double d15 = a[8];
        double d16 = a[9];
        double d17 = a[10];
        double d18 = a[11];
        double d19 = a[12];
        double d20 = a[13];
        double d21 = a[14];
        double d22 = a[15];
        double d23 = b10[0];
        double d24 = b10[1];
        double d25 = b10[2];
        double d26 = b10[3];
        out[0] = (d26 * d19) + (d25 * d15) + (d24 * d11) + (d23 * d6);
        out[1] = (d26 * d20) + (d25 * d16) + (d24 * d12) + (d23 * d7);
        out[2] = (d26 * d21) + (d25 * d17) + (d24 * d13) + (d23 * d8);
        double d27 = d25 * d18;
        double d28 = d26 * d22;
        out[3] = d28 + d27 + (d24 * d14) + (d23 * d10);
        double d29 = b10[4];
        double d30 = b10[5];
        double d31 = b10[6];
        double d32 = b10[7];
        out[4] = (d32 * d19) + (d31 * d15) + (d30 * d11) + (d29 * d6);
        out[5] = (d32 * d20) + (d31 * d16) + (d30 * d12) + (d29 * d7);
        out[6] = (d32 * d21) + (d31 * d17) + (d30 * d13) + (d29 * d8);
        double d33 = d31 * d18;
        double d34 = d32 * d22;
        out[7] = d34 + d33 + (d30 * d14) + (d29 * d10);
        double d35 = b10[8];
        double d36 = b10[9];
        double d37 = b10[10];
        double d38 = b10[11];
        out[8] = (d38 * d19) + (d37 * d15) + (d36 * d11) + (d35 * d6);
        out[9] = (d38 * d20) + (d37 * d16) + (d36 * d12) + (d35 * d7);
        out[10] = (d38 * d21) + (d37 * d17) + (d36 * d13) + (d35 * d8);
        double d39 = d37 * d18;
        double d40 = d38 * d22;
        out[11] = d40 + d39 + (d36 * d14) + (d35 * d10);
        double d41 = b10[12];
        double d42 = b10[13];
        double d43 = b10[14];
        double d44 = b10[15];
        double d45 = d15 * d43;
        double d46 = d19 * d44;
        out[12] = d46 + d45 + (d11 * d42) + (d6 * d41);
        double d47 = d16 * d43;
        double d48 = d20 * d44;
        out[13] = d48 + d47 + (d12 * d42) + (d7 * d41);
        double d49 = d17 * d43;
        double d50 = d21 * d44;
        out[14] = d50 + d49 + (d13 * d42) + (d8 * d41);
        double d51 = d43 * d18;
        double d52 = d44 * d22;
        out[15] = d52 + d51 + (d42 * d14) + (d41 * d10);
    }

    public static final void multiplyVectorByMatrix(@NotNull double[] v5, @NotNull double[] m5, @NotNull double[] result) {
        Intrinsics.checkNotNullParameter(v5, "v");
        Intrinsics.checkNotNullParameter(m5, "m");
        Intrinsics.checkNotNullParameter(result, "result");
        double d6 = v5[0];
        double d7 = v5[1];
        double d8 = v5[2];
        double d10 = v5[3];
        result[0] = (m5[12] * d10) + (m5[8] * d8) + (m5[4] * d7) + (m5[0] * d6);
        result[1] = (m5[13] * d10) + (m5[9] * d8) + (m5[5] * d7) + (m5[1] * d6);
        result[2] = (m5[14] * d10) + (m5[10] * d8) + (m5[6] * d7) + (m5[2] * d6);
        result[3] = (d10 * m5[15]) + (d8 * m5[11]) + (d7 * m5[7]) + (d6 * m5[3]);
    }

    public static final void resetIdentityMatrix(@NotNull double[] matrix) {
        Intrinsics.checkNotNullParameter(matrix, "matrix");
        matrix[14] = 0.0d;
        matrix[13] = 0.0d;
        matrix[12] = 0.0d;
        matrix[11] = 0.0d;
        matrix[9] = 0.0d;
        matrix[8] = 0.0d;
        matrix[7] = 0.0d;
        matrix[6] = 0.0d;
        matrix[4] = 0.0d;
        matrix[3] = 0.0d;
        matrix[2] = 0.0d;
        matrix[1] = 0.0d;
        matrix[15] = 1.0d;
        matrix[10] = 1.0d;
        matrix[5] = 1.0d;
        matrix[0] = 1.0d;
    }

    public static final double roundTo3Places(double n6) {
        return Math.round(n6 * 1000.0d) * 0.001d;
    }

    @NotNull
    public static final double[] transpose(@NotNull double[] m5) {
        Intrinsics.checkNotNullParameter(m5, "m");
        return new double[]{m5[0], m5[4], m5[8], m5[12], m5[1], m5[5], m5[9], m5[13], m5[2], m5[6], m5[10], m5[14], m5[3], m5[7], m5[11], m5[15]};
    }

    @NotNull
    public static final double[] v3Combine(@NotNull double[] a, @NotNull double[] b10, double aScale, double bScale) {
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        return new double[]{(b10[0] * bScale) + (a[0] * aScale), (b10[1] * bScale) + (a[1] * aScale), (bScale * b10[2]) + (aScale * a[2])};
    }

    @NotNull
    public static final double[] v3Cross(@NotNull double[] a, @NotNull double[] b10) {
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        double d6 = a[1];
        double d7 = b10[2];
        double d8 = a[2];
        double d10 = b10[1];
        double d11 = b10[0];
        double d12 = a[0];
        return new double[]{(d6 * d7) - (d8 * d10), (d8 * d11) - (d7 * d12), (d12 * d10) - (d6 * d11)};
    }

    public static final double v3Dot(@NotNull double[] a, @NotNull double[] b10) {
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        return (a[2] * b10[2]) + (a[1] * b10[1]) + (a[0] * b10[0]);
    }

    public static final double v3Length(@NotNull double[] a) {
        Intrinsics.checkNotNullParameter(a, "a");
        double d6 = a[0];
        double d7 = a[1];
        double d8 = (d7 * d7) + (d6 * d6);
        double d10 = a[2];
        return Math.sqrt((d10 * d10) + d8);
    }

    @NotNull
    public static final double[] v3Normalize(@NotNull double[] vector, double norm) {
        Intrinsics.checkNotNullParameter(vector, "vector");
        double d6 = 1;
        if (INSTANCE.isZero(norm)) {
            norm = v3Length(vector);
        }
        double d7 = d6 / norm;
        return new double[]{vector[0] * d7, vector[1] * d7, vector[2] * d7};
    }

    public final void applyScaleZ(@NotNull double[] m5, double factor) {
        Intrinsics.checkNotNullParameter(m5, "m");
        m5[10] = factor;
    }
}
