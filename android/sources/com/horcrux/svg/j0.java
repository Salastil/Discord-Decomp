package com.horcrux.svg;

import android.graphics.Matrix;

/* loaded from: classes3.dex */
public final class j0 extends a0 {
    public static final float[] P = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};
    public r0 E;
    public r0 F;
    public int G;
    public int H;
    public float I;
    public float J;
    public float K;
    public float L;
    public String M;
    public int N;
    public Matrix O;

    /* renamed from: x, reason: collision with root package name */
    public r0 f6376x;

    /* renamed from: y, reason: collision with root package name */
    public r0 f6377y;

    @Override // com.horcrux.svg.a0, com.horcrux.svg.VirtualView
    public final void saveDefinition() {
        if (this.mName != null) {
            a aVar = new a(3, new r0[]{this.f6376x, this.f6377y, this.E, this.F}, this.G);
            aVar.f6300e = this.H == 1;
            aVar.f6303h = this;
            Matrix matrix = this.O;
            if (matrix != null) {
                aVar.f6301f = matrix;
            }
            SvgView svgView = getSvgView();
            if (this.G == 2 || this.H == 2) {
                aVar.f6302g = svgView.getCanvasBounds();
            }
            svgView.defineBrush(aVar, this.mName);
        }
    }
}
