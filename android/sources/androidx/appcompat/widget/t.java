package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.text.InputFilter;
import android.util.AttributeSet;
import android.widget.CheckBox;
import androidx.annotation.NonNull;

/* loaded from: classes.dex */
public class t extends CheckBox implements androidx.core.widget.i {

    /* renamed from: d, reason: collision with root package name */
    public final v f1104d;

    /* renamed from: e, reason: collision with root package name */
    public final AppCompatBackgroundHelper f1105e;

    /* renamed from: i, reason: collision with root package name */
    public final AppCompatTextHelper f1106i;

    /* renamed from: v, reason: collision with root package name */
    public AppCompatEmojiTextHelper f1107v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public t(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        l3.a(context);
        k3.a(this, getContext());
        v vVar = new v(1, this);
        this.f1104d = vVar;
        vVar.c(attributeSet, i5);
        AppCompatBackgroundHelper appCompatBackgroundHelper = new AppCompatBackgroundHelper(this);
        this.f1105e = appCompatBackgroundHelper;
        appCompatBackgroundHelper.d(attributeSet, i5);
        AppCompatTextHelper appCompatTextHelper = new AppCompatTextHelper(this);
        this.f1106i = appCompatTextHelper;
        appCompatTextHelper.f(attributeSet, i5);
        getEmojiTextViewHelper().b(attributeSet, i5);
    }

    @NonNull
    private AppCompatEmojiTextHelper getEmojiTextViewHelper() {
        if (this.f1107v == null) {
            this.f1107v = new AppCompatEmojiTextHelper(this);
        }
        return this.f1107v;
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public void drawableStateChanged() {
        super.drawableStateChanged();
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.a();
        }
        AppCompatTextHelper appCompatTextHelper = this.f1106i;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.b();
        }
    }

    public ColorStateList getSupportBackgroundTintList() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.b();
        }
        return null;
    }

    public PorterDuff.Mode getSupportBackgroundTintMode() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.c();
        }
        return null;
    }

    @Override // androidx.core.widget.i
    public ColorStateList getSupportButtonTintList() {
        v vVar = this.f1104d;
        if (vVar != null) {
            return (ColorStateList) vVar.f1126b;
        }
        return null;
    }

    public PorterDuff.Mode getSupportButtonTintMode() {
        v vVar = this.f1104d;
        if (vVar != null) {
            return (PorterDuff.Mode) vVar.f1127c;
        }
        return null;
    }

    public ColorStateList getSupportCompoundDrawablesTintList() {
        return this.f1106i.d();
    }

    public PorterDuff.Mode getSupportCompoundDrawablesTintMode() {
        return this.f1106i.e();
    }

    @Override // android.widget.TextView
    public void setAllCaps(boolean z5) {
        super.setAllCaps(z5);
        getEmojiTextViewHelper().c(z5);
    }

    @Override // android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        super.setBackgroundDrawable(drawable);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.e();
        }
    }

    @Override // android.view.View
    public void setBackgroundResource(int i5) {
        super.setBackgroundResource(i5);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.f(i5);
        }
    }

    @Override // android.widget.CompoundButton
    public void setButtonDrawable(Drawable drawable) {
        super.setButtonDrawable(drawable);
        v vVar = this.f1104d;
        if (vVar != null) {
            if (vVar.f1130f) {
                vVar.f1130f = false;
            } else {
                vVar.f1130f = true;
                vVar.a();
            }
        }
    }

    @Override // android.widget.TextView
    public void setCompoundDrawables(Drawable drawable, Drawable drawable2, Drawable drawable3, Drawable drawable4) {
        super.setCompoundDrawables(drawable, drawable2, drawable3, drawable4);
        AppCompatTextHelper appCompatTextHelper = this.f1106i;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.b();
        }
    }

    @Override // android.widget.TextView
    public void setCompoundDrawablesRelative(Drawable drawable, Drawable drawable2, Drawable drawable3, Drawable drawable4) {
        super.setCompoundDrawablesRelative(drawable, drawable2, drawable3, drawable4);
        AppCompatTextHelper appCompatTextHelper = this.f1106i;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.b();
        }
    }

    public void setEmojiCompatEnabled(boolean z5) {
        getEmojiTextViewHelper().d(z5);
    }

    @Override // android.widget.TextView
    public void setFilters(@NonNull InputFilter[] inputFilterArr) {
        super.setFilters(getEmojiTextViewHelper().a(inputFilterArr));
    }

    public void setSupportBackgroundTintList(ColorStateList colorStateList) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.h(colorStateList);
        }
    }

    public void setSupportBackgroundTintMode(PorterDuff.Mode mode) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1105e;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.i(mode);
        }
    }

    @Override // androidx.core.widget.i
    public void setSupportButtonTintList(ColorStateList colorStateList) {
        v vVar = this.f1104d;
        if (vVar != null) {
            vVar.f1126b = colorStateList;
            vVar.f1128d = true;
            vVar.a();
        }
    }

    @Override // androidx.core.widget.i
    public void setSupportButtonTintMode(PorterDuff.Mode mode) {
        v vVar = this.f1104d;
        if (vVar != null) {
            vVar.f1127c = mode;
            vVar.f1129e = true;
            vVar.a();
        }
    }

    public void setSupportCompoundDrawablesTintList(ColorStateList colorStateList) {
        AppCompatTextHelper appCompatTextHelper = this.f1106i;
        appCompatTextHelper.l(colorStateList);
        appCompatTextHelper.b();
    }

    public void setSupportCompoundDrawablesTintMode(PorterDuff.Mode mode) {
        AppCompatTextHelper appCompatTextHelper = this.f1106i;
        appCompatTextHelper.m(mode);
        appCompatTextHelper.b();
    }

    @Override // android.widget.CompoundButton
    public void setButtonDrawable(int i5) {
        setButtonDrawable(ys.d.J(getContext(), i5));
    }
}
