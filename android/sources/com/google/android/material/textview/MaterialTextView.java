package com.google.android.material.textview;

import a5.k0;
import android.R;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.AppCompatTextView;
import m3.n;
import ph.a;

/* loaded from: classes3.dex */
public class MaterialTextView extends AppCompatTextView {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MaterialTextView(@NonNull Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, R.attr.textViewStyle, 0), attributeSet, R.attr.textViewStyle);
        Context context2 = getContext();
        if (n.J0(context2, com.discord.R.attr.textAppearanceLineHeightEnabled, true)) {
            Resources.Theme theme = context2.getTheme();
            int[] iArr = lg.a.D;
            TypedArray obtainStyledAttributes = theme.obtainStyledAttributes(attributeSet, iArr, R.attr.textViewStyle, 0);
            int[] iArr2 = {1, 2};
            int i5 = -1;
            for (int i6 = 0; i6 < 2 && i5 < 0; i6++) {
                i5 = k0.w(context2, obtainStyledAttributes, iArr2[i6], -1);
            }
            obtainStyledAttributes.recycle();
            if (i5 != -1) {
                return;
            }
            TypedArray obtainStyledAttributes2 = theme.obtainStyledAttributes(attributeSet, iArr, R.attr.textViewStyle, 0);
            int resourceId = obtainStyledAttributes2.getResourceId(0, -1);
            obtainStyledAttributes2.recycle();
            if (resourceId != -1) {
                TypedArray obtainStyledAttributes3 = theme.obtainStyledAttributes(resourceId, lg.a.C);
                Context context3 = getContext();
                int[] iArr3 = {2, 4};
                int i10 = -1;
                for (int i11 = 0; i11 < 2 && i10 < 0; i11++) {
                    i10 = k0.w(context3, obtainStyledAttributes3, iArr3[i11], -1);
                }
                obtainStyledAttributes3.recycle();
                if (i10 >= 0) {
                    setLineHeight(i10);
                }
            }
        }
    }

    @Override // androidx.appcompat.widget.AppCompatTextView, android.widget.TextView
    public void setTextAppearance(@NonNull Context context, int i5) {
        super.setTextAppearance(context, i5);
        if (n.J0(context, com.discord.R.attr.textAppearanceLineHeightEnabled, true)) {
            TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(i5, lg.a.C);
            Context context2 = getContext();
            int[] iArr = {2, 4};
            int i6 = -1;
            for (int i10 = 0; i10 < 2 && i6 < 0; i10++) {
                i6 = k0.w(context2, obtainStyledAttributes, iArr[i10], -1);
            }
            obtainStyledAttributes.recycle();
            if (i6 >= 0) {
                setLineHeight(i6);
            }
        }
    }
}
