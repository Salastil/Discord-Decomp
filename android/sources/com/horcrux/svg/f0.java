package com.horcrux.svg;

import android.graphics.Matrix;
import android.view.View;

/* loaded from: classes3.dex */
public final class f0 extends a0 {
    public r0 E;
    public r0 F;
    public String G;
    public String H;
    public float I;
    public float J;
    public float K;
    public float L;
    public String M;
    public int N;
    public Matrix O;

    /* renamed from: x, reason: collision with root package name */
    public r0 f6347x;

    /* renamed from: y, reason: collision with root package name */
    public r0 f6348y;

    @Override // com.horcrux.svg.a0, com.horcrux.svg.VirtualView
    public final void saveDefinition() {
        if (this.mName != null) {
            getSvgView().defineMarker(this, this.mName);
            for (int i5 = 0; i5 < getChildCount(); i5++) {
                View childAt = getChildAt(i5);
                if (childAt instanceof VirtualView) {
                    ((VirtualView) childAt).saveDefinition();
                }
            }
        }
    }
}
