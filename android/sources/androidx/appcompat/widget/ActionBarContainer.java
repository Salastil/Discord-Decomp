package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.ActionMode;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;

/* loaded from: classes.dex */
public class ActionBarContainer extends FrameLayout {
    public boolean E;
    public final int F;

    /* renamed from: d, reason: collision with root package name */
    public boolean f822d;

    /* renamed from: e, reason: collision with root package name */
    public View f823e;

    /* renamed from: i, reason: collision with root package name */
    public View f824i;

    /* renamed from: v, reason: collision with root package name */
    public Drawable f825v;

    /* renamed from: w, reason: collision with root package name */
    public Drawable f826w;

    /* renamed from: x, reason: collision with root package name */
    public Drawable f827x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f828y;

    public ActionBarContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setBackground(new a(this));
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.a);
        boolean z5 = false;
        this.f825v = obtainStyledAttributes.getDrawable(0);
        this.f826w = obtainStyledAttributes.getDrawable(2);
        this.F = obtainStyledAttributes.getDimensionPixelSize(13, -1);
        if (getId() == R.id.split_action_bar) {
            this.f828y = true;
            this.f827x = obtainStyledAttributes.getDrawable(1);
        }
        obtainStyledAttributes.recycle();
        if (!this.f828y ? !(this.f825v != null || this.f826w != null) : this.f827x == null) {
            z5 = true;
        }
        setWillNotDraw(z5);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable drawable = this.f825v;
        if (drawable != null && drawable.isStateful()) {
            this.f825v.setState(getDrawableState());
        }
        Drawable drawable2 = this.f826w;
        if (drawable2 != null && drawable2.isStateful()) {
            this.f826w.setState(getDrawableState());
        }
        Drawable drawable3 = this.f827x;
        if (drawable3 == null || !drawable3.isStateful()) {
            return;
        }
        this.f827x.setState(getDrawableState());
    }

    public View getTabContainer() {
        return null;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable drawable = this.f825v;
        if (drawable != null) {
            drawable.jumpToCurrentState();
        }
        Drawable drawable2 = this.f826w;
        if (drawable2 != null) {
            drawable2.jumpToCurrentState();
        }
        Drawable drawable3 = this.f827x;
        if (drawable3 != null) {
            drawable3.jumpToCurrentState();
        }
    }

    @Override // android.view.View
    public final void onFinishInflate() {
        super.onFinishInflate();
        this.f823e = findViewById(R.id.action_bar);
        this.f824i = findViewById(R.id.action_context_bar);
    }

    @Override // android.view.View
    public final boolean onHoverEvent(MotionEvent motionEvent) {
        super.onHoverEvent(motionEvent);
        return true;
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        return this.f822d || super.onInterceptTouchEvent(motionEvent);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        boolean z6 = true;
        if (this.f828y) {
            Drawable drawable = this.f827x;
            if (drawable != null) {
                drawable.setBounds(0, 0, getMeasuredWidth(), getMeasuredHeight());
            } else {
                z6 = false;
            }
        } else {
            if (this.f825v == null) {
                z6 = false;
            } else if (this.f823e.getVisibility() == 0) {
                this.f825v.setBounds(this.f823e.getLeft(), this.f823e.getTop(), this.f823e.getRight(), this.f823e.getBottom());
            } else {
                View view = this.f824i;
                if (view == null || view.getVisibility() != 0) {
                    this.f825v.setBounds(0, 0, 0, 0);
                } else {
                    this.f825v.setBounds(this.f824i.getLeft(), this.f824i.getTop(), this.f824i.getRight(), this.f824i.getBottom());
                }
            }
            this.E = false;
        }
        if (z6) {
            invalidate();
        }
    }

    @Override // android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        if (this.f823e == null && View.MeasureSpec.getMode(i6) == Integer.MIN_VALUE && (i10 = this.F) >= 0) {
            i6 = View.MeasureSpec.makeMeasureSpec(Math.min(i10, View.MeasureSpec.getSize(i6)), Integer.MIN_VALUE);
        }
        super.onMeasure(i5, i6);
        if (this.f823e == null) {
            return;
        }
        View.MeasureSpec.getMode(i6);
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        super.onTouchEvent(motionEvent);
        return true;
    }

    public void setPrimaryBackground(Drawable drawable) {
        Drawable drawable2 = this.f825v;
        if (drawable2 != null) {
            drawable2.setCallback(null);
            unscheduleDrawable(this.f825v);
        }
        this.f825v = drawable;
        if (drawable != null) {
            drawable.setCallback(this);
            View view = this.f823e;
            if (view != null) {
                this.f825v.setBounds(view.getLeft(), this.f823e.getTop(), this.f823e.getRight(), this.f823e.getBottom());
            }
        }
        boolean z5 = false;
        if (!this.f828y ? !(this.f825v != null || this.f826w != null) : this.f827x == null) {
            z5 = true;
        }
        setWillNotDraw(z5);
        invalidate();
        invalidateOutline();
    }

    public void setSplitBackground(Drawable drawable) {
        Drawable drawable2;
        Drawable drawable3 = this.f827x;
        if (drawable3 != null) {
            drawable3.setCallback(null);
            unscheduleDrawable(this.f827x);
        }
        this.f827x = drawable;
        boolean z5 = this.f828y;
        boolean z6 = false;
        if (drawable != null) {
            drawable.setCallback(this);
            if (z5 && (drawable2 = this.f827x) != null) {
                drawable2.setBounds(0, 0, getMeasuredWidth(), getMeasuredHeight());
            }
        }
        if (!z5 ? !(this.f825v != null || this.f826w != null) : this.f827x == null) {
            z6 = true;
        }
        setWillNotDraw(z6);
        invalidate();
        invalidateOutline();
    }

    public void setStackedBackground(Drawable drawable) {
        Drawable drawable2 = this.f826w;
        if (drawable2 != null) {
            drawable2.setCallback(null);
            unscheduleDrawable(this.f826w);
        }
        this.f826w = drawable;
        if (drawable != null) {
            drawable.setCallback(this);
            if (this.E && this.f826w != null) {
                throw null;
            }
        }
        boolean z5 = false;
        if (!this.f828y ? !(this.f825v != null || this.f826w != null) : this.f827x == null) {
            z5 = true;
        }
        setWillNotDraw(z5);
        invalidate();
        invalidateOutline();
    }

    public void setTabContainer(q2 q2Var) {
    }

    public void setTransitioning(boolean z5) {
        this.f822d = z5;
        setDescendantFocusability(z5 ? 393216 : KeyCommandDescriptor.ModifierFlags.CONTROL);
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        super.setVisibility(i5);
        boolean z5 = i5 == 0;
        Drawable drawable = this.f825v;
        if (drawable != null) {
            drawable.setVisible(z5, false);
        }
        Drawable drawable2 = this.f826w;
        if (drawable2 != null) {
            drawable2.setVisible(z5, false);
        }
        Drawable drawable3 = this.f827x;
        if (drawable3 != null) {
            drawable3.setVisible(z5, false);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final ActionMode startActionModeForChild(View view, ActionMode.Callback callback) {
        return null;
    }

    @Override // android.view.View
    public final boolean verifyDrawable(Drawable drawable) {
        Drawable drawable2 = this.f825v;
        boolean z5 = this.f828y;
        if (drawable == drawable2 && !z5) {
            return true;
        }
        if (drawable == this.f826w && this.E) {
            return true;
        }
        return (drawable == this.f827x && z5) || super.verifyDrawable(drawable);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final ActionMode startActionModeForChild(View view, ActionMode.Callback callback, int i5) {
        if (i5 != 0) {
            return super.startActionModeForChild(view, callback, i5);
        }
        return null;
    }
}
