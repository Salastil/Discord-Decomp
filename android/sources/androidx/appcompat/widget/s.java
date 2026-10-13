package androidx.appcompat.widget;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.text.InputFilter;
import android.util.AttributeSet;
import android.view.ActionMode;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.Button;
import androidx.annotation.NonNull;

/* loaded from: classes.dex */
public class s extends Button {

    /* renamed from: d, reason: collision with root package name */
    public final AppCompatBackgroundHelper f1091d;

    /* renamed from: e, reason: collision with root package name */
    public final AppCompatTextHelper f1092e;

    /* renamed from: i, reason: collision with root package name */
    public AppCompatEmojiTextHelper f1093i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        l3.a(context);
        k3.a(this, getContext());
        AppCompatBackgroundHelper appCompatBackgroundHelper = new AppCompatBackgroundHelper(this);
        this.f1091d = appCompatBackgroundHelper;
        appCompatBackgroundHelper.d(attributeSet, i5);
        AppCompatTextHelper appCompatTextHelper = new AppCompatTextHelper(this);
        this.f1092e = appCompatTextHelper;
        appCompatTextHelper.f(attributeSet, i5);
        appCompatTextHelper.b();
        getEmojiTextViewHelper().b(attributeSet, i5);
    }

    @NonNull
    private AppCompatEmojiTextHelper getEmojiTextViewHelper() {
        if (this.f1093i == null) {
            this.f1093i = new AppCompatEmojiTextHelper(this);
        }
        return this.f1093i;
    }

    @Override // android.widget.TextView, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.a();
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.b();
        }
    }

    @Override // android.widget.TextView
    public int getAutoSizeMaxTextSize() {
        if (f4.f979c) {
            return super.getAutoSizeMaxTextSize();
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            return Math.round(appCompatTextHelper.f865i.f986e);
        }
        return -1;
    }

    @Override // android.widget.TextView
    public int getAutoSizeMinTextSize() {
        if (f4.f979c) {
            return super.getAutoSizeMinTextSize();
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            return Math.round(appCompatTextHelper.f865i.f985d);
        }
        return -1;
    }

    @Override // android.widget.TextView
    public int getAutoSizeStepGranularity() {
        if (f4.f979c) {
            return super.getAutoSizeStepGranularity();
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            return Math.round(appCompatTextHelper.f865i.f984c);
        }
        return -1;
    }

    @Override // android.widget.TextView
    public int[] getAutoSizeTextAvailableSizes() {
        if (f4.f979c) {
            return super.getAutoSizeTextAvailableSizes();
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        return appCompatTextHelper != null ? appCompatTextHelper.f865i.f987f : new int[0];
    }

    @Override // android.widget.TextView
    @SuppressLint({"WrongConstant"})
    public int getAutoSizeTextType() {
        if (f4.f979c) {
            return super.getAutoSizeTextType() == 1 ? 1 : 0;
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            return appCompatTextHelper.f865i.a;
        }
        return 0;
    }

    @Override // android.widget.TextView
    public ActionMode.Callback getCustomSelectionActionModeCallback() {
        return androidx.core.widget.h.e(super.getCustomSelectionActionModeCallback());
    }

    public ColorStateList getSupportBackgroundTintList() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.b();
        }
        return null;
    }

    public PorterDuff.Mode getSupportBackgroundTintMode() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.c();
        }
        return null;
    }

    public ColorStateList getSupportCompoundDrawablesTintList() {
        return this.f1092e.d();
    }

    public PorterDuff.Mode getSupportCompoundDrawablesTintMode() {
        return this.f1092e.e();
    }

    @Override // android.view.View
    public void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        accessibilityEvent.setClassName(Button.class.getName());
    }

    @Override // android.view.View
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName(Button.class.getName());
    }

    @Override // android.widget.TextView, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper == null || f4.f979c) {
            return;
        }
        appCompatTextHelper.f865i.a();
    }

    @Override // android.widget.TextView
    public void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        super.onTextChanged(charSequence, i5, i6, i10);
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            g1 g1Var = appCompatTextHelper.f865i;
            if (f4.f979c || !g1Var.f()) {
                return;
            }
            g1Var.a();
        }
    }

    @Override // android.widget.TextView
    public void setAllCaps(boolean z5) {
        super.setAllCaps(z5);
        getEmojiTextViewHelper().c(z5);
    }

    @Override // android.widget.TextView
    public final void setAutoSizeTextTypeUniformWithConfiguration(int i5, int i6, int i10, int i11) {
        if (f4.f979c) {
            super.setAutoSizeTextTypeUniformWithConfiguration(i5, i6, i10, i11);
            return;
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.i(i5, i6, i10, i11);
        }
    }

    @Override // android.widget.TextView
    public final void setAutoSizeTextTypeUniformWithPresetSizes(int[] iArr, int i5) {
        if (f4.f979c) {
            super.setAutoSizeTextTypeUniformWithPresetSizes(iArr, i5);
            return;
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.j(iArr, i5);
        }
    }

    @Override // android.widget.TextView
    public void setAutoSizeTextTypeWithDefaults(int i5) {
        if (f4.f979c) {
            super.setAutoSizeTextTypeWithDefaults(i5);
            return;
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.k(i5);
        }
    }

    @Override // android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        super.setBackgroundDrawable(drawable);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.e();
        }
    }

    @Override // android.view.View
    public void setBackgroundResource(int i5) {
        super.setBackgroundResource(i5);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.f(i5);
        }
    }

    @Override // android.widget.TextView
    public void setCustomSelectionActionModeCallback(ActionMode.Callback callback) {
        super.setCustomSelectionActionModeCallback(androidx.core.widget.h.f(callback, this));
    }

    public void setEmojiCompatEnabled(boolean z5) {
        getEmojiTextViewHelper().d(z5);
    }

    @Override // android.widget.TextView
    public void setFilters(@NonNull InputFilter[] inputFilterArr) {
        super.setFilters(getEmojiTextViewHelper().a(inputFilterArr));
    }

    public void setSupportAllCaps(boolean z5) {
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.a.setAllCaps(z5);
        }
    }

    public void setSupportBackgroundTintList(ColorStateList colorStateList) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.h(colorStateList);
        }
    }

    public void setSupportBackgroundTintMode(PorterDuff.Mode mode) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1091d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.i(mode);
        }
    }

    public void setSupportCompoundDrawablesTintList(ColorStateList colorStateList) {
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        appCompatTextHelper.l(colorStateList);
        appCompatTextHelper.b();
    }

    public void setSupportCompoundDrawablesTintMode(PorterDuff.Mode mode) {
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        appCompatTextHelper.m(mode);
        appCompatTextHelper.b();
    }

    @Override // android.widget.TextView
    public final void setTextAppearance(Context context, int i5) {
        super.setTextAppearance(context, i5);
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            appCompatTextHelper.g(context, i5);
        }
    }

    @Override // android.widget.TextView
    public final void setTextSize(int i5, float f2) {
        boolean z5 = f4.f979c;
        if (z5) {
            super.setTextSize(i5, f2);
            return;
        }
        AppCompatTextHelper appCompatTextHelper = this.f1092e;
        if (appCompatTextHelper != null) {
            g1 g1Var = appCompatTextHelper.f865i;
            if (z5 || g1Var.f()) {
                return;
            }
            g1Var.g(f2, i5);
        }
    }
}
