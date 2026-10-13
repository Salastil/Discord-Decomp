package com.swmansion.rnscreens;

import android.view.ViewParent;
import androidx.core.view.WindowInsetsCompat;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.view.ReactViewGroup;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class ScreenFooter extends ReactViewGroup {
    public static final /* synthetic */ int E = 0;

    /* renamed from: d, reason: collision with root package name */
    public final ReactContext f6699d;

    /* renamed from: e, reason: collision with root package name */
    public int f6700e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f6701i;

    /* renamed from: v, reason: collision with root package name */
    public float f6702v;

    /* renamed from: w, reason: collision with root package name */
    public int f6703w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f6704x;

    /* renamed from: y, reason: collision with root package name */
    public final r f6705y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ScreenFooter(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f6699d = reactContext;
        this.f6705y = new r(0, this);
    }

    private final boolean getHasReceivedInitialLayoutFromParent() {
        return this.f6700e > 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final int getReactHeight() {
        return getMeasuredHeight();
    }

    private final int getReactWidth() {
        return getMeasuredWidth();
    }

    private final Screen getScreenParent() {
        ViewParent parent = getParent();
        if (parent instanceof Screen) {
            return (Screen) parent;
        }
        return null;
    }

    private final BottomSheetBehavior<Screen> getSheetBehavior() {
        Screen screenParent = getScreenParent();
        if (screenParent != null) {
            return screenParent.getSheetBehavior();
        }
        throw new IllegalArgumentException("Required value was null.");
    }

    public final void d(WindowInsetsCompat insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        int i5 = insets.a.f(8).f1514d;
        Screen screenParent = getScreenParent();
        this.f6703w = (int) (i5 + (screenParent != null ? screenParent.getTranslationY() : 0.0f));
        e(this.f6700e, getReactHeight(), i(this.f6702v), this.f6703w);
    }

    public final void e(int i5, int i6, int i10, int i11) {
        int max = ((i5 - i6) - i10) - Math.max(i11, 0);
        int reactHeight = getReactHeight();
        setTop(Math.max(max, 0));
        setBottom(getTop() + reactHeight);
    }

    public final void f(int i5) {
        this.f6700e = i5;
        int reactHeight = getReactHeight();
        BottomSheetBehavior<Screen> sheetBehavior = getSheetBehavior();
        if (sheetBehavior == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        e(i5, reactHeight, h(sheetBehavior.N), 0);
    }

    public final void g(BottomSheetBehavior behavior) {
        Intrinsics.checkNotNullParameter(behavior, "behavior");
        if (this.f6704x) {
            return;
        }
        behavior.w(this.f6705y);
        this.f6704x = true;
    }

    @NotNull
    public final ReactContext getReactContext() {
        return this.f6699d;
    }

    public final int h(int i5) {
        BottomSheetBehavior<Screen> sheetBehavior = getSheetBehavior();
        if (sheetBehavior == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        if (i5 == 3) {
            return sheetBehavior.F();
        }
        if (i5 == 4) {
            return this.f6700e - (sheetBehavior.f5961f ? -1 : sheetBehavior.f5959e);
        }
        if (i5 == 5) {
            return this.f6700e;
        }
        if (i5 == 6) {
            return (int) ((1 - sheetBehavior.F) * this.f6700e);
        }
        throw new IllegalArgumentException("[RNScreens] use of stable-state method for unstable state");
    }

    public final int i(float f2) {
        Screen screenParent = getScreenParent();
        return screenParent != null ? screenParent.getTop() : (int) tn.g.q(h(4), h(3), f2);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        BottomSheetBehavior<Screen> sheetBehavior = getSheetBehavior();
        if (sheetBehavior != null) {
            g(sheetBehavior);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        BottomSheetBehavior<Screen> behavior = getSheetBehavior();
        if (behavior != null) {
            Intrinsics.checkNotNullParameter(behavior, "behavior");
            if (this.f6704x) {
                behavior.I(this.f6705y);
                this.f6704x = false;
            }
        }
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (getHasReceivedInitialLayoutFromParent()) {
            int i12 = this.f6700e;
            int i13 = i11 - i6;
            BottomSheetBehavior<Screen> sheetBehavior = getSheetBehavior();
            if (sheetBehavior == null) {
                throw new IllegalArgumentException("Required value was null.");
            }
            e(i12, i13, h(sheetBehavior.N), this.f6703w);
        }
    }
}
