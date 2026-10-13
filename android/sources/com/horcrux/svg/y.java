package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RectF;
import android.view.View;

/* loaded from: classes3.dex */
public final class y extends a0 {
    public r0 E;
    public r0 F;
    public Canvas G;

    /* renamed from: x, reason: collision with root package name */
    public r0 f6452x;

    /* renamed from: y, reason: collision with root package name */
    public r0 f6453y;

    @Override // com.horcrux.svg.a0
    public final void c(Canvas canvas, Paint paint, float f2) {
        h();
        SvgView svgView = getSvgView();
        RectF rectF = new RectF();
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (!(childAt instanceof g0)) {
                if (childAt instanceof VirtualView) {
                    VirtualView virtualView = (VirtualView) childAt;
                    if (!"none".equals(virtualView.mDisplay)) {
                        boolean z5 = virtualView instanceof RenderableView;
                        if (z5) {
                            ((RenderableView) virtualView).mergeProperties(this);
                        }
                        int saveAndSetupCanvas = virtualView.saveAndSetupCanvas(canvas, this.mCTM);
                        virtualView.render(canvas, paint, this.mOpacity * f2);
                        RectF clientRect = virtualView.getClientRect();
                        if (clientRect != null) {
                            rectF.union(clientRect);
                        }
                        virtualView.restoreCanvas(canvas, saveAndSetupCanvas);
                        if (z5) {
                            ((RenderableView) virtualView).resetProperties();
                        }
                        if (virtualView.isResponsible()) {
                            svgView.enableTouchEvents();
                        }
                    }
                } else if (childAt instanceof SvgView) {
                    SvgView svgView2 = (SvgView) childAt;
                    svgView2.drawChildren(canvas);
                    if (svgView2.isResponsible()) {
                        svgView.enableTouchEvents();
                    }
                } else {
                    childAt.draw(canvas);
                }
            }
        }
        setClientRect(rectF);
        g();
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void dispatchDraw(Canvas canvas) {
        super.dispatchDraw(this.G);
    }

    @Override // com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final void draw(Canvas canvas, Paint paint, float f2) {
        float relativeOnWidth = (float) relativeOnWidth(this.f6452x);
        float relativeOnHeight = (float) relativeOnHeight(this.f6453y);
        float relativeOnWidth2 = (float) relativeOnWidth(this.E);
        float relativeOnHeight2 = (float) relativeOnHeight(this.F);
        canvas.translate(relativeOnWidth, relativeOnHeight);
        canvas.clipRect(0.0f, 0.0f, relativeOnWidth2, relativeOnHeight2);
        super.draw(canvas, paint, f2);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup
    public final boolean drawChild(Canvas canvas, View view, long j) {
        return super.drawChild(this.G, view, j);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onDescendantInvalidated(View view, View view2) {
        super.onDescendantInvalidated(view, view2);
        invalidate();
    }
}
