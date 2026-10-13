package oh;

import android.graphics.RectF;
import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public abstract class g extends lh.i {

    /* renamed from: f0, reason: collision with root package name */
    public static final /* synthetic */ int f15898f0 = 0;

    /* renamed from: e0, reason: collision with root package name */
    public e f15899e0;

    @Override // lh.i, android.graphics.drawable.Drawable
    public final Drawable mutate() {
        this.f15899e0 = new e(this.f15899e0);
        return this;
    }

    public final void y(float f2, float f10, float f11, float f12) {
        RectF rectF = this.f15899e0.f15897r;
        if (f2 == rectF.left && f10 == rectF.top && f11 == rectF.right && f12 == rectF.bottom) {
            return;
        }
        rectF.set(f2, f10, f11, f12);
        invalidateSelf();
    }
}
