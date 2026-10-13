package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class j extends o {
    public float E;
    public t F;

    /* renamed from: i, reason: collision with root package name */
    public String f6371i;

    /* renamed from: v, reason: collision with root package name */
    public String f6372v;

    /* renamed from: w, reason: collision with root package name */
    public float f6373w;

    /* renamed from: x, reason: collision with root package name */
    public float f6374x;

    /* renamed from: y, reason: collision with root package name */
    public float f6375y;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap d6 = o.d(hashMap, bitmap, this.f6371i);
        Bitmap d7 = o.d(hashMap, bitmap, this.f6372v);
        Bitmap createBitmap = Bitmap.createBitmap(d6.getWidth(), d6.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        Paint paint = new Paint(1);
        canvas.drawBitmap(d6, 0.0f, 0.0f, paint);
        int ordinal = this.F.ordinal();
        if (ordinal == 0) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_OVER));
        } else if (ordinal == 1) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_IN));
        } else if (ordinal == 2) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_OUT));
        } else if (ordinal == 3) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_ATOP));
        } else if (ordinal == 4) {
            paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.XOR));
        } else if (ordinal == 5) {
            int height = createBitmap.getHeight() * createBitmap.getWidth();
            int[] iArr = new int[height];
            createBitmap.getPixels(iArr, 0, createBitmap.getWidth(), 0, 0, createBitmap.getWidth(), createBitmap.getHeight());
            int width = createBitmap.getWidth();
            int width2 = createBitmap.getWidth();
            int height2 = createBitmap.getHeight();
            int[] iArr2 = new int[height];
            d7.getPixels(iArr2, 0, width, 0, 0, width2, height2);
            int i5 = 0;
            while (i5 < height) {
                int i6 = iArr[i5];
                int i10 = iArr2[i5];
                int i11 = height;
                int[] iArr3 = iArr2;
                float f2 = this.f6373w;
                float f10 = (i6 >> 16) & 255;
                float f11 = (i10 >> 16) & 255;
                float f12 = f2 * f10 * f11;
                float f13 = this.f6374x;
                float f14 = (f10 * f13) + f12;
                float f15 = this.f6375y;
                float f16 = (f11 * f15) + f14;
                float f17 = this.E;
                int i12 = (int) (f16 + f17);
                float f18 = (i6 >> 8) & 255;
                float f19 = (i10 >> 8) & 255;
                int i13 = (int) ((f19 * f15) + (f18 * f13) + (f2 * f18 * f19) + f17);
                float f20 = i6 & 255;
                float f21 = i10 & 255;
                int i14 = (int) ((f21 * f15) + (f20 * f13) + (f2 * f20 * f21) + f17);
                float f22 = i6 >>> 24;
                float f23 = i10 >>> 24;
                int i15 = (int) ((f15 * f23) + (f22 * f13) + (f2 * f22 * f23) + f17);
                iArr[i5] = (Math.min(255, Math.max(0, i12)) << 16) | (Math.min(255, Math.max(0, i15)) << 24) | (Math.min(255, Math.max(0, i13)) << 8) | Math.min(255, Math.max(0, i14));
                i5++;
                height = i11;
                iArr2 = iArr3;
            }
            int width3 = createBitmap.getWidth();
            int width4 = createBitmap.getWidth();
            createBitmap = createBitmap;
            createBitmap.setPixels(iArr, 0, width3, 0, 0, width4, createBitmap.getHeight());
        }
        if (this.F != t.ARITHMETIC) {
            canvas.drawBitmap(d7, 0.0f, 0.0f, paint);
        }
        return createBitmap;
    }
}
