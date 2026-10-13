package m2;

import android.text.InputFilter;
import android.text.Spanned;
import android.widget.TextView;

/* loaded from: classes.dex */
public final class d implements InputFilter {
    public final TextView a;

    /* renamed from: b, reason: collision with root package name */
    public c f14320b;

    public d(TextView textView) {
        this.a = textView;
    }

    @Override // android.text.InputFilter
    public final CharSequence filter(CharSequence charSequence, int i5, int i6, Spanned spanned, int i10, int i11) {
        TextView textView = this.a;
        if (textView.isInEditMode()) {
            return charSequence;
        }
        int b10 = k2.j.a().b();
        if (b10 != 0) {
            if (b10 == 1) {
                if ((i11 == 0 && i10 == 0 && spanned.length() == 0 && charSequence == textView.getText()) || charSequence == null) {
                    return charSequence;
                }
                if (i5 != 0 || i6 != charSequence.length()) {
                    charSequence = charSequence.subSequence(i5, i6);
                }
                return k2.j.a().e(charSequence, 0, charSequence.length());
            }
            if (b10 != 3) {
                return charSequence;
            }
        }
        k2.j a = k2.j.a();
        if (this.f14320b == null) {
            this.f14320b = new c(textView, this);
        }
        a.f(this.f14320b);
        return charSequence;
    }
}
