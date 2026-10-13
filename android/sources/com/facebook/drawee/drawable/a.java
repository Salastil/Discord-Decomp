package com.facebook.drawee.drawable;

import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public final class a implements c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4425d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f4426e;

    public a(d dVar, int i5) {
        this.f4426e = dVar;
        this.f4425d = i5;
    }

    @Override // com.facebook.drawee.drawable.c
    public final Drawable getDrawable() {
        return this.f4426e.c(this.f4425d);
    }

    @Override // com.facebook.drawee.drawable.c
    public final Drawable setDrawable(Drawable drawable) {
        return this.f4426e.d(drawable, this.f4425d);
    }
}
