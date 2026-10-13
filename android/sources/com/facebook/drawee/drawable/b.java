package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.SystemClock;

/* loaded from: classes3.dex */
public final class b extends e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final int f4427d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f4428e;

    /* renamed from: i, reason: collision with root package name */
    public float f4429i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f4430v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(Drawable drawable, int i5) {
        super(drawable);
        drawable.getClass();
        this.f4429i = 0.0f;
        this.f4430v = false;
        this.f4427d = i5;
        this.f4428e = true;
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        int save = canvas.save();
        Rect bounds = getBounds();
        int i5 = bounds.right - bounds.left;
        int i6 = bounds.bottom - bounds.top;
        float f2 = this.f4429i;
        if (!this.f4428e) {
            f2 = 360.0f - f2;
        }
        canvas.rotate(f2, (i5 / 2) + r3, (i6 / 2) + r1);
        super.draw(canvas);
        canvas.restoreToCount(save);
        if (this.f4430v) {
            return;
        }
        this.f4430v = true;
        scheduleSelf(this, SystemClock.uptimeMillis() + 20);
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f4430v = false;
        this.f4429i += (int) ((20.0f / this.f4427d) * 360.0f);
        invalidateSelf();
    }
}
