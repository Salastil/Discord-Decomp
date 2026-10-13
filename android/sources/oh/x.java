package oh;

import android.text.Editable;
import android.text.TextWatcher;
import android.widget.EditText;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public final class x implements TextWatcher {

    /* renamed from: d, reason: collision with root package name */
    public int f15969d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ EditText f15970e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ TextInputLayout f15971i;

    public x(TextInputLayout textInputLayout, EditText editText) {
        this.f15971i = textInputLayout;
        this.f15970e = editText;
        this.f15969d = editText.getLineCount();
    }

    @Override // android.text.TextWatcher
    public final void afterTextChanged(Editable editable) {
        TextInputLayout textInputLayout = this.f15971i;
        textInputLayout.w(!textInputLayout.Y0, false);
        if (textInputLayout.I) {
            textInputLayout.p(editable);
        }
        if (textInputLayout.Q) {
            textInputLayout.x(editable);
        }
        EditText editText = this.f15970e;
        int lineCount = editText.getLineCount();
        int i5 = this.f15969d;
        if (lineCount != i5) {
            if (lineCount < i5) {
                int minimumHeight = editText.getMinimumHeight();
                int i6 = textInputLayout.R0;
                if (minimumHeight != i6) {
                    editText.setMinimumHeight(i6);
                }
            }
            this.f15969d = lineCount;
        }
    }

    @Override // android.text.TextWatcher
    public final void beforeTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
    }

    @Override // android.text.TextWatcher
    public final void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
    }
}
