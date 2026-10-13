package ch;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.Gravity;
import androidx.appcompat.widget.y1;

/* loaded from: classes3.dex */
public abstract class e extends y1 {
    public Drawable M;
    public final Rect N;
    public final Rect O;
    public int P;
    public final boolean Q;
    public boolean R;

    public e(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.N = new Rect();
        this.O = new Rect();
        this.P = 119;
        this.Q = true;
        this.R = false;
        q.a(context, attributeSet, 0, 0);
        int[] iArr = lg.a.f13965p;
        q.b(context, attributeSet, iArr, 0, 0, new int[0]);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr, 0, 0);
        this.P = obtainStyledAttributes.getInt(1, this.P);
        Drawable drawable = obtainStyledAttributes.getDrawable(0);
        if (drawable != null) {
            setForeground(drawable);
        }
        this.Q = obtainStyledAttributes.getBoolean(2, true);
        obtainStyledAttributes.recycle();
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
        super.draw(canvas);
        Drawable drawable = this.M;
        if (drawable != null) {
            if (this.R) {
                this.R = false;
                int right = getRight() - getLeft();
                int bottom = getBottom() - getTop();
                boolean z5 = this.Q;
                Rect rect = this.N;
                if (z5) {
                    rect.set(0, 0, right, bottom);
                } else {
                    rect.set(getPaddingLeft(), getPaddingTop(), right - getPaddingRight(), bottom - getPaddingBottom());
                }
                int i5 = this.P;
                int intrinsicWidth = drawable.getIntrinsicWidth();
                int intrinsicHeight = drawable.getIntrinsicHeight();
                Rect rect2 = this.O;
                Gravity.apply(i5, intrinsicWidth, intrinsicHeight, rect, rect2);
                drawable.setBounds(rect2);
            }
            drawable.draw(canvas);
        }
    }

    @Override // android.view.View
    public final void drawableHotspotChanged(float f2, float f10) {
        super.drawableHotspotChanged(f2, f10);
        Drawable drawable = this.M;
        if (drawable != null) {
            drawable.setHotspot(f2, f10);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable drawable = this.M;
        if (drawable == null || !drawable.isStateful()) {
            return;
        }
        this.M.setState(getDrawableState());
    }

    @Override // android.view.View
    public Drawable getForeground() {
        return this.M;
    }

    @Override // android.view.View
    public int getForegroundGravity() {
        return this.P;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable drawable = this.M;
        if (drawable != null) {
            drawable.jumpToCurrentState();
        }
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        this.R = z5 | this.R;
    }

    @Override // android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        this.R = true;
    }

    @Override // android.view.View
    public void setForeground(Drawable drawable) {
        Drawable drawable2 = this.M;
        if (drawable2 != drawable) {
            if (drawable2 != null) {
                drawable2.setCallback(null);
                unscheduleDrawable(this.M);
            }
            this.M = drawable;
            this.R = true;
            if (drawable != null) {
                setWillNotDraw(false);
                drawable.setCallback(this);
                if (drawable.isStateful()) {
                    drawable.setState(getDrawableState());
                }
                if (this.P == 119) {
                    drawable.getPadding(new Rect());
                }
            } else {
                setWillNotDraw(true);
            }
            requestLayout();
            invalidate();
        }
    }

    @Override // android.view.View
    public void setForegroundGravity(int i5) {
        if (this.P != i5) {
            if ((8388615 & i5) == 0) {
                i5 |= 8388611;
            }
            if ((i5 & 112) == 0) {
                i5 |= 48;
            }
            this.P = i5;
            if (i5 == 119 && this.M != null) {
                this.M.getPadding(new Rect());
            }
            requestLayout();
        }
    }

    @Override // android.view.View
    public final boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.M;
    }
}
