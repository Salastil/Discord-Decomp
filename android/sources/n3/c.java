package n3;

import android.animation.AnimatorSet;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class c extends Drawable.ConstantState {
    public p a;

    /* renamed from: b, reason: collision with root package name */
    public AnimatorSet f14782b;

    /* renamed from: c, reason: collision with root package name */
    public ArrayList f14783c;

    /* renamed from: d, reason: collision with root package name */
    public s.e f14784d;

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final int getChangingConfigurations() {
        return 0;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable() {
        throw new IllegalStateException("No constant state support for SDK < 24.");
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable(Resources resources) {
        throw new IllegalStateException("No constant state support for SDK < 24.");
    }
}
