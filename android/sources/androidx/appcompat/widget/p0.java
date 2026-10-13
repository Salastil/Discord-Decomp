package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.ViewTreeObserver;
import android.widget.ListAdapter;
import com.discord.R;

/* loaded from: classes.dex */
public final class p0 extends g2 implements r0 {
    public CharSequence Z;
    public m0 a0;

    /* renamed from: b0, reason: collision with root package name */
    public final Rect f1066b0;

    /* renamed from: c0, reason: collision with root package name */
    public int f1067c0;

    /* renamed from: d0, reason: collision with root package name */
    public final /* synthetic */ s0 f1068d0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p0(s0 s0Var, Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.spinnerStyle, 0);
        this.f1068d0 = s0Var;
        this.f1066b0 = new Rect();
        this.L = s0Var;
        this.V = true;
        this.W.setFocusable(true);
        this.M = new n0(0, this);
    }

    @Override // androidx.appcompat.widget.r0
    public final CharSequence c() {
        return this.Z;
    }

    @Override // androidx.appcompat.widget.r0
    public final void e(CharSequence charSequence) {
        this.Z = charSequence;
    }

    @Override // androidx.appcompat.widget.r0
    public final void j(int i5) {
        this.f1067c0 = i5;
    }

    @Override // androidx.appcompat.widget.r0
    public final void k(int i5, int i6) {
        ViewTreeObserver viewTreeObserver;
        b0 b0Var = this.W;
        boolean isShowing = b0Var.isShowing();
        p();
        b0Var.setInputMethodMode(2);
        show();
        t1 t1Var = this.f993i;
        t1Var.setChoiceMode(1);
        t1Var.setTextDirection(i5);
        t1Var.setTextAlignment(i6);
        s0 s0Var = this.f1068d0;
        int selectedItemPosition = s0Var.getSelectedItemPosition();
        t1 t1Var2 = this.f993i;
        if (b0Var.isShowing() && t1Var2 != null) {
            t1Var2.setListSelectionHidden(false);
            t1Var2.setSelection(selectedItemPosition);
            if (t1Var2.getChoiceMode() != 0) {
                t1Var2.setItemChecked(selectedItemPosition, true);
            }
        }
        if (isShowing || (viewTreeObserver = s0Var.getViewTreeObserver()) == null) {
            return;
        }
        j0 j0Var = new j0(1, this);
        viewTreeObserver.addOnGlobalLayoutListener(j0Var);
        b0Var.setOnDismissListener(new o0(this, j0Var));
    }

    @Override // androidx.appcompat.widget.g2, androidx.appcompat.widget.r0
    public final void m(ListAdapter listAdapter) {
        super.m(listAdapter);
        this.a0 = (m0) listAdapter;
    }

    public final void p() {
        int i5;
        s0 s0Var = this.f1068d0;
        Rect rect = s0Var.E;
        b0 b0Var = this.W;
        Drawable background = b0Var.getBackground();
        if (background != null) {
            background.getPadding(rect);
            boolean z5 = f4.a;
            i5 = s0Var.getLayoutDirection() == 1 ? rect.right : -rect.left;
        } else {
            i5 = 0;
            rect.right = 0;
            rect.left = 0;
        }
        int paddingLeft = s0Var.getPaddingLeft();
        int paddingRight = s0Var.getPaddingRight();
        int width = s0Var.getWidth();
        int i6 = s0Var.f1100y;
        if (i6 == -2) {
            int a = s0Var.a(this.a0, b0Var.getBackground());
            int i10 = (s0Var.getContext().getResources().getDisplayMetrics().widthPixels - rect.left) - rect.right;
            if (a > i10) {
                a = i10;
            }
            o(Math.max(a, (width - paddingLeft) - paddingRight));
        } else if (i6 == -1) {
            o((width - paddingLeft) - paddingRight);
        } else {
            o(i6);
        }
        boolean z6 = f4.a;
        this.f996x = s0Var.getLayoutDirection() == 1 ? (((width - paddingRight) - this.f995w) - this.f1067c0) + i5 : paddingLeft + this.f1067c0 + i5;
    }
}
