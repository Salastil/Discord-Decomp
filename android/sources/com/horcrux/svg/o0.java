package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class o0 extends RenderableView {

    /* renamed from: d, reason: collision with root package name */
    public r0 f6406d;

    /* renamed from: e, reason: collision with root package name */
    public r0 f6407e;

    /* renamed from: i, reason: collision with root package name */
    public r0 f6408i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6409v;

    /* renamed from: w, reason: collision with root package name */
    public r0 f6410w;

    /* renamed from: x, reason: collision with root package name */
    public r0 f6411x;

    /* JADX WARN: Removed duplicated region for block: B:14:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0066  */
    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Path getPath(Canvas canvas, Paint paint) {
        double relativeOnWidth;
        double relativeOnHeight;
        double d6;
        double d7;
        Path path = new Path();
        double relativeOnWidth2 = relativeOnWidth(this.f6406d);
        double relativeOnHeight2 = relativeOnHeight(this.f6407e);
        double relativeOnWidth3 = relativeOnWidth(this.f6408i);
        double relativeOnHeight3 = relativeOnHeight(this.f6409v);
        r0 r0Var = this.f6410w;
        if (r0Var == null && this.f6411x == null) {
            path.addRect((float) relativeOnWidth2, (float) relativeOnHeight2, (float) (relativeOnWidth2 + relativeOnWidth3), (float) (relativeOnHeight2 + relativeOnHeight3), Path.Direction.CW);
            path.close();
        } else {
            if (r0Var == null) {
                relativeOnWidth = relativeOnHeight(this.f6411x);
            } else if (this.f6411x == null) {
                relativeOnWidth = relativeOnWidth(r0Var);
            } else {
                relativeOnWidth = relativeOnWidth(r0Var);
                relativeOnHeight = relativeOnHeight(this.f6411x);
                d6 = relativeOnWidth3 / 2.0d;
                if (relativeOnWidth > d6) {
                    relativeOnWidth = d6;
                }
                d7 = relativeOnHeight3 / 2.0d;
                if (relativeOnHeight > d7) {
                    relativeOnHeight = d7;
                }
                path.addRoundRect((float) relativeOnWidth2, (float) relativeOnHeight2, (float) (relativeOnWidth2 + relativeOnWidth3), (float) (relativeOnHeight2 + relativeOnHeight3), (float) relativeOnWidth, (float) relativeOnHeight, Path.Direction.CW);
            }
            relativeOnHeight = relativeOnWidth;
            d6 = relativeOnWidth3 / 2.0d;
            if (relativeOnWidth > d6) {
            }
            d7 = relativeOnHeight3 / 2.0d;
            if (relativeOnHeight > d7) {
            }
            path.addRoundRect((float) relativeOnWidth2, (float) relativeOnHeight2, (float) (relativeOnWidth2 + relativeOnWidth3), (float) (relativeOnHeight2 + relativeOnHeight3), (float) relativeOnWidth, (float) relativeOnHeight, Path.Direction.CW);
        }
        ArrayList<h0> arrayList = new ArrayList<>();
        this.elements = arrayList;
        arrayList.add(new h0(3, new k0[]{new k0(relativeOnWidth2, relativeOnHeight2)}));
        double d8 = relativeOnWidth3 + relativeOnWidth2;
        this.elements.add(new h0(4, new k0[]{new k0(d8, relativeOnHeight2)}));
        double d10 = relativeOnHeight2 + relativeOnHeight3;
        this.elements.add(new h0(4, new k0[]{new k0(d8, d10)}));
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth2, d10)}));
        this.elements.add(new h0(4, new k0[]{new k0(relativeOnWidth2, relativeOnHeight2)}));
        return path;
    }
}
