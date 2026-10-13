package com.swmansion.rnscreens;

import android.animation.ValueAnimator;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.util.Log;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.webkit.WebView;
import android.widget.ImageView;
import androidx.core.view.v0;
import androidx.core.view.w0;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.s0;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import com.swmansion.rnscreens.bottomsheet.SheetDetents;
import java.util.Iterator;
import kotlin.Lazy;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public class Screen extends g implements p, qm.a {

    @NotNull
    public static final Companion Companion = new Companion();

    @NotNull
    public static final String TAG = "Screen";
    private ActivityState activityState;
    private ScreenContainer container;
    private ScreenFooter footer;
    private ScreenFragmentWrapper fragmentWrapper;
    private volatile boolean isBeingRemoved;
    private boolean isGestureEnabled;
    private Boolean isNavigationBarHidden;
    private boolean isRemovalTransitionStarted;
    private boolean isSheetGrabberVisible;
    private Boolean isStatusBarAnimated;
    private Boolean isStatusBarHidden;
    private boolean isTransitioning;
    private boolean nativeBackButtonDismissalEnabled;

    @NotNull
    private final ThemedReactContext reactContext;

    @NotNull
    private ReplaceAnimation replaceAnimation;
    private String screenId;
    private Integer screenOrientation;

    @NotNull
    private final Lazy sheetAnimationCoordinator$delegate;
    private boolean sheetClosesOnTouchOutside;
    private float sheetCornerRadius;
    private boolean sheetDefaultResizeAnimationEnabled;

    @NotNull
    private SheetDetents sheetDetents;
    private float sheetElevation;
    private boolean sheetExpandsWhenScrolledToEdge;
    private int sheetInitialDetentIndex;
    private int sheetLargestUndimmedDetentIndex;
    private boolean sheetShouldOverflowTopInset;
    private boolean shouldTriggerPostponedTransitionAfterLayout;
    private boolean shouldUpdateSheetCornerRadius;

    @NotNull
    private StackAnimation stackAnimation;

    @NotNull
    private StackPresentation stackPresentation;
    private String statusBarStyle;

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    public static final class ActivityState {

        /* renamed from: d, reason: collision with root package name */
        public static final ActivityState f6678d;

        /* renamed from: e, reason: collision with root package name */
        public static final ActivityState f6679e;

        /* renamed from: i, reason: collision with root package name */
        public static final ActivityState f6680i;

        /* renamed from: v, reason: collision with root package name */
        public static final /* synthetic */ ActivityState[] f6681v;

        static {
            ActivityState activityState = new ActivityState("INACTIVE", 0);
            f6678d = activityState;
            ActivityState activityState2 = new ActivityState("TRANSITIONING_OR_BELOW_TOP", 1);
            f6679e = activityState2;
            ActivityState activityState3 = new ActivityState("ON_TOP", 2);
            f6680i = activityState3;
            ActivityState[] activityStateArr = {activityState, activityState2, activityState3};
            f6681v = activityStateArr;
            ki.b.p(activityStateArr);
        }

        public static ActivityState valueOf(String str) {
            return (ActivityState) Enum.valueOf(ActivityState.class, str);
        }

        public static ActivityState[] values() {
            return (ActivityState[]) f6681v.clone();
        }
    }

    public static final class Companion {
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    public static final class ReplaceAnimation {

        /* renamed from: d, reason: collision with root package name */
        public static final ReplaceAnimation f6682d;

        /* renamed from: e, reason: collision with root package name */
        public static final ReplaceAnimation f6683e;

        /* renamed from: i, reason: collision with root package name */
        public static final /* synthetic */ ReplaceAnimation[] f6684i;

        static {
            ReplaceAnimation replaceAnimation = new ReplaceAnimation("PUSH", 0);
            f6682d = replaceAnimation;
            ReplaceAnimation replaceAnimation2 = new ReplaceAnimation("POP", 1);
            f6683e = replaceAnimation2;
            ReplaceAnimation[] replaceAnimationArr = {replaceAnimation, replaceAnimation2};
            f6684i = replaceAnimationArr;
            ki.b.p(replaceAnimationArr);
        }

        public static ReplaceAnimation valueOf(String str) {
            return (ReplaceAnimation) Enum.valueOf(ReplaceAnimation.class, str);
        }

        public static ReplaceAnimation[] values() {
            return (ReplaceAnimation[]) f6684i.clone();
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    public static final class StackAnimation {
        public static final StackAnimation E;
        public static final StackAnimation F;
        public static final /* synthetic */ StackAnimation[] G;

        /* renamed from: d, reason: collision with root package name */
        public static final StackAnimation f6685d;

        /* renamed from: e, reason: collision with root package name */
        public static final StackAnimation f6686e;

        /* renamed from: i, reason: collision with root package name */
        public static final StackAnimation f6687i;

        /* renamed from: v, reason: collision with root package name */
        public static final StackAnimation f6688v;

        /* renamed from: w, reason: collision with root package name */
        public static final StackAnimation f6689w;

        /* renamed from: x, reason: collision with root package name */
        public static final StackAnimation f6690x;

        /* renamed from: y, reason: collision with root package name */
        public static final StackAnimation f6691y;

        static {
            StackAnimation stackAnimation = new StackAnimation("DEFAULT", 0);
            f6685d = stackAnimation;
            StackAnimation stackAnimation2 = new StackAnimation("NONE", 1);
            f6686e = stackAnimation2;
            StackAnimation stackAnimation3 = new StackAnimation("FADE", 2);
            f6687i = stackAnimation3;
            StackAnimation stackAnimation4 = new StackAnimation("SLIDE_FROM_BOTTOM", 3);
            f6688v = stackAnimation4;
            StackAnimation stackAnimation5 = new StackAnimation("SLIDE_FROM_RIGHT", 4);
            f6689w = stackAnimation5;
            StackAnimation stackAnimation6 = new StackAnimation("SLIDE_FROM_LEFT", 5);
            f6690x = stackAnimation6;
            StackAnimation stackAnimation7 = new StackAnimation("FADE_FROM_BOTTOM", 6);
            f6691y = stackAnimation7;
            StackAnimation stackAnimation8 = new StackAnimation("IOS_FROM_RIGHT", 7);
            E = stackAnimation8;
            StackAnimation stackAnimation9 = new StackAnimation("IOS_FROM_LEFT", 8);
            F = stackAnimation9;
            StackAnimation[] stackAnimationArr = {stackAnimation, stackAnimation2, stackAnimation3, stackAnimation4, stackAnimation5, stackAnimation6, stackAnimation7, stackAnimation8, stackAnimation9};
            G = stackAnimationArr;
            ki.b.p(stackAnimationArr);
        }

        public static StackAnimation valueOf(String str) {
            return (StackAnimation) Enum.valueOf(StackAnimation.class, str);
        }

        public static StackAnimation[] values() {
            return (StackAnimation[]) G.clone();
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    public static final class StackPresentation {

        /* renamed from: d, reason: collision with root package name */
        public static final StackPresentation f6692d;

        /* renamed from: e, reason: collision with root package name */
        public static final StackPresentation f6693e;

        /* renamed from: i, reason: collision with root package name */
        public static final StackPresentation f6694i;

        /* renamed from: v, reason: collision with root package name */
        public static final StackPresentation f6695v;

        /* renamed from: w, reason: collision with root package name */
        public static final /* synthetic */ StackPresentation[] f6696w;

        static {
            StackPresentation stackPresentation = new StackPresentation("PUSH", 0);
            f6692d = stackPresentation;
            StackPresentation stackPresentation2 = new StackPresentation("MODAL", 1);
            f6693e = stackPresentation2;
            StackPresentation stackPresentation3 = new StackPresentation("TRANSPARENT_MODAL", 2);
            f6694i = stackPresentation3;
            StackPresentation stackPresentation4 = new StackPresentation("FORM_SHEET", 3);
            f6695v = stackPresentation4;
            StackPresentation[] stackPresentationArr = {stackPresentation, stackPresentation2, stackPresentation3, stackPresentation4};
            f6696w = stackPresentationArr;
            ki.b.p(stackPresentationArr);
        }

        public static StackPresentation valueOf(String str) {
            return (StackPresentation) Enum.valueOf(StackPresentation.class, str);
        }

        public static StackPresentation[] values() {
            return (StackPresentation[]) f6696w.clone();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public Screen(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
        this.sheetAnimationCoordinator$delegate = fo.l.a(new s0(27, this));
        this.stackPresentation = StackPresentation.f6692d;
        this.replaceAnimation = ReplaceAnimation.f6683e;
        this.stackAnimation = StackAnimation.f6685d;
        this.isGestureEnabled = true;
        this.sheetExpandsWhenScrolledToEdge = true;
        this.sheetDetents = new SheetDetents(kotlin.collections.b0.c(Double.valueOf(1.0d)));
        this.sheetLargestUndimmedDetentIndex = -1;
        this.sheetClosesOnTouchOutside = true;
        this.sheetElevation = 24.0f;
        this.sheetDefaultResizeAnimationEnabled = true;
        setLayoutParams(new WindowManager.LayoutParams(2));
        this.nativeBackButtonDismissalEnabled = true;
    }

    public static void a(ViewGroup viewGroup) {
        Iterator it = new v0(viewGroup).iterator();
        while (true) {
            w0 w0Var = (w0) it;
            if (!w0Var.hasNext()) {
                return;
            }
            View view = (View) w0Var.next();
            viewGroup.endViewTransition(view);
            if (view instanceof ScreenStackHeaderConfig) {
                a(((ScreenStackHeaderConfig) view).getToolbar());
            }
            if (view instanceof ViewGroup) {
                a((ViewGroup) view);
            }
        }
    }

    public static boolean b(ViewGroup viewGroup) {
        int childCount = viewGroup.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = viewGroup.getChildAt(i5);
            if (childAt instanceof WebView) {
                return true;
            }
            if ((childAt instanceof ViewGroup) && b((ViewGroup) childAt)) {
                return true;
            }
        }
        return false;
    }

    public final void changeAccessibilityMode(int i5) {
        d toolbar;
        setImportantForAccessibility(i5);
        ScreenStackHeaderConfig headerConfig = getHeaderConfig();
        if (headerConfig == null || (toolbar = headerConfig.getToolbar()) == null) {
            return;
        }
        toolbar.setImportantForAccessibility(i5);
    }

    public final void changeFocusability$react_native_screens_release(int i5, int i6) {
        d toolbar;
        d toolbar2;
        setFocusable(i5);
        ScreenStackHeaderConfig headerConfig = getHeaderConfig();
        if (headerConfig != null && (toolbar2 = headerConfig.getToolbar()) != null) {
            toolbar2.setFocusable(i5);
        }
        setDescendantFocusability(i6);
        ScreenStackHeaderConfig headerConfig2 = getHeaderConfig();
        if (headerConfig2 == null || (toolbar = headerConfig2.getToolbar()) == null) {
            return;
        }
        toolbar.setDescendantFocusability(i6);
    }

    public final void changeFocusabilityCompat$react_native_screens_release(boolean z5, int i5) {
        d toolbar;
        d toolbar2;
        setFocusable(z5);
        ScreenStackHeaderConfig headerConfig = getHeaderConfig();
        if (headerConfig != null && (toolbar2 = headerConfig.getToolbar()) != null) {
            toolbar2.setFocusable(z5);
        }
        setDescendantFocusability(i5);
        ScreenStackHeaderConfig headerConfig2 = getHeaderConfig();
        if (headerConfig2 == null || (toolbar = headerConfig2.getToolbar()) == null) {
            return;
        }
        toolbar.setDescendantFocusability(i5);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchRestoreInstanceState(@NotNull SparseArray<Parcelable> container) {
        Intrinsics.checkNotNullParameter(container, "container");
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchSaveInstanceState(@NotNull SparseArray<Parcelable> container) {
        Intrinsics.checkNotNullParameter(container, "container");
    }

    public void endRemovalTransition() {
        if (this.isRemovalTransitionStarted) {
            this.isRemovalTransitionStarted = false;
            this.isBeingRemoved = false;
            a(this);
        }
    }

    public final ActivityState getActivityState() {
        return this.activityState;
    }

    @Override // qm.a
    public Fragment getAssociatedFragment() {
        return getFragment();
    }

    public final ScreenContainer getContainer() {
        return this.container;
    }

    public final ScreenContentWrapper getContentWrapper() {
        Object obj;
        Iterator it = new v0(this).iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (((View) obj) instanceof ScreenContentWrapper) {
                break;
            }
        }
        if (obj instanceof ScreenContentWrapper) {
            return (ScreenContentWrapper) obj;
        }
        return null;
    }

    public final ScreenFooter getFooter() {
        return this.footer;
    }

    public final Fragment getFragment() {
        ScreenFragmentWrapper screenFragmentWrapper = this.fragmentWrapper;
        if (screenFragmentWrapper != null) {
            return screenFragmentWrapper.g();
        }
        return null;
    }

    public final ScreenFragmentWrapper getFragmentWrapper() {
        return this.fragmentWrapper;
    }

    public final ScreenStackHeaderConfig getHeaderConfig() {
        Object obj;
        Iterator it = new v0(this).iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (((View) obj) instanceof ScreenStackHeaderConfig) {
                break;
            }
        }
        if (obj instanceof ScreenStackHeaderConfig) {
            return (ScreenStackHeaderConfig) obj;
        }
        return null;
    }

    public final boolean getNativeBackButtonDismissalEnabled() {
        return this.nativeBackButtonDismissalEnabled;
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.reactContext;
    }

    public final EventDispatcher getReactEventDispatcher() {
        return UIManagerHelper.getEventDispatcherForReactTag(this.reactContext, getId());
    }

    @NotNull
    public final ReplaceAnimation getReplaceAnimation() {
        return this.replaceAnimation;
    }

    public final String getScreenId() {
        return this.screenId;
    }

    public final Integer getScreenOrientation() {
        return this.screenOrientation;
    }

    @NotNull
    public final SheetAnimationCoordinator getSheetAnimationCoordinator$react_native_screens_release() {
        return (SheetAnimationCoordinator) this.sheetAnimationCoordinator$delegate.getValue();
    }

    public final BottomSheetBehavior<Screen> getSheetBehavior() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        v0.d dVar = layoutParams instanceof v0.d ? (v0.d) layoutParams : null;
        v0.b bVar = dVar != null ? dVar.a : null;
        if (bVar instanceof BottomSheetBehavior) {
            return (BottomSheetBehavior) bVar;
        }
        return null;
    }

    public final boolean getSheetClosesOnTouchOutside() {
        return this.sheetClosesOnTouchOutside;
    }

    public final float getSheetCornerRadius() {
        return this.sheetCornerRadius;
    }

    public final boolean getSheetDefaultResizeAnimationEnabled() {
        return this.sheetDefaultResizeAnimationEnabled;
    }

    @NotNull
    public final SheetDetents getSheetDetents() {
        return this.sheetDetents;
    }

    public final float getSheetElevation() {
        return this.sheetElevation;
    }

    public final boolean getSheetExpandsWhenScrolledToEdge() {
        return this.sheetExpandsWhenScrolledToEdge;
    }

    public final int getSheetInitialDetentIndex() {
        return this.sheetInitialDetentIndex;
    }

    public final int getSheetLargestUndimmedDetentIndex() {
        return this.sheetLargestUndimmedDetentIndex;
    }

    public final boolean getSheetShouldOverflowTopInset() {
        return this.sheetShouldOverflowTopInset;
    }

    public final boolean getShouldTriggerPostponedTransitionAfterLayout() {
        return this.shouldTriggerPostponedTransitionAfterLayout;
    }

    @NotNull
    public final StackAnimation getStackAnimation() {
        return this.stackAnimation;
    }

    @NotNull
    public final StackPresentation getStackPresentation() {
        return this.stackPresentation;
    }

    public final String getStatusBarStyle() {
        return this.statusBarStyle;
    }

    public final boolean isBeingRemoved() {
        return this.isBeingRemoved;
    }

    public final boolean isGestureEnabled() {
        return this.isGestureEnabled;
    }

    public final Boolean isNavigationBarHidden() {
        return this.isNavigationBarHidden;
    }

    public final boolean isSheetGrabberVisible() {
        return this.isSheetGrabberVisible;
    }

    public final Boolean isStatusBarAnimated() {
        return this.isStatusBarAnimated;
    }

    public final Boolean isStatusBarHidden() {
        return this.isStatusBarHidden;
    }

    public final boolean isTranslucent() {
        int ordinal = this.stackPresentation.ordinal();
        return ordinal == 2 || ordinal == 3;
    }

    public final void markAsBeingRemoved() {
        this.isBeingRemoved = true;
    }

    public final void notifyHeaderHeightChange$react_native_screens_release(int i5) {
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        ReactContext reactContext = (ReactContext) context;
        int surfaceId = UIManagerHelper.getSurfaceId(reactContext);
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(reactContext, getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new nl.d(surfaceId, getId(), a5.k0.P(this, i5)));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        Fragment fragment;
        super.onAttachedToWindow();
        if (!nm.l.c(this) || (fragment = getFragment()) == null) {
            return;
        }
        Intrinsics.checkNotNullParameter(fragment, "<this>");
        nm.k listener = ((b0) fragment).P;
        if (listener != null) {
            h hVar = h.f6758d;
            Intrinsics.checkNotNullParameter(listener, "listener");
            h.f6759e.add(listener);
        }
    }

    public final void onBottomSheetBehaviorDidLayout$react_native_screens_release(boolean z5) {
        if (nm.l.c(this) && (this.container instanceof ScreenStack)) {
            if (nm.l.a(this)) {
                requestLayout();
            }
            if (z5) {
                updateState(getWidth(), getHeight(), getTop() + ((int) getTranslationY()));
            }
            ScreenFooter screenFooter = this.footer;
            if (screenFooter != null) {
                getLeft();
                getTop();
                getRight();
                getBottom();
                ScreenContainer screenContainer = this.container;
                Intrinsics.checkNotNull(screenContainer);
                screenFooter.f(screenContainer.getHeight());
            }
        }
    }

    @Override // com.swmansion.rnscreens.p
    public void onContentWrapperLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12 = i11 - i6;
        BottomSheetBehavior<Screen> behavior = getSheetBehavior();
        if (nm.l.c(this) && nm.l.a(this) && behavior != null) {
            Intrinsics.checkNotNullParameter(behavior, "<this>");
            int i13 = behavior.f5968l;
            boolean z6 = i13 == 0;
            if (i13 != i12) {
                if (z6) {
                    a5.k0.W(behavior, Integer.valueOf(i12), true, null);
                    requestLayout();
                    return;
                }
                if (!this.sheetDefaultResizeAnimationEnabled) {
                    int b10 = nm.l.b(this, i12, getTranslationY());
                    Intrinsics.checkNotNullParameter(behavior, "<this>");
                    behavior.f5968l = b10;
                    layout(getLeft(), getBottom() - b10, getRight(), getBottom());
                    getParent().requestLayout();
                    updateState(getWidth(), b10, getTop() + ((int) getTranslationY()));
                    return;
                }
                SheetAnimationCoordinator sheetAnimationCoordinator$react_native_screens_release = getSheetAnimationCoordinator$react_native_screens_release();
                sheetAnimationCoordinator$react_native_screens_release.getClass();
                Intrinsics.checkNotNullParameter(behavior, "behavior");
                float translationY = sheetAnimationCoordinator$react_native_screens_release.b().getTranslationY();
                int b11 = nm.l.b(sheetAnimationCoordinator$react_native_screens_release.b(), i13, translationY);
                int b12 = nm.l.b(sheetAnimationCoordinator$react_native_screens_release.b(), i12, translationY);
                if (sheetAnimationCoordinator$react_native_screens_release.f6723c || sheetAnimationCoordinator$react_native_screens_release.f6722b > 0) {
                    Intrinsics.checkNotNullParameter(behavior, "<this>");
                    behavior.f5968l = b12;
                    SheetAnimationCoordinator.c(sheetAnimationCoordinator$react_native_screens_release.b(), b12);
                    Screen b13 = sheetAnimationCoordinator$react_native_screens_release.b();
                    b13.getParent().requestLayout();
                    b13.onSheetYTranslationChanged$react_native_screens_release();
                    return;
                }
                float f2 = b12 - b11;
                if (f2 == 0.0f) {
                    return;
                }
                int i14 = 2;
                if (f2 <= 0.0f) {
                    float f10 = translationY - f2;
                    ValueAnimator valueAnimator = sheetAnimationCoordinator$react_native_screens_release.f6724d;
                    if (valueAnimator != null) {
                        valueAnimator.removeAllListeners();
                    }
                    ValueAnimator valueAnimator2 = sheetAnimationCoordinator$react_native_screens_release.f6724d;
                    if (valueAnimator2 != null) {
                        valueAnimator2.removeAllUpdateListeners();
                    }
                    ValueAnimator valueAnimator3 = sheetAnimationCoordinator$react_native_screens_release.f6724d;
                    if (valueAnimator3 != null) {
                        valueAnimator3.cancel();
                    }
                    sheetAnimationCoordinator$react_native_screens_release.f6724d = null;
                    ValueAnimator ofFloat = ValueAnimator.ofFloat(translationY, f10);
                    ofFloat.addListener(new nm.g(behavior, b12, sheetAnimationCoordinator$react_native_screens_release, translationY));
                    ofFloat.addUpdateListener(new nm.e(sheetAnimationCoordinator$react_native_screens_release, 3));
                    ofFloat.start();
                    sheetAnimationCoordinator$react_native_screens_release.f6724d = ofFloat;
                    return;
                }
                Screen b14 = sheetAnimationCoordinator$react_native_screens_release.b();
                b14.setTranslationY(b14.getTranslationY() + f2);
                ValueAnimator valueAnimator4 = sheetAnimationCoordinator$react_native_screens_release.f6724d;
                if (valueAnimator4 != null) {
                    valueAnimator4.removeAllListeners();
                }
                ValueAnimator valueAnimator5 = sheetAnimationCoordinator$react_native_screens_release.f6724d;
                if (valueAnimator5 != null) {
                    valueAnimator5.removeAllUpdateListeners();
                }
                ValueAnimator valueAnimator6 = sheetAnimationCoordinator$react_native_screens_release.f6724d;
                if (valueAnimator6 != null) {
                    valueAnimator6.cancel();
                }
                sheetAnimationCoordinator$react_native_screens_release.f6724d = null;
                ValueAnimator ofFloat2 = ValueAnimator.ofFloat(sheetAnimationCoordinator$react_native_screens_release.b().getTranslationY(), translationY);
                ofFloat2.addListener(new nm.f(behavior, b12, sheetAnimationCoordinator$react_native_screens_release));
                ofFloat2.addUpdateListener(new nm.e(sheetAnimationCoordinator$react_native_screens_release, i14));
                ofFloat2.start();
                sheetAnimationCoordinator$react_native_screens_release.f6724d = ofFloat2;
            }
        }
    }

    public final void onFinalizePropsUpdate$react_native_screens_release() {
        if (this.shouldUpdateSheetCornerRadius) {
            this.shouldUpdateSheetCornerRadius = false;
            onSheetCornerRadiusChange$react_native_screens_release();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        if (z5 && (this.container instanceof ScreenStack) && !nm.l.c(this)) {
            updateState(i10 - i5, i11 - i6, i6);
        }
    }

    public final void onSheetCornerRadiusChange$react_native_screens_release() {
        if (this.stackPresentation != StackPresentation.f6695v || getBackground() == null) {
            return;
        }
        Drawable background = getBackground();
        lh.i iVar = background instanceof lh.i ? (lh.i) background : null;
        if (iVar != null) {
            float max = Math.max(PixelUtil.toDIPFromPixel(this.sheetCornerRadius), 0.0f);
            lh.k kVar = new lh.k();
            lh.k kVar2 = new lh.k();
            lh.a aVar = new lh.a(0.0f);
            lh.a aVar2 = new lh.a(0.0f);
            lh.f fVar = new lh.f(0);
            lh.f fVar2 = new lh.f(0);
            lh.f fVar3 = new lh.f(0);
            lh.f fVar4 = new lh.f(0);
            io.sentry.config.a f2 = jb.a.f(0);
            lh.a aVar3 = new lh.a(max);
            io.sentry.config.a f10 = jb.a.f(0);
            lh.a aVar4 = new lh.a(max);
            lh.m mVar = new lh.m();
            mVar.a = f2;
            mVar.f14016b = f10;
            mVar.f14017c = kVar;
            mVar.f14018d = kVar2;
            mVar.f14019e = aVar3;
            mVar.f14020f = aVar4;
            mVar.f14021g = aVar;
            mVar.f14022h = aVar2;
            mVar.f14023i = fVar;
            mVar.j = fVar2;
            mVar.k = fVar3;
            mVar.f14024l = fVar4;
            iVar.setShapeAppearanceModel(mVar);
        }
    }

    public final void onSheetDetentChanged$react_native_screens_release(int i5, boolean z5) {
        int surfaceId = UIManagerHelper.getSurfaceId(this.reactContext);
        EventDispatcher reactEventDispatcher = getReactEventDispatcher();
        if (reactEventDispatcher != null) {
            reactEventDispatcher.dispatchEvent(new om.e(surfaceId, getId(), i5, z5));
        }
        if (z5) {
            onSheetYTranslationChanged$react_native_screens_release();
        }
        ScreenContainer screenContainer = this.container;
        if (!(screenContainer == null ? true : screenContainer instanceof ScreenStack)) {
            throw new IllegalStateException("[RNScreens] Expected native stack screen.");
        }
        ScreenStack screenStack = (ScreenStack) screenContainer;
        if (screenStack != null) {
            screenStack.updateA11yForVisibleScreens$react_native_screens_release();
        }
    }

    public final void onSheetYTranslationChanged$react_native_screens_release() {
        updateState(getWidth(), getHeight(), getTop() + ((int) getTranslationY()));
    }

    @Override // android.view.View
    @SuppressLint({"ClickableViewAccessibility"})
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (nm.l.c(this)) {
            return true;
        }
        return super.onTouchEvent(motionEvent);
    }

    public final void registerLayoutCallbackForWrapper(@NotNull ScreenContentWrapper wrapper) {
        Intrinsics.checkNotNullParameter(wrapper, "wrapper");
        wrapper.setDelegate$react_native_screens_release(this);
    }

    public final void requestTriggeringPostponedEnterTransition$react_native_screens_release() {
        if (this.sheetShouldOverflowTopInset) {
            return;
        }
        this.shouldTriggerPostponedTransitionAfterLayout = true;
    }

    public final void setActivityState(@NotNull ActivityState activityState) {
        Intrinsics.checkNotNullParameter(activityState, "activityState");
        ActivityState activityState2 = this.activityState;
        if (activityState == activityState2) {
            return;
        }
        if ((this.container instanceof ScreenStack) && activityState2 != null) {
            Intrinsics.checkNotNull(activityState2);
            if (activityState.compareTo(activityState2) < 0) {
                throw new IllegalStateException("[RNScreens] activityState can only progress in NativeStack");
            }
        }
        this.activityState = activityState;
        ScreenContainer screenContainer = this.container;
        if (screenContainer != null) {
            screenContainer.onChildUpdate();
        }
        if (activityState == ActivityState.f6680i) {
            String str = this.screenId;
            try {
                JankScreenContext jankScreenContext = w3.q.f19671c;
                if (jankScreenContext != null) {
                    jankScreenContext.onScreenBecameTopMost(str);
                }
            } catch (Exception e9) {
                Log.e("ScreenTransitionNotifier", "listener.onScreenBecameTopMost threw", e9);
            }
        }
    }

    public final void setBeingRemoved(boolean z5) {
        this.isBeingRemoved = z5;
    }

    public final void setContainer(ScreenContainer screenContainer) {
        this.container = screenContainer;
    }

    public final void setFooter(ScreenFooter screenFooter) {
        BottomSheetBehavior<Screen> sheetBehavior;
        if (screenFooter == null && this.footer != null) {
            BottomSheetBehavior<Screen> behavior = getSheetBehavior();
            if (behavior != null) {
                ScreenFooter screenFooter2 = this.footer;
                Intrinsics.checkNotNull(screenFooter2);
                screenFooter2.getClass();
                Intrinsics.checkNotNullParameter(behavior, "behavior");
                if (screenFooter2.f6704x) {
                    behavior.I(screenFooter2.f6705y);
                    screenFooter2.f6704x = false;
                }
            }
        } else if (screenFooter != null && (sheetBehavior = getSheetBehavior()) != null) {
            screenFooter.g(sheetBehavior);
        }
        this.footer = screenFooter;
    }

    public final void setFragmentWrapper(ScreenFragmentWrapper screenFragmentWrapper) {
        this.fragmentWrapper = screenFragmentWrapper;
    }

    public final void setGestureEnabled(boolean z5) {
        this.isGestureEnabled = z5;
    }

    @Override // android.view.View
    public void setLayerType(int i5, Paint paint) {
    }

    public final void setNativeBackButtonDismissalEnabled(boolean z5) {
        this.nativeBackButtonDismissalEnabled = z5;
    }

    public final void setNavigationBarHidden(Boolean bool) {
        if (bool != null) {
            ys.d.f21098c = true;
        }
        this.isNavigationBarHidden = bool;
        ScreenFragmentWrapper screenFragmentWrapper = this.fragmentWrapper;
        if (screenFragmentWrapper != null) {
            ys.d.c0(this, screenFragmentWrapper.e());
        }
    }

    public final void setReplaceAnimation(@NotNull ReplaceAnimation replaceAnimation) {
        Intrinsics.checkNotNullParameter(replaceAnimation, "<set-?>");
        this.replaceAnimation = replaceAnimation;
    }

    public final void setScreenId(String str) {
        this.screenId = str;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x002f, code lost:
    
        if (r4.equals("portrait_up") == false) goto L33;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void setScreenOrientation(String str) {
        Integer screenOrientation;
        if (str == null) {
            this.screenOrientation = null;
            return;
        }
        int i5 = 1;
        ys.d.a = true;
        int i6 = -1;
        switch (str.hashCode()) {
            case -1894896954:
                if (str.equals("portrait_down")) {
                    i5 = 9;
                    break;
                }
                i5 = -1;
                break;
            case 96673:
                if (str.equals("all")) {
                    i5 = 10;
                    break;
                }
                i5 = -1;
                break;
            case 729267099:
                if (str.equals("portrait")) {
                    i5 = 7;
                    break;
                }
                i5 = -1;
                break;
            case 1430647483:
                if (str.equals("landscape")) {
                    i5 = 6;
                    break;
                }
                i5 = -1;
                break;
            case 1651658175:
                break;
            case 1730732811:
                if (str.equals("landscape_left")) {
                    i5 = 8;
                    break;
                }
                i5 = -1;
                break;
            case 2118770584:
                if (str.equals("landscape_right")) {
                    i5 = 0;
                    break;
                }
                i5 = -1;
                break;
            default:
                i5 = -1;
                break;
        }
        this.screenOrientation = Integer.valueOf(i5);
        ScreenFragmentWrapper screenFragmentWrapper = this.fragmentWrapper;
        if (screenFragmentWrapper != null) {
            Activity e9 = screenFragmentWrapper.e();
            Intrinsics.checkNotNullParameter(this, "screen");
            if (e9 == null) {
                return;
            }
            Screen H = ys.d.H(this, n.f6771d);
            if (H != null && (screenOrientation = H.getScreenOrientation()) != null) {
                i6 = screenOrientation.intValue();
            }
            e9.setRequestedOrientation(i6);
        }
    }

    public final void setSheetClosesOnTouchOutside(boolean z5) {
        this.sheetClosesOnTouchOutside = z5;
    }

    public final void setSheetCornerRadius(float f2) {
        if (this.sheetCornerRadius == f2) {
            return;
        }
        this.sheetCornerRadius = f2;
        this.shouldUpdateSheetCornerRadius = true;
    }

    public final void setSheetDefaultResizeAnimationEnabled(boolean z5) {
        this.sheetDefaultResizeAnimationEnabled = z5;
    }

    public final void setSheetDetents(@NotNull SheetDetents sheetDetents) {
        Intrinsics.checkNotNullParameter(sheetDetents, "<set-?>");
        this.sheetDetents = sheetDetents;
    }

    public final void setSheetElevation(float f2) {
        this.sheetElevation = f2;
    }

    public final void setSheetExpandsWhenScrolledToEdge(boolean z5) {
        this.sheetExpandsWhenScrolledToEdge = z5;
    }

    public final void setSheetGrabberVisible(boolean z5) {
        this.isSheetGrabberVisible = z5;
    }

    public final void setSheetInitialDetentIndex(int i5) {
        this.sheetInitialDetentIndex = i5;
    }

    public final void setSheetLargestUndimmedDetentIndex(int i5) {
        this.sheetLargestUndimmedDetentIndex = i5;
    }

    public final void setSheetShouldOverflowTopInset(boolean z5) {
        this.sheetShouldOverflowTopInset = z5;
    }

    public final void setShouldTriggerPostponedTransitionAfterLayout(boolean z5) {
        this.shouldTriggerPostponedTransitionAfterLayout = z5;
    }

    public final void setStackAnimation(@NotNull StackAnimation stackAnimation) {
        Intrinsics.checkNotNullParameter(stackAnimation, "<set-?>");
        this.stackAnimation = stackAnimation;
    }

    public final void setStackPresentation(@NotNull StackPresentation stackPresentation) {
        Intrinsics.checkNotNullParameter(stackPresentation, "<set-?>");
        this.stackPresentation = stackPresentation;
    }

    public final void setStatusBarAnimated(Boolean bool) {
        this.isStatusBarAnimated = bool;
    }

    public final void setStatusBarHidden(Boolean bool) {
        if (bool != null) {
            ys.d.f21097b = true;
        }
        this.isStatusBarHidden = bool;
        ScreenFragmentWrapper screenFragmentWrapper = this.fragmentWrapper;
        if (screenFragmentWrapper != null) {
            ys.d.b0(this, screenFragmentWrapper.e());
        }
    }

    public final void setStatusBarStyle(String str) {
        if (str != null) {
            ys.d.f21097b = true;
        }
        this.statusBarStyle = str;
        ScreenFragmentWrapper screenFragmentWrapper = this.fragmentWrapper;
        if (screenFragmentWrapper != null) {
            ys.d.d0(this, screenFragmentWrapper.e(), screenFragmentWrapper.i());
        }
    }

    public final void setTransitioning(boolean z5) {
        if (this.isTransitioning == z5) {
            return;
        }
        this.isTransitioning = z5;
        boolean b10 = b(this);
        if (!b10 || getLayerType() == 2) {
            super.setLayerType((!z5 || b10) ? 0 : 2, null);
        }
    }

    public void startRemovalTransition() {
        this.isBeingRemoved = true;
        if (this.isRemovalTransitionStarted) {
            return;
        }
        this.isRemovalTransitionStarted = true;
        startTransitionRecursive(this);
    }

    public final void startTransitionRecursive(ViewGroup viewGroup) {
        if (viewGroup != null) {
            int childCount = viewGroup.getChildCount();
            for (int i5 = 0; i5 < childCount; i5++) {
                View childAt = viewGroup.getChildAt(i5);
                if ((viewGroup instanceof androidx.swiperefreshlayout.widget.i) && (childAt instanceof ImageView)) {
                    viewGroup.addView(new View(getContext()), i5);
                } else if (childAt != null) {
                    viewGroup.startViewTransition(childAt);
                }
                if (childAt instanceof ScreenStackHeaderConfig) {
                    startTransitionRecursive(((ScreenStackHeaderConfig) childAt).getToolbar());
                }
                if (childAt instanceof ViewGroup) {
                    startTransitionRecursive((ViewGroup) childAt);
                }
            }
        }
    }

    public final void triggerPostponedEnterTransitionIfNeeded$react_native_screens_release() {
        if (this.shouldTriggerPostponedTransitionAfterLayout) {
            this.shouldTriggerPostponedTransitionAfterLayout = false;
            Fragment fragment = getFragment();
            if (fragment != null) {
                fragment.startPostponedEnterTransition();
            }
        }
    }
}
