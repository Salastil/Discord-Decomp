package com.facebook.drawee.drawable;

import android.graphics.ColorFilter;
import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public final class DrawableProperties {

    /* renamed from: b, reason: collision with root package name */
    public boolean f4421b;

    /* renamed from: c, reason: collision with root package name */
    public ColorFilter f4422c;
    public int a = -1;

    /* renamed from: d, reason: collision with root package name */
    public int f4423d = -1;

    /* renamed from: e, reason: collision with root package name */
    public int f4424e = -1;

    public final void a(Drawable drawable) {
        if (drawable == null) {
            return;
        }
        int i5 = this.a;
        if (i5 != -1) {
            drawable.setAlpha(i5);
        }
        if (this.f4421b) {
            drawable.setColorFilter(this.f4422c);
        }
        int i6 = this.f4423d;
        if (i6 != -1) {
            drawable.setDither(i6 != 0);
        }
        int i10 = this.f4424e;
        if (i10 != -1) {
            drawable.setFilterBitmap(i10 != 0);
        }
    }
}
