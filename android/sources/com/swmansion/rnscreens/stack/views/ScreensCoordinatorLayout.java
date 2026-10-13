package com.swmansion.rnscreens.stack.views;

import android.content.Context;
import android.view.WindowInsets;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactPointerEventsView;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.b0;
import com.swmansion.rnscreens.m;
import kotlin.jvm.internal.Intrinsics;
import nm.l;
import nn.b;
import on.c;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class ScreensCoordinatorLayout extends CoordinatorLayout implements ReactPointerEventsView {
    public final b0 U;
    public final m V;
    public boolean W;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public final c f6789b0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ScreensCoordinatorLayout(Context context, b0 fragment) {
        super(context, null);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        m pointerEventsImpl = new m();
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.checkNotNullParameter(pointerEventsImpl, "pointerEventsImpl");
        this.U = fragment;
        this.V = pointerEventsImpl;
        this.f6789b0 = new c(this);
    }

    @Override // android.view.View
    public final void clearAnimation() {
        this.W = false;
        this.a0 = false;
        super.clearAnimation();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void clearFocus() {
        if (getVisibility() != 4) {
            super.clearFocus();
        }
    }

    public final boolean getBlockFrameworkTransitionFinalization$react_native_screens_release() {
        return this.W;
    }

    @NotNull
    public final b0 getFragment$react_native_screens_release() {
        return this.U;
    }

    public final boolean getNeedsTransitionFinalization$react_native_screens_release() {
        return this.a0;
    }

    @Override // com.facebook.react.uimanager.ReactPointerEventsView
    @NotNull
    public PointerEvents getPointerEvents() {
        return (PointerEvents) this.V.f6770e;
    }

    @NotNull
    public final Screen getScreen() {
        return this.U.a();
    }

    @Override // android.view.View
    public final WindowInsets onApplyWindowInsets(WindowInsets windowInsets) {
        WindowInsets onApplyWindowInsets = super.onApplyWindowInsets(windowInsets);
        Intrinsics.checkNotNullExpressionValue(onApplyWindowInsets, "onApplyWindowInsets(...)");
        return onApplyWindowInsets;
    }

    @Override // androidx.coordinatorlayout.widget.CoordinatorLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        b0 b0Var = this.U;
        if (l.c(b0Var.a())) {
            b0Var.a().onBottomSheetBehaviorDidLayout$react_native_screens_release(z5);
        }
    }

    public final void setBlockFrameworkTransitionFinalization$react_native_screens_release(boolean z5) {
        this.W = z5;
    }

    public final void setNeedsTransitionFinalization$react_native_screens_release(boolean z5) {
        this.a0 = z5;
    }

    @Override // android.view.View
    public final void startAnimation(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        b0 b0Var = this.U;
        b bVar = new b(b0Var);
        bVar.setDuration(animation.getDuration());
        if (b0Var.isRemoving()) {
            this.W = true;
        }
        boolean z5 = animation instanceof AnimationSet;
        c cVar = this.f6789b0;
        if (z5 && !b0Var.isRemoving()) {
            AnimationSet animationSet = (AnimationSet) animation;
            animationSet.addAnimation(bVar);
            animationSet.setAnimationListener(cVar);
            super.startAnimation(animationSet);
            return;
        }
        AnimationSet animationSet2 = new AnimationSet(true);
        animationSet2.addAnimation(animation);
        animationSet2.addAnimation(bVar);
        animationSet2.setAnimationListener(cVar);
        super.startAnimation(animationSet2);
    }
}
