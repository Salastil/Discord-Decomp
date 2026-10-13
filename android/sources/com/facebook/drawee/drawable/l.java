package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends k {
    @Override // com.facebook.drawee.drawable.k, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        ta.a.D();
        if (!this.f4458e && !this.f4459i && this.f4460v <= 0.0f) {
            super.draw(canvas);
            ta.a.D();
            return;
        }
        i();
        h();
        canvas.clipPath(this.f4461w);
        super.draw(canvas);
        ta.a.D();
    }
}
