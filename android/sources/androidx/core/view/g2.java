package androidx.core.view;

import android.view.Window;

/* loaded from: classes.dex */
public final class g2 extends f2 {
    @Override // zk.a
    public final void G(boolean z5) {
        if (!z5) {
            Q(16);
            return;
        }
        Window window = this.j;
        window.clearFlags(134217728);
        window.addFlags(Integer.MIN_VALUE);
        P(16);
    }
}
