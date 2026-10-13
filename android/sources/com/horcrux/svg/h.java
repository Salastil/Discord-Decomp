package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class h extends o {

    /* renamed from: i, reason: collision with root package name */
    public String f6362i;

    /* renamed from: v, reason: collision with root package name */
    public String f6363v;

    /* renamed from: w, reason: collision with root package name */
    public q f6364w;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap d6 = o.d(hashMap, bitmap, this.f6362i);
        Bitmap d7 = o.d(hashMap, bitmap, this.f6363v);
        if (this.f6364w == q.MULTIPLY) {
            return CustomFilter.apply(d6, d7, new com.google.firebase.messaging.m(3));
        }
        Bitmap createBitmap = Bitmap.createBitmap(d6.getWidth(), d6.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        Paint paint = new Paint(1);
        canvas.drawBitmap(d6, 0.0f, 0.0f, paint);
        int ordinal = this.f6364w.ordinal();
        if (ordinal == 0 || ordinal == 1) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_OVER));
        } else if (ordinal == 3) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SCREEN));
        } else if (ordinal == 4) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DARKEN));
        } else if (ordinal == 5) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.LIGHTEN));
        }
        canvas.drawBitmap(d7, 0.0f, 0.0f, paint);
        return createBitmap;
    }
}
