package m2;

import android.text.Editable;
import android.text.method.KeyListener;
import android.text.method.MetaKeyKeyListener;
import android.view.KeyEvent;
import android.view.View;
import k2.r;

/* loaded from: classes.dex */
public final class e implements KeyListener {
    public final KeyListener a;

    /* renamed from: b, reason: collision with root package name */
    public final l8.a f14321b;

    public e(KeyListener keyListener) {
        l8.a aVar = new l8.a(13);
        this.a = keyListener;
        this.f14321b = aVar;
    }

    @Override // android.text.method.KeyListener
    public final void clearMetaKeyState(View view, Editable editable, int i5) {
        this.a.clearMetaKeyState(view, editable, i5);
    }

    @Override // android.text.method.KeyListener
    public final int getInputType() {
        return this.a.getInputType();
    }

    @Override // android.text.method.KeyListener
    public final boolean onKeyDown(View view, Editable editable, int i5, KeyEvent keyEvent) {
        boolean z5;
        this.f14321b.getClass();
        if (i5 != 67 ? i5 != 112 ? false : r.q(editable, keyEvent, true) : r.q(editable, keyEvent, false)) {
            MetaKeyKeyListener.adjustMetaAfterKeypress(editable);
            z5 = true;
        } else {
            z5 = false;
        }
        return z5 || this.a.onKeyDown(view, editable, i5, keyEvent);
    }

    @Override // android.text.method.KeyListener
    public final boolean onKeyOther(View view, Editable editable, KeyEvent keyEvent) {
        return this.a.onKeyOther(view, editable, keyEvent);
    }

    @Override // android.text.method.KeyListener
    public final boolean onKeyUp(View view, Editable editable, int i5, KeyEvent keyEvent) {
        return this.a.onKeyUp(view, editable, i5, keyEvent);
    }
}
