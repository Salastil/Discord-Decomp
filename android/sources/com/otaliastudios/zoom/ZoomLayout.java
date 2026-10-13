package com.otaliastudios.zoom;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.FrameLayout;
import com.discord.zoom_layout.ZoomLayoutFixed;
import el.a;
import el.f;
import el.i;
import el.j;
import hl.b;
import hl.d;
import il.c;
import kotlin.jvm.internal.Intrinsics;
import nf.e;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public class ZoomLayout extends FrameLayout implements ViewTreeObserver.OnGlobalLayoutListener {

    @NotNull
    public static final Companion Companion = new Companion();

    @NotNull
    private static final ZoomLogger LOG;
    private static final String TAG = "ZoomLayout";

    @NotNull
    private final ZoomEngine engine;
    private boolean hasClickableChildren;

    public static final class Companion {
    }

    static {
        Intrinsics.checkNotNullExpressionValue(TAG, "TAG");
        Intrinsics.checkNotNullParameter(TAG, "tag");
        LOG = new ZoomLogger(TAG);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ZoomLayout(Context context) {
        super(context, null, 0);
        Intrinsics.checkNotNullParameter(context, "context");
        ZoomEngine zoomEngine = new ZoomEngine(context);
        this.engine = zoomEngine;
        TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(null, a.a, 0, 0);
        Intrinsics.checkNotNullExpressionValue(obtainStyledAttributes, "context.theme.obtainStyledAttributes(attrs, R.styleable.ZoomEngine, defStyleAttr, 0)");
        boolean z5 = obtainStyledAttributes.getBoolean(12, true);
        boolean z6 = obtainStyledAttributes.getBoolean(13, true);
        boolean z7 = obtainStyledAttributes.getBoolean(5, true);
        boolean z8 = obtainStyledAttributes.getBoolean(19, true);
        boolean z10 = obtainStyledAttributes.getBoolean(11, true);
        boolean z11 = obtainStyledAttributes.getBoolean(20, true);
        boolean z12 = obtainStyledAttributes.getBoolean(3, true);
        boolean z13 = obtainStyledAttributes.getBoolean(14, true);
        boolean z14 = obtainStyledAttributes.getBoolean(10, true);
        boolean z15 = obtainStyledAttributes.getBoolean(18, true);
        boolean z16 = obtainStyledAttributes.getBoolean(15, true);
        boolean z17 = obtainStyledAttributes.getBoolean(1, true);
        boolean z18 = obtainStyledAttributes.getBoolean(4, false);
        float f2 = obtainStyledAttributes.getFloat(8, 0.8f);
        float f10 = obtainStyledAttributes.getFloat(6, 2.5f);
        int integer = obtainStyledAttributes.getInteger(9, 0);
        int integer2 = obtainStyledAttributes.getInteger(7, 0);
        int integer3 = obtainStyledAttributes.getInteger(16, 0);
        int i5 = obtainStyledAttributes.getInt(17, 0);
        int i6 = obtainStyledAttributes.getInt(0, 51);
        long j = obtainStyledAttributes.getInt(2, 280);
        obtainStyledAttributes.recycle();
        Intrinsics.checkNotNullParameter(this, "container");
        if (zoomEngine.f6622c != null) {
            throw new IllegalStateException("container already set");
        }
        ZoomLayoutFixed zoomLayoutFixed = (ZoomLayoutFixed) this;
        zoomEngine.f6622c = zoomLayoutFixed;
        addOnAttachStateChangeListener(new i(0, zoomEngine));
        zoomEngine.b(new j(zoomLayoutFixed));
        setTransformation(integer3, i5);
        setAlignment(i6);
        setOverScrollHorizontal(z5);
        setOverScrollVertical(z6);
        setHorizontalPanEnabled(z7);
        setVerticalPanEnabled(z8);
        setOverPinchable(z10);
        setZoomEnabled(z11);
        setFlingEnabled(z12);
        setScrollEnabled(z13);
        setOneFingerScrollEnabled(z14);
        setTwoFingersScrollEnabled(z15);
        setThreeFingersScrollEnabled(z16);
        setAllowFlingInOverscroll(z17);
        setAnimationDuration(j);
        setMinZoom(f2, integer);
        setMaxZoom(f10, integer2);
        setHasClickableChildren(z18);
        setWillNotDraw(false);
    }

    public final void a() {
        if (!this.hasClickableChildren) {
            invalidate();
        } else if (getChildCount() > 0) {
            View childAt = getChildAt(0);
            childAt.setPivotX(0.0f);
            childAt.setPivotY(0.0f);
            childAt.setTranslationX(this.engine.f6628i.f10086e.left);
            childAt.setTranslationY(this.engine.f6628i.f10086e.top);
            childAt.setScaleX(this.engine.f6628i.f());
            childAt.setScaleY(this.engine.f6628i.f());
        }
        if ((isHorizontalScrollBarEnabled() || isVerticalScrollBarEnabled()) && !awakenScrollBars()) {
            invalidate();
        }
    }

    @Override // android.view.ViewGroup
    public void addView(View child, int i5, ViewGroup.LayoutParams params) {
        Intrinsics.checkNotNullParameter(child, "child");
        Intrinsics.checkNotNullParameter(params, "params");
        if (getChildCount() > 0) {
            throw new RuntimeException(Intrinsics.stringPlus(TAG, " accepts only a single child."));
        }
        super.addView(child, i5, params);
    }

    public boolean cancelAnimations() {
        return this.engine.c();
    }

    @Override // android.view.View
    public int computeHorizontalScrollOffset() {
        return (int) (-this.engine.f6628i.f10086e.left);
    }

    @Override // android.view.View
    public int computeHorizontalScrollRange() {
        return (int) this.engine.f6628i.f10086e.width();
    }

    @Override // android.view.View
    public int computeVerticalScrollOffset() {
        return (int) (-this.engine.f6628i.f10086e.top);
    }

    @Override // android.view.View
    public int computeVerticalScrollRange() {
        return (int) this.engine.f6628i.f10086e.height();
    }

    @Override // android.view.ViewGroup
    public boolean drawChild(@NotNull Canvas canvas, @NotNull View child, long j) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        Intrinsics.checkNotNullParameter(child, "child");
        if (this.hasClickableChildren) {
            return super.drawChild(canvas, child, j);
        }
        int save = canvas.save();
        b bVar = this.engine.f6628i;
        Matrix matrix = bVar.f10090i;
        matrix.set(bVar.f10088g);
        canvas.concat(matrix);
        boolean drawChild = super.drawChild(canvas, child, j);
        canvas.restoreToCount(save);
        return drawChild;
    }

    @NotNull
    public final ZoomEngine getEngine() {
        return this.engine;
    }

    public float getMaxZoom() {
        return this.engine.f6627h.f10960y;
    }

    public int getMaxZoomType() {
        return this.engine.f6627h.E;
    }

    public float getMinZoom() {
        return this.engine.f6627h.f10958w;
    }

    public int getMinZoomType() {
        return this.engine.f6627h.f10959x;
    }

    @NotNull
    public AbsolutePoint getPan() {
        AbsolutePoint d6 = this.engine.f6628i.d();
        return new AbsolutePoint(d6.a, d6.f6616b);
    }

    public float getPanX() {
        b bVar = this.engine.f6628i;
        return bVar.f10086e.left / bVar.f();
    }

    public float getPanY() {
        b bVar = this.engine.f6628i;
        return bVar.f10086e.top / bVar.f();
    }

    public float getRealZoom() {
        return this.engine.f6628i.f();
    }

    @NotNull
    public ScaledPoint getScaledPan() {
        ScaledPoint e9 = this.engine.f6628i.e();
        return new ScaledPoint(e9.a, e9.f6619b);
    }

    public float getScaledPanX() {
        return this.engine.f6628i.f10086e.left;
    }

    public float getScaledPanY() {
        return this.engine.f6628i.f10086e.top;
    }

    public float getZoom() {
        return this.engine.d();
    }

    public void moveTo(float f2, float f10, float f11, boolean z5) {
        this.engine.e(f2, f10, f11, z5);
    }

    public void moveToCenter(Float f2, boolean z5) {
        ZoomEngine zoomEngine = this.engine;
        c cVar = zoomEngine.f6627h;
        b bVar = zoomEngine.f6628i;
        Float valueOf = f2 == null ? null : Float.valueOf(yo.j.c(f2.floatValue(), cVar.B0() / cVar.f10957v, cVar.A0() / cVar.f10957v));
        float d6 = valueOf == null ? zoomEngine.d() : valueOf.floatValue();
        float f10 = cVar.f10957v * d6;
        zoomEngine.e(d6, -((bVar.f10087f.width() / 2.0f) - ((bVar.j / f10) / 2.0f)), -((bVar.f10087f.height() / 2.0f) - ((bVar.k / f10) / 2.0f)), z5);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        getViewTreeObserver().addOnGlobalLayoutListener(this);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        getViewTreeObserver().removeOnGlobalLayoutListener(this);
    }

    public void onGlobalLayout() {
        if (getChildCount() == 0) {
            return;
        }
        View childAt = getChildAt(0);
        ZoomEngine zoomEngine = this.engine;
        float width = childAt.getWidth();
        float height = childAt.getHeight();
        ZoomLogger zoomLogger = ZoomEngine.f6620l;
        zoomEngine.g(width, height, false);
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(@NotNull MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(ev, "ev");
        fl.a aVar = zoomEngine.f6625f;
        aVar.getClass();
        Intrinsics.checkNotNullParameter(ev, "ev");
        return (aVar.a(ev) > 1) || (this.hasClickableChildren && super.onInterceptTouchEvent(ev));
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i5, int i6) {
        int mode = View.MeasureSpec.getMode(i5);
        int mode2 = View.MeasureSpec.getMode(i6);
        if (mode == 0 || mode2 == 0) {
            throw new RuntimeException(Intrinsics.stringPlus(TAG, " must be used with fixed dimensions (e.g. match_parent)"));
        }
        setMeasuredDimension(View.MeasureSpec.getSize(i5), View.MeasureSpec.getSize(i6));
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        measureChildren(makeMeasureSpec, makeMeasureSpec);
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(ev, "ev");
        fl.a aVar = zoomEngine.f6625f;
        aVar.getClass();
        Intrinsics.checkNotNullParameter(ev, "ev");
        return (aVar.a(ev) > 0) || (this.hasClickableChildren && super.onTouchEvent(ev));
    }

    public void panBy(float f2, float f10, boolean z5) {
        ZoomEngine zoomEngine = this.engine;
        b bVar = zoomEngine.f6628i;
        int i5 = d.k;
        d w5 = e.w(new f(f2, f10));
        if (z5) {
            bVar.a(w5);
        } else {
            zoomEngine.c();
            bVar.b(w5);
        }
    }

    public void panTo(float f2, float f10, boolean z5) {
        ZoomEngine zoomEngine = this.engine;
        b bVar = zoomEngine.f6628i;
        float f11 = f2 - (bVar.f10086e.left / bVar.f());
        float f12 = f10 - (bVar.f10086e.top / bVar.f());
        b bVar2 = zoomEngine.f6628i;
        int i5 = d.k;
        d w5 = e.w(new f(f11, f12));
        if (z5) {
            bVar2.a(w5);
        } else {
            zoomEngine.c();
            bVar2.b(w5);
        }
    }

    public void realZoomTo(float f2, boolean z5) {
        this.engine.f(f2, z5);
    }

    public void setAlignment(int i5) {
        this.engine.f6626g.E = i5;
    }

    public void setAllowFlingInOverscroll(boolean z5) {
        this.engine.j.J = z5;
    }

    public void setAnimationDuration(long j) {
        this.engine.f6628i.f10093n = j;
    }

    public void setFlingEnabled(boolean z5) {
        this.engine.j.E = z5;
    }

    public final void setHasClickableChildren(boolean z5) {
        LOG.a("setHasClickableChildren:", "old:", Boolean.valueOf(this.hasClickableChildren), "new:", Boolean.valueOf(z5));
        if (this.hasClickableChildren && !z5 && getChildCount() > 0) {
            View childAt = getChildAt(0);
            childAt.setScaleX(1.0f);
            childAt.setScaleY(1.0f);
            childAt.setTranslationX(0.0f);
            childAt.setTranslationY(0.0f);
        }
        this.hasClickableChildren = z5;
        if (getWidth() <= 0 || getHeight() <= 0) {
            return;
        }
        if (this.hasClickableChildren) {
            a();
        } else {
            invalidate();
        }
    }

    public void setHorizontalPanEnabled(boolean z5) {
        this.engine.f6626g.f10954x = z5;
    }

    public void setMaxZoom(float f2) {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(zoomEngine, "this");
        zoomEngine.h(f2, 0);
    }

    public void setMinZoom(float f2) {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(zoomEngine, "this");
        zoomEngine.i(f2, 0);
    }

    public void setOneFingerScrollEnabled(boolean z5) {
        this.engine.j.G = z5;
    }

    public void setOverPanRange(@NotNull OverPanRangeProvider provider) {
        Intrinsics.checkNotNullParameter(provider, "provider");
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(provider, "provider");
        il.b bVar = zoomEngine.f6626g;
        bVar.getClass();
        Intrinsics.checkNotNullParameter(provider, "<set-?>");
        bVar.F = provider;
    }

    public void setOverPinchable(boolean z5) {
        this.engine.f6627h.H = z5;
    }

    public void setOverScrollHorizontal(boolean z5) {
        this.engine.f6626g.f10952v = z5;
    }

    public void setOverScrollVertical(boolean z5) {
        this.engine.f6626g.f10953w = z5;
    }

    public void setOverZoomRange(@NotNull OverZoomRangeProvider provider) {
        Intrinsics.checkNotNullParameter(provider, "provider");
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(provider, "provider");
        c cVar = zoomEngine.f6627h;
        cVar.getClass();
        Intrinsics.checkNotNullParameter(provider, "<set-?>");
        cVar.F = provider;
    }

    public void setScrollEnabled(boolean z5) {
        this.engine.j.F = z5;
    }

    public void setThreeFingersScrollEnabled(boolean z5) {
        this.engine.j.I = z5;
    }

    public void setTransformation(int i5) {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.getClass();
        Intrinsics.checkNotNullParameter(zoomEngine, "this");
        zoomEngine.a = i5;
        zoomEngine.f6621b = 0;
    }

    public void setTwoFingersScrollEnabled(boolean z5) {
        this.engine.j.H = z5;
    }

    public void setVerticalPanEnabled(boolean z5) {
        this.engine.f6626g.f10955y = z5;
    }

    public void setZoomEnabled(boolean z5) {
        this.engine.f6627h.G = z5;
    }

    public void zoomBy(float f2, boolean z5) {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.f(zoomEngine.d() * f2 * zoomEngine.f6627h.f10957v, z5);
    }

    public void zoomIn() {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.f(zoomEngine.d() * 1.3f * zoomEngine.f6627h.f10957v, true);
    }

    public void zoomOut() {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.f(zoomEngine.d() * 0.7f * zoomEngine.f6627h.f10957v, true);
    }

    public void zoomTo(float f2, boolean z5) {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.f(f2 * zoomEngine.f6627h.f10957v, z5);
    }

    public void setMaxZoom(float f2, int i5) {
        this.engine.h(f2, i5);
    }

    public void setMinZoom(float f2, int i5) {
        this.engine.i(f2, i5);
    }

    public void setTransformation(int i5, int i6) {
        ZoomEngine zoomEngine = this.engine;
        zoomEngine.a = i5;
        zoomEngine.f6621b = i6;
    }
}
