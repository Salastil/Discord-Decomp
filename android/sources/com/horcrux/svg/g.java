package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class g extends RenderableView {

    /* renamed from: d, reason: collision with root package name */
    public r0 f6351d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6352e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6353i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6354v;

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final Path getPath(Canvas canvas, Paint paint) {
        Path path = new Path();
        double relativeOnWidth = relativeOnWidth(this.f6351d);
        double relativeOnHeight = relativeOnHeight(this.f6352e);
        double relativeOnWidth2 = relativeOnWidth(this.f6353i);
        double relativeOnHeight2 = relativeOnHeight(this.f6354v);
        double d6 = relativeOnWidth - relativeOnWidth2;
        double d7 = relativeOnHeight - relativeOnHeight2;
        double d8 = relativeOnWidth + relativeOnWidth2;
        double d10 = relativeOnHeight + relativeOnHeight2;
        path.addOval(new RectF((float) d6, (float) d7, (float) d8, (float) d10), Path.Direction.CW);
        ArrayList<h0> arrayList = new ArrayList<>();
        this.elements = arrayList;
        arrayList.add(new h0(3, new k0[]{new k0(relativeOnWidth, d7)}));
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth, d7), new k0(d8, relativeOnHeight)}));
        this.elements.add(new h0(4, new k0[]{new k0(d8, relativeOnHeight), new k0(relativeOnWidth, d10)}));
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth, d10), new k0(d6, relativeOnHeight)}));
        this.elements.add(new h0(4, new k0[]{new k0(d6, relativeOnHeight), new k0(relativeOnWidth, d7)}));
        return path;
    }
}
