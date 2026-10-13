package androidx.appcompat.widget;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.ThemedSpinnerAdapter;
import androidx.appcompat.view.ContextThemeWrapper;

/* loaded from: classes.dex */
public final class s0 extends Spinner {
    public static final int[] F = {R.attr.spinnerMode};
    public final Rect E;

    /* renamed from: d, reason: collision with root package name */
    public final AppCompatBackgroundHelper f1094d;

    /* renamed from: e, reason: collision with root package name */
    public final Context f1095e;

    /* renamed from: i, reason: collision with root package name */
    public final i0 f1096i;

    /* renamed from: v, reason: collision with root package name */
    public SpinnerAdapter f1097v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f1098w;

    /* renamed from: x, reason: collision with root package name */
    public final r0 f1099x;

    /* renamed from: y, reason: collision with root package name */
    public int f1100y;

    /* JADX WARN: Code restructure failed: missing block: B:29:0x0060, code lost:
    
        if (r7 == null) goto L24;
     */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00d7  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public s0(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, com.discord.R.attr.spinnerStyle);
        TypedArray typedArray;
        this.E = new Rect();
        k3.a(this, getContext());
        int[] iArr = h.a.f9464v;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, com.discord.R.attr.spinnerStyle);
        TypedArray typedArray2 = (TypedArray) b02.f7964i;
        this.f1094d = new AppCompatBackgroundHelper(this);
        int resourceId = typedArray2.getResourceId(4, 0);
        if (resourceId != 0) {
            this.f1095e = new ContextThemeWrapper(context, resourceId);
        } else {
            this.f1095e = context;
        }
        int i5 = -1;
        TypedArray typedArray3 = null;
        try {
            typedArray = context.obtainStyledAttributes(attributeSet, F, com.discord.R.attr.spinnerStyle, 0);
            try {
                try {
                    if (typedArray.hasValue(0)) {
                        i5 = typedArray.getInt(0, 0);
                    }
                } catch (Exception e9) {
                    e = e9;
                    Log.i("AppCompatSpinner", "Could not read android:spinnerMode", e);
                }
            } catch (Throwable th2) {
                th = th2;
                typedArray3 = typedArray;
                if (typedArray3 != null) {
                    typedArray3.recycle();
                }
                throw th;
            }
        } catch (Exception e10) {
            e = e10;
            typedArray = null;
        } catch (Throwable th3) {
            th = th3;
            if (typedArray3 != null) {
            }
            throw th;
        }
        typedArray.recycle();
        if (i5 == 0) {
            l0 l0Var = new l0(this);
            this.f1099x = l0Var;
            l0Var.f1026i = typedArray2.getString(2);
        } else if (i5 == 1) {
            p0 p0Var = new p0(this, this.f1095e, attributeSet);
            e4.m b03 = e4.m.b0(this.f1095e, attributeSet, iArr, com.discord.R.attr.spinnerStyle);
            this.f1100y = ((TypedArray) b03.f7964i).getLayoutDimension(3, -2);
            p0Var.f(b03.U(1));
            p0Var.Z = typedArray2.getString(2);
            b03.e0();
            this.f1099x = p0Var;
            this.f1096i = new i0(this, this, p0Var);
        }
        CharSequence[] textArray = typedArray2.getTextArray(0);
        if (textArray != null) {
            ArrayAdapter arrayAdapter = new ArrayAdapter(context, R.layout.simple_spinner_item, textArray);
            arrayAdapter.setDropDownViewResource(com.discord.R.layout.support_simple_spinner_dropdown_item);
            setAdapter((SpinnerAdapter) arrayAdapter);
        }
        b02.e0();
        this.f1098w = true;
        SpinnerAdapter spinnerAdapter = this.f1097v;
        if (spinnerAdapter != null) {
            setAdapter(spinnerAdapter);
            this.f1097v = null;
        }
        this.f1094d.d(attributeSet, com.discord.R.attr.spinnerStyle);
    }

    public final int a(SpinnerAdapter spinnerAdapter, Drawable drawable) {
        int i5 = 0;
        if (spinnerAdapter == null) {
            return 0;
        }
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 0);
        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 0);
        int max = Math.max(0, getSelectedItemPosition());
        int min = Math.min(spinnerAdapter.getCount(), max + 15);
        View view = null;
        int i6 = 0;
        for (int max2 = Math.max(0, max - (15 - (min - max))); max2 < min; max2++) {
            int itemViewType = spinnerAdapter.getItemViewType(max2);
            if (itemViewType != i5) {
                view = null;
                i5 = itemViewType;
            }
            view = spinnerAdapter.getView(max2, view, this);
            if (view.getLayoutParams() == null) {
                view.setLayoutParams(new ViewGroup.LayoutParams(-2, -2));
            }
            view.measure(makeMeasureSpec, makeMeasureSpec2);
            i6 = Math.max(i6, view.getMeasuredWidth());
        }
        if (drawable == null) {
            return i6;
        }
        Rect rect = this.E;
        drawable.getPadding(rect);
        return rect.left + rect.right + i6;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.a();
        }
    }

    @Override // android.widget.Spinner
    public int getDropDownHorizontalOffset() {
        r0 r0Var = this.f1099x;
        return r0Var != null ? r0Var.a() : super.getDropDownHorizontalOffset();
    }

    @Override // android.widget.Spinner
    public int getDropDownVerticalOffset() {
        r0 r0Var = this.f1099x;
        return r0Var != null ? r0Var.l() : super.getDropDownVerticalOffset();
    }

    @Override // android.widget.Spinner
    public int getDropDownWidth() {
        return this.f1099x != null ? this.f1100y : super.getDropDownWidth();
    }

    public final r0 getInternalPopup() {
        return this.f1099x;
    }

    @Override // android.widget.Spinner
    public Drawable getPopupBackground() {
        r0 r0Var = this.f1099x;
        return r0Var != null ? r0Var.d() : super.getPopupBackground();
    }

    @Override // android.widget.Spinner
    public Context getPopupContext() {
        return this.f1095e;
    }

    @Override // android.widget.Spinner
    public CharSequence getPrompt() {
        r0 r0Var = this.f1099x;
        return r0Var != null ? r0Var.c() : super.getPrompt();
    }

    public ColorStateList getSupportBackgroundTintList() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.b();
        }
        return null;
    }

    public PorterDuff.Mode getSupportBackgroundTintMode() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.c();
        }
        return null;
    }

    @Override // android.widget.Spinner, android.widget.AdapterView, android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        r0 r0Var = this.f1099x;
        if (r0Var == null || !r0Var.isShowing()) {
            return;
        }
        r0Var.dismiss();
    }

    @Override // android.widget.Spinner, android.widget.AbsSpinner, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        if (this.f1099x == null || View.MeasureSpec.getMode(i5) != Integer.MIN_VALUE) {
            return;
        }
        setMeasuredDimension(Math.min(Math.max(getMeasuredWidth(), a(getAdapter(), getBackground())), View.MeasureSpec.getSize(i5)), getMeasuredHeight());
    }

    @Override // android.widget.Spinner, android.widget.AbsSpinner, android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        ViewTreeObserver viewTreeObserver;
        q0 q0Var = (q0) parcelable;
        super.onRestoreInstanceState(q0Var.getSuperState());
        if (!q0Var.f1080d || (viewTreeObserver = getViewTreeObserver()) == null) {
            return;
        }
        viewTreeObserver.addOnGlobalLayoutListener(new j0(0, this));
    }

    @Override // android.widget.Spinner, android.widget.AbsSpinner, android.view.View
    public final Parcelable onSaveInstanceState() {
        q0 q0Var = new q0(super.onSaveInstanceState());
        r0 r0Var = this.f1099x;
        q0Var.f1080d = r0Var != null && r0Var.isShowing();
        return q0Var;
    }

    @Override // android.widget.Spinner, android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        i0 i0Var = this.f1096i;
        if (i0Var == null || !i0Var.onTouch(this, motionEvent)) {
            return super.onTouchEvent(motionEvent);
        }
        return true;
    }

    @Override // android.widget.Spinner, android.view.View
    public final boolean performClick() {
        r0 r0Var = this.f1099x;
        if (r0Var == null) {
            return super.performClick();
        }
        if (r0Var.isShowing()) {
            return true;
        }
        r0Var.k(getTextDirection(), getTextAlignment());
        return true;
    }

    @Override // android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        super.setBackgroundDrawable(drawable);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.e();
        }
    }

    @Override // android.view.View
    public void setBackgroundResource(int i5) {
        super.setBackgroundResource(i5);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.f(i5);
        }
    }

    @Override // android.widget.Spinner
    public void setDropDownHorizontalOffset(int i5) {
        r0 r0Var = this.f1099x;
        if (r0Var == null) {
            super.setDropDownHorizontalOffset(i5);
        } else {
            r0Var.j(i5);
            r0Var.b(i5);
        }
    }

    @Override // android.widget.Spinner
    public void setDropDownVerticalOffset(int i5) {
        r0 r0Var = this.f1099x;
        if (r0Var != null) {
            r0Var.i(i5);
        } else {
            super.setDropDownVerticalOffset(i5);
        }
    }

    @Override // android.widget.Spinner
    public void setDropDownWidth(int i5) {
        if (this.f1099x != null) {
            this.f1100y = i5;
        } else {
            super.setDropDownWidth(i5);
        }
    }

    @Override // android.widget.Spinner
    public void setPopupBackgroundDrawable(Drawable drawable) {
        r0 r0Var = this.f1099x;
        if (r0Var != null) {
            r0Var.f(drawable);
        } else {
            super.setPopupBackgroundDrawable(drawable);
        }
    }

    @Override // android.widget.Spinner
    public void setPopupBackgroundResource(int i5) {
        setPopupBackgroundDrawable(ys.d.J(getPopupContext(), i5));
    }

    @Override // android.widget.Spinner
    public void setPrompt(CharSequence charSequence) {
        r0 r0Var = this.f1099x;
        if (r0Var != null) {
            r0Var.e(charSequence);
        } else {
            super.setPrompt(charSequence);
        }
    }

    public void setSupportBackgroundTintList(ColorStateList colorStateList) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.h(colorStateList);
        }
    }

    public void setSupportBackgroundTintMode(PorterDuff.Mode mode) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1094d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.i(mode);
        }
    }

    @Override // android.widget.AdapterView
    public void setAdapter(SpinnerAdapter spinnerAdapter) {
        if (!this.f1098w) {
            this.f1097v = spinnerAdapter;
            return;
        }
        super.setAdapter(spinnerAdapter);
        r0 r0Var = this.f1099x;
        if (r0Var != null) {
            Context context = this.f1095e;
            if (context == null) {
                context = getContext();
            }
            Resources.Theme theme = context.getTheme();
            m0 m0Var = new m0();
            m0Var.f1034d = spinnerAdapter;
            if (spinnerAdapter instanceof ListAdapter) {
                m0Var.f1035e = (ListAdapter) spinnerAdapter;
            }
            if (theme != null && (spinnerAdapter instanceof ThemedSpinnerAdapter)) {
                k0.a((ThemedSpinnerAdapter) spinnerAdapter, theme);
            }
            r0Var.m(m0Var);
        }
    }
}
