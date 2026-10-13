package wg;

import a1.n;
import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.AnimatedStateListDrawable;
import android.graphics.drawable.AnimatedVectorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.os.Build;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.accessibility.AccessibilityNodeInfo;
import android.view.autofill.AutofillManager;
import android.widget.CompoundButton;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.t;
import ch.q;
import com.discord.R;
import e4.m;
import gh.c;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashSet;
import n3.d;
import n3.e;
import n3.f;
import s4.h;

/* loaded from: classes3.dex */
public final class b extends t {
    public static final int[] V = {R.attr.state_indeterminate};
    public static final int[] W = {R.attr.state_error};
    public static final int[][] a0 = {new int[]{android.R.attr.state_enabled, R.attr.state_error}, new int[]{android.R.attr.state_enabled, android.R.attr.state_checked}, new int[]{android.R.attr.state_enabled, -16842912}, new int[]{-16842910, android.R.attr.state_checked}, new int[]{-16842910, -16842912}};

    /* renamed from: b0, reason: collision with root package name */
    public static final int f19826b0 = Resources.getSystem().getIdentifier("btn_check_material_anim", "drawable", "android");
    public boolean E;
    public boolean F;
    public boolean G;
    public CharSequence H;
    public Drawable I;
    public Drawable J;
    public boolean K;
    public ColorStateList L;
    public ColorStateList M;
    public PorterDuff.Mode N;
    public int O;
    public int[] P;
    public boolean Q;
    public CharSequence R;
    public CompoundButton.OnCheckedChangeListener S;
    public final f T;
    public final c U;

    /* renamed from: w, reason: collision with root package name */
    public final LinkedHashSet f19827w;

    /* renamed from: x, reason: collision with root package name */
    public final LinkedHashSet f19828x;

    /* renamed from: y, reason: collision with root package name */
    public ColorStateList f19829y;

    public b(Context context, AttributeSet attributeSet) {
        super(ph.a.a(context, attributeSet, R.attr.checkboxStyle, R.style.Widget_MaterialComponents_CompoundButton_CheckBox), attributeSet, R.attr.checkboxStyle);
        this.f19827w = new LinkedHashSet();
        this.f19828x = new LinkedHashSet();
        Context context2 = getContext();
        f fVar = new f(context2, 0);
        Resources resources = context2.getResources();
        Resources.Theme theme = context2.getTheme();
        ThreadLocal threadLocal = n.a;
        Drawable drawable = resources.getDrawable(R.drawable.mtrl_checkbox_button_checked_unchecked, theme);
        drawable.setCallback(fVar.f14789x);
        new d(drawable.getConstantState());
        fVar.f14790d = drawable;
        this.T = fVar;
        this.U = new c(2, this);
        Context context3 = getContext();
        this.I = getButtonDrawable();
        this.L = getSuperButtonTintList();
        setSupportButtonTintList(null);
        m g6 = q.g(context3, attributeSet, lg.a.f13973x, R.attr.checkboxStyle, R.style.Widget_MaterialComponents_CompoundButton_CheckBox, new int[0]);
        TypedArray typedArray = (TypedArray) g6.f7964i;
        this.J = g6.U(2);
        if (this.I != null && m3.n.J0(context3, R.attr.isMaterial3Theme, false)) {
            int resourceId = typedArray.getResourceId(0, 0);
            int resourceId2 = typedArray.getResourceId(1, 0);
            if (resourceId == f19826b0 && resourceId2 == 0) {
                super.setButtonDrawable((Drawable) null);
                this.I = ys.d.J(context3, R.drawable.mtrl_checkbox_button);
                this.K = true;
                if (this.J == null) {
                    this.J = ys.d.J(context3, R.drawable.mtrl_checkbox_button_icon);
                }
            }
        }
        this.M = k0.v(context3, g6, 3);
        this.N = q.h(typedArray.getInt(4, -1), PorterDuff.Mode.SRC_IN);
        this.E = typedArray.getBoolean(10, false);
        this.F = typedArray.getBoolean(6, true);
        this.G = typedArray.getBoolean(9, false);
        this.H = typedArray.getText(8);
        if (typedArray.hasValue(7)) {
            setCheckedState(typedArray.getInt(7, 0));
        }
        g6.e0();
        a();
    }

    @NonNull
    private String getButtonStateDescription() {
        int i5 = this.O;
        return i5 == 1 ? getResources().getString(R.string.mtrl_checkbox_state_description_checked) : i5 == 0 ? getResources().getString(R.string.mtrl_checkbox_state_description_unchecked) : getResources().getString(R.string.mtrl_checkbox_state_description_indeterminate);
    }

    private ColorStateList getMaterialThemeColorsTintList() {
        if (this.f19829y == null) {
            int w5 = com.facebook.imagepipeline.nativecode.c.w(R.attr.colorControlActivated, this);
            int w6 = com.facebook.imagepipeline.nativecode.c.w(R.attr.colorError, this);
            int w7 = com.facebook.imagepipeline.nativecode.c.w(R.attr.colorSurface, this);
            int w10 = com.facebook.imagepipeline.nativecode.c.w(R.attr.colorOnSurface, this);
            this.f19829y = new ColorStateList(a0, new int[]{com.facebook.imagepipeline.nativecode.c.Q(w7, w6, 1.0f), com.facebook.imagepipeline.nativecode.c.Q(w7, w5, 1.0f), com.facebook.imagepipeline.nativecode.c.Q(w7, w10, 0.54f), com.facebook.imagepipeline.nativecode.c.Q(w7, w10, 0.38f), com.facebook.imagepipeline.nativecode.c.Q(w7, w10, 0.38f)});
        }
        return this.f19829y;
    }

    private ColorStateList getSuperButtonTintList() {
        ColorStateList colorStateList = this.L;
        return colorStateList != null ? colorStateList : super.getButtonTintList() != null ? super.getButtonTintList() : getSupportButtonTintList();
    }

    public final void a() {
        ColorStateList colorStateList;
        ColorStateList colorStateList2;
        androidx.appcompat.widget.c cVar;
        Drawable drawable = this.I;
        ColorStateList colorStateList3 = this.L;
        PorterDuff.Mode buttonTintMode = getButtonTintMode();
        if (drawable == null) {
            drawable = null;
        } else if (colorStateList3 != null) {
            drawable = drawable.mutate();
            if (buttonTintMode != null) {
                drawable.setTintMode(buttonTintMode);
            }
        }
        this.I = drawable;
        Drawable drawable2 = this.J;
        ColorStateList colorStateList4 = this.M;
        PorterDuff.Mode mode = this.N;
        if (drawable2 == null) {
            drawable2 = null;
        } else if (colorStateList4 != null) {
            drawable2 = drawable2.mutate();
            if (mode != null) {
                drawable2.setTintMode(mode);
            }
        }
        this.J = drawable2;
        if (this.K) {
            f fVar = this.T;
            if (fVar != null) {
                n3.c cVar2 = fVar.f14785e;
                c cVar3 = this.U;
                if (cVar3 != null) {
                    Drawable drawable3 = fVar.f14790d;
                    if (drawable3 != null) {
                        AnimatedVectorDrawable animatedVectorDrawable = (AnimatedVectorDrawable) drawable3;
                        if (cVar3.a == null) {
                            cVar3.a = new n3.b(cVar3);
                        }
                        e.c(animatedVectorDrawable, cVar3.a);
                    }
                    ArrayList arrayList = fVar.f14788w;
                    if (arrayList != null) {
                        arrayList.remove(cVar3);
                        if (fVar.f14788w.size() == 0 && (cVar = fVar.f14787v) != null) {
                            cVar2.f14782b.removeListener(cVar);
                            fVar.f14787v = null;
                        }
                    }
                }
                if (cVar3 != null) {
                    Drawable drawable4 = fVar.f14790d;
                    if (drawable4 != null) {
                        AnimatedVectorDrawable animatedVectorDrawable2 = (AnimatedVectorDrawable) drawable4;
                        if (cVar3.a == null) {
                            cVar3.a = new n3.b(cVar3);
                        }
                        e.b(animatedVectorDrawable2, cVar3.a);
                    } else {
                        if (fVar.f14788w == null) {
                            fVar.f14788w = new ArrayList();
                        }
                        if (!fVar.f14788w.contains(cVar3)) {
                            fVar.f14788w.add(cVar3);
                            if (fVar.f14787v == null) {
                                fVar.f14787v = new androidx.appcompat.widget.c(5, fVar);
                            }
                            cVar2.f14782b.addListener(fVar.f14787v);
                        }
                    }
                }
            }
            Drawable drawable5 = this.I;
            if ((drawable5 instanceof AnimatedStateListDrawable) && fVar != null) {
                ((AnimatedStateListDrawable) drawable5).addTransition(R.id.checked, R.id.unchecked, fVar, false);
                ((AnimatedStateListDrawable) this.I).addTransition(R.id.indeterminate, R.id.unchecked, fVar, false);
            }
        }
        Drawable drawable6 = this.I;
        if (drawable6 != null && (colorStateList2 = this.L) != null) {
            drawable6.setTintList(colorStateList2);
        }
        Drawable drawable7 = this.J;
        if (drawable7 != null && (colorStateList = this.M) != null) {
            drawable7.setTintList(colorStateList);
        }
        Drawable drawable8 = this.I;
        Drawable drawable9 = this.J;
        if (drawable8 == null) {
            drawable8 = drawable9;
        } else if (drawable9 != null) {
            int intrinsicWidth = drawable9.getIntrinsicWidth();
            if (intrinsicWidth == -1) {
                intrinsicWidth = drawable8.getIntrinsicWidth();
            }
            int intrinsicHeight = drawable9.getIntrinsicHeight();
            if (intrinsicHeight == -1) {
                intrinsicHeight = drawable8.getIntrinsicHeight();
            }
            if (intrinsicWidth > drawable8.getIntrinsicWidth() || intrinsicHeight > drawable8.getIntrinsicHeight()) {
                float f2 = intrinsicWidth / intrinsicHeight;
                if (f2 >= drawable8.getIntrinsicWidth() / drawable8.getIntrinsicHeight()) {
                    int intrinsicWidth2 = drawable8.getIntrinsicWidth();
                    intrinsicHeight = (int) (intrinsicWidth2 / f2);
                    intrinsicWidth = intrinsicWidth2;
                } else {
                    intrinsicHeight = drawable8.getIntrinsicHeight();
                    intrinsicWidth = (int) (f2 * intrinsicHeight);
                }
            }
            LayerDrawable layerDrawable = new LayerDrawable(new Drawable[]{drawable8, drawable9});
            layerDrawable.setLayerSize(1, intrinsicWidth, intrinsicHeight);
            layerDrawable.setLayerGravity(1, 17);
            drawable8 = layerDrawable;
        }
        super.setButtonDrawable(drawable8);
        refreshDrawableState();
    }

    @Override // android.widget.CompoundButton
    public Drawable getButtonDrawable() {
        return this.I;
    }

    public Drawable getButtonIconDrawable() {
        return this.J;
    }

    public ColorStateList getButtonIconTintList() {
        return this.M;
    }

    @NonNull
    public PorterDuff.Mode getButtonIconTintMode() {
        return this.N;
    }

    @Override // android.widget.CompoundButton
    public ColorStateList getButtonTintList() {
        return this.L;
    }

    public int getCheckedState() {
        return this.O;
    }

    public CharSequence getErrorAccessibilityLabel() {
        return this.H;
    }

    @Override // android.widget.CompoundButton, android.widget.Checkable
    public final boolean isChecked() {
        return this.O == 1;
    }

    @Override // android.widget.TextView, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.E && this.L == null && this.M == null) {
            setUseMaterialThemeColors(true);
        }
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        int[] copyOf;
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 2);
        if (getCheckedState() == 2) {
            View.mergeDrawableStates(onCreateDrawableState, V);
        }
        if (this.G) {
            View.mergeDrawableStates(onCreateDrawableState, W);
        }
        int i6 = 0;
        while (true) {
            if (i6 >= onCreateDrawableState.length) {
                copyOf = Arrays.copyOf(onCreateDrawableState, onCreateDrawableState.length + 1);
                copyOf[onCreateDrawableState.length] = 16842912;
                break;
            }
            int i10 = onCreateDrawableState[i6];
            if (i10 == 16842912) {
                copyOf = onCreateDrawableState;
                break;
            }
            if (i10 == 0) {
                copyOf = (int[]) onCreateDrawableState.clone();
                copyOf[i6] = 16842912;
                break;
            }
            i6++;
        }
        this.P = copyOf;
        return onCreateDrawableState;
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public final void onDraw(Canvas canvas) {
        Drawable buttonDrawable;
        if (!this.F || !TextUtils.isEmpty(getText()) || (buttonDrawable = getButtonDrawable()) == null) {
            super.onDraw(canvas);
            return;
        }
        int width = ((getWidth() - buttonDrawable.getIntrinsicWidth()) / 2) * (getLayoutDirection() == 1 ? -1 : 1);
        int save = canvas.save();
        canvas.translate(width, 0.0f);
        super.onDraw(canvas);
        canvas.restoreToCount(save);
        if (getBackground() != null) {
            Rect bounds = buttonDrawable.getBounds();
            getBackground().setHotspotBounds(bounds.left + width, bounds.top, bounds.right + width, bounds.bottom);
        }
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        if (accessibilityNodeInfo != null && this.G) {
            accessibilityNodeInfo.setText(((Object) accessibilityNodeInfo.getText()) + ", " + ((Object) this.H));
        }
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof a)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        a aVar = (a) parcelable;
        super.onRestoreInstanceState(aVar.getSuperState());
        setCheckedState(aVar.f19825d);
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public final Parcelable onSaveInstanceState() {
        a aVar = new a(super.onSaveInstanceState());
        aVar.f19825d = getCheckedState();
        return aVar;
    }

    @Override // androidx.appcompat.widget.t, android.widget.CompoundButton
    public void setButtonDrawable(int i5) {
        setButtonDrawable(ys.d.J(getContext(), i5));
    }

    public void setButtonIconDrawable(Drawable drawable) {
        this.J = drawable;
        a();
    }

    public void setButtonIconDrawableResource(int i5) {
        setButtonIconDrawable(ys.d.J(getContext(), i5));
    }

    public void setButtonIconTintList(ColorStateList colorStateList) {
        if (this.M == colorStateList) {
            return;
        }
        this.M = colorStateList;
        a();
    }

    public void setButtonIconTintMode(@NonNull PorterDuff.Mode mode) {
        if (this.N == mode) {
            return;
        }
        this.N = mode;
        a();
    }

    @Override // android.widget.CompoundButton
    public void setButtonTintList(ColorStateList colorStateList) {
        if (this.L == colorStateList) {
            return;
        }
        this.L = colorStateList;
        a();
    }

    @Override // android.widget.CompoundButton
    public void setButtonTintMode(PorterDuff.Mode mode) {
        setSupportButtonTintMode(mode);
        a();
    }

    public void setCenterIfNoTextEnabled(boolean z5) {
        this.F = z5;
    }

    @Override // android.widget.CompoundButton, android.widget.Checkable
    public void setChecked(boolean z5) {
        setCheckedState(z5 ? 1 : 0);
    }

    public void setCheckedState(int i5) {
        AutofillManager autofillManager;
        CompoundButton.OnCheckedChangeListener onCheckedChangeListener;
        if (this.O != i5) {
            this.O = i5;
            super.setChecked(i5 == 1);
            refreshDrawableState();
            int i6 = Build.VERSION.SDK_INT;
            if (i6 >= 30 && this.R == null) {
                super.setStateDescription(getButtonStateDescription());
            }
            if (this.Q) {
                return;
            }
            this.Q = true;
            LinkedHashSet linkedHashSet = this.f19828x;
            if (linkedHashSet != null) {
                Iterator it = linkedHashSet.iterator();
                if (it.hasNext()) {
                    throw h.b(it);
                }
            }
            if (this.O != 2 && (onCheckedChangeListener = this.S) != null) {
                onCheckedChangeListener.onCheckedChanged(this, isChecked());
            }
            if (i6 >= 26 && (autofillManager = (AutofillManager) getContext().getSystemService(AutofillManager.class)) != null) {
                autofillManager.notifyValueChanged(this);
            }
            this.Q = false;
        }
    }

    public void setErrorAccessibilityLabel(CharSequence charSequence) {
        this.H = charSequence;
    }

    public void setErrorAccessibilityLabelResource(int i5) {
        setErrorAccessibilityLabel(i5 != 0 ? getResources().getText(i5) : null);
    }

    public void setErrorShown(boolean z5) {
        if (this.G == z5) {
            return;
        }
        this.G = z5;
        refreshDrawableState();
        Iterator it = this.f19827w.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
    }

    @Override // android.widget.CompoundButton
    public void setOnCheckedChangeListener(CompoundButton.OnCheckedChangeListener onCheckedChangeListener) {
        this.S = onCheckedChangeListener;
    }

    @Override // android.widget.CompoundButton, android.view.View
    public void setStateDescription(CharSequence charSequence) {
        this.R = charSequence;
        if (charSequence != null) {
            super.setStateDescription(charSequence);
        } else {
            if (Build.VERSION.SDK_INT < 30 || charSequence != null) {
                return;
            }
            super.setStateDescription(getButtonStateDescription());
        }
    }

    public void setUseMaterialThemeColors(boolean z5) {
        this.E = z5;
        if (z5) {
            setButtonTintList(getMaterialThemeColorsTintList());
        } else {
            setButtonTintList(null);
        }
    }

    @Override // android.widget.CompoundButton, android.widget.Checkable
    public final void toggle() {
        setChecked(!isChecked());
    }

    @Override // androidx.appcompat.widget.t, android.widget.CompoundButton
    public void setButtonDrawable(Drawable drawable) {
        this.I = drawable;
        this.K = false;
        a();
    }
}
