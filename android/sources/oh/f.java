package oh;

import android.graphics.Canvas;
import android.graphics.Region;
import android.os.Build;

/* loaded from: classes3.dex */
public final class f extends g {
    @Override // lh.i
    public final void g(Canvas canvas) {
        if (this.f15899e0.f15897r.isEmpty()) {
            super.g(canvas);
            return;
        }
        canvas.save();
        if (Build.VERSION.SDK_INT >= 26) {
            canvas.clipOutRect(this.f15899e0.f15897r);
        } else {
            canvas.clipRect(this.f15899e0.f15897r, Region.Op.DIFFERENCE);
        }
        super.g(canvas);
        canvas.restore();
    }
}
