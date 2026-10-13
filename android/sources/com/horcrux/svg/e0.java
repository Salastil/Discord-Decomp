package com.horcrux.svg;

import android.graphics.Matrix;
import com.facebook.react.bridge.ReadableArray;

/* loaded from: classes3.dex */
public final class e0 extends e {
    public static final float[] E = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};

    /* renamed from: d, reason: collision with root package name */
    public r0 f6334d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6335e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6336i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6337v;

    /* renamed from: w, reason: collision with root package name */
    public ReadableArray f6338w;

    /* renamed from: x, reason: collision with root package name */
    public int f6339x;

    /* renamed from: y, reason: collision with root package name */
    public Matrix f6340y;

    @Override // com.horcrux.svg.VirtualView
    public final void saveDefinition() {
        if (this.mName != null) {
            a aVar = new a(1, new r0[]{this.f6334d, this.f6335e, this.f6336i, this.f6337v}, this.f6339x);
            aVar.f6298c = this.f6338w;
            Matrix matrix = this.f6340y;
            if (matrix != null) {
                aVar.f6301f = matrix;
            }
            SvgView svgView = getSvgView();
            if (this.f6339x == 2) {
                aVar.f6302g = svgView.getCanvasBounds();
            }
            svgView.defineBrush(aVar, this.mName);
        }
    }
}
