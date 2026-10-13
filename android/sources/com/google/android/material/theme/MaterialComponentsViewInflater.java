package com.google.android.material.theme;

import a5.k0;
import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.appcompat.widget.d0;
import androidx.appcompat.widget.r;
import androidx.appcompat.widget.s;
import ch.q;
import com.discord.R;
import com.google.android.material.button.MaterialButton;
import com.google.android.material.textview.MaterialTextView;
import hh.a;
import i.b0;
import oh.t;
import wg.b;

/* loaded from: classes3.dex */
public class MaterialComponentsViewInflater extends b0 {
    @Override // i.b0
    public final r a(Context context, AttributeSet attributeSet) {
        return new t(context, attributeSet);
    }

    @Override // i.b0
    public final s b(Context context, AttributeSet attributeSet) {
        return new MaterialButton(context, attributeSet);
    }

    @Override // i.b0
    public final androidx.appcompat.widget.t c(Context context, AttributeSet attributeSet) {
        return new b(context, attributeSet);
    }

    @Override // i.b0
    public final d0 d(Context context, AttributeSet attributeSet) {
        a aVar = new a(ph.a.a(context, attributeSet, R.attr.radioButtonStyle, R.style.Widget_MaterialComponents_CompoundButton_RadioButton), attributeSet);
        Context context2 = aVar.getContext();
        TypedArray f2 = q.f(context2, attributeSet, lg.a.f13975z, R.attr.radioButtonStyle, R.style.Widget_MaterialComponents_CompoundButton_RadioButton, new int[0]);
        if (f2.hasValue(0)) {
            aVar.setButtonTintList(k0.u(context2, f2, 0));
        }
        aVar.f10030x = f2.getBoolean(1, false);
        f2.recycle();
        return aVar;
    }

    @Override // i.b0
    public final AppCompatTextView e(Context context, AttributeSet attributeSet) {
        return new MaterialTextView(context, attributeSet);
    }
}
