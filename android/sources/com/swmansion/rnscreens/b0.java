package com.swmansion.rnscreens;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.res.ColorStateList;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import android.view.animation.Animation;
import androidx.appcompat.app.ActionBar;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.s0;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import com.facebook.react.uimanager.BackgroundStyleApplicator;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.google.android.material.appbar.AppBarLayout$ScrollingViewBehavior;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import com.swmansion.rnscreens.stack.views.ScreensCoordinatorLayout;
import java.util.ArrayList;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u00012\u00020\u0002B\t\b\u0016¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/swmansion/rnscreens/b0;", "Lcom/swmansion/rnscreens/v;", "Lcom/swmansion/rnscreens/ScreenStackFragmentWrapper;", "<init>", "()V", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nScreenStackFragment.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ScreenStackFragment.kt\ncom/swmansion/rnscreens/ScreenStackFragment\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,636:1\n1#2:637\n*E\n"})
/* loaded from: classes3.dex */
public final class b0 extends v implements ScreenStackFragmentWrapper {
    public ng.g E;
    public d F;
    public boolean G;
    public boolean H;
    public ScreenStackHeaderConfig I;
    public nm.a J;
    public View K;
    public b L;
    public com.facebook.react.runtime.r M;
    public ScreensCoordinatorLayout N;
    public nm.d O;
    public nm.k P;
    public i.m Q;
    public WindowInsetsCompat R;
    public ScreenContainer S;
    public com.discord.chat.presentation.root.a T;
    public z U;

    public b0() {
        throw new IllegalStateException("ScreenStack fragments should never be restored. Follow instructions from https://github.com/software-mansion/react-native-screens/issues/17#issuecomment-424704067 to properly configure your main activity.");
    }

    public final nm.d A(boolean z5) {
        nm.d dVar = this.O;
        if (dVar == null || z5) {
            if (dVar != null) {
                BottomSheetBehavior<Screen> sheetBehavior = a().getSheetBehavior();
                nm.c cVar = dVar.f15560c;
                if (cVar != null && sheetBehavior != null) {
                    sheetBehavior.I(cVar);
                }
            }
            this.O = new nm.d(a().getReactContext(), a());
        }
        nm.d dVar2 = this.O;
        Intrinsics.checkNotNull(dVar2);
        return dVar2;
    }

    public final nm.k B() {
        if (this.P == null) {
            this.P = new nm.k(a());
        }
        nm.k kVar = this.P;
        Intrinsics.checkNotNull(kVar);
        return kVar;
    }

    public final void C(Menu menu) {
        menu.clear();
        ScreenStackHeaderConfig headerConfig = a().getHeaderConfig();
        int configSubviewsCount = headerConfig != null ? headerConfig.getConfigSubviewsCount() : 0;
        if (headerConfig == null || configSubviewsCount <= 0) {
            return;
        }
        for (int i5 = 0; i5 < configSubviewsCount; i5++) {
            Object obj = headerConfig.f6718y.get(i5);
            Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
            if (((g0) obj).getType() == f0.f6753w) {
                Context context = getContext();
                if (this.L == null && context != null) {
                    b bVar = new b(context, this);
                    this.L = bVar;
                    com.facebook.react.runtime.r rVar = this.M;
                    if (rVar != null) {
                        rVar.invoke(bVar);
                    }
                }
                MenuItem add = menu.add("");
                add.setShowAsAction(2);
                add.setActionView(this.L);
                return;
            }
        }
    }

    @Override // com.swmansion.rnscreens.v, com.swmansion.rnscreens.ScreenFragmentWrapper
    public final boolean b() {
        return a().isTranslucent();
    }

    @Override // com.swmansion.rnscreens.v, com.swmansion.rnscreens.ScreenFragmentWrapper
    public final void m() {
        super.m();
        ScreenStackHeaderConfig headerConfig = a().getHeaderConfig();
        if (headerConfig != null) {
            headerConfig.d();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public final Animation onCreateAnimation(int i5, boolean z5, int i6) {
        return null;
    }

    @Override // androidx.fragment.app.Fragment
    public final Animator onCreateAnimator(int i5, boolean z5, int i6) {
        ScreensCoordinatorLayout screensCoordinatorLayout = null;
        if (!nm.l.c(a())) {
            return null;
        }
        int i10 = 7;
        int i11 = 1;
        int i12 = 0;
        if (!z5) {
            nm.k B = B();
            nm.d A = A(false);
            Screen a = a();
            ScreensCoordinatorLayout screensCoordinatorLayout2 = this.N;
            if (screensCoordinatorLayout2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
            } else {
                screensCoordinatorLayout = screensCoordinatorLayout2;
            }
            nm.i sheetAnimationContext = new nm.i(this, a, screensCoordinatorLayout, A);
            B.getClass();
            Intrinsics.checkNotNullParameter(sheetAnimationContext, "sheetAnimationContext");
            SheetAnimationCoordinator sheetAnimationCoordinator$react_native_screens_release = B.f15571d.getSheetAnimationCoordinator$react_native_screens_release();
            sheetAnimationCoordinator$react_native_screens_release.getClass();
            Intrinsics.checkNotNullParameter(sheetAnimationContext, "sheetAnimationContext");
            AnimatorSet animatorSet = new AnimatorSet();
            ValueAnimator ofFloat = ValueAnimator.ofFloat(A.a.getAlpha(), 0.0f);
            ofFloat.addUpdateListener(new am.c(i10, A));
            Intrinsics.checkNotNullExpressionValue(ofFloat, "apply(...)");
            ValueAnimator ofFloat2 = ValueAnimator.ofFloat(0.0f, (screensCoordinatorLayout.getBottom() - sheetAnimationCoordinator$react_native_screens_release.b().getTop()) - sheetAnimationCoordinator$react_native_screens_release.b().getTranslationY());
            ofFloat2.addUpdateListener(new nm.e(sheetAnimationCoordinator$react_native_screens_release, i11));
            Intrinsics.checkNotNullExpressionValue(ofFloat2, "apply(...)");
            animatorSet.play(ofFloat).with(ofFloat2);
            sheetAnimationCoordinator$react_native_screens_release.a(animatorSet, false, this);
            return animatorSet;
        }
        nm.k B2 = B();
        nm.d A2 = A(false);
        Screen a10 = a();
        ScreensCoordinatorLayout screensCoordinatorLayout3 = this.N;
        if (screensCoordinatorLayout3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
            screensCoordinatorLayout3 = null;
        }
        nm.i sheetAnimationContext2 = new nm.i(this, a10, screensCoordinatorLayout3, A2);
        B2.getClass();
        Intrinsics.checkNotNullParameter(sheetAnimationContext2, "sheetAnimationContext");
        SheetAnimationCoordinator sheetAnimationCoordinator$react_native_screens_release2 = B2.f15571d.getSheetAnimationCoordinator$react_native_screens_release();
        sheetAnimationCoordinator$react_native_screens_release2.getClass();
        Intrinsics.checkNotNullParameter(sheetAnimationContext2, "sheetAnimationContext");
        AnimatorSet animatorSet2 = new AnimatorSet();
        ValueAnimator ofFloat3 = ValueAnimator.ofFloat(0.0f, A2.f15559b);
        ofFloat3.addUpdateListener(new am.c(i10, A2));
        Intrinsics.checkNotNullExpressionValue(ofFloat3, "apply(...)");
        ValueAnimator ofObject = ValueAnimator.ofObject(new pn.a(new com.facebook.react.runtime.r(8, sheetAnimationCoordinator$react_native_screens_release2), new kr.n(i10)), Float.valueOf(sheetAnimationCoordinator$react_native_screens_release2.b().getHeight()), Float.valueOf(0.0f));
        ofObject.addUpdateListener(new nm.e(sheetAnimationCoordinator$react_native_screens_release2, i12));
        Intrinsics.checkNotNullExpressionValue(ofObject, "apply(...)");
        AnimatorSet.Builder play = animatorSet2.play(ofObject);
        Screen screen = sheetAnimationCoordinator$react_native_screens_release2.b();
        int sheetInitialDetentIndex = sheetAnimationCoordinator$react_native_screens_release2.b().getSheetInitialDetentIndex();
        Intrinsics.checkNotNullParameter(screen, "screen");
        AnimatorSet.Builder builder = sheetInitialDetentIndex > screen.getSheetLargestUndimmedDetentIndex() ? play : null;
        if (builder != null) {
            builder.with(ofFloat3);
        }
        sheetAnimationCoordinator$react_native_screens_release2.a(animatorSet2, true, this);
        return animatorSet2;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onCreateOptionsMenu(Menu menu, MenuInflater inflater) {
        Intrinsics.checkNotNullParameter(menu, "menu");
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        C(menu);
        super.onCreateOptionsMenu(menu, inflater);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v15, types: [android.view.View$OnApplyWindowInsetsListener, com.swmansion.rnscreens.z] */
    @Override // com.swmansion.rnscreens.v, androidx.fragment.app.Fragment
    public final View onCreateView(LayoutInflater inflater, ViewGroup viewGroup, Bundle bundle) {
        Integer valueOf;
        ColorStateList colorStateList;
        ng.g gVar;
        ng.g gVar2;
        ng.g gVar3;
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        Context requireContext = requireContext();
        Intrinsics.checkNotNullExpressionValue(requireContext, "requireContext(...)");
        this.N = new ScreensCoordinatorLayout(requireContext, this);
        Screen a = a();
        v0.d dVar = new v0.d(-1, -1);
        dVar.b(nm.l.c(a()) ? new BottomSheetBehavior() : this.H ? null : new AppBarLayout$ScrollingViewBehavior());
        a.setLayoutParams(dVar);
        ScreensCoordinatorLayout screensCoordinatorLayout = this.N;
        if (screensCoordinatorLayout == null) {
            Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
            screensCoordinatorLayout = null;
        }
        Screen a10 = a();
        w3.q.w(a10);
        screensCoordinatorLayout.addView(a10);
        int i5 = 0;
        if (nm.l.c(a())) {
            a().setClipToOutline(true);
            Screen a11 = a();
            float max = Math.max(PixelUtil.toPixelFromDIP(a11.getSheetCornerRadius()), 0.0f);
            lh.k kVar = new lh.k();
            lh.k kVar2 = new lh.k();
            lh.a aVar = new lh.a(0.0f);
            lh.a aVar2 = new lh.a(0.0f);
            lh.f fVar = new lh.f(i5);
            lh.f fVar2 = new lh.f(i5);
            lh.f fVar3 = new lh.f(i5);
            lh.f fVar4 = new lh.f(i5);
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
            Intrinsics.checkNotNullExpressionValue(mVar, "build(...)");
            lh.i iVar = new lh.i(mVar);
            Drawable background = a11.getBackground();
            ColorDrawable colorDrawable = background instanceof ColorDrawable ? (ColorDrawable) background : null;
            if (colorDrawable != null) {
                valueOf = Integer.valueOf(colorDrawable.getColor());
            } else {
                Drawable background2 = a11.getBackground();
                lh.i iVar2 = background2 instanceof lh.i ? (lh.i) background2 : null;
                valueOf = (iVar2 == null || (colorStateList = iVar2.f14001e.f13987f) == null) ? null : Integer.valueOf(colorStateList.getDefaultColor());
            }
            if (valueOf == null) {
                ScreenContentWrapper contentWrapper = a11.getContentWrapper();
                if (contentWrapper == null) {
                    valueOf = null;
                } else {
                    Intrinsics.checkNotNullParameter(contentWrapper, "<this>");
                    valueOf = BackgroundStyleApplicator.getBackgroundColor(contentWrapper);
                }
            }
            iVar.setTint(valueOf != null ? valueOf.intValue() : 0);
            a11.setBackground(iVar);
            a().setElevation(a().getSheetElevation());
            nm.k B = B();
            BottomSheetBehavior<Screen> sheetBehavior = a().getSheetBehavior();
            Intrinsics.checkNotNull(sheetBehavior);
            nm.k.b(B, sheetBehavior, null, 6);
            nm.d A = A(true);
            Screen screen = a();
            ScreensCoordinatorLayout root = this.N;
            if (root == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                root = null;
            }
            A.getClass();
            float f11 = A.f15559b;
            nm.b bVar = A.a;
            Intrinsics.checkNotNullParameter(screen, "screen");
            Intrinsics.checkNotNullParameter(root, "root");
            root.addView(bVar, 0);
            int sheetInitialDetentIndex = screen.getSheetInitialDetentIndex();
            Intrinsics.checkNotNullParameter(screen, "screen");
            if (sheetInitialDetentIndex > screen.getSheetLargestUndimmedDetentIndex()) {
                bVar.setAlpha(f11);
            } else {
                bVar.setAlpha(0.0f);
            }
            Screen screen2 = a();
            BottomSheetBehavior<Screen> behavior = a().getSheetBehavior();
            Intrinsics.checkNotNull(behavior);
            Intrinsics.checkNotNullParameter(screen2, "screen");
            Intrinsics.checkNotNullParameter(behavior, "behavior");
            nm.c cVar = new nm.c(screen2, bVar, f11);
            A.f15560c = cVar;
            Intrinsics.checkNotNull(cVar);
            behavior.w(cVar);
            if (!a().getSheetShouldOverflowTopInset()) {
                nm.a aVar5 = new nm.a();
                this.J = aVar5;
                final ScreenContainer container = a().getContainer();
                if (container != 0) {
                    this.S = container;
                    int i6 = 3;
                    if (Build.VERSION.SDK_INT >= 30) {
                        ?? r7 = new View.OnApplyWindowInsetsListener() { // from class: com.swmansion.rnscreens.z
                            @Override // android.view.View.OnApplyWindowInsetsListener
                            public final WindowInsets onApplyWindowInsets(View view, WindowInsets insets) {
                                Intrinsics.checkNotNullParameter(view, "<unused var>");
                                Intrinsics.checkNotNullParameter(insets, "insets");
                                WindowInsetsCompat g6 = WindowInsetsCompat.g(ScreenContainer.this, insets);
                                Intrinsics.checkNotNullExpressionValue(g6, "toWindowInsetsCompat(...)");
                                this.z(g6);
                                return insets;
                            }
                        };
                        this.U = r7;
                        container.setOnApplyWindowInsetsListener(r7);
                    } else {
                        if (this.Q == null) {
                            this.Q = new i.m();
                        }
                        i.m mVar2 = this.Q;
                        Intrinsics.checkNotNull(mVar2);
                        bm.b listener = new bm.b(i6, this);
                        mVar2.getClass();
                        Intrinsics.checkNotNullParameter(listener, "listener");
                        ((ArrayList) mVar2.f10348e).add(listener);
                    }
                    com.discord.chat.presentation.root.a aVar6 = new com.discord.chat.presentation.root.a(i6, aVar5, this);
                    this.T = aVar6;
                    container.addOnLayoutChangeListener(aVar6);
                }
            }
            ScreenContainer container2 = a().getContainer();
            Intrinsics.checkNotNull(container2);
            ScreensCoordinatorLayout screensCoordinatorLayout2 = this.N;
            if (screensCoordinatorLayout2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                screensCoordinatorLayout2 = null;
            }
            screensCoordinatorLayout2.measure(View.MeasureSpec.makeMeasureSpec(container2.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(container2.getHeight(), 1073741824));
            ScreensCoordinatorLayout screensCoordinatorLayout3 = this.N;
            if (screensCoordinatorLayout3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                screensCoordinatorLayout3 = null;
            }
            screensCoordinatorLayout3.layout(0, 0, container2.getWidth(), container2.getHeight());
            if (Build.VERSION.SDK_INT < 30) {
                if (this.Q == null) {
                    this.Q = new i.m();
                }
                i.m mVar3 = this.Q;
                Intrinsics.checkNotNull(mVar3);
                bm.b listener2 = new bm.b(2, B);
                mVar3.getClass();
                Intrinsics.checkNotNullParameter(listener2, "listener");
                ((ArrayList) mVar3.f10348e).add(listener2);
                Screen a12 = a();
                WeakHashMap weakHashMap = s0.a;
                androidx.core.view.j0.m(a12, mVar3);
            }
            s0.r(a(), new a0(B, this));
        } else {
            Context context = getContext();
            if (context != null) {
                gVar = new ng.g(context);
                gVar.setBackgroundColor(0);
                gVar.setLayoutParams(new ng.e(-2));
            } else {
                gVar = null;
            }
            this.E = gVar;
            ScreensCoordinatorLayout screensCoordinatorLayout4 = this.N;
            if (screensCoordinatorLayout4 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                screensCoordinatorLayout4 = null;
            }
            screensCoordinatorLayout4.addView(this.E);
            if (this.G && (gVar3 = this.E) != null) {
                gVar3.setTargetElevation(0.0f);
            }
            d dVar2 = this.F;
            if (dVar2 != null && (gVar2 = this.E) != null) {
                w3.q.w(dVar2);
                gVar2.addView(dVar2);
            }
            setHasOptionsMenu(true);
        }
        ScreensCoordinatorLayout screensCoordinatorLayout5 = this.N;
        if (screensCoordinatorLayout5 != null) {
            return screensCoordinatorLayout5;
        }
        Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
        return null;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onDestroyView() {
        ScreenStackHeaderConfig screenStackHeaderConfig = this.I;
        if (screenStackHeaderConfig != null) {
            FragmentActivity activity = getActivity();
            i.h hVar = activity instanceof i.h ? (i.h) activity : null;
            ActionBar actionBar = screenStackHeaderConfig.W;
            if (actionBar != null && hVar != null && hVar.getSupportActionBar() == actionBar) {
                hVar.setSupportActionBar(null);
            }
            screenStackHeaderConfig.W = null;
        }
        this.I = null;
        ScreenContainer screenContainer = this.S;
        if (screenContainer != null) {
            com.discord.chat.presentation.root.a aVar = this.T;
            if (aVar != null) {
                screenContainer.removeOnLayoutChangeListener(aVar);
            }
            if (this.U != null) {
                screenContainer.setOnApplyWindowInsetsListener(null);
            }
        }
        this.S = null;
        this.T = null;
        this.U = null;
        super.onDestroyView();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onPrepareOptionsMenu(Menu menu) {
        ScreenStackHeaderConfig headerConfig;
        Intrinsics.checkNotNullParameter(menu, "menu");
        if (!a().isTranslucent() || ((headerConfig = a().getHeaderConfig()) != null && !headerConfig.F)) {
            C(menu);
        }
        super.onPrepareOptionsMenu(menu);
    }

    @Override // androidx.fragment.app.Fragment
    public final void onStart() {
        View view = this.K;
        if (view != null) {
            view.requestFocus();
        }
        super.onStart();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onStop() {
        PackageManager packageManager;
        Context context = getContext();
        if (context != null && (packageManager = context.getPackageManager()) != null && packageManager.hasSystemFeature("android.software.leanback")) {
            View a = a();
            while (true) {
                if (a == null) {
                    a = null;
                    break;
                } else if (a.isFocused()) {
                    break;
                } else {
                    a = a instanceof ViewGroup ? ((ViewGroup) a).getFocusedChild() : null;
                }
            }
            this.K = a;
        }
        super.onStop();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onViewCreated(View view, Bundle bundle) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onViewCreated(view, bundle);
    }

    public final boolean x() {
        ScreenContainer container = a().getContainer();
        if (!(container instanceof ScreenStack)) {
            throw new IllegalStateException("ScreenStackFragment added into a non-stack container");
        }
        if (!Intrinsics.areEqual(((ScreenStack) container).getRootScreen(), a())) {
            return true;
        }
        Fragment parentFragment = getParentFragment();
        if (parentFragment instanceof b0) {
            return ((b0) parentFragment).x();
        }
        return false;
    }

    public final void y() {
        if (isRemoving() && isDetached()) {
            return;
        }
        ThemedReactContext reactContext = a().getReactContext();
        int surfaceId = UIManagerHelper.getSurfaceId(reactContext);
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(reactContext, a().getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, a().getId(), 6));
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0053, code lost:
    
        if (r3.getWidth() <= 0) goto L18;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void z(WindowInsetsCompat windowInsetsCompat) {
        Integer valueOf;
        if (Intrinsics.areEqual(this.R, windowInsetsCompat)) {
            return;
        }
        this.R = windowInsetsCompat;
        nm.k B = B();
        BottomSheetBehavior<Screen> behavior = a().getSheetBehavior();
        Intrinsics.checkNotNull(behavior);
        Screen screen = B.f15571d;
        Intrinsics.checkNotNullParameter(behavior, "behavior");
        Integer g6 = B.g();
        if (g6 == null) {
            throw new IllegalStateException("[RNScreens] Failed to find window height during bottom sheet behaviour configuration");
        }
        boolean a = nm.l.a(screen);
        nm.a aVar = null;
        if (a) {
            ScreenContentWrapper contentWrapper = screen.getContentWrapper();
            if (contentWrapper != null) {
                valueOf = Integer.valueOf(contentWrapper.getHeight());
                Intrinsics.checkNotNullParameter(contentWrapper, "<this>");
                if (!contentWrapper.isLaidOut()) {
                    if (contentWrapper.getHeight() <= 0) {
                    }
                }
            }
            valueOf = null;
        } else {
            if (a) {
                throw new fo.n();
            }
            valueOf = Integer.valueOf((int) (((Number) CollectionsKt.Q(screen.getSheetDetents().a)).doubleValue() * g6.intValue()));
        }
        Integer valueOf2 = screen.getSheetDetents().a.size() == 3 ? Integer.valueOf(screen.getSheetDetents().a(g6.intValue(), B.f15574v, screen.getSheetShouldOverflowTopInset())) : null;
        Intrinsics.checkNotNullParameter(behavior, "<this>");
        if (valueOf != null) {
            behavior.f5968l = valueOf.intValue();
        }
        if (valueOf2 != null) {
            behavior.K(valueOf2.intValue());
        }
        ScreenContainer container = a().getContainer();
        if (container != null) {
            ScreensCoordinatorLayout screensCoordinatorLayout = this.N;
            if (screensCoordinatorLayout == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                screensCoordinatorLayout = null;
            }
            screensCoordinatorLayout.forceLayout();
            ScreensCoordinatorLayout screensCoordinatorLayout2 = this.N;
            if (screensCoordinatorLayout2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                screensCoordinatorLayout2 = null;
            }
            screensCoordinatorLayout2.measure(View.MeasureSpec.makeMeasureSpec(container.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(container.getHeight(), 1073741824));
            ScreensCoordinatorLayout screensCoordinatorLayout3 = this.N;
            if (screensCoordinatorLayout3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
                screensCoordinatorLayout3 = null;
            }
            screensCoordinatorLayout3.layout(0, 0, container.getWidth(), container.getHeight());
        }
        a().onBottomSheetBehaviorDidLayout$react_native_screens_release(true);
        nm.a aVar2 = this.J;
        if (aVar2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("sheetTransitionCoordinator");
        } else {
            aVar = aVar2;
        }
        Screen screen2 = a();
        aVar.getClass();
        Intrinsics.checkNotNullParameter(screen2, "screen");
        aVar.f15552b = true;
        if (aVar.a) {
            screen2.requestTriggeringPostponedEnterTransition$react_native_screens_release();
            screen2.triggerPostponedEnterTransitionIfNeeded$react_native_screens_release();
        }
    }
}
