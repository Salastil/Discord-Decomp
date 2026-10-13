package androidx.core.widget;

import android.content.ClipData;
import android.content.Context;
import android.text.Editable;
import android.text.Selection;
import android.text.Spanned;
import android.util.Log;
import android.view.View;
import android.widget.TextView;
import androidx.core.view.ContentInfoCompat;
import androidx.core.view.s;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;

/* loaded from: classes.dex */
public final class TextViewOnReceiveContentListener implements s {
    @Override // androidx.core.view.s
    public final ContentInfoCompat a(View view, ContentInfoCompat contentInfoCompat) {
        CharSequence coerceToStyledText;
        if (Log.isLoggable("ReceiveContent", 3)) {
            Log.d("ReceiveContent", "onReceive: " + contentInfoCompat);
        }
        androidx.core.view.g gVar = contentInfoCompat.a;
        androidx.core.view.g gVar2 = contentInfoCompat.a;
        if (gVar.d() == 2) {
            return contentInfoCompat;
        }
        ClipData f2 = gVar2.f();
        int g6 = gVar2.g();
        TextView textView = (TextView) view;
        Editable editable = (Editable) textView.getText();
        Context context = textView.getContext();
        boolean z5 = false;
        for (int i5 = 0; i5 < f2.getItemCount(); i5++) {
            ClipData.Item itemAt = f2.getItemAt(i5);
            if ((g6 & 1) != 0) {
                coerceToStyledText = itemAt.coerceToText(context);
                if (coerceToStyledText instanceof Spanned) {
                    coerceToStyledText = coerceToStyledText.toString();
                }
            } else {
                coerceToStyledText = itemAt.coerceToStyledText(context);
            }
            if (coerceToStyledText != null) {
                if (z5) {
                    editable.insert(Selection.getSelectionEnd(editable), ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                    editable.insert(Selection.getSelectionEnd(editable), coerceToStyledText);
                } else {
                    int selectionStart = Selection.getSelectionStart(editable);
                    int selectionEnd = Selection.getSelectionEnd(editable);
                    int max = Math.max(0, Math.min(selectionStart, selectionEnd));
                    int max2 = Math.max(0, Math.max(selectionStart, selectionEnd));
                    Selection.setSelection(editable, max2);
                    editable.replace(max, max2, coerceToStyledText);
                    z5 = true;
                }
            }
        }
        return null;
    }
}
