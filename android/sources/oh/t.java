package oh;

import a5.k0;
import android.accessibilityservice.AccessibilityServiceInfo;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityManager;
import android.widget.AdapterView;
import android.widget.Filterable;
import android.widget.ListAdapter;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.g2;
import androidx.appcompat.widget.n0;
import com.discord.R;
import com.google.android.material.textfield.TextInputLayout;
import java.util.List;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class t extends androidx.appcompat.widget.r {
    public final int E;
    public final float F;
    public ColorStateList G;
    public int H;
    public ColorStateList I;

    /* renamed from: w, reason: collision with root package name */
    public final g2 f15954w;

    /* renamed from: x, reason: collision with root package name */
    public final AccessibilityManager f15955x;

    /* renamed from: y, reason: collision with root package name */
    public final Rect f15956y;

    public t(Context context, AttributeSet attributeSet) {
        super(ph.a.a(context, attributeSet, R.attr.autoCompleteTextViewStyle, 0), attributeSet);
        this.f15956y = new Rect();
        Context context2 = getContext();
        TypedArray f2 = ch.q.f(context2, attributeSet, lg.a.f13966q, R.attr.autoCompleteTextViewStyle, R.style.Widget_AppCompat_AutoCompleteTextView, new int[0]);
        if (f2.hasValue(0) && f2.getInt(0, 0) == 0) {
            setKeyListener(null);
        }
        this.E = f2.getResourceId(3, R.layout.mtrl_auto_complete_simple_item);
        this.F = f2.getDimensionPixelOffset(1, R.dimen.mtrl_exposed_dropdown_menu_popup_elevation);
        if (f2.hasValue(2)) {
            this.G = ColorStateList.valueOf(f2.getColor(2, 0));
        }
        this.H = f2.getColor(4, 0);
        this.I = k0.u(context2, f2, 5);
        this.f15955x = (AccessibilityManager) context2.getSystemService("accessibility");
        g2 g2Var = new g2(context2, null, R.attr.listPopupWindowStyle, 0);
        this.f15954w = g2Var;
        g2Var.V = true;
        g2Var.W.setFocusable(true);
        g2Var.L = this;
        g2Var.W.setInputMethodMode(2);
        g2Var.m(getAdapter());
        g2Var.M = new n0(2, this);
        if (f2.hasValue(6)) {
            setSimpleItems(f2.getResourceId(6, 0));
        }
        f2.recycle();
    }

    public final TextInputLayout b() {
        for (ViewParent parent = getParent(); parent != null; parent = parent.getParent()) {
            if (parent instanceof TextInputLayout) {
                return (TextInputLayout) parent;
            }
        }
        return null;
    }

    public final boolean c() {
        List<AccessibilityServiceInfo> enabledAccessibilityServiceList;
        AccessibilityManager accessibilityManager = this.f15955x;
        if (accessibilityManager != null && accessibilityManager.isTouchExplorationEnabled()) {
            return true;
        }
        if (accessibilityManager == null || !accessibilityManager.isEnabled() || (enabledAccessibilityServiceList = accessibilityManager.getEnabledAccessibilityServiceList(16)) == null) {
            return false;
        }
        for (AccessibilityServiceInfo accessibilityServiceInfo : enabledAccessibilityServiceList) {
            if (accessibilityServiceInfo.getSettingsActivityName() != null && accessibilityServiceInfo.getSettingsActivityName().contains("SwitchAccess")) {
                return true;
            }
        }
        return false;
    }

    @Override // android.widget.AutoCompleteTextView
    public final void dismissDropDown() {
        if (c()) {
            this.f15954w.dismiss();
        } else {
            super.dismissDropDown();
        }
    }

    public ColorStateList getDropDownBackgroundTintList() {
        return this.G;
    }

    @Override // android.widget.TextView
    public CharSequence getHint() {
        TextInputLayout b10 = b();
        return (b10 == null || !b10.f6120f0) ? super.getHint() : b10.getHint();
    }

    public float getPopupElevation() {
        return this.F;
    }

    public int getSimpleItemSelectedColor() {
        return this.H;
    }

    public ColorStateList getSimpleItemSelectedRippleColor() {
        return this.I;
    }

    @Override // android.widget.AutoCompleteTextView, android.widget.TextView, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        TextInputLayout b10 = b();
        if (b10 != null && b10.f6120f0 && super.getHint() == null) {
            String str = Build.MANUFACTURER;
            if ((str != null ? str.toLowerCase(Locale.ENGLISH) : "").equals("meizu")) {
                setHint("");
            }
        }
    }

    @Override // android.widget.AutoCompleteTextView, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.f15954w.dismiss();
    }

    @Override // android.widget.TextView, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        if (View.MeasureSpec.getMode(i5) == Integer.MIN_VALUE) {
            int measuredWidth = getMeasuredWidth();
            ListAdapter adapter = getAdapter();
            TextInputLayout b10 = b();
            int i10 = 0;
            if (adapter != null && b10 != null) {
                int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 0);
                int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 0);
                g2 g2Var = this.f15954w;
                int min = Math.min(adapter.getCount(), Math.max(0, !g2Var.W.isShowing() ? -1 : g2Var.f993i.getSelectedItemPosition()) + 15);
                View view = null;
                int i11 = 0;
                for (int max = Math.max(0, min - 15); max < min; max++) {
                    int itemViewType = adapter.getItemViewType(max);
                    if (itemViewType != i10) {
                        view = null;
                        i10 = itemViewType;
                    }
                    view = adapter.getView(max, view, b10);
                    if (view.getLayoutParams() == null) {
                        view.setLayoutParams(new ViewGroup.LayoutParams(-2, -2));
                    }
                    view.measure(makeMeasureSpec, makeMeasureSpec2);
                    i11 = Math.max(i11, view.getMeasuredWidth());
                }
                Drawable background = g2Var.W.getBackground();
                if (background != null) {
                    Rect rect = this.f15956y;
                    background.getPadding(rect);
                    i11 += rect.left + rect.right;
                }
                i10 = b10.getEndIconView().getMeasuredWidth() + i11;
            }
            setMeasuredDimension(Math.min(Math.max(measuredWidth, i10), View.MeasureSpec.getSize(i5)), getMeasuredHeight());
        }
    }

    @Override // android.widget.AutoCompleteTextView, android.widget.TextView, android.view.View
    public final void onWindowFocusChanged(boolean z5) {
        if (c()) {
            return;
        }
        super.onWindowFocusChanged(z5);
    }

    @Override // android.widget.AutoCompleteTextView
    public <T extends ListAdapter & Filterable> void setAdapter(T t5) {
        super.setAdapter(t5);
        this.f15954w.m(getAdapter());
    }

    @Override // android.widget.AutoCompleteTextView
    public void setDropDownBackgroundDrawable(Drawable drawable) {
        super.setDropDownBackgroundDrawable(drawable);
        g2 g2Var = this.f15954w;
        if (g2Var != null) {
            g2Var.f(drawable);
        }
    }

    public void setDropDownBackgroundTint(int i5) {
        setDropDownBackgroundTintList(ColorStateList.valueOf(i5));
    }

    public void setDropDownBackgroundTintList(ColorStateList colorStateList) {
        this.G = colorStateList;
        Drawable dropDownBackground = getDropDownBackground();
        if (dropDownBackground instanceof lh.i) {
            ((lh.i) dropDownBackground).q(this.G);
        }
    }

    @Override // android.widget.AutoCompleteTextView
    public void setOnItemSelectedListener(AdapterView.OnItemSelectedListener onItemSelectedListener) {
        super.setOnItemSelectedListener(onItemSelectedListener);
        this.f15954w.N = getOnItemSelectedListener();
    }

    @Override // android.widget.TextView
    public void setRawInputType(int i5) {
        super.setRawInputType(i5);
        TextInputLayout b10 = b();
        if (b10 != null) {
            b10.u();
        }
    }

    public void setSimpleItemSelectedColor(int i5) {
        this.H = i5;
        if (getAdapter() instanceof s) {
            ((s) getAdapter()).a();
        }
    }

    public void setSimpleItemSelectedRippleColor(ColorStateList colorStateList) {
        this.I = colorStateList;
        if (getAdapter() instanceof s) {
            ((s) getAdapter()).a();
        }
    }

    public void setSimpleItems(int i5) {
        setSimpleItems(getResources().getStringArray(i5));
    }

    @Override // android.widget.AutoCompleteTextView
    public final void showDropDown() {
        if (c()) {
            this.f15954w.show();
        } else {
            super.showDropDown();
        }
    }

    public void setSimpleItems(@NonNull String[] strArr) {
        setAdapter(new s(this, getContext(), this.E, strArr));
    }
}
