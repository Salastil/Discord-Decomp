package com.horcrux.svg;

import android.content.Context;
import android.graphics.Bitmap;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class l extends o {

    /* renamed from: i, reason: collision with root package name */
    public String f6382i;

    /* renamed from: v, reason: collision with root package name */
    public float f6383v;

    /* renamed from: w, reason: collision with root package name */
    public float f6384w;

    @Override // com.horcrux.svg.o
    public final Bitmap c(HashMap hashMap, Bitmap bitmap) {
        Bitmap d6 = o.d(hashMap, bitmap, this.f6382i);
        Context context = getContext();
        float max = Math.max(this.f6383v, this.f6384w) * 2.0f;
        if (max <= 0.0f) {
            return d6;
        }
        float min = Math.min(max, 25.0f);
        Bitmap createBitmap = Bitmap.createBitmap(d6);
        RenderScript create = RenderScript.create(context);
        ScriptIntrinsicBlur create2 = ScriptIntrinsicBlur.create(create, Element.U8_4(create));
        Allocation createFromBitmap = Allocation.createFromBitmap(create, d6);
        Allocation createFromBitmap2 = Allocation.createFromBitmap(create, createBitmap);
        create2.setRadius(min);
        create2.setInput(createFromBitmap);
        create2.forEach(createFromBitmap2);
        createFromBitmap2.copyTo(createBitmap);
        createFromBitmap.destroy();
        createFromBitmap2.destroy();
        create.destroy();
        return Bitmap.createScaledBitmap(createBitmap, d6.getWidth(), d6.getHeight(), false);
    }
}
