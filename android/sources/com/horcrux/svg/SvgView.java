package com.horcrux.svg;

import android.annotation.SuppressLint;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.util.Base64;
import android.view.View;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityNodeInfo;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.DisplayMetricsHolder;
import com.facebook.react.uimanager.ReactCompoundView;
import com.facebook.react.uimanager.ReactCompoundViewGroup;
import com.facebook.react.views.view.ReactViewGroup;
import java.io.ByteArrayOutputStream;
import java.util.HashMap;
import java.util.Map;

@SuppressLint({"ViewConstructor"})
/* loaded from: classes3.dex */
public class SvgView extends ReactViewGroup implements ReactCompoundView, ReactCompoundViewGroup {
    private String mAlign;
    private Bitmap mBitmap;
    private Canvas mCanvas;
    private Bitmap mCurrentBitmap;
    int mCurrentColor;
    private final Map<String, a> mDefinedBrushes;
    private final Map<String, VirtualView> mDefinedClipPaths;
    private final Map<String, VirtualView> mDefinedFilters;
    private final Map<String, VirtualView> mDefinedMarkers;
    private final Map<String, VirtualView> mDefinedMasks;
    private final Map<String, VirtualView> mDefinedTemplates;
    final Matrix mInvViewBoxMatrix;
    private boolean mInvertible;
    private int mMeetOrSlice;
    private float mMinX;
    private float mMinY;
    private final Paint mPaint;
    private boolean mRemovalTransitionStarted;
    private boolean mRendered;
    private boolean mResponsible;
    private final float mScale;
    private float mVbHeight;
    private float mVbWidth;
    private r0 mbbHeight;
    private r0 mbbWidth;
    private Runnable toDataUrlTask;

    public enum Events {
        EVENT_DATA_URL("onDataURL");

        private final String mName;

        Events(String str) {
            this.mName = str;
        }

        @Override // java.lang.Enum
        public String toString() {
            return this.mName;
        }
    }

    public SvgView(ReactContext reactContext) {
        super(reactContext);
        this.toDataUrlTask = null;
        this.mResponsible = false;
        this.mDefinedClipPaths = new HashMap();
        this.mDefinedTemplates = new HashMap();
        this.mDefinedMarkers = new HashMap();
        this.mDefinedMasks = new HashMap();
        this.mDefinedFilters = new HashMap();
        this.mDefinedBrushes = new HashMap();
        Paint paint = new Paint();
        this.mPaint = paint;
        this.mInvViewBoxMatrix = new Matrix();
        this.mInvertible = true;
        this.mRendered = false;
        this.mCurrentColor = -16777216;
        this.mScale = DisplayMetricsHolder.getScreenDisplayMetrics().density;
        paint.setFlags(385);
        paint.setTypeface(Typeface.DEFAULT);
        setWillNotDraw(false);
    }

    private void clearChildCache() {
        if (this.mRendered) {
            this.mRendered = false;
            for (int i5 = 0; i5 < getChildCount(); i5++) {
                View childAt = getChildAt(i5);
                if (childAt instanceof VirtualView) {
                    ((VirtualView) childAt).clearChildCache();
                }
            }
        }
    }

    private Bitmap drawOutput() {
        this.mRendered = true;
        float width = getWidth();
        float height = getHeight();
        if (Float.isNaN(width) || Float.isNaN(height) || width < 1.0f || height < 1.0f) {
            return null;
        }
        if (Math.log10(height) + Math.log10(width) > 42.0d) {
            return null;
        }
        Bitmap createBitmap = Bitmap.createBitmap((int) width, (int) height, Bitmap.Config.ARGB_8888);
        this.mCurrentBitmap = createBitmap;
        drawChildren(new Canvas(createBitmap));
        return createBitmap;
    }

    private int hitTest(float f2, float f10) {
        if (!this.mResponsible || !this.mInvertible) {
            return getId();
        }
        float[] fArr = {f2, f10};
        this.mInvViewBoxMatrix.mapPoints(fArr);
        int i5 = -1;
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            View childAt = getChildAt(childCount);
            if (childAt instanceof VirtualView) {
                i5 = ((VirtualView) childAt).hitTest(fArr);
            } else if (childAt instanceof SvgView) {
                i5 = ((SvgView) childAt).hitTest(f2, f10);
            }
            if (i5 != -1) {
                break;
            }
        }
        return i5 == -1 ? getId() : i5;
    }

    public void defineBrush(a aVar, String str) {
        this.mDefinedBrushes.put(str, aVar);
    }

    public void defineClipPath(VirtualView virtualView, String str) {
        this.mDefinedClipPaths.put(str, virtualView);
    }

    public void defineFilter(VirtualView virtualView, String str) {
        this.mDefinedFilters.put(str, virtualView);
    }

    public void defineMarker(VirtualView virtualView, String str) {
        this.mDefinedMarkers.put(str, virtualView);
    }

    public void defineMask(VirtualView virtualView, String str) {
        this.mDefinedMasks.put(str, virtualView);
    }

    public void defineTemplate(VirtualView virtualView, String str) {
        this.mDefinedTemplates.put(str, virtualView);
    }

    public synchronized void drawChildren(Canvas canvas) {
        try {
            this.mRendered = true;
            this.mCanvas = canvas;
            Matrix matrix = new Matrix();
            if (this.mAlign != null) {
                RectF viewBox = getViewBox();
                float width = canvas.getWidth();
                float height = canvas.getHeight();
                boolean z5 = getParent() instanceof VirtualView;
                if (z5) {
                    width = (float) e4.f.r(this.mbbWidth, width, this.mScale, 12.0d);
                    height = (float) e4.f.r(this.mbbHeight, height, this.mScale, 12.0d);
                }
                RectF rectF = new RectF(0.0f, 0.0f, width, height);
                if (z5) {
                    canvas.clipRect(rectF);
                }
                matrix = io.sentry.config.a.t(viewBox, rectF, this.mAlign, this.mMeetOrSlice);
                this.mInvertible = matrix.invert(this.mInvViewBoxMatrix);
                canvas.concat(matrix);
            }
            for (int i5 = 0; i5 < getChildCount(); i5++) {
                View childAt = getChildAt(i5);
                if (childAt instanceof VirtualView) {
                    ((VirtualView) childAt).saveDefinition();
                }
            }
            for (int i6 = 0; i6 < getChildCount(); i6++) {
                View childAt2 = getChildAt(i6);
                if (childAt2 instanceof VirtualView) {
                    VirtualView virtualView = (VirtualView) childAt2;
                    int saveAndSetupCanvas = virtualView.saveAndSetupCanvas(canvas, matrix);
                    virtualView.render(canvas, this.mPaint, 1.0f);
                    virtualView.restoreCanvas(canvas, saveAndSetupCanvas);
                    if (virtualView.isResponsible() && !this.mResponsible) {
                        this.mResponsible = true;
                    }
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public void enableTouchEvents() {
        if (this.mResponsible) {
            return;
        }
        this.mResponsible = true;
    }

    public Rect getCanvasBounds() {
        return this.mCanvas.getClipBounds();
    }

    public float getCanvasHeight() {
        return this.mCanvas.getHeight();
    }

    public float getCanvasWidth() {
        return this.mCanvas.getWidth();
    }

    public Matrix getCtm() {
        return this.mCanvas.getMatrix();
    }

    public Bitmap getCurrentBitmap() {
        return this.mCurrentBitmap;
    }

    public a getDefinedBrush(String str) {
        return this.mDefinedBrushes.get(str);
    }

    public VirtualView getDefinedClipPath(String str) {
        return this.mDefinedClipPaths.get(str);
    }

    public VirtualView getDefinedFilter(String str) {
        return this.mDefinedFilters.get(str);
    }

    public VirtualView getDefinedMarker(String str) {
        return this.mDefinedMarkers.get(str);
    }

    public VirtualView getDefinedMask(String str) {
        return this.mDefinedMasks.get(str);
    }

    public VirtualView getDefinedTemplate(String str) {
        return this.mDefinedTemplates.get(str);
    }

    public RectF getViewBox() {
        float f2 = this.mMinX;
        float f10 = this.mScale;
        float f11 = this.mMinY;
        return new RectF(f2 * f10, f11 * f10, (f2 + this.mVbWidth) * f10, (f11 + this.mVbHeight) * f10);
    }

    @Override // com.facebook.react.uimanager.ReactCompoundViewGroup
    public boolean interceptsTouchEvent(float f2, float f10) {
        return true;
    }

    @Override // android.view.View
    public void invalidate() {
        super.invalidate();
        ViewParent parent = getParent();
        if (parent instanceof VirtualView) {
            if (this.mRendered) {
                this.mRendered = false;
                ((VirtualView) parent).getSvgView().invalidate();
                return;
            }
            return;
        }
        if (this.mRemovalTransitionStarted) {
            return;
        }
        Bitmap bitmap = this.mBitmap;
        if (bitmap != null) {
            bitmap.recycle();
        }
        this.mBitmap = null;
    }

    public boolean isResponsible() {
        return this.mResponsible;
    }

    public boolean notRendered() {
        return !this.mRendered;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Bitmap bitmap = this.mBitmap;
        if (bitmap != null) {
            bitmap.recycle();
        }
        this.mBitmap = null;
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        if (getParent() instanceof VirtualView) {
            return;
        }
        super.onDraw(canvas);
        if (this.mBitmap == null) {
            this.mBitmap = drawOutput();
        }
        if (this.mBitmap != null) {
            this.mPaint.reset();
            this.mPaint.setFlags(387);
            this.mPaint.setTypeface(Typeface.DEFAULT);
            canvas.drawBitmap(this.mBitmap, 0.0f, 0.0f, this.mPaint);
            Runnable runnable = this.toDataUrlTask;
            if (runnable != null) {
                runnable.run();
                this.toDataUrlTask = null;
            }
        }
    }

    @Override // android.view.View
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setVisibleToUser(getGlobalVisibleRect(new Rect()));
        accessibilityNodeInfo.setClassName(getClass().getCanonicalName());
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    public void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        invalidate();
    }

    @Override // com.facebook.react.uimanager.ReactCompoundView
    public int reactTagForTouch(float f2, float f10) {
        return hitTest(f2, f10);
    }

    public void setAlign(String str) {
        this.mAlign = str;
        invalidate();
        clearChildCache();
    }

    public void setBbHeight(Dynamic dynamic) {
        this.mbbHeight = r0.b(dynamic);
        invalidate();
        clearChildCache();
    }

    public void setBbWidth(Dynamic dynamic) {
        this.mbbWidth = r0.b(dynamic);
        invalidate();
        clearChildCache();
    }

    public void setCurrentColor(Integer num) {
        this.mCurrentColor = num != null ? num.intValue() : 0;
        invalidate();
        clearChildCache();
    }

    @Override // android.view.View
    public void setId(int i5) {
        super.setId(i5);
        SvgViewManager.setSvgView(i5, this);
    }

    public void setMeetOrSlice(int i5) {
        this.mMeetOrSlice = i5;
        invalidate();
        clearChildCache();
    }

    public void setMinX(float f2) {
        this.mMinX = f2;
        invalidate();
        clearChildCache();
    }

    public void setMinY(float f2) {
        this.mMinY = f2;
        invalidate();
        clearChildCache();
    }

    public void setToDataUrlTask(Runnable runnable) {
        this.toDataUrlTask = runnable;
    }

    public void setVbHeight(float f2) {
        this.mVbHeight = f2;
        invalidate();
        clearChildCache();
    }

    public void setVbWidth(float f2) {
        this.mVbWidth = f2;
        invalidate();
        clearChildCache();
    }

    @Override // android.view.ViewGroup
    public void startViewTransition(View view) {
        this.mRemovalTransitionStarted = true;
    }

    public String toDataURL() {
        Bitmap createBitmap = Bitmap.createBitmap(getWidth(), getHeight(), Bitmap.Config.ARGB_8888);
        clearChildCache();
        drawChildren(new Canvas(createBitmap));
        clearChildCache();
        invalidate();
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        createBitmap.compress(Bitmap.CompressFormat.PNG, 100, byteArrayOutputStream);
        createBitmap.recycle();
        return Base64.encodeToString(byteArrayOutputStream.toByteArray(), 2);
    }

    public String toDataURL(int i5, int i6) {
        Bitmap createBitmap = Bitmap.createBitmap(i5, i6, Bitmap.Config.ARGB_8888);
        clearChildCache();
        drawChildren(new Canvas(createBitmap));
        clearChildCache();
        invalidate();
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        createBitmap.compress(Bitmap.CompressFormat.PNG, 100, byteArrayOutputStream);
        createBitmap.recycle();
        return Base64.encodeToString(byteArrayOutputStream.toByteArray(), 2);
    }
}
