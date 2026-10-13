package com.google.android.material.timepicker;

import android.text.Editable;
import android.text.TextUtils;
import ch.p;
import com.google.android.material.chip.Chip;

/* loaded from: classes3.dex */
public final class a extends p {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ChipTextInputComboView f6161d;

    public a(ChipTextInputComboView chipTextInputComboView) {
        this.f6161d = chipTextInputComboView;
    }

    @Override // android.text.TextWatcher
    public final void afterTextChanged(Editable editable) {
        boolean isEmpty = TextUtils.isEmpty(editable);
        ChipTextInputComboView chipTextInputComboView = this.f6161d;
        if (isEmpty) {
            chipTextInputComboView.f6145d.setText(ChipTextInputComboView.a(chipTextInputComboView, "00"));
            return;
        }
        String a = ChipTextInputComboView.a(chipTextInputComboView, editable);
        Chip chip = chipTextInputComboView.f6145d;
        if (TextUtils.isEmpty(a)) {
            a = ChipTextInputComboView.a(chipTextInputComboView, "00");
        }
        chip.setText(a);
    }
}
