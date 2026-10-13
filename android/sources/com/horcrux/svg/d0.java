package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class d0 extends RenderableView {

    /* renamed from: d, reason: collision with root package name */
    public r0 f6323d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6324e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6325i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6326v;

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final Path getPath(Canvas canvas, Paint paint) {
        Path path = new Path();
        double relativeOnWidth = relativeOnWidth(this.f6323d);
        double relativeOnHeight = relativeOnHeight(this.f6324e);
        double relativeOnWidth2 = relativeOnWidth(this.f6325i);
        double relativeOnHeight2 = relativeOnHeight(this.f6326v);
        path.moveTo((float) relativeOnWidth, (float) relativeOnHeight);
        path.lineTo((float) relativeOnWidth2, (float) relativeOnHeight2);
        ArrayList<h0> arrayList = new ArrayList<>();
        this.elements = arrayList;
        arrayList.add(new h0(3, new k0[]{new k0(relativeOnWidth, relativeOnHeight)}));
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth2, relativeOnHeight2)}));
        return path;
    }
}
