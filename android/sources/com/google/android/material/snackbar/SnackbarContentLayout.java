package com.google.android.material.snackbar;

import android.content.Context;
import android.text.Layout;
import android.util.AttributeSet;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import com.discord.R;
import ta.a;

/* loaded from: classes3.dex */
public class SnackbarContentLayout extends LinearLayout {

    /* renamed from: d, reason: collision with root package name */
    public TextView f6108d;

    /* renamed from: e, reason: collision with root package name */
    public Button f6109e;

    /* renamed from: i, reason: collision with root package name */
    public int f6110i;

    public SnackbarContentLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a.H(context, R.attr.motionEasingEmphasizedInterpolator, mg.a.f14493b);
    }

    public final boolean a(int i5, int i6, int i10) {
        boolean z5;
        if (i5 != getOrientation()) {
            setOrientation(i5);
            z5 = true;
        } else {
            z5 = false;
        }
        if (this.f6108d.getPaddingTop() == i6 && this.f6108d.getPaddingBottom() == i10) {
            return z5;
        }
        TextView textView = this.f6108d;
        if (textView.isPaddingRelative()) {
            textView.setPaddingRelative(textView.getPaddingStart(), i6, textView.getPaddingEnd(), i10);
            return true;
        }
        textView.setPadding(textView.getPaddingLeft(), i6, textView.getPaddingRight(), i10);
        return true;
    }

    public Button getActionView() {
        return this.f6109e;
    }

    public TextView getMessageView() {
        return this.f6108d;
    }

    @Override // android.view.View
    public final void onFinishInflate() {
        super.onFinishInflate();
        this.f6108d = (TextView) findViewById(R.id.snackbar_text);
        this.f6109e = (Button) findViewById(R.id.snackbar_action);
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        if (getOrientation() == 1) {
            return;
        }
        int dimensionPixelSize = getResources().getDimensionPixelSize(R.dimen.design_snackbar_padding_vertical_2lines);
        int dimensionPixelSize2 = getResources().getDimensionPixelSize(R.dimen.design_snackbar_padding_vertical);
        Layout layout = this.f6108d.getLayout();
        boolean z5 = layout != null && layout.getLineCount() > 1;
        if (!z5 || this.f6110i <= 0 || this.f6109e.getMeasuredWidth() <= this.f6110i) {
            if (!z5) {
                dimensionPixelSize = dimensionPixelSize2;
            }
            if (!a(0, dimensionPixelSize, dimensionPixelSize)) {
                return;
            }
        } else if (!a(1, dimensionPixelSize, dimensionPixelSize - dimensionPixelSize2)) {
            return;
        }
        super.onMeasure(i5, i6);
    }

    public void setMaxInlineActionWidth(int i5) {
        this.f6110i = i5;
    }
}
