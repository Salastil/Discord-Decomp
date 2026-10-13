package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.JavaOnlyArray;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import java.util.HashMap;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class k extends o {

    /* renamed from: w, reason: collision with root package name */
    public static final Pattern f6378w = Pattern.compile("[0-9.-]+");

    /* renamed from: i, reason: collision with root package name */
    public ReadableArray f6379i;

    /* renamed from: v, reason: collision with root package name */
    public float f6380v;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap createBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        Paint paint = new Paint();
        paint.setFlags(129);
        paint.setStyle(Paint.Style.FILL);
        float f2 = this.f6380v;
        ReadableArray readableArray = this.f6379i;
        if (readableArray.getInt(0) == 0) {
            if (readableArray.size() == 2) {
                paint.setColor((Math.round((r2 >>> 24) * f2) << 24) | ((readableArray.getType(1) == ReadableType.Map ? ColorPropConverter.getColor(readableArray.getMap(1), getContext()).intValue() : readableArray.getInt(1)) & 16777215));
            } else {
                paint.setARGB((int) (readableArray.size() > 4 ? readableArray.getDouble(4) * f2 * 255.0d : f2 * 255.0f), (int) (readableArray.getDouble(1) * 255.0d), (int) (readableArray.getDouble(2) * 255.0d), (int) (readableArray.getDouble(3) * 255.0d));
            }
        }
        canvas.drawPaint(paint);
        return createBitmap;
    }

    public final void e(ReadableMap readableMap) {
        if (readableMap == null) {
            this.f6379i = null;
            invalidate();
            return;
        }
        int i5 = readableMap.getInt("type");
        if (i5 == 0) {
            ReadableType type = readableMap.getType("payload");
            if (type.equals(ReadableType.Number)) {
                this.f6379i = JavaOnlyArray.of(0, Integer.valueOf(readableMap.getInt("payload")));
            } else if (type.equals(ReadableType.Map)) {
                this.f6379i = JavaOnlyArray.of(0, readableMap.getMap("payload"));
            }
        } else if (i5 == 1) {
            this.f6379i = JavaOnlyArray.of(1, readableMap.getString("brushRef"));
        } else {
            this.f6379i = JavaOnlyArray.of(Integer.valueOf(i5));
        }
        invalidate();
    }
}
