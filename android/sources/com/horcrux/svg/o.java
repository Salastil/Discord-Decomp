package com.horcrux.svg;

import android.graphics.Bitmap;
import com.facebook.react.bridge.ReactContext;
import java.util.HashMap;

/* loaded from: classes3.dex */
public abstract class o extends e {

    /* renamed from: d, reason: collision with root package name */
    public String f6404d;

    /* renamed from: e, reason: collision with root package name */
    public final FilterRegion f6405e;

    public o(ReactContext reactContext) {
        super(reactContext);
        this.f6405e = new FilterRegion();
    }

    public static Bitmap d(HashMap hashMap, Bitmap bitmap, String str) {
        Bitmap bitmap2 = str != null ? (Bitmap) hashMap.get(str) : null;
        return bitmap2 != null ? bitmap2 : bitmap;
    }

    public abstract Bitmap c(HashMap hashMap, Bitmap bitmap);

    @Override // com.horcrux.svg.VirtualView
    public final void saveDefinition() {
    }
}
