package com.swmansion.rnscreens;

import androidx.recyclerview.widget.RecyclerView;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p0 extends q0 {
    public p0() {
        super("TEXT", 0);
    }

    @Override // com.swmansion.rnscreens.q0
    public final int a(l0 capitalize) {
        Intrinsics.checkNotNullParameter(capitalize, "capitalize");
        int ordinal = capitalize.ordinal();
        if (ordinal == 0) {
            return 1;
        }
        if (ordinal == 1) {
            return 8192;
        }
        if (ordinal == 2) {
            return 16384;
        }
        if (ordinal == 3) {
            return RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        }
        throw new fo.n();
    }
}
