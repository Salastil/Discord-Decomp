package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import com.facebook.react.bridge.ReadableArray;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class m extends o {

    /* renamed from: i, reason: collision with root package name */
    public ReadableArray f6385i;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap createBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        int size = this.f6385i.size();
        for (int i5 = 0; i5 < size; i5++) {
            String string = this.f6385i.getString(i5);
            Bitmap bitmap2 = string.isEmpty() ? bitmap : (Bitmap) hashMap.get(string);
            if (bitmap2 != null) {
                canvas.drawBitmap(bitmap2, 0.0f, 0.0f, new Paint());
            }
        }
        return createBitmap;
    }
}
