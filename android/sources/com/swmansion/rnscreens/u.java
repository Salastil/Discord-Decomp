package com.swmansion.rnscreens;

import android.widget.FrameLayout;

/* loaded from: classes3.dex */
public final class u extends FrameLayout {
    @Override // android.view.ViewGroup, android.view.View
    public final void clearFocus() {
        if (getVisibility() != 4) {
            super.clearFocus();
        }
    }
}
