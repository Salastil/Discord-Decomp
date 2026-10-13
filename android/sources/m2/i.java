package m2;

import android.text.Editable;
import android.text.Selection;
import android.text.Spannable;
import android.text.TextWatcher;
import android.widget.EditText;

/* loaded from: classes.dex */
public final class i implements TextWatcher {

    /* renamed from: d, reason: collision with root package name */
    public final EditText f14323d;

    /* renamed from: e, reason: collision with root package name */
    public h f14324e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f14325i = true;

    public i(EditText editText) {
        this.f14323d = editText;
    }

    public static void a(EditText editText, int i5) {
        int length;
        if (i5 == 1 && editText != null && editText.isAttachedToWindow()) {
            Editable editableText = editText.getEditableText();
            int selectionStart = Selection.getSelectionStart(editableText);
            int selectionEnd = Selection.getSelectionEnd(editableText);
            k2.j a = k2.j.a();
            if (editableText == null) {
                length = 0;
            } else {
                a.getClass();
                length = editableText.length();
            }
            a.e(editableText, 0, length);
            if (selectionStart >= 0 && selectionEnd >= 0) {
                Selection.setSelection(editableText, selectionStart, selectionEnd);
            } else if (selectionStart >= 0) {
                Selection.setSelection(editableText, selectionStart);
            } else if (selectionEnd >= 0) {
                Selection.setSelection(editableText, selectionEnd);
            }
        }
    }

    @Override // android.text.TextWatcher
    public final void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        EditText editText = this.f14323d;
        if (editText.isInEditMode() || !this.f14325i || k2.j.k == null || i6 > i10 || !(charSequence instanceof Spannable)) {
            return;
        }
        int b10 = k2.j.a().b();
        if (b10 != 0) {
            if (b10 == 1) {
                k2.j.a().e((Spannable) charSequence, i5, i10 + i5);
                return;
            } else if (b10 != 3) {
                return;
            }
        }
        k2.j a = k2.j.a();
        if (this.f14324e == null) {
            this.f14324e = new h(editText);
        }
        a.f(this.f14324e);
    }

    @Override // android.text.TextWatcher
    public final void afterTextChanged(Editable editable) {
    }

    @Override // android.text.TextWatcher
    public final void beforeTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
    }
}
