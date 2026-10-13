package k2;

import android.text.PrecomputedText;
import androidx.core.text.PrecomputedTextCompat;

/* loaded from: classes.dex */
public final class z extends qa.s {
    @Override // qa.s
    public final boolean A(CharSequence charSequence) {
        return (charSequence instanceof PrecomputedText) || (charSequence instanceof PrecomputedTextCompat);
    }
}
