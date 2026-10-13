package androidx.appcompat.widget;

import android.widget.AutoCompleteTextView;

/* loaded from: classes.dex */
public abstract class x2 {
    public static void a(AutoCompleteTextView autoCompleteTextView) {
        autoCompleteTextView.refreshAutoCompleteResults();
    }

    public static void b(SearchView$SearchAutoComplete searchView$SearchAutoComplete, int i5) {
        searchView$SearchAutoComplete.setInputMethodMode(i5);
    }
}
