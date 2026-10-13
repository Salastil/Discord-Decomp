package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RectF;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class n extends o {

    /* renamed from: i, reason: collision with root package name */
    public String f6394i;

    /* renamed from: v, reason: collision with root package name */
    public r0 f6395v;

    /* renamed from: w, reason: collision with root package name */
    public r0 f6396w;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap d6 = o.d(hashMap, bitmap, this.f6394i);
        Bitmap createBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        r0 r0Var = this.f6395v;
        float relativeOnWidth = r0Var != null ? (float) relativeOnWidth(r0Var) : 0.0f;
        r0 r0Var2 = this.f6396w;
        RectF rectF = new RectF(0.0f, 0.0f, relativeOnWidth, r0Var2 != null ? (float) relativeOnHeight(r0Var2) : 0.0f);
        getSvgView().getCtm().mapRect(rectF);
        float f2 = rectF.left;
        if (f2 >= 0.0f) {
            f2 = rectF.width();
        }
        float f10 = rectF.top;
        if (f10 >= 0.0f) {
            f10 = rectF.height();
        }
        canvas.drawBitmap(d6, f2, f10, (Paint) null);
        return createBitmap;
    }
}
