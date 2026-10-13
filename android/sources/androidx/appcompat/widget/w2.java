package androidx.appcompat.widget;

import android.view.KeyEvent;
import android.widget.TextView;

/* loaded from: classes.dex */
public final class w2 implements TextView.OnEditorActionListener {
    public final /* synthetic */ com.swmansion.rnscreens.b a;

    public w2(com.swmansion.rnscreens.b bVar) {
        this.a = bVar;
    }

    @Override // android.widget.TextView.OnEditorActionListener
    public final boolean onEditorAction(TextView textView, int i5, KeyEvent keyEvent) {
        this.a.q();
        return true;
    }
}
