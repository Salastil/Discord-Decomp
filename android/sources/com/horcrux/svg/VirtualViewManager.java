package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Path;
import android.util.SparseArray;
import android.view.ViewParent;
import com.discord.jank_stats.JankStatsAggregatorKt;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.DisplayMetricsHolder;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.MatrixMathHelper;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.TransformHelper;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.annotations.ReactProp;
import com.horcrux.svg.VirtualView;
import java.util.Locale;

/* loaded from: classes3.dex */
class VirtualViewManager<V extends VirtualView> extends ViewGroupManager<VirtualView> {
    private static final float CAMERA_DISTANCE_NORMALIZATION_MULTIPLIER = 5.0f;
    private static final int PERSPECTIVE_ARRAY_INVERTED_CAMERA_DISTANCE_INDEX = 2;
    protected final String mClassName;
    protected ViewManagerDelegate<V> mDelegate;
    protected final SVGClass svgClass;
    private static final MatrixMathHelper.MatrixDecompositionContext sMatrixDecompositionContext = new MatrixMathHelper.MatrixDecompositionContext();
    private static final double[] sTransformDecompositionArray = new double[16];
    private static final SparseArray<RenderableView> mTagToRenderableView = new SparseArray<>();
    private static final SparseArray<Runnable> mTagToRunnable = new SparseArray<>();

    public enum SVGClass {
        RNSVGGroup,
        RNSVGPath,
        RNSVGText,
        RNSVGTSpan,
        RNSVGTextPath,
        RNSVGImage,
        RNSVGCircle,
        RNSVGEllipse,
        RNSVGLine,
        RNSVGRect,
        RNSVGClipPath,
        RNSVGDefs,
        RNSVGUse,
        RNSVGSymbol,
        RNSVGLinearGradient,
        RNSVGRadialGradient,
        RNSVGPattern,
        RNSVGMask,
        RNSVGFilter,
        RNSVGFeBlend,
        RNSVGFeColorMatrix,
        RNSVGFeComposite,
        RNSVGFeFlood,
        RNSVGFeGaussianBlur,
        RNSVGFeMerge,
        RNSVGFeOffset,
        RNSVGMarker,
        RNSVGForeignObject
    }

    public VirtualViewManager(SVGClass sVGClass) {
        this.svgClass = sVGClass;
        this.mClassName = sVGClass.toString();
    }

    public static RenderableView getRenderableViewByTag(int i5) {
        return mTagToRenderableView.get(i5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void invalidateSvgView(V v5) {
        SvgView svgView = v5.getSvgView();
        if (svgView != null) {
            svgView.invalidate();
        }
        if (v5 instanceof f2) {
            f2 f2Var = (f2) v5;
            ViewParent parent = f2Var.getParent();
            while (parent instanceof f2) {
                f2Var = (f2) parent;
                parent = f2Var.getParent();
            }
            f2Var.clearChildCache();
        }
    }

    public static void runWhenViewIsAvailable(int i5, Runnable runnable) {
        mTagToRunnable.put(i5, runnable);
    }

    private static float sanitizeFloatPropertyValue(float f2) {
        if (f2 >= -3.4028235E38f && f2 <= Float.MAX_VALUE) {
            return f2;
        }
        if (f2 < -3.4028235E38f || f2 == Float.NEGATIVE_INFINITY) {
            return -3.4028235E38f;
        }
        if (f2 > Float.MAX_VALUE || f2 == Float.POSITIVE_INFINITY) {
            return Float.MAX_VALUE;
        }
        if (Float.isNaN(f2)) {
            return 0.0f;
        }
        throw new IllegalStateException("Invalid float property value: " + f2);
    }

    public static void setRenderableView(int i5, RenderableView renderableView) {
        mTagToRenderableView.put(i5, renderableView);
        SparseArray<Runnable> sparseArray = mTagToRunnable;
        Runnable runnable = sparseArray.get(i5);
        if (runnable != null) {
            runnable.run();
            sparseArray.delete(i5);
        }
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public ViewManagerDelegate getDelegate() {
        return this.mDelegate;
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    public String getName() {
        return this.mClassName;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager, com.facebook.react.uimanager.ViewManager
    public Class<? extends LayoutShadowNode> getShadowNodeClass() {
        return j2.class;
    }

    @ReactProp(name = "clipPath")
    public void setClipPath(V v5, String str) {
        v5.setClipPath(str);
    }

    @ReactProp(name = "clipRule")
    public void setClipRule(V v5, int i5) {
        v5.setClipRule(i5);
    }

    @ReactProp(name = ViewProps.DISPLAY)
    public void setDisplay(V v5, String str) {
        v5.setDisplay(str);
    }

    @ReactProp(name = "markerEnd")
    public void setMarkerEnd(V v5, String str) {
        v5.setMarkerEnd(str);
    }

    @ReactProp(name = "markerMid")
    public void setMarkerMid(V v5, String str) {
        v5.setMarkerMid(str);
    }

    @ReactProp(name = "markerStart")
    public void setMarkerStart(V v5, String str) {
        v5.setMarkerStart(str);
    }

    @ReactProp(name = "mask")
    public void setMask(V v5, String str) {
        v5.setMask(str);
    }

    @ReactProp(name = "matrix")
    public void setMatrix(V v5, Dynamic dynamic) {
        v5.setMatrix(dynamic);
    }

    @ReactProp(name = StackTraceHelper.NAME_KEY)
    public void setName(V v5, String str) {
        v5.setName(str);
    }

    @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
    public void setOpacity(V v5, float f2) {
        v5.setOpacity(f2);
    }

    @ReactProp(name = ViewProps.POINTER_EVENTS)
    public void setPointerEvents(V v5, String str) {
        if (str == null) {
            v5.setPointerEvents(PointerEvents.AUTO);
        } else {
            v5.setPointerEvents(PointerEvents.valueOf(str.toUpperCase(Locale.US).replace("-", "_")));
        }
    }

    @ReactProp(name = "responsible")
    public void setResponsible(V v5, boolean z5) {
        v5.setResponsible(z5);
    }

    public void setTransformProperty(VirtualView virtualView, ReadableArray readableArray) {
        if (readableArray == null) {
            virtualView.setTranslationX(PixelUtil.toPixelFromDIP(0.0f));
            virtualView.setTranslationY(PixelUtil.toPixelFromDIP(0.0f));
            virtualView.setRotation(0.0f);
            virtualView.setRotationX(0.0f);
            virtualView.setRotationY(0.0f);
            virtualView.setScaleX(1.0f);
            virtualView.setScaleY(1.0f);
            virtualView.setCameraDistance(0.0f);
            return;
        }
        MatrixMathHelper.MatrixDecompositionContext matrixDecompositionContext = sMatrixDecompositionContext;
        matrixDecompositionContext.reset();
        double[] dArr = sTransformDecompositionArray;
        TransformHelper.processTransform(readableArray, dArr, virtualView.getWidth(), virtualView.getHeight(), null, false);
        MatrixMathHelper.decomposeMatrix(dArr, matrixDecompositionContext);
        virtualView.setTranslationX(PixelUtil.toPixelFromDIP(sanitizeFloatPropertyValue((float) matrixDecompositionContext.translation[0])));
        virtualView.setTranslationY(PixelUtil.toPixelFromDIP(sanitizeFloatPropertyValue((float) matrixDecompositionContext.translation[1])));
        virtualView.setRotation(sanitizeFloatPropertyValue((float) matrixDecompositionContext.rotationDegrees[2]));
        virtualView.setRotationX(sanitizeFloatPropertyValue((float) matrixDecompositionContext.rotationDegrees[0]));
        virtualView.setRotationY(sanitizeFloatPropertyValue((float) matrixDecompositionContext.rotationDegrees[1]));
        virtualView.setScaleX(sanitizeFloatPropertyValue((float) matrixDecompositionContext.scale[0]));
        virtualView.setScaleY(sanitizeFloatPropertyValue((float) matrixDecompositionContext.scale[1]));
        double[] dArr2 = matrixDecompositionContext.perspective;
        if (dArr2.length > 2) {
            float f2 = (float) dArr2[2];
            if (f2 == 0.0f) {
                f2 = 7.8125E-4f;
            }
            float f10 = (-1.0f) / f2;
            float f11 = DisplayMetricsHolder.getScreenDisplayMetrics().density;
            virtualView.setCameraDistance(f11 * f11 * f10 * 5.0f);
        }
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(ThemedReactContext themedReactContext, VirtualView virtualView) {
        super.addEventEmitters(themedReactContext, (ThemedReactContext) virtualView);
        virtualView.setOnHierarchyChangeListener(new i2(this));
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager, com.facebook.react.uimanager.ViewManager
    public LayoutShadowNode createShadowNodeInstance() {
        return new j2();
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public VirtualView createViewInstance(ThemedReactContext themedReactContext) {
        switch (this.svgClass) {
            case RNSVGGroup:
                return new a0(themedReactContext);
            case RNSVGPath:
                i0 i0Var = new i0(themedReactContext);
                d9.a.f7434d = i0Var.mScale;
                i0Var.f6369d = new Path();
                return i0Var;
            case RNSVGText:
                return new f2(themedReactContext);
            case RNSVGTSpan:
                return new a2(themedReactContext);
            case RNSVGTextPath:
                return new b2(themedReactContext);
            case RNSVGImage:
                return new c0(themedReactContext);
            case RNSVGCircle:
                return new b(themedReactContext);
            case RNSVGEllipse:
                return new g(themedReactContext);
            case RNSVGLine:
                return new d0(themedReactContext);
            case RNSVGRect:
                return new o0(themedReactContext);
            case RNSVGClipPath:
                return new c(themedReactContext);
            case RNSVGDefs:
                return new f(themedReactContext);
            case RNSVGUse:
                return new g2(themedReactContext);
            case RNSVGSymbol:
                return new z1(themedReactContext);
            case RNSVGLinearGradient:
                e0 e0Var = new e0(themedReactContext);
                e0Var.f6339x = 1;
                e0Var.f6340y = null;
                return e0Var;
            case RNSVGRadialGradient:
                n0 n0Var = new n0(themedReactContext);
                n0Var.E = 1;
                n0Var.F = null;
                return n0Var;
            case RNSVGPattern:
                j0 j0Var = new j0(themedReactContext);
                j0Var.O = null;
                return j0Var;
            case RNSVGMask:
                g0 g0Var = new g0(themedReactContext);
                g0Var.G = 1;
                g0Var.H = 1;
                return g0Var;
            case RNSVGFilter:
                return new v(themedReactContext);
            case RNSVGFeBlend:
                h hVar = new h(themedReactContext);
                r0 r0Var = new r0(0.0d);
                FilterRegion filterRegion = hVar.f6405e;
                filterRegion.mX = r0Var;
                filterRegion.mY = new r0(0.0d);
                filterRegion.mW = new r0("100%");
                filterRegion.mH = new r0("100%");
                return hVar;
            case RNSVGFeColorMatrix:
                return new i(themedReactContext);
            case RNSVGFeComposite:
                return new j(themedReactContext);
            case RNSVGFeFlood:
                k kVar = new k(themedReactContext);
                kVar.f6380v = 1.0f;
                return kVar;
            case RNSVGFeGaussianBlur:
                return new l(themedReactContext);
            case RNSVGFeMerge:
                return new m(themedReactContext);
            case RNSVGFeOffset:
                return new n(themedReactContext);
            case RNSVGMarker:
                f0 f0Var = new f0(themedReactContext);
                f0Var.O = new Matrix();
                return f0Var;
            case RNSVGForeignObject:
                y yVar = new y(themedReactContext);
                yVar.G = new Canvas(Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_8888));
                return yVar;
            default:
                throw new IllegalStateException("Unexpected type " + this.svgClass.toString());
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onAfterUpdateTransaction(VirtualView virtualView) {
        super.onAfterUpdateTransaction((VirtualViewManager<V>) virtualView);
        invalidateSvgView(virtualView);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(VirtualView virtualView) {
        super.onDropViewInstance((VirtualViewManager<V>) virtualView);
        mTagToRenderableView.remove(virtualView.getId());
    }

    public void setMatrix(V v5, ReadableArray readableArray) {
        v5.setMatrix(readableArray);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager
    public void setTransform(VirtualView virtualView, ReadableArray readableArray) {
        setTransformProperty(virtualView, readableArray);
        Matrix matrix = virtualView.getMatrix();
        virtualView.mMatrix = matrix;
        virtualView.mInvertible = matrix.invert(virtualView.mInvMatrix);
    }

    @ReactProp(name = ViewProps.TRANSFORM)
    public void setTransform(V v5, Dynamic dynamic) {
        if (dynamic.getType() != ReadableType.Array) {
            return;
        }
        setTransform((VirtualView) v5, dynamic.asArray());
    }
}
