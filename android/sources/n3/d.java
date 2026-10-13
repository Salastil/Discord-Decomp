package n3;

import android.content.res.Resources;
import android.graphics.drawable.Drawable;

/* loaded from: classes.dex */
public final class d extends Drawable.ConstantState {
    public final Drawable.ConstantState a;

    public d(Drawable.ConstantState constantState) {
        this.a = constantState;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final boolean canApplyTheme() {
        return this.a.canApplyTheme();
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final int getChangingConfigurations() {
        return this.a.getChangingConfigurations();
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable() {
        f fVar = new f(null, 0);
        Drawable newDrawable = this.a.newDrawable();
        fVar.f14790d = newDrawable;
        newDrawable.setCallback(fVar.f14789x);
        return fVar;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable(Resources resources) {
        f fVar = new f(null, 0);
        Drawable newDrawable = this.a.newDrawable(resources);
        fVar.f14790d = newDrawable;
        newDrawable.setCallback(fVar.f14789x);
        return fVar;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable(Resources resources, Resources.Theme theme) {
        f fVar = new f(null, 0);
        Drawable newDrawable = this.a.newDrawable(resources, theme);
        fVar.f14790d = newDrawable;
        newDrawable.setCallback(fVar.f14789x);
        return fVar;
    }
}
