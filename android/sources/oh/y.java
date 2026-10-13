package oh;

import android.os.Build;
import android.text.TextUtils;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.EditText;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public final class y extends androidx.core.view.b {
    public final TextInputLayout a;

    public y(TextInputLayout textInputLayout) {
        this.a = textInputLayout;
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        TextInputLayout textInputLayout = this.a;
        EditText editText = textInputLayout.getEditText();
        CharSequence text = editText != null ? editText.getText() : null;
        CharSequence hint = textInputLayout.getHint();
        CharSequence error = textInputLayout.getError();
        CharSequence placeholderText = textInputLayout.getPlaceholderText();
        int counterMaxLength = textInputLayout.getCounterMaxLength();
        CharSequence counterOverflowDescription = textInputLayout.getCounterOverflowDescription();
        boolean isEmpty = TextUtils.isEmpty(text);
        boolean isEmpty2 = TextUtils.isEmpty(hint);
        boolean z5 = textInputLayout.S0;
        boolean isEmpty3 = TextUtils.isEmpty(error);
        boolean z6 = (isEmpty3 && TextUtils.isEmpty(counterOverflowDescription)) ? false : true;
        String charSequence = !isEmpty2 ? hint.toString() : "";
        v vVar = textInputLayout.f6118e;
        AppCompatTextView appCompatTextView = vVar.f15961e;
        if (appCompatTextView.getVisibility() == 0) {
            accessibilityNodeInfoCompat.a.setLabelFor(appCompatTextView);
            accessibilityNodeInfoCompat.a.setTraversalAfter(appCompatTextView);
        } else {
            accessibilityNodeInfoCompat.a.setTraversalAfter(vVar.f15963v);
        }
        AccessibilityNodeInfo accessibilityNodeInfo = accessibilityNodeInfoCompat.a;
        if (!isEmpty) {
            accessibilityNodeInfoCompat.A(text);
        } else if (!TextUtils.isEmpty(charSequence)) {
            accessibilityNodeInfoCompat.A(charSequence);
            if (!z5 && placeholderText != null) {
                accessibilityNodeInfoCompat.A(charSequence + ", " + ((Object) placeholderText));
            }
        } else if (placeholderText != null) {
            accessibilityNodeInfoCompat.A(placeholderText);
        }
        if (!TextUtils.isEmpty(charSequence)) {
            if (Build.VERSION.SDK_INT >= 26) {
                accessibilityNodeInfoCompat.u(charSequence);
            } else {
                if (!isEmpty) {
                    charSequence = ((Object) text) + ", " + charSequence;
                }
                accessibilityNodeInfoCompat.A(charSequence);
            }
            accessibilityNodeInfoCompat.z(isEmpty);
        }
        if (text == null || text.length() != counterMaxLength) {
            counterMaxLength = -1;
        }
        accessibilityNodeInfo.setMaxTextLength(counterMaxLength);
        if (z6) {
            if (isEmpty3) {
                error = counterOverflowDescription;
            }
            accessibilityNodeInfo.setError(error);
        }
        AppCompatTextView appCompatTextView2 = textInputLayout.H.f15949y;
        if (appCompatTextView2 != null) {
            accessibilityNodeInfoCompat.a.setLabelFor(appCompatTextView2);
        }
        textInputLayout.f6122i.b().m(accessibilityNodeInfoCompat);
    }

    @Override // androidx.core.view.b
    public final void onPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        super.onPopulateAccessibilityEvent(view, accessibilityEvent);
        this.a.f6122i.b().n(accessibilityEvent);
    }
}
