package wm;

import android.view.View;
import androidx.core.view.s0;

/* loaded from: classes3.dex */
public final class p implements View.OnLayoutChangeListener {
    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        view.removeOnLayoutChangeListener(this);
        s0.r(view, null);
    }
}
