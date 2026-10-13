package oh;

import android.widget.EditText;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public final class m {
    public final /* synthetic */ n a;

    public m(n nVar) {
        this.a = nVar;
    }

    public final void a(TextInputLayout textInputLayout) {
        n nVar = this.a;
        l lVar = nVar.S;
        if (nVar.P == textInputLayout.getEditText()) {
            return;
        }
        EditText editText = nVar.P;
        if (editText != null) {
            editText.removeTextChangedListener(lVar);
            if (nVar.P.getOnFocusChangeListener() == nVar.b().e()) {
                nVar.P.setOnFocusChangeListener(null);
            }
        }
        EditText editText2 = textInputLayout.getEditText();
        nVar.P = editText2;
        if (editText2 != null) {
            editText2.addTextChangedListener(lVar);
        }
        nVar.b().l(nVar.P);
        nVar.j(nVar.b());
    }
}
