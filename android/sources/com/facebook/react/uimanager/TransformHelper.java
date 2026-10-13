package com.facebook.react.uimanager;

import com.facebook.react.bridge.NativeArray;
import com.facebook.react.bridge.ReactNativeJNISoLoader;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.common.ReactConstants;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.b0;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0013\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0002J\u0018\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0006H\u0007J:\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00062\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00132\b\u0010\u0015\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u0016\u001a\u00020\u0017H\u0007J2\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00062\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00132\b\u0010\u0015\u001a\u0004\u0018\u00010\u0010H\u0007J\u0018\u0010\u0018\u001a\u00020\b2\u0006\u0010\u0019\u001a\u00020\f2\u0006\u0010\u001a\u001a\u00020\bH\u0002J$\u0010\u001b\u001a\u0004\u0018\u00010\u00062\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00132\b\u0010\u0015\u001a\u0004\u0018\u00010\u0010H\u0002J3\u0010\u001c\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u001d2\u0006\u0010\u0011\u001a\u00020\u00062\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00132\b\u0010\u0015\u001a\u0004\u0018\u00010\u001dH\u0083 R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001e"}, d2 = {"Lcom/facebook/react/uimanager/TransformHelper;", "", "<init>", "()V", "helperMatrix", "Ljava/lang/ThreadLocal;", "", "convertToRadians", "", "transformMap", "Lcom/facebook/react/bridge/ReadableMap;", "key", "", "processTransform", "", "transforms", "Lcom/facebook/react/bridge/ReadableArray;", "result", "viewWidth", "", "viewHeight", ViewProps.TRANSFORM_ORIGIN, "allowPercentageResolution", "", "parseTranslateValue", "stringValue", "dimension", "getTranslateForTransformOrigin", "nativeProcessTransform", "Lcom/facebook/react/bridge/NativeArray;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class TransformHelper {

    @NotNull
    public static final TransformHelper INSTANCE = new TransformHelper();

    @NotNull
    private static final ThreadLocal<double[]> helperMatrix;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[ReadableType.values().length];
            try {
                iArr[ReadableType.Number.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[ReadableType.String.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    static {
        ReactNativeJNISoLoader.staticInit();
        helperMatrix = new ThreadLocal<double[]>() { // from class: com.facebook.react.uimanager.TransformHelper$helperMatrix$1
            @Override // java.lang.ThreadLocal
            public double[] initialValue() {
                return new double[16];
            }
        };
    }

    private TransformHelper() {
    }

    private final double convertToRadians(ReadableMap transformMap, String key) {
        double d6;
        boolean z5 = true;
        if (transformMap.getType(key) == ReadableType.String) {
            String string = transformMap.getString(key);
            Intrinsics.checkNotNull(string);
            if (x.h(string, "rad", false)) {
                string = b0.y(3, string);
            } else if (x.h(string, "deg", false)) {
                string = b0.y(3, string);
                z5 = false;
            }
            d6 = Double.parseDouble(string);
        } else {
            d6 = transformMap.getDouble(key);
        }
        return z5 ? d6 : MatrixMathHelper.degreesToRadians(d6);
    }

    private final double[] getTranslateForTransformOrigin(float viewWidth, float viewHeight, ReadableArray transformOrigin) {
        boolean z5;
        int i5;
        int i6;
        if (transformOrigin == null) {
            return null;
        }
        if (viewHeight == 0.0f && viewWidth == 0.0f) {
            return null;
        }
        double d6 = viewWidth / 2.0d;
        double d7 = viewHeight / 2.0d;
        double[] dArr = new double[3];
        boolean z6 = false;
        dArr[0] = d6;
        int i10 = 1;
        dArr[1] = d7;
        dArr[2] = 0.0d;
        int min = Math.min(transformOrigin.size(), 3);
        int i11 = 0;
        while (i11 < min) {
            int i12 = WhenMappings.$EnumSwitchMapping$0[transformOrigin.getType(i11).ordinal()];
            if (i12 != i10) {
                if (i12 == 2) {
                    String string = transformOrigin.getString(i11);
                    Intrinsics.checkNotNull(string);
                    if (x.h(string, "%", z6)) {
                        z5 = z6;
                        i5 = i10;
                        i6 = min;
                        dArr[i11] = ((i11 == 0 ? viewWidth : viewHeight) * Double.parseDouble(b0.y(i10, string))) / 100.0d;
                    }
                }
                z5 = z6;
                i5 = i10;
                i6 = min;
            } else {
                z5 = z6;
                i5 = i10;
                i6 = min;
                dArr[i11] = transformOrigin.getDouble(i11);
            }
            i11++;
            z6 = z5;
            i10 = i5;
            min = i6;
        }
        boolean z7 = z6;
        int i13 = i10;
        double d8 = (-d6) + dArr[z7 ? 1 : 0];
        double d10 = (-d7) + dArr[i13];
        double d11 = dArr[2];
        double[] dArr2 = new double[3];
        dArr2[z7 ? 1 : 0] = d8;
        dArr2[i13] = d10;
        dArr2[2] = d11;
        return dArr2;
    }

    private static final native void nativeProcessTransform(NativeArray transforms, double[] result, float viewWidth, float viewHeight, NativeArray transformOrigin);

    private final double parseTranslateValue(String stringValue, double dimension) {
        try {
            return x.h(stringValue, "%", false) ? (Double.parseDouble(b0.y(1, stringValue)) * dimension) / 100.0d : Double.parseDouble(stringValue);
        } catch (NumberFormatException unused) {
            p8.a.v(ReactConstants.TAG, "Invalid translate value: " + stringValue);
            return 0.0d;
        }
    }

    @d
    public static final void processTransform(@NotNull ReadableArray transforms, @NotNull double[] result) {
        Intrinsics.checkNotNullParameter(transforms, "transforms");
        Intrinsics.checkNotNullParameter(result, "result");
        processTransform(transforms, result, 0.0f, 0.0f, null);
    }

    @d
    public static final void processTransform(@NotNull ReadableArray transforms, @NotNull double[] result, float viewWidth, float viewHeight, ReadableArray transformOrigin, boolean allowPercentageResolution) {
        Intrinsics.checkNotNullParameter(transforms, "transforms");
        Intrinsics.checkNotNullParameter(result, "result");
        processTransform(transforms, result, viewWidth, viewHeight, transformOrigin);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x01dc, code lost:
    
        if (r11.equals("rotate") == false) goto L61;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void processTransform(@NotNull ReadableArray transforms, @NotNull double[] result, float viewWidth, float viewHeight, ReadableArray transformOrigin) {
        int i5;
        int i6;
        int i10;
        char c6;
        double d6;
        double d7;
        double d8;
        double d10;
        double d11;
        double d12;
        Intrinsics.checkNotNullParameter(transforms, "transforms");
        Intrinsics.checkNotNullParameter(result, "result");
        if (transforms instanceof NativeArray) {
            if (transformOrigin == 0 ? true : transformOrigin instanceof NativeArray) {
                nativeProcessTransform((NativeArray) transforms, result, viewWidth, viewHeight, (NativeArray) transformOrigin);
                return;
            }
        }
        double[] dArr = helperMatrix.get();
        Intrinsics.checkNotNull(dArr);
        double[] dArr2 = dArr;
        MatrixMathHelper.resetIdentityMatrix(result);
        double[] translateForTransformOrigin = INSTANCE.getTranslateForTransformOrigin(viewWidth, viewHeight, transformOrigin);
        int i11 = 0;
        if (translateForTransformOrigin != null) {
            MatrixMathHelper.resetIdentityMatrix(dArr2);
            MatrixMathHelper.applyTranslate3D(dArr2, translateForTransformOrigin[0], translateForTransformOrigin[1], translateForTransformOrigin[2]);
            MatrixMathHelper.multiplyInto(result, result, dArr2);
        }
        char c8 = 16;
        if (transforms.size() == 16 && transforms.getType(0) == ReadableType.Number) {
            MatrixMathHelper.resetIdentityMatrix(dArr2);
            int size = transforms.size();
            for (int i12 = 0; i12 < size; i12++) {
                dArr2[i12] = transforms.getDouble(i12);
            }
            MatrixMathHelper.multiplyInto(result, result, dArr2);
        } else {
            int size2 = transforms.size();
            int i13 = 0;
            while (i13 < size2) {
                ReadableMap map = transforms.getMap(i13);
                Intrinsics.checkNotNull(map);
                String nextKey = map.keySetIterator().nextKey();
                MatrixMathHelper.resetIdentityMatrix(dArr2);
                switch (nextKey.hashCode()) {
                    case -1721943862:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        if (nextKey.equals(ViewProps.TRANSLATE_X)) {
                            if (map.getType(nextKey) == ReadableType.String) {
                                TransformHelper transformHelper = INSTANCE;
                                String string = map.getString(nextKey);
                                Intrinsics.checkNotNull(string);
                                d6 = transformHelper.parseTranslateValue(string, viewWidth);
                            } else {
                                d6 = map.getDouble(nextKey);
                            }
                            MatrixMathHelper.applyTranslate2D(dArr2, d6, 0.0d);
                            break;
                        }
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case -1721943861:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        if (nextKey.equals(ViewProps.TRANSLATE_Y)) {
                            if (map.getType(nextKey) == ReadableType.String) {
                                TransformHelper transformHelper2 = INSTANCE;
                                String string2 = map.getString(nextKey);
                                Intrinsics.checkNotNull(string2);
                                d7 = transformHelper2.parseTranslateValue(string2, viewHeight);
                            } else {
                                d7 = map.getDouble(nextKey);
                            }
                            MatrixMathHelper.applyTranslate2D(dArr2, 0.0d, d7);
                            break;
                        }
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case -1081239615:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals("matrix")) {
                            ReadableArray array = map.getArray(nextKey);
                            Intrinsics.checkNotNull(array);
                            c6 = 16;
                            for (int i14 = i6; i14 < 16; i14++) {
                                dArr2[i14] = array.getDouble(i14);
                            }
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case -925180581:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        break;
                    case -908189618:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals(ViewProps.SCALE_X)) {
                            MatrixMathHelper.applyScaleX(dArr2, map.getDouble(nextKey));
                            c6 = 16;
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case -908189617:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals(ViewProps.SCALE_Y)) {
                            MatrixMathHelper.applyScaleY(dArr2, map.getDouble(nextKey));
                            c6 = 16;
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 109250890:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals("scale")) {
                            double d13 = map.getDouble(nextKey);
                            MatrixMathHelper.applyScaleX(dArr2, d13);
                            MatrixMathHelper.applyScaleY(dArr2, d13);
                            c6 = 16;
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 109493390:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals("skewX")) {
                            MatrixMathHelper.applySkewX(dArr2, INSTANCE.convertToRadians(map, nextKey));
                            c6 = 16;
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 109493391:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals("skewY")) {
                            MatrixMathHelper.applySkewY(dArr2, INSTANCE.convertToRadians(map, nextKey));
                            c6 = 16;
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 207960636:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        if (nextKey.equals("perspective")) {
                            MatrixMathHelper.applyPerspective(dArr2, map.getDouble(nextKey));
                            c6 = 16;
                            break;
                        }
                        c6 = 16;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 1052832078:
                        if (nextKey.equals("translate")) {
                            ReadableArray array2 = map.getArray(nextKey);
                            Intrinsics.checkNotNull(array2);
                            ReadableType type = array2.getType(i11);
                            ReadableType readableType = ReadableType.String;
                            if (type == readableType) {
                                TransformHelper transformHelper3 = INSTANCE;
                                String string3 = array2.getString(i11);
                                Intrinsics.checkNotNull(string3);
                                d8 = transformHelper3.parseTranslateValue(string3, viewWidth);
                            } else {
                                d8 = array2.getDouble(i11);
                            }
                            if (array2.getType(1) == readableType) {
                                TransformHelper transformHelper4 = INSTANCE;
                                String string4 = array2.getString(1);
                                Intrinsics.checkNotNull(string4);
                                i6 = i11;
                                d10 = transformHelper4.parseTranslateValue(string4, viewHeight);
                            } else {
                                i6 = i11;
                                d10 = array2.getDouble(1);
                            }
                            if (array2.size() > 2) {
                                double d14 = d10;
                                d12 = array2.getDouble(2);
                                d11 = d14;
                            } else {
                                d11 = d10;
                                d12 = 0.0d;
                            }
                            i10 = i13;
                            double d15 = d8;
                            i5 = size2;
                            MatrixMathHelper.applyTranslate3D(dArr2, d15, d11, d12);
                            c6 = 16;
                            break;
                        }
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 1384173149:
                        if (nextKey.equals("rotateX")) {
                            MatrixMathHelper.applyRotateX(dArr2, INSTANCE.convertToRadians(map, nextKey));
                            i5 = size2;
                            i6 = i11;
                            i10 = i13;
                            c6 = c8;
                            break;
                        }
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 1384173150:
                        if (nextKey.equals("rotateY")) {
                            MatrixMathHelper.applyRotateY(dArr2, INSTANCE.convertToRadians(map, nextKey));
                            i5 = size2;
                            i6 = i11;
                            i10 = i13;
                            c6 = c8;
                            break;
                        }
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    case 1384173151:
                        if (nextKey.equals("rotateZ")) {
                            i5 = size2;
                            i6 = i11;
                            i10 = i13;
                            MatrixMathHelper.applyRotateZ(dArr2, INSTANCE.convertToRadians(map, nextKey));
                            c6 = 16;
                            break;
                        }
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                    default:
                        i5 = size2;
                        i6 = i11;
                        i10 = i13;
                        c6 = c8;
                        p8.a.v(ReactConstants.TAG, "Unsupported transform type: ".concat(nextKey));
                        break;
                }
                MatrixMathHelper.multiplyInto(result, result, dArr2);
                int i15 = i10 + 1;
                size2 = i5;
                c8 = c6;
                i11 = i6;
                i13 = i15;
            }
        }
        int i16 = i11;
        if (translateForTransformOrigin != null) {
            MatrixMathHelper.resetIdentityMatrix(dArr2);
            MatrixMathHelper.applyTranslate3D(dArr2, -translateForTransformOrigin[i16], -translateForTransformOrigin[1], -translateForTransformOrigin[2]);
            MatrixMathHelper.multiplyInto(result, result, dArr2);
        }
    }
}
