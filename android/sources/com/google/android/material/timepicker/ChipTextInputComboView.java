package com.google.android.material.timepicker;

import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Checkable;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.core.view.x;
import com.discord.R;
import com.google.android.material.chip.Chip;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
class ChipTextInputComboView extends FrameLayout implements Checkable {

    /* renamed from: d, reason: collision with root package name */
    public final Chip f6145d;

    /* renamed from: e, reason: collision with root package name */
    public final EditText f6146e;

    /* renamed from: i, reason: collision with root package name */
    public final TextView f6147i;

    public ChipTextInputComboView(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        LayoutInflater from = LayoutInflater.from(context);
        Chip chip = (Chip) from.inflate(R.layout.material_time_chip, (ViewGroup) this, false);
        this.f6145d = chip;
        chip.setAccessibilityClassName("android.view.View");
        TextInputLayout textInputLayout = (TextInputLayout) from.inflate(R.layout.material_time_input, (ViewGroup) this, false);
        EditText editText = textInputLayout.getEditText();
        this.f6146e = editText;
        editText.setVisibility(4);
        editText.addTextChangedListener(new a(this));
        editText.setImeHintLocales(getContext().getResources().getConfiguration().getLocales());
        addView(chip);
        addView(textInputLayout);
        TextView textView = (TextView) findViewById(R.id.material_label);
        this.f6147i = textView;
        editText.setId(View.generateViewId());
        textView.setLabelFor(editText.getId());
        editText.setSaveEnabled(false);
        editText.setLongClickable(false);
    }

    public static String a(ChipTextInputComboView chipTextInputComboView, CharSequence charSequence) {
        try {
            return String.format(chipTextInputComboView.getResources().getConfiguration().locale, "%02d", Integer.valueOf(Integer.parseInt(String.valueOf(charSequence))));
        } catch (NumberFormatException unused) {
            return null;
        }
    }

    @Override // android.widget.Checkable
    public final boolean isChecked() {
        return this.f6145d.isChecked();
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.f6146e.setImeHintLocales(getContext().getResources().getConfiguration().getLocales());
    }

    @Override // android.widget.Checkable
    public final void setChecked(boolean z5) {
        Chip chip = this.f6145d;
        chip.setChecked(z5);
        int i5 = z5 ? 0 : 4;
        EditText editText = this.f6146e;
        editText.setVisibility(i5);
        chip.setVisibility(z5 ? 8 : 0);
        if (chip.isChecked()) {
            editText.requestFocus();
            editText.post(new x(1, editText));
        }
    }

    @Override // android.view.View
    public final void setOnClickListener(View.OnClickListener onClickListener) {
        this.f6145d.setOnClickListener(onClickListener);
    }

    @Override // android.view.View
    public final void setTag(int i5, Object obj) {
        this.f6145d.setTag(i5, obj);
    }

    @Override // android.widget.Checkable
    public final void toggle() {
        this.f6145d.toggle();
    }
}
