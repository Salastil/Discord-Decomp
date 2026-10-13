package yn;

import android.R;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;

/* loaded from: classes3.dex */
public final class d extends StateListDrawable {

    /* renamed from: d, reason: collision with root package name */
    public final int f20991d;

    public d(Drawable drawable, int i5) {
        this.f20991d = i5;
        addState(new int[]{R.attr.state_selected}, drawable);
        addState(new int[0], drawable);
    }

    @Override // android.graphics.drawable.StateListDrawable, android.graphics.drawable.DrawableContainer, android.graphics.drawable.Drawable
    public final boolean isStateful() {
        return true;
    }

    @Override // android.graphics.drawable.StateListDrawable, android.graphics.drawable.DrawableContainer, android.graphics.drawable.Drawable
    public final boolean onStateChange(int[] iArr) {
        boolean z5 = false;
        for (int i5 : iArr) {
            if (i5 == 16842913) {
                z5 = true;
            }
        }
        if (z5) {
            setColorFilter(this.f20991d, PorterDuff.Mode.SRC_ATOP);
        } else {
            clearColorFilter();
        }
        return super.onStateChange(iArr);
    }
}
