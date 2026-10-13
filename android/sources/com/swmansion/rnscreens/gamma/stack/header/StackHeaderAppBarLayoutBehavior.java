package com.swmansion.rnscreens.gamma.stack.header;

import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.google.android.material.appbar.AppBarLayout$Behavior;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import ng.g;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/swmansion/rnscreens/gamma/stack/header/StackHeaderAppBarLayoutBehavior;", "Lcom/google/android/material/appbar/AppBarLayout$Behavior;", "<init>", "()V", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class StackHeaderAppBarLayoutBehavior extends AppBarLayout$Behavior {
    @Override // com.google.android.material.appbar.AppBarLayout$BaseBehavior, v0.b
    /* renamed from: C */
    public final void o(CoordinatorLayout coordinatorLayout, g child, View target, int i5, int i6, int[] consumed, int i10) {
        Intrinsics.checkNotNullParameter(coordinatorLayout, "coordinatorLayout");
        Intrinsics.checkNotNullParameter(child, "child");
        Intrinsics.checkNotNullParameter(target, "target");
        Intrinsics.checkNotNullParameter(consumed, "consumed");
        if (i6 < 0) {
            i6 = Math.max(i6, w());
        }
        super.o(coordinatorLayout, child, target, i5, i6, consumed, i10);
    }
}
