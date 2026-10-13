package com.horcrux.svg;

import android.graphics.Matrix;
import com.facebook.react.bridge.ReadableArray;

/* loaded from: classes3.dex */
public final class n0 extends e {
    public static final float[] G = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};
    public int E;
    public Matrix F;

    /* renamed from: d, reason: collision with root package name */
    public r0 f6397d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6398e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6399i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6400v;

    /* renamed from: w, reason: collision with root package name */
    public r0 f6401w;

    /* renamed from: x, reason: collision with root package name */
    public r0 f6402x;

    /* renamed from: y, reason: collision with root package name */
    public ReadableArray f6403y;

    @Override // com.horcrux.svg.VirtualView
    public final void saveDefinition() {
        if (this.mName != null) {
            a aVar = new a(2, new r0[]{this.f6397d, this.f6398e, this.f6399i, this.f6400v, this.f6401w, this.f6402x}, this.E);
            aVar.f6298c = this.f6403y;
            Matrix matrix = this.F;
            if (matrix != null) {
                aVar.f6301f = matrix;
            }
            SvgView svgView = getSvgView();
            if (this.E == 2) {
                aVar.f6302g = svgView.getCanvasBounds();
            }
            svgView.defineBrush(aVar, this.mName);
        }
    }
}
