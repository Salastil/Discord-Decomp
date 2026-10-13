package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RectF;

/* loaded from: classes3.dex */
public final class z1 extends a0 {
    public float E;
    public float F;
    public String G;
    public int H;

    /* renamed from: x, reason: collision with root package name */
    public float f6481x;

    /* renamed from: y, reason: collision with root package name */
    public float f6482y;

    @Override // com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final void draw(Canvas canvas, Paint paint, float f2) {
        saveDefinition();
    }

    public final void j(Canvas canvas, Paint paint, float f2, float f10, float f11) {
        if (this.G != null) {
            float f12 = this.f6481x;
            float f13 = this.mScale;
            float f14 = this.f6482y;
            canvas.concat(io.sentry.config.a.t(new RectF(f12 * f13, f14 * f13, (f12 + this.E) * f13, (f14 + this.F) * f13), new RectF(0.0f, 0.0f, f10, f11), this.G, this.H));
            super.draw(canvas, paint, f2);
        }
    }
}
