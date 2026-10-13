package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class b extends RenderableView {

    /* renamed from: d, reason: collision with root package name */
    public r0 f6309d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6310e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6311i;

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final Path getPath(Canvas canvas, Paint paint) {
        Path path = new Path();
        double relativeOnWidth = relativeOnWidth(this.f6309d);
        double relativeOnHeight = relativeOnHeight(this.f6310e);
        double relativeOnOther = relativeOnOther(this.f6311i);
        path.addCircle((float) relativeOnWidth, (float) relativeOnHeight, (float) relativeOnOther, Path.Direction.CW);
        ArrayList<h0> arrayList = new ArrayList<>();
        this.elements = arrayList;
        double d6 = relativeOnHeight - relativeOnOther;
        arrayList.add(new h0(3, new k0[]{new k0(relativeOnWidth, d6)}));
        double d7 = relativeOnWidth + relativeOnOther;
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth, d6), new k0(d7, relativeOnHeight)}));
        double d8 = relativeOnHeight + relativeOnOther;
        this.elements.add(new h0(4, new k0[]{new k0(d7, relativeOnHeight), new k0(relativeOnWidth, d8)}));
        double d10 = relativeOnWidth - relativeOnOther;
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth, d8), new k0(d10, relativeOnHeight)}));
        this.elements.add(new h0(4, new k0[]{new k0(d10, relativeOnHeight), new k0(relativeOnWidth, d6)}));
        return path;
    }
}
