package jm;

import android.view.MotionEvent;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j extends f {
    public final boolean R = true;

    @Override // jm.f
    public final boolean t() {
        return this.R;
    }

    @Override // jm.f
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (this.f12878h == 0) {
            d();
        }
    }
}
