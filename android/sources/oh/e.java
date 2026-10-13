package oh;

import android.graphics.RectF;
import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public final class e extends lh.g {

    /* renamed from: r, reason: collision with root package name */
    public final RectF f15897r;

    public e(lh.m mVar, RectF rectF) {
        super(mVar);
        this.f15897r = rectF;
    }

    @Override // lh.g, android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable() {
        f fVar = new f(this);
        fVar.f15899e0 = this;
        fVar.invalidateSelf();
        return fVar;
    }

    public e(e eVar) {
        super(eVar);
        this.f15897r = eVar.f15897r;
    }
}
