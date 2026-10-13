package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.widget.SeekBar;
import com.discord.R;

/* loaded from: classes.dex */
public class g0 extends SeekBar {

    /* renamed from: d, reason: collision with root package name */
    public final h0 f980d;

    public g0(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.seekBarStyle);
        k3.a(this, getContext());
        h0 h0Var = new h0(this);
        this.f980d = h0Var;
        h0Var.a(attributeSet, R.attr.seekBarStyle);
    }

    @Override // android.widget.AbsSeekBar, android.widget.ProgressBar, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        h0 h0Var = this.f980d;
        g0 g0Var = h0Var.f1004d;
        Drawable drawable = h0Var.f1005e;
        if (drawable != null && drawable.isStateful() && drawable.setState(g0Var.getDrawableState())) {
            g0Var.invalidateDrawable(drawable);
        }
    }

    @Override // android.widget.AbsSeekBar, android.widget.ProgressBar, android.view.View
    public final void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable drawable = this.f980d.f1005e;
        if (drawable != null) {
            drawable.jumpToCurrentState();
        }
    }

    @Override // android.widget.AbsSeekBar, android.widget.ProgressBar, android.view.View
    public final synchronized void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        this.f980d.d(canvas);
    }
}
