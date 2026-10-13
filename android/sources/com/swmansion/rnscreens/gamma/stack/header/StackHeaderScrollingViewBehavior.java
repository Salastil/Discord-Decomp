package com.swmansion.rnscreens.gamma.stack.header;

import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.discord.chat.input.views.a;
import com.google.android.material.appbar.AppBarLayout$ScrollingViewBehavior;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

@Metadata(d1 = {"\u0000\n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001¨\u0006\u0002"}, d2 = {"Lcom/swmansion/rnscreens/gamma/stack/header/StackHeaderScrollingViewBehavior;", "Lcom/google/android/material/appbar/AppBarLayout$ScrollingViewBehavior;", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class StackHeaderScrollingViewBehavior extends AppBarLayout$ScrollingViewBehavior {

    /* renamed from: g, reason: collision with root package name */
    public final a f6757g;

    public StackHeaderScrollingViewBehavior(a onDependencyChanged) {
        Intrinsics.checkNotNullParameter(onDependencyChanged, "onDependencyChanged");
        this.f6757g = onDependencyChanged;
    }

    @Override // com.google.android.material.appbar.AppBarLayout$ScrollingViewBehavior, v0.b
    public final boolean h(CoordinatorLayout parent, View child, View dependency) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        Intrinsics.checkNotNullParameter(dependency, "dependency");
        super.h(parent, child, dependency);
        this.f6757g.invoke(Integer.valueOf(child.getTop()), dependency);
        return false;
    }
}
