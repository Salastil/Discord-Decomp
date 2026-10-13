package com.swmansion.rnscreens;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.view.View;
import android.view.Window;
import android.view.WindowInsets;
import android.view.WindowManager;
import androidx.appcompat.widget.Toolbar;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.s0;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.core.ReactChoreographer;
import com.facebook.react.uimanager.ThemedReactContext;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class d extends Toolbar {
    public boolean A0;
    public final c B0;

    /* renamed from: u0, reason: collision with root package name */
    public final ScreenStackHeaderConfig f6733u0;

    /* renamed from: v0, reason: collision with root package name */
    public final boolean f6734v0;

    /* renamed from: w0, reason: collision with root package name */
    public final boolean f6735w0;

    /* renamed from: x0, reason: collision with root package name */
    public Insets f6736x0;

    /* renamed from: y0, reason: collision with root package name */
    public boolean f6737y0;

    /* renamed from: z0, reason: collision with root package name */
    public boolean f6738z0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(Context context, ScreenStackHeaderConfig config) {
        super(context, null);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(config, "config");
        this.f6733u0 = config;
        this.f6734v0 = true;
        this.f6735w0 = true;
        Insets NONE = Insets.f1511e;
        Intrinsics.checkNotNullExpressionValue(NONE, "NONE");
        this.f6736x0 = NONE;
        getMenu();
        this.B0 = new c(this, 0);
    }

    @NotNull
    public final ScreenStackHeaderConfig getConfig() {
        return this.f6733u0;
    }

    @Override // android.view.View
    public final WindowInsets onApplyWindowInsets(WindowInsets windowInsets) {
        int i5;
        this.A0 = true;
        WindowInsets onApplyWindowInsets = super.onApplyWindowInsets(windowInsets);
        Insets x5 = android.support.v4.media.session.b.x(this, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, onApplyWindowInsets);
        Insets x10 = android.support.v4.media.session.b.x(this, 519, onApplyWindowInsets);
        ScreenStackHeaderConfig screenStackHeaderConfig = this.f6733u0;
        boolean consumeTopInset = screenStackHeaderConfig.getLegacyTopInsetBehavior() ? true : screenStackHeaderConfig.getConsumeTopInset();
        boolean consumeLeftInset = screenStackHeaderConfig.getConsumeLeftInset();
        boolean consumeRightInset = screenStackHeaderConfig.getConsumeRightInset();
        boolean consumeBottomInset = screenStackHeaderConfig.getConsumeBottomInset();
        if (!consumeTopInset && !consumeLeftInset && !consumeRightInset && !consumeBottomInset) {
            this.A0 = false;
            Insets NONE = Insets.f1511e;
            Intrinsics.checkNotNullExpressionValue(NONE, "NONE");
            this.f6736x0 = NONE;
            w();
            return onApplyWindowInsets;
        }
        Insets b10 = Insets.b(consumeLeftInset ? x5.a + x10.a : 0, 0, consumeRightInset ? x5.f1513c + x10.f1513c : 0, 0);
        Intrinsics.checkNotNullExpressionValue(b10, "of(...)");
        if (consumeTopInset) {
            i5 = Math.max(x5.f1512b, this.f6735w0 ? x10.f1512b : 0);
        } else {
            i5 = 0;
        }
        Insets b11 = Insets.b(0, i5, 0, consumeBottomInset ? x5.f1514d : 0);
        Intrinsics.checkNotNullExpressionValue(b11, "of(...)");
        Insets b12 = Insets.b(b10.a + b11.a, b10.f1512b + b11.f1512b, b10.f1513c + b11.f1513c, b10.f1514d + b11.f1514d);
        Intrinsics.checkNotNullExpressionValue(b12, "add(...)");
        if (!Intrinsics.areEqual(this.f6736x0, b12)) {
            this.f6736x0 = b12;
            int i6 = b12.a;
            int i10 = b12.f1512b;
            int i11 = b12.f1513c;
            int i12 = b12.f1514d;
            this.f6737y0 = this.f6734v0;
            setPadding(i6, i10, i11, i12);
        }
        return onApplyWindowInsets;
    }

    @Override // androidx.appcompat.widget.Toolbar, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        Activity currentActivity;
        super.onAttachedToWindow();
        ScreenStackHeaderConfig screenStackHeaderConfig = this.f6733u0;
        if (screenStackHeaderConfig.getLegacyTopInsetBehavior() || !screenStackHeaderConfig.getConsumeTopInset() || this.A0) {
            return;
        }
        Context context = getContext();
        ThemedReactContext themedReactContext = context instanceof ThemedReactContext ? (ThemedReactContext) context : null;
        if (themedReactContext == null || (currentActivity = themedReactContext.getCurrentActivity()) == null) {
            return;
        }
        View decorView = currentActivity.getWindow().getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
        Intrinsics.checkNotNullParameter(decorView, "decorView");
        WeakHashMap weakHashMap = s0.a;
        WindowInsetsCompat a = androidx.core.view.k0.a(decorView);
        int i5 = a == null ? 0 : a.a.f(647).f1512b;
        if (i5 > 0) {
            int paddingLeft = getPaddingLeft();
            int paddingRight = getPaddingRight();
            int paddingBottom = getPaddingBottom();
            this.f6737y0 = this.f6734v0;
            setPadding(paddingLeft, i5, paddingRight, paddingBottom);
        }
    }

    @Override // androidx.appcompat.widget.Toolbar, android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.A0 = false;
        Insets NONE = Insets.f1511e;
        Intrinsics.checkNotNullExpressionValue(NONE, "NONE");
        this.f6736x0 = NONE;
        w();
    }

    @Override // androidx.appcompat.widget.Toolbar, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        this.f6733u0.c(this, z5 || this.f6737y0);
        this.f6737y0 = false;
    }

    @Override // android.view.View, android.view.ViewParent
    public final void requestLayout() {
        c cVar;
        Window window;
        WindowManager.LayoutParams attributes;
        super.requestLayout();
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.uimanager.ThemedReactContext");
        Activity currentActivity = ((ThemedReactContext) context).getCurrentActivity();
        Integer valueOf = (currentActivity == null || (window = currentActivity.getWindow()) == null || (attributes = window.getAttributes()) == null) ? null : Integer.valueOf(attributes.softInputMode);
        if (Build.VERSION.SDK_INT > 29 || valueOf == null || valueOf.intValue() != 32 || this.f6738z0 || (cVar = this.B0) == null) {
            return;
        }
        this.f6738z0 = true;
        ReactChoreographer.INSTANCE.getInstance().postFrameCallback(ReactChoreographer.CallbackType.NATIVE_ANIMATED_MODULE, cVar);
    }

    public final void w() {
        if (getPaddingTop() == 0 && getPaddingBottom() == 0 && getPaddingLeft() == 0 && getPaddingRight() == 0) {
            return;
        }
        this.f6737y0 = this.f6734v0;
        setPadding(0, 0, 0, 0);
    }
}
