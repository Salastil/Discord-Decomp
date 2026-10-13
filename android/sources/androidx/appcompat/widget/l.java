package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.drawable.Drawable;
import com.discord.R;

/* loaded from: classes.dex */
public final class l extends z implements o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ n f1023d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(n nVar, Context context) {
        super(context, null, R.attr.actionOverflowButtonStyle);
        this.f1023d = nVar;
        setClickable(true);
        setFocusable(true);
        setVisibility(0);
        setEnabled(true);
        nt.a.I(this, getContentDescription());
        setOnTouchListener(new k(this, this));
    }

    @Override // androidx.appcompat.widget.o
    public final boolean b() {
        return false;
    }

    @Override // androidx.appcompat.widget.o
    public final boolean c() {
        return false;
    }

    @Override // android.view.View
    public final boolean performClick() {
        if (super.performClick()) {
            return true;
        }
        playSoundEffect(0);
        this.f1023d.n();
        return true;
    }

    @Override // android.widget.ImageView
    public final boolean setFrame(int i5, int i6, int i10, int i11) {
        boolean frame = super.setFrame(i5, i6, i10, i11);
        Drawable drawable = getDrawable();
        Drawable background = getBackground();
        if (drawable != null && background != null) {
            int width = getWidth();
            int height = getHeight();
            int max = Math.max(width, height) / 2;
            int paddingLeft = (width + (getPaddingLeft() - getPaddingRight())) / 2;
            int paddingTop = (height + (getPaddingTop() - getPaddingBottom())) / 2;
            background.setHotspotBounds(paddingLeft - max, paddingTop - max, paddingLeft + max, paddingTop + max);
        }
        return frame;
    }
}
