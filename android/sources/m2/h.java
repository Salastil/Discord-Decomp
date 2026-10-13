package m2;

import android.widget.EditText;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class h extends k2.h {
    public final WeakReference a;

    public h(EditText editText) {
        this.a = new WeakReference(editText);
    }

    @Override // k2.h
    public final void b() {
        i.a((EditText) this.a.get(), 1);
    }
}
