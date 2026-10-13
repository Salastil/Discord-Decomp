package m2;

import android.os.Bundle;
import android.text.Editable;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputConnectionWrapper;
import android.widget.EditText;
import java.nio.ByteBuffer;

/* loaded from: classes.dex */
public final class b extends InputConnectionWrapper {
    public final EditText a;

    /* renamed from: b, reason: collision with root package name */
    public final j8.c f14318b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(EditText editText, InputConnection inputConnection, EditorInfo editorInfo) {
        super(inputConnection, false);
        j8.c cVar = new j8.c();
        this.a = editText;
        this.f14318b = cVar;
        if (k2.j.k != null) {
            k2.j a = k2.j.a();
            if (a.b() != 1 || editorInfo == null) {
                return;
            }
            if (editorInfo.extras == null) {
                editorInfo.extras = new Bundle();
            }
            a5.a aVar = a.f13128e;
            aVar.getClass();
            Bundle bundle = editorInfo.extras;
            l2.b bVar = (l2.b) ((e4.i) aVar.f122c).f7952d;
            int a10 = bVar.a(4);
            bundle.putInt("android.support.text.emoji.emojiCompat_metadataVersion", a10 != 0 ? ((ByteBuffer) bVar.f1594v).getInt(a10 + bVar.f1591d) : 0);
            editorInfo.extras.putBoolean("android.support.text.emoji.emojiCompat_replaceAll", false);
        }
    }

    @Override // android.view.inputmethod.InputConnectionWrapper, android.view.inputmethod.InputConnection
    public final boolean deleteSurroundingText(int i5, int i6) {
        Editable editableText = this.a.getEditableText();
        this.f14318b.getClass();
        return j8.c.n(this, editableText, i5, i6, false) || super.deleteSurroundingText(i5, i6);
    }

    @Override // android.view.inputmethod.InputConnectionWrapper, android.view.inputmethod.InputConnection
    public final boolean deleteSurroundingTextInCodePoints(int i5, int i6) {
        Editable editableText = this.a.getEditableText();
        this.f14318b.getClass();
        return j8.c.n(this, editableText, i5, i6, true) || super.deleteSurroundingTextInCodePoints(i5, i6);
    }
}
