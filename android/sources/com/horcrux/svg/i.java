package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.ColorMatrix;
import com.facebook.react.bridge.ReadableArray;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class i extends o {

    /* renamed from: i, reason: collision with root package name */
    public String f6366i;

    /* renamed from: v, reason: collision with root package name */
    public s f6367v;

    /* renamed from: w, reason: collision with root package name */
    public ReadableArray f6368w;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap d6 = o.d(hashMap, bitmap, this.f6366i);
        ColorMatrix colorMatrix = new ColorMatrix();
        int ordinal = this.f6367v.ordinal();
        if (ordinal == 0) {
            if (this.f6368w.size() >= 20) {
                float[] fArr = new float[this.f6368w.size()];
                for (int i5 = 0; i5 < this.f6368w.size(); i5++) {
                    fArr[i5] = ((float) this.f6368w.getDouble(i5)) * (i5 % 5 == 4 ? 255 : 1);
                }
                colorMatrix.set(fArr);
                return FilterUtils.getBitmapWithColorMatrix(colorMatrix, d6);
            }
            return d6;
        }
        if (ordinal == 1) {
            if (this.f6368w.size() == 1) {
                colorMatrix.setSaturation((float) this.f6368w.getDouble(0));
                return FilterUtils.getBitmapWithColorMatrix(colorMatrix, d6);
            }
            return d6;
        }
        if (ordinal == 2) {
            if (this.f6368w.size() == 1) {
                double d7 = (((float) this.f6368w.getDouble(0)) * 3.141592653589793d) / 180.0d;
                float cos = (float) Math.cos(d7);
                float sin = (float) Math.sin(d7);
                float f2 = 0.715f - (cos * 0.715f);
                float f10 = sin * 0.715f;
                float f11 = 0.072f - (cos * 0.072f);
                float f12 = 0.213f - (cos * 0.213f);
                colorMatrix.set(new float[]{((cos * 0.787f) + 0.213f) - (sin * 0.213f), f2 - f10, (sin * 0.928f) + f11, 0.0f, 0.0f, (0.143f * sin) + f12, (0.14f * sin) + (0.285f * cos) + 0.715f, f11 - (0.283f * sin), 0.0f, 0.0f, f12 - (0.787f * sin), f2 + f10, (sin * 0.072f) + (cos * 0.928f) + 0.072f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f});
            }
            return d6;
        }
        if (ordinal == 3) {
            colorMatrix.set(new float[]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2125f, 0.7154f, 0.0721f, 0.0f, 0.0f});
        }
        return FilterUtils.getBitmapWithColorMatrix(colorMatrix, d6);
    }
}
